// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTECLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTECLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListComputeClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListComputeClustersRequest() = default ;
    ListComputeClustersRequest(const ListComputeClustersRequest &) = default ;
    ListComputeClustersRequest(ListComputeClustersRequest &&) = default ;
    ListComputeClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeClustersRequest() = default ;
    ListComputeClustersRequest& operator=(const ListComputeClustersRequest &) = default ;
    ListComputeClustersRequest& operator=(ListComputeClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TypeVersionList, typeVersionList_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TypeVersionList, typeVersionList_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyword_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->typeVersionList_ == nullptr; };
      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline ListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // typeVersionList Field Functions 
      bool hasTypeVersionList() const { return this->typeVersionList_ != nullptr;};
      void deleteTypeVersionList() { this->typeVersionList_ = nullptr;};
      inline const vector<string> & getTypeVersionList() const { DARABONBA_PTR_GET_CONST(typeVersionList_, vector<string>) };
      inline vector<string> getTypeVersionList() { DARABONBA_PTR_GET(typeVersionList_, vector<string>) };
      inline ListQuery& setTypeVersionList(const vector<string> & typeVersionList) { DARABONBA_PTR_SET_VALUE(typeVersionList_, typeVersionList) };
      inline ListQuery& setTypeVersionList(vector<string> && typeVersionList) { DARABONBA_PTR_SET_RVALUE(typeVersionList_, typeVersionList) };


    protected:
      // The keyword for filtering.
      shared_ptr<string> keyword_ {};
      // The page number. The value must be greater than 0.
      // 
      // This parameter is required.
      shared_ptr<int32_t> pageNo_ {};
      // The number of records per page. The value must be greater than 0.
      // 
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
      // The list of cluster versions.
      shared_ptr<vector<string>> typeVersionList_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListComputeClustersRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListComputeClustersRequest::ListQuery) };
    inline ListComputeClustersRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListComputeClustersRequest::ListQuery) };
    inline ListComputeClustersRequest& setListQuery(const ListComputeClustersRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListComputeClustersRequest& setListQuery(ListComputeClustersRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComputeClustersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComputeClustersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListComputeClustersRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListComputeClustersRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The query conditions.
    // 
    // This parameter is required.
    shared_ptr<ListComputeClustersRequest::ListQuery> listQuery_ {};
    // The maximum number of records to return in this response.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. An empty value indicates that no more results are available.
    shared_ptr<string> nextToken_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
