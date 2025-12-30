// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PublishObjectListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishObjectListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PublishCommand, publishCommand_);
    };
    friend void from_json(const Darabonba::Json& j, PublishObjectListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PublishCommand, publishCommand_);
    };
    PublishObjectListRequest() = default ;
    PublishObjectListRequest(const PublishObjectListRequest &) = default ;
    PublishObjectListRequest(PublishObjectListRequest &&) = default ;
    PublishObjectListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishObjectListRequest() = default ;
    PublishObjectListRequest& operator=(const PublishObjectListRequest &) = default ;
    PublishObjectListRequest& operator=(PublishObjectListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublishCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublishCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(SubmitIdList, submitIdList_);
      };
      friend void from_json(const Darabonba::Json& j, PublishCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(SubmitIdList, submitIdList_);
      };
      PublishCommand() = default ;
      PublishCommand(const PublishCommand &) = default ;
      PublishCommand(PublishCommand &&) = default ;
      PublishCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublishCommand() = default ;
      PublishCommand& operator=(const PublishCommand &) = default ;
      PublishCommand& operator=(PublishCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->projectId_ == nullptr && this->submitIdList_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline PublishCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline PublishCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // submitIdList Field Functions 
      bool hasSubmitIdList() const { return this->submitIdList_ != nullptr;};
      void deleteSubmitIdList() { this->submitIdList_ = nullptr;};
      inline const vector<int64_t> & getSubmitIdList() const { DARABONBA_PTR_GET_CONST(submitIdList_, vector<int64_t>) };
      inline vector<int64_t> getSubmitIdList() { DARABONBA_PTR_GET(submitIdList_, vector<int64_t>) };
      inline PublishCommand& setSubmitIdList(const vector<int64_t> & submitIdList) { DARABONBA_PTR_SET_VALUE(submitIdList_, submitIdList) };
      inline PublishCommand& setSubmitIdList(vector<int64_t> && submitIdList) { DARABONBA_PTR_SET_RVALUE(submitIdList_, submitIdList) };


    protected:
      // This parameter is required.
      shared_ptr<string> comment_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> submitIdList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->publishCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline PublishObjectListRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // publishCommand Field Functions 
    bool hasPublishCommand() const { return this->publishCommand_ != nullptr;};
    void deletePublishCommand() { this->publishCommand_ = nullptr;};
    inline const PublishObjectListRequest::PublishCommand & getPublishCommand() const { DARABONBA_PTR_GET_CONST(publishCommand_, PublishObjectListRequest::PublishCommand) };
    inline PublishObjectListRequest::PublishCommand getPublishCommand() { DARABONBA_PTR_GET(publishCommand_, PublishObjectListRequest::PublishCommand) };
    inline PublishObjectListRequest& setPublishCommand(const PublishObjectListRequest::PublishCommand & publishCommand) { DARABONBA_PTR_SET_VALUE(publishCommand_, publishCommand) };
    inline PublishObjectListRequest& setPublishCommand(PublishObjectListRequest::PublishCommand && publishCommand) { DARABONBA_PTR_SET_RVALUE(publishCommand_, publishCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<PublishObjectListRequest::PublishCommand> publishCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
