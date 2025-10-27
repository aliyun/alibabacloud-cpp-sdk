// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETDETAILBYUUIDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETDETAILBYUUIDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetDetailByUuidsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetDetailByUuidsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetDetailByUuidsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeAssetDetailByUuidsRequest() = default ;
    DescribeAssetDetailByUuidsRequest(const DescribeAssetDetailByUuidsRequest &) = default ;
    DescribeAssetDetailByUuidsRequest(DescribeAssetDetailByUuidsRequest &&) = default ;
    DescribeAssetDetailByUuidsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetDetailByUuidsRequest() = default ;
    DescribeAssetDetailByUuidsRequest& operator=(const DescribeAssetDetailByUuidsRequest &) = default ;
    DescribeAssetDetailByUuidsRequest& operator=(DescribeAssetDetailByUuidsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->resourceDirectoryAccountId_ == nullptr && return this->uuids_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAssetDetailByUuidsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeAssetDetailByUuidsRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeAssetDetailByUuidsRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to query the IDs of Alibaba Cloud accounts.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // The UUIDs of the instances. Separate multiple UUIDs with commas (,).
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
