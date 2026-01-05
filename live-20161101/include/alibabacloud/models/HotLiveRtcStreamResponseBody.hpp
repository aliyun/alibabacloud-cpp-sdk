// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTLIVERTCSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTLIVERTCSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class HotLiveRtcStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotLiveRtcStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, HotLiveRtcStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    HotLiveRtcStreamResponseBody() = default ;
    HotLiveRtcStreamResponseBody(const HotLiveRtcStreamResponseBody &) = default ;
    HotLiveRtcStreamResponseBody(HotLiveRtcStreamResponseBody &&) = default ;
    HotLiveRtcStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotLiveRtcStreamResponseBody() = default ;
    HotLiveRtcStreamResponseBody& operator=(const HotLiveRtcStreamResponseBody &) = default ;
    HotLiveRtcStreamResponseBody& operator=(HotLiveRtcStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotLiveRtcStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
