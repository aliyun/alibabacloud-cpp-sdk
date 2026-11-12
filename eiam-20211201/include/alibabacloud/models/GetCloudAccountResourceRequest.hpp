// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDACCOUNTRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDACCOUNTRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetCloudAccountResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAccountResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(CloudAccountResourceId, cloudAccountResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAccountResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(CloudAccountResourceId, cloudAccountResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetCloudAccountResourceRequest() = default ;
    GetCloudAccountResourceRequest(const GetCloudAccountResourceRequest &) = default ;
    GetCloudAccountResourceRequest(GetCloudAccountResourceRequest &&) = default ;
    GetCloudAccountResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAccountResourceRequest() = default ;
    GetCloudAccountResourceRequest& operator=(const GetCloudAccountResourceRequest &) = default ;
    GetCloudAccountResourceRequest& operator=(GetCloudAccountResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAccountId_ == nullptr
        && this->cloudAccountResourceId_ == nullptr && this->instanceId_ == nullptr; };
    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline GetCloudAccountResourceRequest& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // cloudAccountResourceId Field Functions 
    bool hasCloudAccountResourceId() const { return this->cloudAccountResourceId_ != nullptr;};
    void deleteCloudAccountResourceId() { this->cloudAccountResourceId_ = nullptr;};
    inline string getCloudAccountResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceId_, "") };
    inline GetCloudAccountResourceRequest& setCloudAccountResourceId(string cloudAccountResourceId) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceId_, cloudAccountResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCloudAccountResourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The cloud account ID.
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountId_ {};
    // The cloud account resource ID.
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountResourceId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
