// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORKKNOWLEDGEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FORKKNOWLEDGEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ForkKnowledgeFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForkKnowledgeFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UploadUser, uploadUser_);
    };
    friend void from_json(const Darabonba::Json& j, ForkKnowledgeFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UploadUser, uploadUser_);
    };
    ForkKnowledgeFileRequest() = default ;
    ForkKnowledgeFileRequest(const ForkKnowledgeFileRequest &) = default ;
    ForkKnowledgeFileRequest(ForkKnowledgeFileRequest &&) = default ;
    ForkKnowledgeFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForkKnowledgeFileRequest() = default ;
    ForkKnowledgeFileRequest& operator=(const ForkKnowledgeFileRequest &) = default ;
    ForkKnowledgeFileRequest& operator=(ForkKnowledgeFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->fileId_ == nullptr && this->fileLocation_ == nullptr && this->tags_ == nullptr && this->uploadUser_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ForkKnowledgeFileRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ForkKnowledgeFileRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileLocation Field Functions 
    bool hasFileLocation() const { return this->fileLocation_ != nullptr;};
    void deleteFileLocation() { this->fileLocation_ = nullptr;};
    inline string getFileLocation() const { DARABONBA_PTR_GET_DEFAULT(fileLocation_, "") };
    inline ForkKnowledgeFileRequest& setFileLocation(string fileLocation) { DARABONBA_PTR_SET_VALUE(fileLocation_, fileLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ForkKnowledgeFileRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // uploadUser Field Functions 
    bool hasUploadUser() const { return this->uploadUser_ != nullptr;};
    void deleteUploadUser() { this->uploadUser_ = nullptr;};
    inline string getUploadUser() const { DARABONBA_PTR_GET_DEFAULT(uploadUser_, "") };
    inline ForkKnowledgeFileRequest& setUploadUser(string uploadUser) { DARABONBA_PTR_SET_VALUE(uploadUser_, uploadUser) };


  protected:
    // The ADB instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The ID of the knowledge base file. You must specify either this parameter or FileLocation, but not both. Use a decimal positive integer string without leading zeros. Valid values: 1 to 9223372036854775807.
    shared_ptr<string> fileId_ {};
    // The address of a single file in the knowledge base. You must specify either this parameter or FileId, but not both. You cannot specify a directory. The address must uniquely locate an active file.
    shared_ptr<string> fileLocation_ {};
    // The initial business tags for the new record. Use a JSON string of a JSON object or an array of tag_key/tag_value objects. If omitted, the source tags are not inherited.
    shared_ptr<string> tags_ {};
    // The initial authorized user for the new record. You can pass a JSON string of a single user identifier or a user array. If omitted, no initial user authorization is applied, and the source authorization is not inherited.
    shared_ptr<string> uploadUser_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
