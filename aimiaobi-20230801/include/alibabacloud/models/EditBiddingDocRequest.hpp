// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITBIDDINGDOCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITBIDDINGDOCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class EditBiddingDocRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditBiddingDocRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentFormat, contentFormat_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, EditBiddingDocRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentFormat, contentFormat_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    EditBiddingDocRequest() = default ;
    EditBiddingDocRequest(const EditBiddingDocRequest &) = default ;
    EditBiddingDocRequest(EditBiddingDocRequest &&) = default ;
    EditBiddingDocRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditBiddingDocRequest() = default ;
    EditBiddingDocRequest& operator=(const EditBiddingDocRequest &) = default ;
    EditBiddingDocRequest& operator=(EditBiddingDocRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentFormat_ != nullptr && this->contentType_ != nullptr && this->taskId_ != nullptr && this->workspaceId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline EditBiddingDocRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentFormat Field Functions 
    bool hasContentFormat() const { return this->contentFormat_ != nullptr;};
    void deleteContentFormat() { this->contentFormat_ = nullptr;};
    inline string contentFormat() const { DARABONBA_PTR_GET_DEFAULT(contentFormat_, "") };
    inline EditBiddingDocRequest& setContentFormat(string contentFormat) { DARABONBA_PTR_SET_VALUE(contentFormat_, contentFormat) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline EditBiddingDocRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline EditBiddingDocRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline EditBiddingDocRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> contentFormat_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
