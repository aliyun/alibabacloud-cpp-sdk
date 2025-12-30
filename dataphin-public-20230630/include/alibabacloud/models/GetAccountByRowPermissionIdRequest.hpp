// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDREQUEST_HPP_
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
  class GetAccountByRowPermissionIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountByRowPermissionIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GetAccountByRowPermissionIdQuery, getAccountByRowPermissionIdQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountByRowPermissionIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GetAccountByRowPermissionIdQuery, getAccountByRowPermissionIdQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetAccountByRowPermissionIdRequest() = default ;
    GetAccountByRowPermissionIdRequest(const GetAccountByRowPermissionIdRequest &) = default ;
    GetAccountByRowPermissionIdRequest(GetAccountByRowPermissionIdRequest &&) = default ;
    GetAccountByRowPermissionIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountByRowPermissionIdRequest() = default ;
    GetAccountByRowPermissionIdRequest& operator=(const GetAccountByRowPermissionIdRequest &) = default ;
    GetAccountByRowPermissionIdRequest& operator=(GetAccountByRowPermissionIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GetAccountByRowPermissionIdQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GetAccountByRowPermissionIdQuery& obj) { 
        DARABONBA_PTR_TO_JSON(RowPermissionId, rowPermissionId_);
        DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      };
      friend void from_json(const Darabonba::Json& j, GetAccountByRowPermissionIdQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(RowPermissionId, rowPermissionId_);
        DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      };
      GetAccountByRowPermissionIdQuery() = default ;
      GetAccountByRowPermissionIdQuery(const GetAccountByRowPermissionIdQuery &) = default ;
      GetAccountByRowPermissionIdQuery(GetAccountByRowPermissionIdQuery &&) = default ;
      GetAccountByRowPermissionIdQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GetAccountByRowPermissionIdQuery() = default ;
      GetAccountByRowPermissionIdQuery& operator=(const GetAccountByRowPermissionIdQuery &) = default ;
      GetAccountByRowPermissionIdQuery& operator=(GetAccountByRowPermissionIdQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->rowPermissionId_ == nullptr
        && this->ruleIds_ == nullptr; };
      // rowPermissionId Field Functions 
      bool hasRowPermissionId() const { return this->rowPermissionId_ != nullptr;};
      void deleteRowPermissionId() { this->rowPermissionId_ = nullptr;};
      inline int64_t getRowPermissionId() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionId_, 0L) };
      inline GetAccountByRowPermissionIdQuery& setRowPermissionId(int64_t rowPermissionId) { DARABONBA_PTR_SET_VALUE(rowPermissionId_, rowPermissionId) };


      // ruleIds Field Functions 
      bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
      void deleteRuleIds() { this->ruleIds_ = nullptr;};
      inline const vector<int64_t> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<int64_t>) };
      inline vector<int64_t> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<int64_t>) };
      inline GetAccountByRowPermissionIdQuery& setRuleIds(const vector<int64_t> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
      inline GetAccountByRowPermissionIdQuery& setRuleIds(vector<int64_t> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> rowPermissionId_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> ruleIds_ {};
    };

    virtual bool empty() const override { return this->getAccountByRowPermissionIdQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // getAccountByRowPermissionIdQuery Field Functions 
    bool hasGetAccountByRowPermissionIdQuery() const { return this->getAccountByRowPermissionIdQuery_ != nullptr;};
    void deleteGetAccountByRowPermissionIdQuery() { this->getAccountByRowPermissionIdQuery_ = nullptr;};
    inline const GetAccountByRowPermissionIdRequest::GetAccountByRowPermissionIdQuery & getGetAccountByRowPermissionIdQuery() const { DARABONBA_PTR_GET_CONST(getAccountByRowPermissionIdQuery_, GetAccountByRowPermissionIdRequest::GetAccountByRowPermissionIdQuery) };
    inline GetAccountByRowPermissionIdRequest::GetAccountByRowPermissionIdQuery getGetAccountByRowPermissionIdQuery() { DARABONBA_PTR_GET(getAccountByRowPermissionIdQuery_, GetAccountByRowPermissionIdRequest::GetAccountByRowPermissionIdQuery) };
    inline GetAccountByRowPermissionIdRequest& setGetAccountByRowPermissionIdQuery(const GetAccountByRowPermissionIdRequest::GetAccountByRowPermissionIdQuery & getAccountByRowPermissionIdQuery) { DARABONBA_PTR_SET_VALUE(getAccountByRowPermissionIdQuery_, getAccountByRowPermissionIdQuery) };
    inline GetAccountByRowPermissionIdRequest& setGetAccountByRowPermissionIdQuery(GetAccountByRowPermissionIdRequest::GetAccountByRowPermissionIdQuery && getAccountByRowPermissionIdQuery) { DARABONBA_PTR_SET_RVALUE(getAccountByRowPermissionIdQuery_, getAccountByRowPermissionIdQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetAccountByRowPermissionIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<GetAccountByRowPermissionIdRequest::GetAccountByRowPermissionIdQuery> getAccountByRowPermissionIdQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
