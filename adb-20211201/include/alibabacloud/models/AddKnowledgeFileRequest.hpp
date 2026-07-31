// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKNOWLEDGEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDKNOWLEDGEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class AddKnowledgeFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKnowledgeFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(IsDir, isDir_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UploadUser, uploadUser_);
    };
    friend void from_json(const Darabonba::Json& j, AddKnowledgeFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(IsDir, isDir_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UploadUser, uploadUser_);
    };
    AddKnowledgeFileRequest() = default ;
    AddKnowledgeFileRequest(const AddKnowledgeFileRequest &) = default ;
    AddKnowledgeFileRequest(AddKnowledgeFileRequest &&) = default ;
    AddKnowledgeFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKnowledgeFileRequest() = default ;
    AddKnowledgeFileRequest& operator=(const AddKnowledgeFileRequest &) = default ;
    AddKnowledgeFileRequest& operator=(AddKnowledgeFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->fileLocation_ == nullptr && this->fileType_ == nullptr && this->isDir_ == nullptr && this->tags_ == nullptr && this->uploadUser_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline AddKnowledgeFileRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fileLocation Field Functions 
    bool hasFileLocation() const { return this->fileLocation_ != nullptr;};
    void deleteFileLocation() { this->fileLocation_ = nullptr;};
    inline string getFileLocation() const { DARABONBA_PTR_GET_DEFAULT(fileLocation_, "") };
    inline AddKnowledgeFileRequest& setFileLocation(string fileLocation) { DARABONBA_PTR_SET_VALUE(fileLocation_, fileLocation) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline AddKnowledgeFileRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // isDir Field Functions 
    bool hasIsDir() const { return this->isDir_ != nullptr;};
    void deleteIsDir() { this->isDir_ = nullptr;};
    inline bool getIsDir() const { DARABONBA_PTR_GET_DEFAULT(isDir_, false) };
    inline AddKnowledgeFileRequest& setIsDir(bool isDir) { DARABONBA_PTR_SET_VALUE(isDir_, isDir) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline AddKnowledgeFileRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // uploadUser Field Functions 
    bool hasUploadUser() const { return this->uploadUser_ != nullptr;};
    void deleteUploadUser() { this->uploadUser_ = nullptr;};
    inline string getUploadUser() const { DARABONBA_PTR_GET_DEFAULT(uploadUser_, "") };
    inline AddKnowledgeFileRequest& setUploadUser(string uploadUser) { DARABONBA_PTR_SET_VALUE(uploadUser_, uploadUser) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The file address. Currently, only OSS paths are supported.
    // 
    // This parameter is required.
    shared_ptr<string> fileLocation_ {};
    // The file type.
    shared_ptr<string> fileType_ {};
    // Specifies whether the file is a folder.
    shared_ptr<bool> isDir_ {};
    // The file tags in JSON format.
    shared_ptr<string> tags_ {};
    // The user who uploads the knowledge base file.
    shared_ptr<string> uploadUser_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
