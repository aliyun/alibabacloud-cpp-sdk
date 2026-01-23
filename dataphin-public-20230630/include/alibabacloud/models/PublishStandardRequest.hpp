// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHSTANDARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHSTANDARDREQUEST_HPP_
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
  class PublishStandardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishStandardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PublishCommand, publishCommand_);
    };
    friend void from_json(const Darabonba::Json& j, PublishStandardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PublishCommand, publishCommand_);
    };
    PublishStandardRequest() = default ;
    PublishStandardRequest(const PublishStandardRequest &) = default ;
    PublishStandardRequest(PublishStandardRequest &&) = default ;
    PublishStandardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishStandardRequest() = default ;
    PublishStandardRequest& operator=(const PublishStandardRequest &) = default ;
    PublishStandardRequest& operator=(PublishStandardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublishCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublishCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPublishAfterApproval, autoPublishAfterApproval_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ReviewerIdList, reviewerIdList_);
        DARABONBA_PTR_TO_JSON(StandardStage, standardStage_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, PublishCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPublishAfterApproval, autoPublishAfterApproval_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ReviewerIdList, reviewerIdList_);
        DARABONBA_PTR_FROM_JSON(StandardStage, standardStage_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      virtual bool empty() const override { return this->autoPublishAfterApproval_ == nullptr
        && this->comment_ == nullptr && this->id_ == nullptr && this->reviewerIdList_ == nullptr && this->standardStage_ == nullptr && this->version_ == nullptr; };
      // autoPublishAfterApproval Field Functions 
      bool hasAutoPublishAfterApproval() const { return this->autoPublishAfterApproval_ != nullptr;};
      void deleteAutoPublishAfterApproval() { this->autoPublishAfterApproval_ = nullptr;};
      inline bool getAutoPublishAfterApproval() const { DARABONBA_PTR_GET_DEFAULT(autoPublishAfterApproval_, false) };
      inline PublishCommand& setAutoPublishAfterApproval(bool autoPublishAfterApproval) { DARABONBA_PTR_SET_VALUE(autoPublishAfterApproval_, autoPublishAfterApproval) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline PublishCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline PublishCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // reviewerIdList Field Functions 
      bool hasReviewerIdList() const { return this->reviewerIdList_ != nullptr;};
      void deleteReviewerIdList() { this->reviewerIdList_ = nullptr;};
      inline const vector<string> & getReviewerIdList() const { DARABONBA_PTR_GET_CONST(reviewerIdList_, vector<string>) };
      inline vector<string> getReviewerIdList() { DARABONBA_PTR_GET(reviewerIdList_, vector<string>) };
      inline PublishCommand& setReviewerIdList(const vector<string> & reviewerIdList) { DARABONBA_PTR_SET_VALUE(reviewerIdList_, reviewerIdList) };
      inline PublishCommand& setReviewerIdList(vector<string> && reviewerIdList) { DARABONBA_PTR_SET_RVALUE(reviewerIdList_, reviewerIdList) };


      // standardStage Field Functions 
      bool hasStandardStage() const { return this->standardStage_ != nullptr;};
      void deleteStandardStage() { this->standardStage_ = nullptr;};
      inline string getStandardStage() const { DARABONBA_PTR_GET_DEFAULT(standardStage_, "") };
      inline PublishCommand& setStandardStage(string standardStage) { DARABONBA_PTR_SET_VALUE(standardStage_, standardStage) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline PublishCommand& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<bool> autoPublishAfterApproval_ {};
      // This parameter is required.
      shared_ptr<string> comment_ {};
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<string>> reviewerIdList_ {};
      shared_ptr<string> standardStage_ {};
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->publishCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline PublishStandardRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // publishCommand Field Functions 
    bool hasPublishCommand() const { return this->publishCommand_ != nullptr;};
    void deletePublishCommand() { this->publishCommand_ = nullptr;};
    inline const PublishStandardRequest::PublishCommand & getPublishCommand() const { DARABONBA_PTR_GET_CONST(publishCommand_, PublishStandardRequest::PublishCommand) };
    inline PublishStandardRequest::PublishCommand getPublishCommand() { DARABONBA_PTR_GET(publishCommand_, PublishStandardRequest::PublishCommand) };
    inline PublishStandardRequest& setPublishCommand(const PublishStandardRequest::PublishCommand & publishCommand) { DARABONBA_PTR_SET_VALUE(publishCommand_, publishCommand) };
    inline PublishStandardRequest& setPublishCommand(PublishStandardRequest::PublishCommand && publishCommand) { DARABONBA_PTR_SET_RVALUE(publishCommand_, publishCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<PublishStandardRequest::PublishCommand> publishCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
