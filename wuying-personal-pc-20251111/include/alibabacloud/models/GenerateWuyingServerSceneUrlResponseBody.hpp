// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEWUYINGSERVERSCENEURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEWUYINGSERVERSCENEURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class GenerateWuyingServerSceneUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateWuyingServerSceneUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireDurationHours, expireDurationHours_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateWuyingServerSceneUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireDurationHours, expireDurationHours_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GenerateWuyingServerSceneUrlResponseBody() = default ;
    GenerateWuyingServerSceneUrlResponseBody(const GenerateWuyingServerSceneUrlResponseBody &) = default ;
    GenerateWuyingServerSceneUrlResponseBody(GenerateWuyingServerSceneUrlResponseBody &&) = default ;
    GenerateWuyingServerSceneUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateWuyingServerSceneUrlResponseBody() = default ;
    GenerateWuyingServerSceneUrlResponseBody& operator=(const GenerateWuyingServerSceneUrlResponseBody &) = default ;
    GenerateWuyingServerSceneUrlResponseBody& operator=(GenerateWuyingServerSceneUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireDurationHours_ == nullptr
        && return this->expireTime_ == nullptr && return this->requestId_ == nullptr && return this->url_ == nullptr; };
    // expireDurationHours Field Functions 
    bool hasExpireDurationHours() const { return this->expireDurationHours_ != nullptr;};
    void deleteExpireDurationHours() { this->expireDurationHours_ = nullptr;};
    inline int32_t expireDurationHours() const { DARABONBA_PTR_GET_DEFAULT(expireDurationHours_, 0) };
    inline GenerateWuyingServerSceneUrlResponseBody& setExpireDurationHours(int32_t expireDurationHours) { DARABONBA_PTR_SET_VALUE(expireDurationHours_, expireDurationHours) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GenerateWuyingServerSceneUrlResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateWuyingServerSceneUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GenerateWuyingServerSceneUrlResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int32_t> expireDurationHours_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
