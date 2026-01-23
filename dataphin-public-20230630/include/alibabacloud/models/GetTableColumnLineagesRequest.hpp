// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGESREQUEST_HPP_
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
  class GetTableColumnLineagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableColumnLineagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterQuery, filterQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableColumnLineagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterQuery, filterQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    GetTableColumnLineagesRequest() = default ;
    GetTableColumnLineagesRequest(const GetTableColumnLineagesRequest &) = default ;
    GetTableColumnLineagesRequest(GetTableColumnLineagesRequest &&) = default ;
    GetTableColumnLineagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableColumnLineagesRequest() = default ;
    GetTableColumnLineagesRequest& operator=(const GetTableColumnLineagesRequest &) = default ;
    GetTableColumnLineagesRequest& operator=(GetTableColumnLineagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FilterQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterQuery& obj) { 
        DARABONBA_PTR_TO_JSON(NeedDownstream, needDownstream_);
        DARABONBA_PTR_TO_JSON(NeedNotExistObject, needNotExistObject_);
        DARABONBA_PTR_TO_JSON(NeedUpstream, needUpstream_);
        DARABONBA_PTR_TO_JSON(NodeEnv, nodeEnv_);
        DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
      };
      friend void from_json(const Darabonba::Json& j, FilterQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(NeedDownstream, needDownstream_);
        DARABONBA_PTR_FROM_JSON(NeedNotExistObject, needNotExistObject_);
        DARABONBA_PTR_FROM_JSON(NeedUpstream, needUpstream_);
        DARABONBA_PTR_FROM_JSON(NodeEnv, nodeEnv_);
        DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
      };
      FilterQuery() = default ;
      FilterQuery(const FilterQuery &) = default ;
      FilterQuery(FilterQuery &&) = default ;
      FilterQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilterQuery() = default ;
      FilterQuery& operator=(const FilterQuery &) = default ;
      FilterQuery& operator=(FilterQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->needDownstream_ == nullptr
        && this->needNotExistObject_ == nullptr && this->needUpstream_ == nullptr && this->nodeEnv_ == nullptr && this->nodeIdList_ == nullptr; };
      // needDownstream Field Functions 
      bool hasNeedDownstream() const { return this->needDownstream_ != nullptr;};
      void deleteNeedDownstream() { this->needDownstream_ = nullptr;};
      inline bool getNeedDownstream() const { DARABONBA_PTR_GET_DEFAULT(needDownstream_, false) };
      inline FilterQuery& setNeedDownstream(bool needDownstream) { DARABONBA_PTR_SET_VALUE(needDownstream_, needDownstream) };


      // needNotExistObject Field Functions 
      bool hasNeedNotExistObject() const { return this->needNotExistObject_ != nullptr;};
      void deleteNeedNotExistObject() { this->needNotExistObject_ = nullptr;};
      inline bool getNeedNotExistObject() const { DARABONBA_PTR_GET_DEFAULT(needNotExistObject_, false) };
      inline FilterQuery& setNeedNotExistObject(bool needNotExistObject) { DARABONBA_PTR_SET_VALUE(needNotExistObject_, needNotExistObject) };


      // needUpstream Field Functions 
      bool hasNeedUpstream() const { return this->needUpstream_ != nullptr;};
      void deleteNeedUpstream() { this->needUpstream_ = nullptr;};
      inline bool getNeedUpstream() const { DARABONBA_PTR_GET_DEFAULT(needUpstream_, false) };
      inline FilterQuery& setNeedUpstream(bool needUpstream) { DARABONBA_PTR_SET_VALUE(needUpstream_, needUpstream) };


      // nodeEnv Field Functions 
      bool hasNodeEnv() const { return this->nodeEnv_ != nullptr;};
      void deleteNodeEnv() { this->nodeEnv_ = nullptr;};
      inline string getNodeEnv() const { DARABONBA_PTR_GET_DEFAULT(nodeEnv_, "") };
      inline FilterQuery& setNodeEnv(string nodeEnv) { DARABONBA_PTR_SET_VALUE(nodeEnv_, nodeEnv) };


      // nodeIdList Field Functions 
      bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
      void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
      inline const vector<string> & getNodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<string>) };
      inline vector<string> getNodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<string>) };
      inline FilterQuery& setNodeIdList(const vector<string> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
      inline FilterQuery& setNodeIdList(vector<string> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


    protected:
      shared_ptr<bool> needDownstream_ {};
      shared_ptr<bool> needNotExistObject_ {};
      shared_ptr<bool> needUpstream_ {};
      shared_ptr<string> nodeEnv_ {};
      shared_ptr<vector<string>> nodeIdList_ {};
    };

    virtual bool empty() const override { return this->filterQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->tableGuid_ == nullptr; };
    // filterQuery Field Functions 
    bool hasFilterQuery() const { return this->filterQuery_ != nullptr;};
    void deleteFilterQuery() { this->filterQuery_ = nullptr;};
    inline const GetTableColumnLineagesRequest::FilterQuery & getFilterQuery() const { DARABONBA_PTR_GET_CONST(filterQuery_, GetTableColumnLineagesRequest::FilterQuery) };
    inline GetTableColumnLineagesRequest::FilterQuery getFilterQuery() { DARABONBA_PTR_GET(filterQuery_, GetTableColumnLineagesRequest::FilterQuery) };
    inline GetTableColumnLineagesRequest& setFilterQuery(const GetTableColumnLineagesRequest::FilterQuery & filterQuery) { DARABONBA_PTR_SET_VALUE(filterQuery_, filterQuery) };
    inline GetTableColumnLineagesRequest& setFilterQuery(GetTableColumnLineagesRequest::FilterQuery && filterQuery) { DARABONBA_PTR_SET_RVALUE(filterQuery_, filterQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetTableColumnLineagesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetTableColumnLineagesRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    shared_ptr<GetTableColumnLineagesRequest::FilterQuery> filterQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> tableGuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
