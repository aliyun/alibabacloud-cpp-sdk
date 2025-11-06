// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RTCSIPMUTERESPONSEBODYERRTRACKS_HPP_
#define ALIBABACLOUD_MODELS_RTCSIPMUTERESPONSEBODYERRTRACKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RtcSipMuteResponseBodyErrTracks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RtcSipMuteResponseBodyErrTracks& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
    };
    friend void from_json(const Darabonba::Json& j, RtcSipMuteResponseBodyErrTracks& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
    };
    RtcSipMuteResponseBodyErrTracks() = default ;
    RtcSipMuteResponseBodyErrTracks(const RtcSipMuteResponseBodyErrTracks &) = default ;
    RtcSipMuteResponseBodyErrTracks(RtcSipMuteResponseBodyErrTracks &&) = default ;
    RtcSipMuteResponseBodyErrTracks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RtcSipMuteResponseBodyErrTracks() = default ;
    RtcSipMuteResponseBodyErrTracks& operator=(const RtcSipMuteResponseBodyErrTracks &) = default ;
    RtcSipMuteResponseBodyErrTracks& operator=(RtcSipMuteResponseBodyErrTracks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errMsg_ == nullptr
        && return this->id_ == nullptr && return this->operationId_ == nullptr; };
    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline RtcSipMuteResponseBodyErrTracks& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RtcSipMuteResponseBodyErrTracks& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline RtcSipMuteResponseBodyErrTracks& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


  protected:
    // ErrMsg。
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    // OperationId。
    std::shared_ptr<string> operationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
