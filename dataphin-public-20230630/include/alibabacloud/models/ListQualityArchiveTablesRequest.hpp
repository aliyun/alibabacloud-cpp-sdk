// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYARCHIVETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYARCHIVETABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListQualityArchiveTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityArchiveTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityArchiveTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListQualityArchiveTablesRequest() = default ;
    ListQualityArchiveTablesRequest(const ListQualityArchiveTablesRequest &) = default ;
    ListQualityArchiveTablesRequest(ListQualityArchiveTablesRequest &&) = default ;
    ListQualityArchiveTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityArchiveTablesRequest() = default ;
    ListQualityArchiveTablesRequest& operator=(const ListQualityArchiveTablesRequest &) = default ;
    ListQualityArchiveTablesRequest& operator=(ListQualityArchiveTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
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
      virtual bool empty() const override { return this->watchId_ == nullptr; };
      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline ListQuery& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


    protected:
      // The ID of the monitored object.
      // 
      // This parameter is required.
      shared_ptr<int64_t> watchId_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListQualityArchiveTablesRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListQualityArchiveTablesRequest::ListQuery) };
    inline ListQualityArchiveTablesRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListQualityArchiveTablesRequest::ListQuery) };
    inline ListQualityArchiveTablesRequest& setListQuery(const ListQualityArchiveTablesRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListQualityArchiveTablesRequest& setListQuery(ListQualityArchiveTablesRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListQualityArchiveTablesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListQualityArchiveTablesRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The input parameters for querying the anomaly archived table list.
    // 
    // This parameter is required.
    shared_ptr<ListQualityArchiveTablesRequest::ListQuery> listQuery_ {};
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
