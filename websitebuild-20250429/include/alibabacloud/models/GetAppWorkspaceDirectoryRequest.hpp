// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPWORKSPACEDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPWORKSPACEDIRECTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppWorkspaceDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppWorkspaceDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Deep, deep_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppWorkspaceDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Deep, deep_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
    };
    GetAppWorkspaceDirectoryRequest() = default ;
    GetAppWorkspaceDirectoryRequest(const GetAppWorkspaceDirectoryRequest &) = default ;
    GetAppWorkspaceDirectoryRequest(GetAppWorkspaceDirectoryRequest &&) = default ;
    GetAppWorkspaceDirectoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppWorkspaceDirectoryRequest() = default ;
    GetAppWorkspaceDirectoryRequest& operator=(const GetAppWorkspaceDirectoryRequest &) = default ;
    GetAppWorkspaceDirectoryRequest& operator=(GetAppWorkspaceDirectoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->deep_ == nullptr && this->filePath_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline GetAppWorkspaceDirectoryRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // deep Field Functions 
    bool hasDeep() const { return this->deep_ != nullptr;};
    void deleteDeep() { this->deep_ = nullptr;};
    inline int32_t getDeep() const { DARABONBA_PTR_GET_DEFAULT(deep_, 0) };
    inline GetAppWorkspaceDirectoryRequest& setDeep(int32_t deep) { DARABONBA_PTR_SET_VALUE(deep_, deep) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline GetAppWorkspaceDirectoryRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


  protected:
    shared_ptr<string> conversationId_ {};
    shared_ptr<int32_t> deep_ {};
    shared_ptr<string> filePath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
