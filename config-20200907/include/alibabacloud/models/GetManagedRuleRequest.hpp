// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetManagedRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
    };
    GetManagedRuleRequest() = default ;
    GetManagedRuleRequest(const GetManagedRuleRequest &) = default ;
    GetManagedRuleRequest(GetManagedRuleRequest &&) = default ;
    GetManagedRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedRuleRequest() = default ;
    GetManagedRuleRequest& operator=(const GetManagedRuleRequest &) = default ;
    GetManagedRuleRequest& operator=(GetManagedRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetManagedRuleRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    // The identifier of the managed rule.
    // 
    // For more information about how to obtain the identifier of a managed rule, see [ListManagedRules](https://help.aliyun.com/document_detail/421144.html).
    // 
    // This parameter is required.
    shared_ptr<string> identifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
