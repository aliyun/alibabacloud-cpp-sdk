// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTICSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTICSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateAgenticSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgenticSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Azone, azone_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgenticSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Azone, azone_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
    };
    CreateAgenticSpaceRequest() = default ;
    CreateAgenticSpaceRequest(const CreateAgenticSpaceRequest &) = default ;
    CreateAgenticSpaceRequest(CreateAgenticSpaceRequest &&) = default ;
    CreateAgenticSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgenticSpaceRequest() = default ;
    CreateAgenticSpaceRequest& operator=(const CreateAgenticSpaceRequest &) = default ;
    CreateAgenticSpaceRequest& operator=(CreateAgenticSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
        DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
        DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
      };
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
        DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
        DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
      };
      Quota() = default ;
      Quota(const Quota &) = default ;
      Quota(Quota &&) = default ;
      Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quota() = default ;
      Quota& operator=(const Quota &) = default ;
      Quota& operator=(Quota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileCountLimit_ == nullptr
        && this->sizeLimit_ == nullptr; };
      // fileCountLimit Field Functions 
      bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
      void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
      inline int64_t getFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
      inline Quota& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


      // sizeLimit Field Functions 
      bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
      void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
      inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
      inline Quota& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


    protected:
      // The maximum number of files allowed by the quota. Valid values:
      // 
      // - Minimum value: 10000.
      // 
      // - Maximum value: 100000000.
      // 
      // This parameter is required.
      shared_ptr<int64_t> fileCountLimit_ {};
      // The total capacity limit of the quota. Unit: bytes.
      // 
      // Valid values:
      // 
      // - Minimum value: 10737418240 (10 GiB).
      // - Maximum value: 1099511627776000 (1024000 GiB).
      // - Increment: 1073741824 (1 GiB).
      // 
      // This parameter is required.
      shared_ptr<int64_t> sizeLimit_ {};
    };

    virtual bool empty() const override { return this->azone_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr && this->fileSystemPath_ == nullptr
        && this->quota_ == nullptr; };
    // azone Field Functions 
    bool hasAzone() const { return this->azone_ != nullptr;};
    void deleteAzone() { this->azone_ = nullptr;};
    inline string getAzone() const { DARABONBA_PTR_GET_DEFAULT(azone_, "") };
    inline CreateAgenticSpaceRequest& setAzone(string azone) { DARABONBA_PTR_SET_VALUE(azone_, azone) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAgenticSpaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgenticSpaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAgenticSpaceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateAgenticSpaceRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemPath Field Functions 
    bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
    void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
    inline string getFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
    inline CreateAgenticSpaceRequest& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const CreateAgenticSpaceRequest::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, CreateAgenticSpaceRequest::Quota) };
    inline CreateAgenticSpaceRequest::Quota getQuota() { DARABONBA_PTR_GET(quota_, CreateAgenticSpaceRequest::Quota) };
    inline CreateAgenticSpaceRequest& setQuota(const CreateAgenticSpaceRequest::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline CreateAgenticSpaceRequest& setQuota(CreateAgenticSpaceRequest::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    // The zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> azone_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the AgenticSpace.
    // 
    // Limits:
    // 
    // - The description must be 2 to 128 characters in length.
    // - The description must start with a letter or a Chinese character and cannot start with `http://` or `https://`.
    // - The description can contain digits, colons (:), underscores (_), or hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run for this request. A dry run checks parameter validity and dependencies without actually modifying the instance or incurring fees.
    // 
    // Valid values:
    // 
    // - true: sends a dry run request without modifying the protocol service. The system checks whether required parameters are specified, whether the request format is valid, and whether business limit dependencies are met. If the check fails, the corresponding error is returned. If the check succeeds, HTTP status code 200 is returned.
    // - false (default): sends a normal request. After the check is passed, the protocol service is directly modified.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The absolute path of the file. Only first-level directories are supported.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemPath_ {};
    // The quota information.
    // 
    // This parameter is required.
    shared_ptr<CreateAgenticSpaceRequest::Quota> quota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
