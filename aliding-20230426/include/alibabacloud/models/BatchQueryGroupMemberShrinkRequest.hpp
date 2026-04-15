// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYGROUPMEMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYGROUPMEMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchQueryGroupMemberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryGroupMemberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoolAppCode, coolAppCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryGroupMemberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoolAppCode, coolAppCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    BatchQueryGroupMemberShrinkRequest() = default ;
    BatchQueryGroupMemberShrinkRequest(const BatchQueryGroupMemberShrinkRequest &) = default ;
    BatchQueryGroupMemberShrinkRequest(BatchQueryGroupMemberShrinkRequest &&) = default ;
    BatchQueryGroupMemberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryGroupMemberShrinkRequest() = default ;
    BatchQueryGroupMemberShrinkRequest& operator=(const BatchQueryGroupMemberShrinkRequest &) = default ;
    BatchQueryGroupMemberShrinkRequest& operator=(BatchQueryGroupMemberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coolAppCode_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->openConversationId_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // coolAppCode Field Functions 
    bool hasCoolAppCode() const { return this->coolAppCode_ != nullptr;};
    void deleteCoolAppCode() { this->coolAppCode_ = nullptr;};
    inline string getCoolAppCode() const { DARABONBA_PTR_GET_DEFAULT(coolAppCode_, "") };
    inline BatchQueryGroupMemberShrinkRequest& setCoolAppCode(string coolAppCode) { DARABONBA_PTR_SET_VALUE(coolAppCode_, coolAppCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline BatchQueryGroupMemberShrinkRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline BatchQueryGroupMemberShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string getOpenConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline BatchQueryGroupMemberShrinkRequest& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline BatchQueryGroupMemberShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    shared_ptr<string> coolAppCode_ {};
    // This parameter is required.
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> openConversationId_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
