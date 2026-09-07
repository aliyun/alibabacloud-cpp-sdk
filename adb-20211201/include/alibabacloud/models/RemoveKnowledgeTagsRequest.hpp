// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEKNOWLEDGETAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEKNOWLEDGETAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class RemoveKnowledgeTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveKnowledgeTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveKnowledgeTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    RemoveKnowledgeTagsRequest() = default ;
    RemoveKnowledgeTagsRequest(const RemoveKnowledgeTagsRequest &) = default ;
    RemoveKnowledgeTagsRequest(RemoveKnowledgeTagsRequest &&) = default ;
    RemoveKnowledgeTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveKnowledgeTagsRequest() = default ;
    RemoveKnowledgeTagsRequest& operator=(const RemoveKnowledgeTagsRequest &) = default ;
    RemoveKnowledgeTagsRequest& operator=(RemoveKnowledgeTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->fileLocation_ == nullptr && this->tags_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline RemoveKnowledgeTagsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fileLocation Field Functions 
    bool hasFileLocation() const { return this->fileLocation_ != nullptr;};
    void deleteFileLocation() { this->fileLocation_ = nullptr;};
    inline string getFileLocation() const { DARABONBA_PTR_GET_DEFAULT(fileLocation_, "") };
    inline RemoveKnowledgeTagsRequest& setFileLocation(string fileLocation) { DARABONBA_PTR_SET_VALUE(fileLocation_, fileLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline RemoveKnowledgeTagsRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The database cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The location of the knowledge base document.
    // 
    // This parameter is required.
    shared_ptr<string> fileLocation_ {};
    // The JSON string of the tag array to delete.
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
