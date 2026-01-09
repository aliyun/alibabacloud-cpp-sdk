// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECORDURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECORDURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetRecordUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecordUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecordUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRecordUrlResponseBody() = default ;
    GetRecordUrlResponseBody(const GetRecordUrlResponseBody &) = default ;
    GetRecordUrlResponseBody(GetRecordUrlResponseBody &&) = default ;
    GetRecordUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecordUrlResponseBody() = default ;
    GetRecordUrlResponseBody& operator=(const GetRecordUrlResponseBody &) = default ;
    GetRecordUrlResponseBody& operator=(GetRecordUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Acid, acid_);
        DARABONBA_PTR_TO_JSON(OssLink, ossLink_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Acid, acid_);
        DARABONBA_PTR_FROM_JSON(OssLink, ossLink_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acid_ == nullptr
        && this->ossLink_ == nullptr; };
      // acid Field Functions 
      bool hasAcid() const { return this->acid_ != nullptr;};
      void deleteAcid() { this->acid_ = nullptr;};
      inline string getAcid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
      inline Data& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


      // ossLink Field Functions 
      bool hasOssLink() const { return this->ossLink_ != nullptr;};
      void deleteOssLink() { this->ossLink_ = nullptr;};
      inline string getOssLink() const { DARABONBA_PTR_GET_DEFAULT(ossLink_, "") };
      inline Data& setOssLink(string ossLink) { DARABONBA_PTR_SET_VALUE(ossLink_, ossLink) };


    protected:
      shared_ptr<string> acid_ {};
      shared_ptr<string> ossLink_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRecordUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRecordUrlResponseBody::Data) };
    inline GetRecordUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRecordUrlResponseBody::Data) };
    inline GetRecordUrlResponseBody& setData(const GetRecordUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRecordUrlResponseBody& setData(GetRecordUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRecordUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRecordUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRecordUrlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetRecordUrlResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
