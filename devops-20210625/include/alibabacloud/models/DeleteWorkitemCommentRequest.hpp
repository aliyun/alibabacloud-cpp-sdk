// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKITEMCOMMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKITEMCOMMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class DeleteWorkitemCommentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkitemCommentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(commentId, commentId_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkitemCommentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(commentId, commentId_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
    };
    DeleteWorkitemCommentRequest() = default ;
    DeleteWorkitemCommentRequest(const DeleteWorkitemCommentRequest &) = default ;
    DeleteWorkitemCommentRequest(DeleteWorkitemCommentRequest &&) = default ;
    DeleteWorkitemCommentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkitemCommentRequest() = default ;
    DeleteWorkitemCommentRequest& operator=(const DeleteWorkitemCommentRequest &) = default ;
    DeleteWorkitemCommentRequest& operator=(DeleteWorkitemCommentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commentId_ == nullptr
        && return this->identifier_ == nullptr; };
    // commentId Field Functions 
    bool hasCommentId() const { return this->commentId_ != nullptr;};
    void deleteCommentId() { this->commentId_ = nullptr;};
    inline int64_t commentId() const { DARABONBA_PTR_GET_DEFAULT(commentId_, 0L) };
    inline DeleteWorkitemCommentRequest& setCommentId(int64_t commentId) { DARABONBA_PTR_SET_VALUE(commentId_, commentId) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DeleteWorkitemCommentRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> commentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> identifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
