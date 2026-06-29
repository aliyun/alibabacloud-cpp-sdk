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
      // This parameter is required.
      shared_ptr<int64_t> fileCountLimit_ {};
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
    // This parameter is required.
    shared_ptr<string> azone_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // This parameter is required.
    shared_ptr<string> fileSystemPath_ {};
    // This parameter is required.
    shared_ptr<CreateAgenticSpaceRequest::Quota> quota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
