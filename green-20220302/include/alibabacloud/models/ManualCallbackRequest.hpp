// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANUALCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANUALCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ManualCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManualCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(Checksum, checksum_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
    };
    friend void from_json(const Darabonba::Json& j, ManualCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(Checksum, checksum_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
    };
    ManualCallbackRequest() = default ;
    ManualCallbackRequest(const ManualCallbackRequest &) = default ;
    ManualCallbackRequest(ManualCallbackRequest &&) = default ;
    ManualCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManualCallbackRequest() = default ;
    ManualCallbackRequest& operator=(const ManualCallbackRequest &) = default ;
    ManualCallbackRequest& operator=(ManualCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && return this->checksum_ == nullptr && return this->code_ == nullptr && return this->data_ == nullptr && return this->msg_ == nullptr && return this->reqId_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ManualCallbackRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // checksum Field Functions 
    bool hasChecksum() const { return this->checksum_ != nullptr;};
    void deleteChecksum() { this->checksum_ = nullptr;};
    inline string checksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
    inline ManualCallbackRequest& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ManualCallbackRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ManualCallbackRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ManualCallbackRequest& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string reqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline ManualCallbackRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


  protected:
    // Channel field
    std::shared_ptr<string> channel_ = nullptr;
    // Checksum.
    std::shared_ptr<string> checksum_ = nullptr;
    // Code value
    std::shared_ptr<string> code_ = nullptr;
    // Returned data.
    std::shared_ptr<string> data_ = nullptr;
    // Message information
    std::shared_ptr<string> msg_ = nullptr;
    // Platform request ID, used for troubleshooting assistance
    std::shared_ptr<string> reqId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
