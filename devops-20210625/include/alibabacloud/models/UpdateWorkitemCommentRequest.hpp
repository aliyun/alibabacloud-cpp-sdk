// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKITEMCOMMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKITEMCOMMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateWorkitemCommentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkitemCommentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(commentId, commentId_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(formatType, formatType_);
      DARABONBA_PTR_TO_JSON(workitemIdentifier, workitemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkitemCommentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(commentId, commentId_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(formatType, formatType_);
      DARABONBA_PTR_FROM_JSON(workitemIdentifier, workitemIdentifier_);
    };
    UpdateWorkitemCommentRequest() = default ;
    UpdateWorkitemCommentRequest(const UpdateWorkitemCommentRequest &) = default ;
    UpdateWorkitemCommentRequest(UpdateWorkitemCommentRequest &&) = default ;
    UpdateWorkitemCommentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkitemCommentRequest() = default ;
    UpdateWorkitemCommentRequest& operator=(const UpdateWorkitemCommentRequest &) = default ;
    UpdateWorkitemCommentRequest& operator=(UpdateWorkitemCommentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commentId_ == nullptr
        && return this->content_ == nullptr && return this->formatType_ == nullptr && return this->workitemIdentifier_ == nullptr; };
    // commentId Field Functions 
    bool hasCommentId() const { return this->commentId_ != nullptr;};
    void deleteCommentId() { this->commentId_ = nullptr;};
    inline int64_t commentId() const { DARABONBA_PTR_GET_DEFAULT(commentId_, 0L) };
    inline UpdateWorkitemCommentRequest& setCommentId(int64_t commentId) { DARABONBA_PTR_SET_VALUE(commentId_, commentId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateWorkitemCommentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string formatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline UpdateWorkitemCommentRequest& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // workitemIdentifier Field Functions 
    bool hasWorkitemIdentifier() const { return this->workitemIdentifier_ != nullptr;};
    void deleteWorkitemIdentifier() { this->workitemIdentifier_ = nullptr;};
    inline string workitemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemIdentifier_, "") };
    inline UpdateWorkitemCommentRequest& setWorkitemIdentifier(string workitemIdentifier) { DARABONBA_PTR_SET_VALUE(workitemIdentifier_, workitemIdentifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> commentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formatType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workitemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
