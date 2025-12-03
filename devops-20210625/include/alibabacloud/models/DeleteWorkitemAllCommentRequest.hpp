// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKITEMALLCOMMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKITEMALLCOMMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class DeleteWorkitemAllCommentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkitemAllCommentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkitemAllCommentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
    };
    DeleteWorkitemAllCommentRequest() = default ;
    DeleteWorkitemAllCommentRequest(const DeleteWorkitemAllCommentRequest &) = default ;
    DeleteWorkitemAllCommentRequest(DeleteWorkitemAllCommentRequest &&) = default ;
    DeleteWorkitemAllCommentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkitemAllCommentRequest() = default ;
    DeleteWorkitemAllCommentRequest& operator=(const DeleteWorkitemAllCommentRequest &) = default ;
    DeleteWorkitemAllCommentRequest& operator=(DeleteWorkitemAllCommentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DeleteWorkitemAllCommentRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> identifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
