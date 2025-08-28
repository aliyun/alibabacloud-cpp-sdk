// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLDETAILBYCALLIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLDETAILBYCALLIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallDetailByCallIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallDetailByCallIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProdId, prodId_);
      DARABONBA_PTR_TO_JSON(QueryDate, queryDate_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallDetailByCallIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProdId, prodId_);
      DARABONBA_PTR_FROM_JSON(QueryDate, queryDate_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    QueryCallDetailByCallIdRequest() = default ;
    QueryCallDetailByCallIdRequest(const QueryCallDetailByCallIdRequest &) = default ;
    QueryCallDetailByCallIdRequest(QueryCallDetailByCallIdRequest &&) = default ;
    QueryCallDetailByCallIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallDetailByCallIdRequest() = default ;
    QueryCallDetailByCallIdRequest& operator=(const QueryCallDetailByCallIdRequest &) = default ;
    QueryCallDetailByCallIdRequest& operator=(QueryCallDetailByCallIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callId_ != nullptr
        && this->ownerId_ != nullptr && this->prodId_ != nullptr && this->queryDate_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline QueryCallDetailByCallIdRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryCallDetailByCallIdRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prodId Field Functions 
    bool hasProdId() const { return this->prodId_ != nullptr;};
    void deleteProdId() { this->prodId_ = nullptr;};
    inline int64_t prodId() const { DARABONBA_PTR_GET_DEFAULT(prodId_, 0L) };
    inline QueryCallDetailByCallIdRequest& setProdId(int64_t prodId) { DARABONBA_PTR_SET_VALUE(prodId_, prodId) };


    // queryDate Field Functions 
    bool hasQueryDate() const { return this->queryDate_ != nullptr;};
    void deleteQueryDate() { this->queryDate_ = nullptr;};
    inline int64_t queryDate() const { DARABONBA_PTR_GET_DEFAULT(queryDate_, 0L) };
    inline QueryCallDetailByCallIdRequest& setQueryDate(int64_t queryDate) { DARABONBA_PTR_SET_VALUE(queryDate_, queryDate) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryCallDetailByCallIdRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryCallDetailByCallIdRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The unique ID of the call.
    // 
    // > 
    // 
    // *   The CallId parameter is included in the response parameters of the outbound call operation that you call to initiate a call.
    // 
    // *   The date when the call specified by CallId is started must be the same as the date specified by QueryDate.
    // 
    // *   The value of CallId must match the value of ProdId.
    // 
    // This parameter is required.
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The service ID. Valid values:
    // 
    // *   **11000000300006**: voice notification. You can call the [SingleCallByVoice](https://help.aliyun.com/document_detail/393517.html) operation to send a voice notification of the voice notification file type to the specified number.
    // *   **11010000138001**: voice verification code. You can call the [SingleCallByTts](https://help.aliyun.com/document_detail/393519.html) operation to send a voice verification code or a text-to-speech (TTS) voice notification to the specified number.
    // *   **11000000300005**: IVR. You can call the [IvrCall](https://help.aliyun.com/document_detail/393521.html) operation to initiate an interactive voice call to the specified number.
    // *   **11000000300009**: Session Initiation Protocol (SIP) call.
    // *   **11030000180001**: intelligent outbound call.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> prodId_ = nullptr;
    // The time at which call details are queried. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // > The system queries the call records that are generated within 24 hours after the specified point in time. For example, if you specify the time 20:00:01 on November 21, 2022, the system queries the call records that are generated for the specified call ID from 20:00:01 on November 21, 2022, to 20:00:01 on November 22, 2022.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> queryDate_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
