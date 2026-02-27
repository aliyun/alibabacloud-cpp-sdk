// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROWPERMISSIONBYTABLEGUIDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETROWPERMISSIONBYTABLEGUIDSREQUEST_HPP_
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
  class GetRowPermissionByTableGuidsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRowPermissionByTableGuidsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GetRowPermissionByTableGuidsQuery, getRowPermissionByTableGuidsQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRowPermissionByTableGuidsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GetRowPermissionByTableGuidsQuery, getRowPermissionByTableGuidsQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetRowPermissionByTableGuidsRequest() = default ;
    GetRowPermissionByTableGuidsRequest(const GetRowPermissionByTableGuidsRequest &) = default ;
    GetRowPermissionByTableGuidsRequest(GetRowPermissionByTableGuidsRequest &&) = default ;
    GetRowPermissionByTableGuidsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRowPermissionByTableGuidsRequest() = default ;
    GetRowPermissionByTableGuidsRequest& operator=(const GetRowPermissionByTableGuidsRequest &) = default ;
    GetRowPermissionByTableGuidsRequest& operator=(GetRowPermissionByTableGuidsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GetRowPermissionByTableGuidsQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GetRowPermissionByTableGuidsQuery& obj) { 
        DARABONBA_PTR_TO_JSON(TableGuids, tableGuids_);
      };
      friend void from_json(const Darabonba::Json& j, GetRowPermissionByTableGuidsQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(TableGuids, tableGuids_);
      };
      GetRowPermissionByTableGuidsQuery() = default ;
      GetRowPermissionByTableGuidsQuery(const GetRowPermissionByTableGuidsQuery &) = default ;
      GetRowPermissionByTableGuidsQuery(GetRowPermissionByTableGuidsQuery &&) = default ;
      GetRowPermissionByTableGuidsQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GetRowPermissionByTableGuidsQuery() = default ;
      GetRowPermissionByTableGuidsQuery& operator=(const GetRowPermissionByTableGuidsQuery &) = default ;
      GetRowPermissionByTableGuidsQuery& operator=(GetRowPermissionByTableGuidsQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tableGuids_ == nullptr; };
      // tableGuids Field Functions 
      bool hasTableGuids() const { return this->tableGuids_ != nullptr;};
      void deleteTableGuids() { this->tableGuids_ = nullptr;};
      inline const vector<string> & getTableGuids() const { DARABONBA_PTR_GET_CONST(tableGuids_, vector<string>) };
      inline vector<string> getTableGuids() { DARABONBA_PTR_GET(tableGuids_, vector<string>) };
      inline GetRowPermissionByTableGuidsQuery& setTableGuids(const vector<string> & tableGuids) { DARABONBA_PTR_SET_VALUE(tableGuids_, tableGuids) };
      inline GetRowPermissionByTableGuidsQuery& setTableGuids(vector<string> && tableGuids) { DARABONBA_PTR_SET_RVALUE(tableGuids_, tableGuids) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> tableGuids_ {};
    };

    virtual bool empty() const override { return this->getRowPermissionByTableGuidsQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // getRowPermissionByTableGuidsQuery Field Functions 
    bool hasGetRowPermissionByTableGuidsQuery() const { return this->getRowPermissionByTableGuidsQuery_ != nullptr;};
    void deleteGetRowPermissionByTableGuidsQuery() { this->getRowPermissionByTableGuidsQuery_ = nullptr;};
    inline const GetRowPermissionByTableGuidsRequest::GetRowPermissionByTableGuidsQuery & getGetRowPermissionByTableGuidsQuery() const { DARABONBA_PTR_GET_CONST(getRowPermissionByTableGuidsQuery_, GetRowPermissionByTableGuidsRequest::GetRowPermissionByTableGuidsQuery) };
    inline GetRowPermissionByTableGuidsRequest::GetRowPermissionByTableGuidsQuery getGetRowPermissionByTableGuidsQuery() { DARABONBA_PTR_GET(getRowPermissionByTableGuidsQuery_, GetRowPermissionByTableGuidsRequest::GetRowPermissionByTableGuidsQuery) };
    inline GetRowPermissionByTableGuidsRequest& setGetRowPermissionByTableGuidsQuery(const GetRowPermissionByTableGuidsRequest::GetRowPermissionByTableGuidsQuery & getRowPermissionByTableGuidsQuery) { DARABONBA_PTR_SET_VALUE(getRowPermissionByTableGuidsQuery_, getRowPermissionByTableGuidsQuery) };
    inline GetRowPermissionByTableGuidsRequest& setGetRowPermissionByTableGuidsQuery(GetRowPermissionByTableGuidsRequest::GetRowPermissionByTableGuidsQuery && getRowPermissionByTableGuidsQuery) { DARABONBA_PTR_SET_RVALUE(getRowPermissionByTableGuidsQuery_, getRowPermissionByTableGuidsQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetRowPermissionByTableGuidsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<GetRowPermissionByTableGuidsRequest::GetRowPermissionByTableGuidsQuery> getRowPermissionByTableGuidsQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
