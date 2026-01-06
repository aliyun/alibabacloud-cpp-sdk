// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
    };
    QueryCloudRecordTextRequest() = default ;
    QueryCloudRecordTextRequest(const QueryCloudRecordTextRequest &) = default ;
    QueryCloudRecordTextRequest(QueryCloudRecordTextRequest &&) = default ;
    QueryCloudRecordTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordTextRequest() = default ;
    QueryCloudRecordTextRequest& operator=(const QueryCloudRecordTextRequest &) = default ;
    QueryCloudRecordTextRequest& operator=(QueryCloudRecordTextRequest &&) = default ;
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

    virtual bool empty() const override { return this->direction_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->startTime_ == nullptr && this->tenantContext_ == nullptr && this->conferenceId_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline QueryCloudRecordTextRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline QueryCloudRecordTextRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline int64_t getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, 0L) };
    inline QueryCloudRecordTextRequest& setNextToken(int64_t nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryCloudRecordTextRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryCloudRecordTextRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryCloudRecordTextRequest::TenantContext) };
    inline QueryCloudRecordTextRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryCloudRecordTextRequest::TenantContext) };
    inline QueryCloudRecordTextRequest& setTenantContext(const QueryCloudRecordTextRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryCloudRecordTextRequest& setTenantContext(QueryCloudRecordTextRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryCloudRecordTextRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    shared_ptr<string> direction_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<int64_t> nextToken_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<QueryCloudRecordTextRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
