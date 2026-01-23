// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYIDENTIFYRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYIDENTIFYRESULTSREQUEST_HPP_
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
  class ListSecurityIdentifyResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityIdentifyResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityIdentifyResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListSecurityIdentifyResultsRequest() = default ;
    ListSecurityIdentifyResultsRequest(const ListSecurityIdentifyResultsRequest &) = default ;
    ListSecurityIdentifyResultsRequest(ListSecurityIdentifyResultsRequest &&) = default ;
    ListSecurityIdentifyResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityIdentifyResultsRequest() = default ;
    ListSecurityIdentifyResultsRequest& operator=(const ListSecurityIdentifyResultsRequest &) = default ;
    ListSecurityIdentifyResultsRequest& operator=(ListSecurityIdentifyResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitNameList, bizUnitNameList_);
        DARABONBA_PTR_TO_JSON(ClassifyId, classifyId_);
        DARABONBA_PTR_TO_JSON(DatasourceNameList, datasourceNameList_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(IsLocked, isLocked_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectNameList, projectNameList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitNameList, bizUnitNameList_);
        DARABONBA_PTR_FROM_JSON(ClassifyId, classifyId_);
        DARABONBA_PTR_FROM_JSON(DatasourceNameList, datasourceNameList_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(IsLocked, isLocked_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectNameList, projectNameList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->bizUnitNameList_ == nullptr
        && this->classifyId_ == nullptr && this->datasourceNameList_ == nullptr && this->env_ == nullptr && this->isLocked_ == nullptr && this->keyword_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->projectNameList_ == nullptr && this->status_ == nullptr; };
      // bizUnitNameList Field Functions 
      bool hasBizUnitNameList() const { return this->bizUnitNameList_ != nullptr;};
      void deleteBizUnitNameList() { this->bizUnitNameList_ = nullptr;};
      inline const vector<string> & getBizUnitNameList() const { DARABONBA_PTR_GET_CONST(bizUnitNameList_, vector<string>) };
      inline vector<string> getBizUnitNameList() { DARABONBA_PTR_GET(bizUnitNameList_, vector<string>) };
      inline ListQuery& setBizUnitNameList(const vector<string> & bizUnitNameList) { DARABONBA_PTR_SET_VALUE(bizUnitNameList_, bizUnitNameList) };
      inline ListQuery& setBizUnitNameList(vector<string> && bizUnitNameList) { DARABONBA_PTR_SET_RVALUE(bizUnitNameList_, bizUnitNameList) };


      // classifyId Field Functions 
      bool hasClassifyId() const { return this->classifyId_ != nullptr;};
      void deleteClassifyId() { this->classifyId_ = nullptr;};
      inline int64_t getClassifyId() const { DARABONBA_PTR_GET_DEFAULT(classifyId_, 0L) };
      inline ListQuery& setClassifyId(int64_t classifyId) { DARABONBA_PTR_SET_VALUE(classifyId_, classifyId) };


      // datasourceNameList Field Functions 
      bool hasDatasourceNameList() const { return this->datasourceNameList_ != nullptr;};
      void deleteDatasourceNameList() { this->datasourceNameList_ = nullptr;};
      inline const vector<string> & getDatasourceNameList() const { DARABONBA_PTR_GET_CONST(datasourceNameList_, vector<string>) };
      inline vector<string> getDatasourceNameList() { DARABONBA_PTR_GET(datasourceNameList_, vector<string>) };
      inline ListQuery& setDatasourceNameList(const vector<string> & datasourceNameList) { DARABONBA_PTR_SET_VALUE(datasourceNameList_, datasourceNameList) };
      inline ListQuery& setDatasourceNameList(vector<string> && datasourceNameList) { DARABONBA_PTR_SET_RVALUE(datasourceNameList_, datasourceNameList) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline ListQuery& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // isLocked Field Functions 
      bool hasIsLocked() const { return this->isLocked_ != nullptr;};
      void deleteIsLocked() { this->isLocked_ = nullptr;};
      inline bool getIsLocked() const { DARABONBA_PTR_GET_DEFAULT(isLocked_, false) };
      inline ListQuery& setIsLocked(bool isLocked) { DARABONBA_PTR_SET_VALUE(isLocked_, isLocked) };


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


      // projectNameList Field Functions 
      bool hasProjectNameList() const { return this->projectNameList_ != nullptr;};
      void deleteProjectNameList() { this->projectNameList_ = nullptr;};
      inline const vector<string> & getProjectNameList() const { DARABONBA_PTR_GET_CONST(projectNameList_, vector<string>) };
      inline vector<string> getProjectNameList() { DARABONBA_PTR_GET(projectNameList_, vector<string>) };
      inline ListQuery& setProjectNameList(const vector<string> & projectNameList) { DARABONBA_PTR_SET_VALUE(projectNameList_, projectNameList) };
      inline ListQuery& setProjectNameList(vector<string> && projectNameList) { DARABONBA_PTR_SET_RVALUE(projectNameList_, projectNameList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ListQuery& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<vector<string>> bizUnitNameList_ {};
      shared_ptr<int64_t> classifyId_ {};
      shared_ptr<vector<string>> datasourceNameList_ {};
      shared_ptr<string> env_ {};
      shared_ptr<bool> isLocked_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<string>> projectNameList_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListSecurityIdentifyResultsRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListSecurityIdentifyResultsRequest::ListQuery) };
    inline ListSecurityIdentifyResultsRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListSecurityIdentifyResultsRequest::ListQuery) };
    inline ListSecurityIdentifyResultsRequest& setListQuery(const ListSecurityIdentifyResultsRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListSecurityIdentifyResultsRequest& setListQuery(ListSecurityIdentifyResultsRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListSecurityIdentifyResultsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<ListSecurityIdentifyResultsRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
