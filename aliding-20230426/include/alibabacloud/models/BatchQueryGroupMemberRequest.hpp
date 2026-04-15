// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchQueryGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoolAppCode, coolAppCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoolAppCode, coolAppCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    BatchQueryGroupMemberRequest() = default ;
    BatchQueryGroupMemberRequest(const BatchQueryGroupMemberRequest &) = default ;
    BatchQueryGroupMemberRequest(BatchQueryGroupMemberRequest &&) = default ;
    BatchQueryGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryGroupMemberRequest() = default ;
    BatchQueryGroupMemberRequest& operator=(const BatchQueryGroupMemberRequest &) = default ;
    BatchQueryGroupMemberRequest& operator=(BatchQueryGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->coolAppCode_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->openConversationId_ == nullptr && this->tenantContext_ == nullptr; };
    // coolAppCode Field Functions 
    bool hasCoolAppCode() const { return this->coolAppCode_ != nullptr;};
    void deleteCoolAppCode() { this->coolAppCode_ = nullptr;};
    inline string getCoolAppCode() const { DARABONBA_PTR_GET_DEFAULT(coolAppCode_, "") };
    inline BatchQueryGroupMemberRequest& setCoolAppCode(string coolAppCode) { DARABONBA_PTR_SET_VALUE(coolAppCode_, coolAppCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline BatchQueryGroupMemberRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline BatchQueryGroupMemberRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string getOpenConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline BatchQueryGroupMemberRequest& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const BatchQueryGroupMemberRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, BatchQueryGroupMemberRequest::TenantContext) };
    inline BatchQueryGroupMemberRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, BatchQueryGroupMemberRequest::TenantContext) };
    inline BatchQueryGroupMemberRequest& setTenantContext(const BatchQueryGroupMemberRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline BatchQueryGroupMemberRequest& setTenantContext(BatchQueryGroupMemberRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<string> coolAppCode_ {};
    // This parameter is required.
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> openConversationId_ {};
    shared_ptr<BatchQueryGroupMemberRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
