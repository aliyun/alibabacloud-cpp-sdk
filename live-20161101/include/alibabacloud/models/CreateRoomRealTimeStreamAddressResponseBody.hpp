// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROOMREALTIMESTREAMADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROOMREALTIMESTREAMADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateRoomRealTimeStreamAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoomRealTimeStreamAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RtmpAddress, rtmpAddress_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoomRealTimeStreamAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RtmpAddress, rtmpAddress_);
    };
    CreateRoomRealTimeStreamAddressResponseBody() = default ;
    CreateRoomRealTimeStreamAddressResponseBody(const CreateRoomRealTimeStreamAddressResponseBody &) = default ;
    CreateRoomRealTimeStreamAddressResponseBody(CreateRoomRealTimeStreamAddressResponseBody &&) = default ;
    CreateRoomRealTimeStreamAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoomRealTimeStreamAddressResponseBody() = default ;
    CreateRoomRealTimeStreamAddressResponseBody& operator=(const CreateRoomRealTimeStreamAddressResponseBody &) = default ;
    CreateRoomRealTimeStreamAddressResponseBody& operator=(CreateRoomRealTimeStreamAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rtmpAddress_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRoomRealTimeStreamAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rtmpAddress Field Functions 
    bool hasRtmpAddress() const { return this->rtmpAddress_ != nullptr;};
    void deleteRtmpAddress() { this->rtmpAddress_ = nullptr;};
    inline string getRtmpAddress() const { DARABONBA_PTR_GET_DEFAULT(rtmpAddress_, "") };
    inline CreateRoomRealTimeStreamAddressResponseBody& setRtmpAddress(string rtmpAddress) { DARABONBA_PTR_SET_VALUE(rtmpAddress_, rtmpAddress) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The RTMP ingest URL.
    shared_ptr<string> rtmpAddress_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
