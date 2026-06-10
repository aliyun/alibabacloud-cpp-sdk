// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPINSTANCEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPINSTANCEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DeleteAppInstanceFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppInstanceFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppInstanceFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
    };
    DeleteAppInstanceFileRequest() = default ;
    DeleteAppInstanceFileRequest(const DeleteAppInstanceFileRequest &) = default ;
    DeleteAppInstanceFileRequest(DeleteAppInstanceFileRequest &&) = default ;
    DeleteAppInstanceFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppInstanceFileRequest() = default ;
    DeleteAppInstanceFileRequest& operator=(const DeleteAppInstanceFileRequest &) = default ;
    DeleteAppInstanceFileRequest& operator=(DeleteAppInstanceFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->filePath_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline DeleteAppInstanceFileRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline DeleteAppInstanceFileRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


  protected:
    // Session ID
    shared_ptr<string> conversationId_ {};
    // File Path
    shared_ptr<string> filePath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
