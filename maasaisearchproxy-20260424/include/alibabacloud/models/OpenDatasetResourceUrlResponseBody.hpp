// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENDATASETRESOURCEURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPENDATASETRESOURCEURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasAISearchProxy20260424
{
namespace Models
{
  class OpenDatasetResourceUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenDatasetResourceUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenDatasetResourceUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    OpenDatasetResourceUrlResponseBody() = default ;
    OpenDatasetResourceUrlResponseBody(const OpenDatasetResourceUrlResponseBody &) = default ;
    OpenDatasetResourceUrlResponseBody(OpenDatasetResourceUrlResponseBody &&) = default ;
    OpenDatasetResourceUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenDatasetResourceUrlResponseBody() = default ;
    OpenDatasetResourceUrlResponseBody& operator=(const OpenDatasetResourceUrlResponseBody &) = default ;
    OpenDatasetResourceUrlResponseBody& operator=(OpenDatasetResourceUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(url, url_);
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
      virtual bool empty() const override { return this->url_ == nullptr; };
      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline OpenDatasetResourceUrlResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OpenDatasetResourceUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OpenDatasetResourceUrlResponseBody::Data) };
    inline OpenDatasetResourceUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OpenDatasetResourceUrlResponseBody::Data) };
    inline OpenDatasetResourceUrlResponseBody& setData(const OpenDatasetResourceUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OpenDatasetResourceUrlResponseBody& setData(OpenDatasetResourceUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline OpenDatasetResourceUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OpenDatasetResourceUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<OpenDatasetResourceUrlResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasAISearchProxy20260424
#endif
