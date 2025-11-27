// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACHEDOSSBUCKETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACHEDOSSBUCKETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListAttachedOSSBucketsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttachedOSSBucketsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttachedOSSBucketsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    ListAttachedOSSBucketsRequest() = default ;
    ListAttachedOSSBucketsRequest(const ListAttachedOSSBucketsRequest &) = default ;
    ListAttachedOSSBucketsRequest(ListAttachedOSSBucketsRequest &&) = default ;
    ListAttachedOSSBucketsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttachedOSSBucketsRequest() = default ;
    ListAttachedOSSBucketsRequest& operator=(const ListAttachedOSSBucketsRequest &) = default ;
    ListAttachedOSSBucketsRequest& operator=(ListAttachedOSSBucketsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->projectName_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListAttachedOSSBucketsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAttachedOSSBucketsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListAttachedOSSBucketsRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The maximum number of tasks in the returned result list. The value range is (0, 200], with a default value of 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // Pagination token.
    // 
    // When the total number of files exceeds the set MaxResults, this token is used for pagination. It returns the list of file information in lexicographical order starting from NextToken.
    // 
    // > When calling this interface for the first time in a single query, set this value to empty.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Project name, for more information on how to obtain it, see [Create Project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
