// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOBYROOMCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOBYROOMCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryConferenceInfoByRoomCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceInfoByRoomCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(roomCode, roomCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConferenceInfoByRoomCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(roomCode, roomCode_);
    };
    QueryConferenceInfoByRoomCodeRequest() = default ;
    QueryConferenceInfoByRoomCodeRequest(const QueryConferenceInfoByRoomCodeRequest &) = default ;
    QueryConferenceInfoByRoomCodeRequest(QueryConferenceInfoByRoomCodeRequest &&) = default ;
    QueryConferenceInfoByRoomCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceInfoByRoomCodeRequest() = default ;
    QueryConferenceInfoByRoomCodeRequest& operator=(const QueryConferenceInfoByRoomCodeRequest &) = default ;
    QueryConferenceInfoByRoomCodeRequest& operator=(QueryConferenceInfoByRoomCodeRequest &&) = default ;
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

    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->roomCode_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryConferenceInfoByRoomCodeRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryConferenceInfoByRoomCodeRequest::TenantContext) };
    inline QueryConferenceInfoByRoomCodeRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryConferenceInfoByRoomCodeRequest::TenantContext) };
    inline QueryConferenceInfoByRoomCodeRequest& setTenantContext(const QueryConferenceInfoByRoomCodeRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryConferenceInfoByRoomCodeRequest& setTenantContext(QueryConferenceInfoByRoomCodeRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryConferenceInfoByRoomCodeRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryConferenceInfoByRoomCodeRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // roomCode Field Functions 
    bool hasRoomCode() const { return this->roomCode_ != nullptr;};
    void deleteRoomCode() { this->roomCode_ = nullptr;};
    inline string getRoomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
    inline QueryConferenceInfoByRoomCodeRequest& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


  protected:
    shared_ptr<QueryConferenceInfoByRoomCodeRequest::TenantContext> tenantContext_ {};
    shared_ptr<int32_t> maxResults_ {};
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> roomCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
