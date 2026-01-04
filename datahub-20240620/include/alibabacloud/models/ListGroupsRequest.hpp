// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class ListGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Pure, pure_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Pure, pure_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
    };
    ListGroupsRequest() = default ;
    ListGroupsRequest(const ListGroupsRequest &) = default ;
    ListGroupsRequest(ListGroupsRequest &&) = default ;
    ListGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsRequest() = default ;
    ListGroupsRequest& operator=(const ListGroupsRequest &) = default ;
    ListGroupsRequest& operator=(ListGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->projectName_ == nullptr && this->pure_ == nullptr && this->skip_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListGroupsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListGroupsRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // pure Field Functions 
    bool hasPure() const { return this->pure_ != nullptr;};
    void deletePure() { this->pure_ = nullptr;};
    inline bool getPure() const { DARABONBA_PTR_GET_DEFAULT(pure_, false) };
    inline ListGroupsRequest& setPure(bool pure) { DARABONBA_PTR_SET_VALUE(pure_, pure) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListGroupsRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


  protected:
    shared_ptr<string> keyword_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    shared_ptr<bool> pure_ {};
    shared_ptr<int32_t> skip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
