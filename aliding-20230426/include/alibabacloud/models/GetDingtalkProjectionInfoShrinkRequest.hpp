// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKPROJECTIONINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKPROJECTIONINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDingtalkProjectionInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingtalkProjectionInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(client, client_);
      DARABONBA_PTR_TO_JSON(endTs, endTs_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(pubWorkNo, pubWorkNo_);
      DARABONBA_PTR_TO_JSON(roomId, roomId_);
      DARABONBA_PTR_TO_JSON(startTs, startTs_);
      DARABONBA_PTR_TO_JSON(subUid, subUid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingtalkProjectionInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(client, client_);
      DARABONBA_PTR_FROM_JSON(endTs, endTs_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(pubWorkNo, pubWorkNo_);
      DARABONBA_PTR_FROM_JSON(roomId, roomId_);
      DARABONBA_PTR_FROM_JSON(startTs, startTs_);
      DARABONBA_PTR_FROM_JSON(subUid, subUid_);
    };
    GetDingtalkProjectionInfoShrinkRequest() = default ;
    GetDingtalkProjectionInfoShrinkRequest(const GetDingtalkProjectionInfoShrinkRequest &) = default ;
    GetDingtalkProjectionInfoShrinkRequest(GetDingtalkProjectionInfoShrinkRequest &&) = default ;
    GetDingtalkProjectionInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingtalkProjectionInfoShrinkRequest() = default ;
    GetDingtalkProjectionInfoShrinkRequest& operator=(const GetDingtalkProjectionInfoShrinkRequest &) = default ;
    GetDingtalkProjectionInfoShrinkRequest& operator=(GetDingtalkProjectionInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->client_ == nullptr && this->endTs_ == nullptr && this->orgId_ == nullptr && this->pubWorkNo_ == nullptr && this->roomId_ == nullptr
        && this->startTs_ == nullptr && this->subUid_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetDingtalkProjectionInfoShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // client Field Functions 
    bool hasClient() const { return this->client_ != nullptr;};
    void deleteClient() { this->client_ = nullptr;};
    inline string getClient() const { DARABONBA_PTR_GET_DEFAULT(client_, "") };
    inline GetDingtalkProjectionInfoShrinkRequest& setClient(string client) { DARABONBA_PTR_SET_VALUE(client_, client) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t getEndTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline GetDingtalkProjectionInfoShrinkRequest& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline GetDingtalkProjectionInfoShrinkRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // pubWorkNo Field Functions 
    bool hasPubWorkNo() const { return this->pubWorkNo_ != nullptr;};
    void deletePubWorkNo() { this->pubWorkNo_ = nullptr;};
    inline string getPubWorkNo() const { DARABONBA_PTR_GET_DEFAULT(pubWorkNo_, "") };
    inline GetDingtalkProjectionInfoShrinkRequest& setPubWorkNo(string pubWorkNo) { DARABONBA_PTR_SET_VALUE(pubWorkNo_, pubWorkNo) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline GetDingtalkProjectionInfoShrinkRequest& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t getStartTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline GetDingtalkProjectionInfoShrinkRequest& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


    // subUid Field Functions 
    bool hasSubUid() const { return this->subUid_ != nullptr;};
    void deleteSubUid() { this->subUid_ = nullptr;};
    inline string getSubUid() const { DARABONBA_PTR_GET_DEFAULT(subUid_, "") };
    inline GetDingtalkProjectionInfoShrinkRequest& setSubUid(string subUid) { DARABONBA_PTR_SET_VALUE(subUid_, subUid) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<string> client_ {};
    shared_ptr<int64_t> endTs_ {};
    shared_ptr<string> orgId_ {};
    shared_ptr<string> pubWorkNo_ {};
    shared_ptr<string> roomId_ {};
    shared_ptr<int64_t> startTs_ {};
    shared_ptr<string> subUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
