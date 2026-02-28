// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RTCSIPMUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RTCSIPMUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ErrTracks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrTracks& obj) { 
        DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      };
      friend void from_json(const Darabonba::Json& j, ErrTracks& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      };
      ErrTracks() = default ;
      ErrTracks(const ErrTracks &) = default ;
      ErrTracks(ErrTracks &&) = default ;
      ErrTracks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrTracks() = default ;
      ErrTracks& operator=(const ErrTracks &) = default ;
      ErrTracks& operator=(ErrTracks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errMsg_ == nullptr
        && this->id_ == nullptr && this->operationId_ == nullptr; };
      // errMsg Field Functions 
      bool hasErrMsg() const { return this->errMsg_ != nullptr;};
      void deleteErrMsg() { this->errMsg_ = nullptr;};
      inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
      inline ErrTracks& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ErrTracks& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline ErrTracks& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    protected:
      // ErrMsg。
      shared_ptr<string> errMsg_ {};
      shared_ptr<string> id_ {};
      // OperationId。
      shared_ptr<string> operationId_ {};
    };

    virtual bool empty() const override { return this->errTracks_ == nullptr
        && this->requestId_ == nullptr; };
    // errTracks Field Functions 
    bool hasErrTracks() const { return this->errTracks_ != nullptr;};
    void deleteErrTracks() { this->errTracks_ = nullptr;};
    inline const vector<RtcSipMuteResponseBody::ErrTracks> & getErrTracks() const { DARABONBA_PTR_GET_CONST(errTracks_, vector<RtcSipMuteResponseBody::ErrTracks>) };
    inline vector<RtcSipMuteResponseBody::ErrTracks> getErrTracks() { DARABONBA_PTR_GET(errTracks_, vector<RtcSipMuteResponseBody::ErrTracks>) };
    inline RtcSipMuteResponseBody& setErrTracks(const vector<RtcSipMuteResponseBody::ErrTracks> & errTracks) { DARABONBA_PTR_SET_VALUE(errTracks_, errTracks) };
    inline RtcSipMuteResponseBody& setErrTracks(vector<RtcSipMuteResponseBody::ErrTracks> && errTracks) { DARABONBA_PTR_SET_RVALUE(errTracks_, errTracks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RtcSipMuteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<RtcSipMuteResponseBody::ErrTracks>> errTracks_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
