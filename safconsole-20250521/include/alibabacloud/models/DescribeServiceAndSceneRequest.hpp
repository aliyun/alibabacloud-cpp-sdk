// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEANDSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEANDSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DescribeServiceAndSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceAndSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(CustomerModuleId, customerModuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceAndSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(CustomerModuleId, customerModuleId_);
    };
    DescribeServiceAndSceneRequest() = default ;
    DescribeServiceAndSceneRequest(const DescribeServiceAndSceneRequest &) = default ;
    DescribeServiceAndSceneRequest(DescribeServiceAndSceneRequest &&) = default ;
    DescribeServiceAndSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceAndSceneRequest() = default ;
    DescribeServiceAndSceneRequest& operator=(const DescribeServiceAndSceneRequest &) = default ;
    DescribeServiceAndSceneRequest& operator=(DescribeServiceAndSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr
        && this->customerModuleId_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeServiceAndSceneRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // customerModuleId Field Functions 
    bool hasCustomerModuleId() const { return this->customerModuleId_ != nullptr;};
    void deleteCustomerModuleId() { this->customerModuleId_ = nullptr;};
    inline int32_t getCustomerModuleId() const { DARABONBA_PTR_GET_DEFAULT(customerModuleId_, 0) };
    inline DescribeServiceAndSceneRequest& setCustomerModuleId(int32_t customerModuleId) { DARABONBA_PTR_SET_VALUE(customerModuleId_, customerModuleId) };


  protected:
    // Authorization type.
    shared_ptr<string> authType_ {};
    // Customer model ID
    shared_ptr<int32_t> customerModuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
