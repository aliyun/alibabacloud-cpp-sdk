// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATADOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATADOMAINSREQUEST_HPP_
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
  class ListDataDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListDataDomainsRequest() = default ;
    ListDataDomainsRequest(const ListDataDomainsRequest &) = default ;
    ListDataDomainsRequest(ListDataDomainsRequest &&) = default ;
    ListDataDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataDomainsRequest() = default ;
    ListDataDomainsRequest& operator=(const ListDataDomainsRequest &) = default ;
    ListDataDomainsRequest& operator=(ListDataDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitIdList, bizUnitIdList_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(ParentIdList, parentIdList_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitIdList, bizUnitIdList_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(ParentIdList, parentIdList_);
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
      virtual bool empty() const override { return this->bizUnitIdList_ == nullptr
        && this->keyword_ == nullptr && this->parentIdList_ == nullptr; };
      // bizUnitIdList Field Functions 
      bool hasBizUnitIdList() const { return this->bizUnitIdList_ != nullptr;};
      void deleteBizUnitIdList() { this->bizUnitIdList_ = nullptr;};
      inline const vector<int64_t> & getBizUnitIdList() const { DARABONBA_PTR_GET_CONST(bizUnitIdList_, vector<int64_t>) };
      inline vector<int64_t> getBizUnitIdList() { DARABONBA_PTR_GET(bizUnitIdList_, vector<int64_t>) };
      inline ListQuery& setBizUnitIdList(const vector<int64_t> & bizUnitIdList) { DARABONBA_PTR_SET_VALUE(bizUnitIdList_, bizUnitIdList) };
      inline ListQuery& setBizUnitIdList(vector<int64_t> && bizUnitIdList) { DARABONBA_PTR_SET_RVALUE(bizUnitIdList_, bizUnitIdList) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // parentIdList Field Functions 
      bool hasParentIdList() const { return this->parentIdList_ != nullptr;};
      void deleteParentIdList() { this->parentIdList_ = nullptr;};
      inline const vector<int64_t> & getParentIdList() const { DARABONBA_PTR_GET_CONST(parentIdList_, vector<int64_t>) };
      inline vector<int64_t> getParentIdList() { DARABONBA_PTR_GET(parentIdList_, vector<int64_t>) };
      inline ListQuery& setParentIdList(const vector<int64_t> & parentIdList) { DARABONBA_PTR_SET_VALUE(parentIdList_, parentIdList) };
      inline ListQuery& setParentIdList(vector<int64_t> && parentIdList) { DARABONBA_PTR_SET_RVALUE(parentIdList_, parentIdList) };


    protected:
      shared_ptr<vector<int64_t>> bizUnitIdList_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<vector<int64_t>> parentIdList_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListDataDomainsRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListDataDomainsRequest::ListQuery) };
    inline ListDataDomainsRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListDataDomainsRequest::ListQuery) };
    inline ListDataDomainsRequest& setListQuery(const ListDataDomainsRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListDataDomainsRequest& setListQuery(ListDataDomainsRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListDataDomainsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ListDataDomainsRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
