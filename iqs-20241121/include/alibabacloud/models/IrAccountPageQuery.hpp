// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IRACCOUNTPAGEQUERY_HPP_
#define ALIBABACLOUD_MODELS_IRACCOUNTPAGEQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class IrAccountPageQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IrAccountPageQuery& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, IrAccountPageQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    IrAccountPageQuery() = default ;
    IrAccountPageQuery(const IrAccountPageQuery &) = default ;
    IrAccountPageQuery(IrAccountPageQuery &&) = default ;
    IrAccountPageQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IrAccountPageQuery() = default ;
    IrAccountPageQuery& operator=(const IrAccountPageQuery &) = default ;
    IrAccountPageQuery& operator=(IrAccountPageQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IrAccountPageQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
