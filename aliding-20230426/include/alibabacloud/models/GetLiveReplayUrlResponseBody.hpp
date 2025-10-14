// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEREPLAYURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEREPLAYURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetLiveReplayUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveReplayUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(replayUrl, replayUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveReplayUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(replayUrl, replayUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetLiveReplayUrlResponseBody() = default ;
    GetLiveReplayUrlResponseBody(const GetLiveReplayUrlResponseBody &) = default ;
    GetLiveReplayUrlResponseBody(GetLiveReplayUrlResponseBody &&) = default ;
    GetLiveReplayUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveReplayUrlResponseBody() = default ;
    GetLiveReplayUrlResponseBody& operator=(const GetLiveReplayUrlResponseBody &) = default ;
    GetLiveReplayUrlResponseBody& operator=(GetLiveReplayUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->replayUrl_ == nullptr
        && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // replayUrl Field Functions 
    bool hasReplayUrl() const { return this->replayUrl_ != nullptr;};
    void deleteReplayUrl() { this->replayUrl_ = nullptr;};
    inline string replayUrl() const { DARABONBA_PTR_GET_DEFAULT(replayUrl_, "") };
    inline GetLiveReplayUrlResponseBody& setReplayUrl(string replayUrl) { DARABONBA_PTR_SET_VALUE(replayUrl_, replayUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveReplayUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetLiveReplayUrlResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetLiveReplayUrlResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> replayUrl_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
