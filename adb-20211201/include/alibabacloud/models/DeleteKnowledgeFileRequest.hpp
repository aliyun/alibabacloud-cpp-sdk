// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKNOWLEDGEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEKNOWLEDGEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DeleteKnowledgeFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKnowledgeFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKnowledgeFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
    };
    DeleteKnowledgeFileRequest() = default ;
    DeleteKnowledgeFileRequest(const DeleteKnowledgeFileRequest &) = default ;
    DeleteKnowledgeFileRequest(DeleteKnowledgeFileRequest &&) = default ;
    DeleteKnowledgeFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKnowledgeFileRequest() = default ;
    DeleteKnowledgeFileRequest& operator=(const DeleteKnowledgeFileRequest &) = default ;
    DeleteKnowledgeFileRequest& operator=(DeleteKnowledgeFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->fileLocation_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteKnowledgeFileRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fileLocation Field Functions 
    bool hasFileLocation() const { return this->fileLocation_ != nullptr;};
    void deleteFileLocation() { this->fileLocation_ = nullptr;};
    inline string getFileLocation() const { DARABONBA_PTR_GET_DEFAULT(fileLocation_, "") };
    inline DeleteKnowledgeFileRequest& setFileLocation(string fileLocation) { DARABONBA_PTR_SET_VALUE(fileLocation_, fileLocation) };


  protected:
    // The ID of the ADB instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The location of the knowledge base document.
    // 
    // This parameter is required.
    shared_ptr<string> fileLocation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
