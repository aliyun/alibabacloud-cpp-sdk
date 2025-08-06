// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOBYROOMCODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOBYROOMCODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryConferenceInfoByRoomCodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceInfoByRoomCodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(roomCode, roomCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConferenceInfoByRoomCodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(roomCode, roomCode_);
    };
    QueryConferenceInfoByRoomCodeShrinkRequest() = default ;
    QueryConferenceInfoByRoomCodeShrinkRequest(const QueryConferenceInfoByRoomCodeShrinkRequest &) = default ;
    QueryConferenceInfoByRoomCodeShrinkRequest(QueryConferenceInfoByRoomCodeShrinkRequest &&) = default ;
    QueryConferenceInfoByRoomCodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceInfoByRoomCodeShrinkRequest() = default ;
    QueryConferenceInfoByRoomCodeShrinkRequest& operator=(const QueryConferenceInfoByRoomCodeShrinkRequest &) = default ;
    QueryConferenceInfoByRoomCodeShrinkRequest& operator=(QueryConferenceInfoByRoomCodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContextShrink_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->roomCode_ != nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline QueryConferenceInfoByRoomCodeShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryConferenceInfoByRoomCodeShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryConferenceInfoByRoomCodeShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // roomCode Field Functions 
    bool hasRoomCode() const { return this->roomCode_ != nullptr;};
    void deleteRoomCode() { this->roomCode_ = nullptr;};
    inline string roomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
    inline QueryConferenceInfoByRoomCodeShrinkRequest& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


  protected:
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
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
