// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINSIGHTDIRECTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINSIGHTDIRECTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListDataInsightDirectoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataInsightDirectoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParentDir, parentDir_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataInsightDirectoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ParentDir, parentDir_);
    };
    ListDataInsightDirectoriesRequest() = default ;
    ListDataInsightDirectoriesRequest(const ListDataInsightDirectoriesRequest &) = default ;
    ListDataInsightDirectoriesRequest(ListDataInsightDirectoriesRequest &&) = default ;
    ListDataInsightDirectoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataInsightDirectoriesRequest() = default ;
    ListDataInsightDirectoriesRequest& operator=(const ListDataInsightDirectoriesRequest &) = default ;
    ListDataInsightDirectoriesRequest& operator=(ListDataInsightDirectoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->parentDir_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListDataInsightDirectoriesRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataInsightDirectoriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataInsightDirectoriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentDir Field Functions 
    bool hasParentDir() const { return this->parentDir_ != nullptr;};
    void deleteParentDir() { this->parentDir_ = nullptr;};
    inline string getParentDir() const { DARABONBA_PTR_GET_DEFAULT(parentDir_, "") };
    inline ListDataInsightDirectoriesRequest& setParentDir(string parentDir) { DARABONBA_PTR_SET_VALUE(parentDir_, parentDir) };


  protected:
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> parentDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
