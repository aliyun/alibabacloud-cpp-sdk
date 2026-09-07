// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGETAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGETAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListKnowledgeTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
    };
    ListKnowledgeTagsRequest() = default ;
    ListKnowledgeTagsRequest(const ListKnowledgeTagsRequest &) = default ;
    ListKnowledgeTagsRequest(ListKnowledgeTagsRequest &&) = default ;
    ListKnowledgeTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeTagsRequest() = default ;
    ListKnowledgeTagsRequest& operator=(const ListKnowledgeTagsRequest &) = default ;
    ListKnowledgeTagsRequest& operator=(ListKnowledgeTagsRequest &&) = default ;
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
    inline ListKnowledgeTagsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fileLocation Field Functions 
    bool hasFileLocation() const { return this->fileLocation_ != nullptr;};
    void deleteFileLocation() { this->fileLocation_ = nullptr;};
    inline string getFileLocation() const { DARABONBA_PTR_GET_DEFAULT(fileLocation_, "") };
    inline ListKnowledgeTagsRequest& setFileLocation(string fileLocation) { DARABONBA_PTR_SET_VALUE(fileLocation_, fileLocation) };


  protected:
    // The ID of the AnalyticDB for MySQL instance.
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
