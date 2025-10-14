// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOBYROOMCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOBYROOMCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryConferenceInfoByRoomCodeRequestTenantContext.hpp>
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
    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->roomCode_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryConferenceInfoByRoomCodeRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryConferenceInfoByRoomCodeRequestTenantContext) };
    inline QueryConferenceInfoByRoomCodeRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryConferenceInfoByRoomCodeRequestTenantContext) };
    inline QueryConferenceInfoByRoomCodeRequest& setTenantContext(const QueryConferenceInfoByRoomCodeRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryConferenceInfoByRoomCodeRequest& setTenantContext(QueryConferenceInfoByRoomCodeRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryConferenceInfoByRoomCodeRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryConferenceInfoByRoomCodeRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // roomCode Field Functions 
    bool hasRoomCode() const { return this->roomCode_ != nullptr;};
    void deleteRoomCode() { this->roomCode_ = nullptr;};
    inline string roomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
    inline QueryConferenceInfoByRoomCodeRequest& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


  protected:
    std::shared_ptr<QueryConferenceInfoByRoomCodeRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> roomCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
