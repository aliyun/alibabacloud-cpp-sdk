// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(IncludeAllUpStreams, includeAllUpStreams_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(IncludeAllUpStreams, includeAllUpStreams_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetBatchTaskInfoRequest() = default ;
    GetBatchTaskInfoRequest(const GetBatchTaskInfoRequest &) = default ;
    GetBatchTaskInfoRequest(GetBatchTaskInfoRequest &&) = default ;
    GetBatchTaskInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskInfoRequest() = default ;
    GetBatchTaskInfoRequest& operator=(const GetBatchTaskInfoRequest &) = default ;
    GetBatchTaskInfoRequest& operator=(GetBatchTaskInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && return this->fileId_ == nullptr && return this->includeAllUpStreams_ == nullptr && return this->opTenantId_ == nullptr && return this->projectId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetBatchTaskInfoRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline GetBatchTaskInfoRequest& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // includeAllUpStreams Field Functions 
    bool hasIncludeAllUpStreams() const { return this->includeAllUpStreams_ != nullptr;};
    void deleteIncludeAllUpStreams() { this->includeAllUpStreams_ = nullptr;};
    inline bool includeAllUpStreams() const { DARABONBA_PTR_GET_DEFAULT(includeAllUpStreams_, false) };
    inline GetBatchTaskInfoRequest& setIncludeAllUpStreams(bool includeAllUpStreams) { DARABONBA_PTR_SET_VALUE(includeAllUpStreams_, includeAllUpStreams) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetBatchTaskInfoRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetBatchTaskInfoRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    std::shared_ptr<bool> includeAllUpStreams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
