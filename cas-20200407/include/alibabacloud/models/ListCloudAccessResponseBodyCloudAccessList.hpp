// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDACCESSRESPONSEBODYCLOUDACCESSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDACCESSRESPONSEBODYCLOUDACCESSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCloudAccessResponseBodyCloudAccessList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAccessResponseBodyCloudAccessList& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(CloudName, cloudName_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAccessResponseBodyCloudAccessList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(CloudName, cloudName_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
    };
    ListCloudAccessResponseBodyCloudAccessList() = default ;
    ListCloudAccessResponseBodyCloudAccessList(const ListCloudAccessResponseBodyCloudAccessList &) = default ;
    ListCloudAccessResponseBodyCloudAccessList(ListCloudAccessResponseBodyCloudAccessList &&) = default ;
    ListCloudAccessResponseBodyCloudAccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAccessResponseBodyCloudAccessList() = default ;
    ListCloudAccessResponseBodyCloudAccessList& operator=(const ListCloudAccessResponseBodyCloudAccessList &) = default ;
    ListCloudAccessResponseBodyCloudAccessList& operator=(ListCloudAccessResponseBodyCloudAccessList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && return this->cloudName_ == nullptr && return this->secretId_ == nullptr && return this->serviceStatus_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline int64_t accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, 0L) };
    inline ListCloudAccessResponseBodyCloudAccessList& setAccessId(int64_t accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // cloudName Field Functions 
    bool hasCloudName() const { return this->cloudName_ != nullptr;};
    void deleteCloudName() { this->cloudName_ = nullptr;};
    inline string cloudName() const { DARABONBA_PTR_GET_DEFAULT(cloudName_, "") };
    inline ListCloudAccessResponseBodyCloudAccessList& setCloudName(string cloudName) { DARABONBA_PTR_SET_VALUE(cloudName_, cloudName) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline ListCloudAccessResponseBodyCloudAccessList& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline ListCloudAccessResponseBodyCloudAccessList& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


  protected:
    // The ID of the primary key.
    std::shared_ptr<int64_t> accessId_ = nullptr;
    // The cloud service provider.
    std::shared_ptr<string> cloudName_ = nullptr;
    // The AccessKey ID that is used to access cloud resources.
    std::shared_ptr<string> secretId_ = nullptr;
    // The service status. The value normal indicates that the service runs as expected.
    std::shared_ptr<string> serviceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
