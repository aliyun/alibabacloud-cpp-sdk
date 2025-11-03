// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVECLIENTFROMBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVECLIENTFROMBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class RemoveClientFromBlackListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveClientFromBlackListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveClientFromBlackListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RemoveClientFromBlackListRequest() = default ;
    RemoveClientFromBlackListRequest(const RemoveClientFromBlackListRequest &) = default ;
    RemoveClientFromBlackListRequest(RemoveClientFromBlackListRequest &&) = default ;
    RemoveClientFromBlackListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveClientFromBlackListRequest() = default ;
    RemoveClientFromBlackListRequest& operator=(const RemoveClientFromBlackListRequest &) = default ;
    RemoveClientFromBlackListRequest& operator=(RemoveClientFromBlackListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIP_ == nullptr
        && return this->clientToken_ == nullptr && return this->fileSystemId_ == nullptr && return this->regionId_ == nullptr; };
    // clientIP Field Functions 
    bool hasClientIP() const { return this->clientIP_ != nullptr;};
    void deleteClientIP() { this->clientIP_ = nullptr;};
    inline string clientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
    inline RemoveClientFromBlackListRequest& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveClientFromBlackListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline RemoveClientFromBlackListRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveClientFromBlackListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IP address of a client to remove from the blacklist.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientIP_ = nullptr;
    // This parameter ensures the idempotency of each request. A ClientToken is generated for each client. Make sure that each ClientToken is unique between different requests. The parameter can be a maximum of 64 characters in length and contain only ASCII characters.
    // 
    // For more information, see [How to ensure idempotence](https://www.alibabacloud.com/help/doc-detail/25693.htm).
    // 
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The ID of the region where the file system resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
