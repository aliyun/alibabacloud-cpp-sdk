// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIVISIONQUERY_HPP_
#define ALIBABACLOUD_MODELS_DIVISIONQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class DivisionQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DivisionQuery& obj) { 
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
    };
    friend void from_json(const Darabonba::Json& j, DivisionQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
    };
    DivisionQuery() = default ;
    DivisionQuery(const DivisionQuery &) = default ;
    DivisionQuery(DivisionQuery &&) = default ;
    DivisionQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DivisionQuery() = default ;
    DivisionQuery& operator=(const DivisionQuery &) = default ;
    DivisionQuery& operator=(DivisionQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->divisionCode_ == nullptr; };
    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline string getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, "") };
    inline DivisionQuery& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


  protected:
    // divisionCode
    // 
    // This parameter is required.
    shared_ptr<string> divisionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
