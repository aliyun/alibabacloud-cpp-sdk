// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RTCSIPMUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RTCSIPMUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RtcSipMuteResponseBodyErrTracks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RtcSipMuteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RtcSipMuteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrTracks, errTracks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RtcSipMuteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrTracks, errTracks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RtcSipMuteResponseBody() = default ;
    RtcSipMuteResponseBody(const RtcSipMuteResponseBody &) = default ;
    RtcSipMuteResponseBody(RtcSipMuteResponseBody &&) = default ;
    RtcSipMuteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RtcSipMuteResponseBody() = default ;
    RtcSipMuteResponseBody& operator=(const RtcSipMuteResponseBody &) = default ;
    RtcSipMuteResponseBody& operator=(RtcSipMuteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errTracks_ == nullptr
        && return this->requestId_ == nullptr; };
    // errTracks Field Functions 
    bool hasErrTracks() const { return this->errTracks_ != nullptr;};
    void deleteErrTracks() { this->errTracks_ = nullptr;};
    inline const vector<RtcSipMuteResponseBodyErrTracks> & errTracks() const { DARABONBA_PTR_GET_CONST(errTracks_, vector<RtcSipMuteResponseBodyErrTracks>) };
    inline vector<RtcSipMuteResponseBodyErrTracks> errTracks() { DARABONBA_PTR_GET(errTracks_, vector<RtcSipMuteResponseBodyErrTracks>) };
    inline RtcSipMuteResponseBody& setErrTracks(const vector<RtcSipMuteResponseBodyErrTracks> & errTracks) { DARABONBA_PTR_SET_VALUE(errTracks_, errTracks) };
    inline RtcSipMuteResponseBody& setErrTracks(vector<RtcSipMuteResponseBodyErrTracks> && errTracks) { DARABONBA_PTR_SET_RVALUE(errTracks_, errTracks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RtcSipMuteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<RtcSipMuteResponseBodyErrTracks>> errTracks_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
