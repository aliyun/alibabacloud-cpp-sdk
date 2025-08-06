// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLSHEETSRESPONSEBODYVALUE_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLSHEETSRESPONSEBODYVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultiDimTableAllSheetsResponseBodyValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableAllSheetsResponseBodyValue& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableAllSheetsResponseBodyValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetMultiDimTableAllSheetsResponseBodyValue() = default ;
    GetMultiDimTableAllSheetsResponseBodyValue(const GetMultiDimTableAllSheetsResponseBodyValue &) = default ;
    GetMultiDimTableAllSheetsResponseBodyValue(GetMultiDimTableAllSheetsResponseBodyValue &&) = default ;
    GetMultiDimTableAllSheetsResponseBodyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableAllSheetsResponseBodyValue() = default ;
    GetMultiDimTableAllSheetsResponseBodyValue& operator=(const GetMultiDimTableAllSheetsResponseBodyValue &) = default ;
    GetMultiDimTableAllSheetsResponseBodyValue& operator=(GetMultiDimTableAllSheetsResponseBodyValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetMultiDimTableAllSheetsResponseBodyValue& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMultiDimTableAllSheetsResponseBodyValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
