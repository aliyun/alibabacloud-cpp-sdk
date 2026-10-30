// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERKNOWLEDGEFILEPARSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERKNOWLEDGEFILEPARSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class TriggerKnowledgeFileParseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerKnowledgeFileParseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerKnowledgeFileParseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
    };
    TriggerKnowledgeFileParseRequest() = default ;
    TriggerKnowledgeFileParseRequest(const TriggerKnowledgeFileParseRequest &) = default ;
    TriggerKnowledgeFileParseRequest(TriggerKnowledgeFileParseRequest &&) = default ;
    TriggerKnowledgeFileParseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerKnowledgeFileParseRequest() = default ;
    TriggerKnowledgeFileParseRequest& operator=(const TriggerKnowledgeFileParseRequest &) = default ;
    TriggerKnowledgeFileParseRequest& operator=(TriggerKnowledgeFileParseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->fileId_ == nullptr && this->fileLocation_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline TriggerKnowledgeFileParseRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline TriggerKnowledgeFileParseRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileLocation Field Functions 
    bool hasFileLocation() const { return this->fileLocation_ != nullptr;};
    void deleteFileLocation() { this->fileLocation_ = nullptr;};
    inline string getFileLocation() const { DARABONBA_PTR_GET_DEFAULT(fileLocation_, "") };
    inline TriggerKnowledgeFileParseRequest& setFileLocation(string fileLocation) { DARABONBA_PTR_SET_VALUE(fileLocation_, fileLocation) };


  protected:
    // The ADB instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The ID of the knowledge base file. You must specify either this parameter or FileLocation, but not both.
    shared_ptr<string> fileId_ {};
    // The URL of a single knowledge base file. You must specify either this parameter or FileId, but not both. You cannot specify a directory. The URL must uniquely point to an existing file.
    shared_ptr<string> fileLocation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
