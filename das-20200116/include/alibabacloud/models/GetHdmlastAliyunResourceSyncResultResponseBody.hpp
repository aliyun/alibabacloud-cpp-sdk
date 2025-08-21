// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHDMLASTALIYUNRESOURCESYNCRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHDMLASTALIYUNRESOURCESYNCRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHDMLastAliyunResourceSyncResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetHDMLastAliyunResourceSyncResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHDMLastAliyunResourceSyncResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, GetHDMLastAliyunResourceSyncResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    GetHDMLastAliyunResourceSyncResultResponseBody() = default ;
    GetHDMLastAliyunResourceSyncResultResponseBody(const GetHDMLastAliyunResourceSyncResultResponseBody &) = default ;
    GetHDMLastAliyunResourceSyncResultResponseBody(GetHDMLastAliyunResourceSyncResultResponseBody &&) = default ;
    GetHDMLastAliyunResourceSyncResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHDMLastAliyunResourceSyncResultResponseBody() = default ;
    GetHDMLastAliyunResourceSyncResultResponseBody& operator=(const GetHDMLastAliyunResourceSyncResultResponseBody &) = default ;
    GetHDMLastAliyunResourceSyncResultResponseBody& operator=(GetHDMLastAliyunResourceSyncResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->synchro_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHDMLastAliyunResourceSyncResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHDMLastAliyunResourceSyncResultResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetHDMLastAliyunResourceSyncResultResponseBodyData) };
    inline GetHDMLastAliyunResourceSyncResultResponseBodyData data() { DARABONBA_PTR_GET(data_, GetHDMLastAliyunResourceSyncResultResponseBodyData) };
    inline GetHDMLastAliyunResourceSyncResultResponseBody& setData(const GetHDMLastAliyunResourceSyncResultResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHDMLastAliyunResourceSyncResultResponseBody& setData(GetHDMLastAliyunResourceSyncResultResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHDMLastAliyunResourceSyncResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHDMLastAliyunResourceSyncResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetHDMLastAliyunResourceSyncResultResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline string synchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, "") };
    inline GetHDMLastAliyunResourceSyncResultResponseBody& setSynchro(string synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<GetHDMLastAliyunResourceSyncResultResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<string> synchro_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
