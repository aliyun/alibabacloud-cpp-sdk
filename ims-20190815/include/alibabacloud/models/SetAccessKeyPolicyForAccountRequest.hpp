// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETACCESSKEYPOLICYFORACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETACCESSKEYPOLICYFORACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetAccessKeyPolicyForAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAccessKeyPolicyForAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyPolicy, accessKeyPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, SetAccessKeyPolicyForAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyPolicy, accessKeyPolicy_);
    };
    SetAccessKeyPolicyForAccountRequest() = default ;
    SetAccessKeyPolicyForAccountRequest(const SetAccessKeyPolicyForAccountRequest &) = default ;
    SetAccessKeyPolicyForAccountRequest(SetAccessKeyPolicyForAccountRequest &&) = default ;
    SetAccessKeyPolicyForAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAccessKeyPolicyForAccountRequest() = default ;
    SetAccessKeyPolicyForAccountRequest& operator=(const SetAccessKeyPolicyForAccountRequest &) = default ;
    SetAccessKeyPolicyForAccountRequest& operator=(SetAccessKeyPolicyForAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyPolicy_ == nullptr; };
    // accessKeyPolicy Field Functions 
    bool hasAccessKeyPolicy() const { return this->accessKeyPolicy_ != nullptr;};
    void deleteAccessKeyPolicy() { this->accessKeyPolicy_ = nullptr;};
    inline string getAccessKeyPolicy() const { DARABONBA_PTR_GET_DEFAULT(accessKeyPolicy_, "") };
    inline SetAccessKeyPolicyForAccountRequest& setAccessKeyPolicy(string accessKeyPolicy) { DARABONBA_PTR_SET_VALUE(accessKeyPolicy_, accessKeyPolicy) };


  protected:
    // The network access restriction policy. The value is a JSON-formatted string. For more information, see the AccessKeyPolicy structure description in the SetAccessKeyPolicy documentation.
    // 
    // This parameter is required.
    shared_ptr<string> accessKeyPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
