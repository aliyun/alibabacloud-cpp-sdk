// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTUNEPROPOSALBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTUNEPROPOSALBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetTuneProposalByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTuneProposalByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTuneProposalByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTuneProposalByIdResponseBody() = default ;
    GetTuneProposalByIdResponseBody(const GetTuneProposalByIdResponseBody &) = default ;
    GetTuneProposalByIdResponseBody(GetTuneProposalByIdResponseBody &&) = default ;
    GetTuneProposalByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTuneProposalByIdResponseBody() = default ;
    GetTuneProposalByIdResponseBody& operator=(const GetTuneProposalByIdResponseBody &) = default ;
    GetTuneProposalByIdResponseBody& operator=(GetTuneProposalByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(JsonContent, jsonContent_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(JsonContent, jsonContent_);
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
      virtual bool empty() const override { return this->jsonContent_ == nullptr; };
      // jsonContent Field Functions 
      bool hasJsonContent() const { return this->jsonContent_ != nullptr;};
      void deleteJsonContent() { this->jsonContent_ = nullptr;};
      inline string getJsonContent() const { DARABONBA_PTR_GET_DEFAULT(jsonContent_, "") };
      inline Data& setJsonContent(string jsonContent) { DARABONBA_PTR_SET_VALUE(jsonContent_, jsonContent) };


    protected:
      shared_ptr<string> jsonContent_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTuneProposalByIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTuneProposalByIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTuneProposalByIdResponseBody::Data) };
    inline GetTuneProposalByIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTuneProposalByIdResponseBody::Data) };
    inline GetTuneProposalByIdResponseBody& setData(const GetTuneProposalByIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTuneProposalByIdResponseBody& setData(GetTuneProposalByIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetTuneProposalByIdResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTuneProposalByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTuneProposalByIdResponseBody::Data> data_ {};
    shared_ptr<string> msg_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
