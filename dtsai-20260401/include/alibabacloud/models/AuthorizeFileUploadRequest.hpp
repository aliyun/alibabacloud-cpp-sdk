// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEFILEUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEFILEUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DtsAI20260401
{
namespace Models
{
  class AuthorizeFileUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeFileUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeFileUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AuthorizeFileUploadRequest() = default ;
    AuthorizeFileUploadRequest(const AuthorizeFileUploadRequest &) = default ;
    AuthorizeFileUploadRequest(AuthorizeFileUploadRequest &&) = default ;
    AuthorizeFileUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeFileUploadRequest() = default ;
    AuthorizeFileUploadRequest& operator=(const AuthorizeFileUploadRequest &) = default ;
    AuthorizeFileUploadRequest& operator=(AuthorizeFileUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->batchSize_ == nullptr && this->fileFormat_ == nullptr && this->regionId_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline AuthorizeFileUploadRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // batchSize Field Functions 
    bool hasBatchSize() const { return this->batchSize_ != nullptr;};
    void deleteBatchSize() { this->batchSize_ = nullptr;};
    inline string getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, "") };
    inline AuthorizeFileUploadRequest& setBatchSize(string batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


    // fileFormat Field Functions 
    bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
    void deleteFileFormat() { this->fileFormat_ = nullptr;};
    inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
    inline AuthorizeFileUploadRequest& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AuthorizeFileUploadRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Agent or client source that initiates the call, such as codex, cursor, or openapi. Maximum length: 32 characters. Used only for statistics and does not participate in authentication, throttling, quota, or billing.
    shared_ptr<string> agentName_ {};
    shared_ptr<string> batchSize_ {};
    // The format of the file to be uploaded.
    shared_ptr<string> fileFormat_ {};
    // The region ID, such as cn-beijing.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DtsAI20260401
#endif
