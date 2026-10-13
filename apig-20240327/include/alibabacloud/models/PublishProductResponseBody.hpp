// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class PublishProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PublishProductResponseBody() = default ;
    PublishProductResponseBody(const PublishProductResponseBody &) = default ;
    PublishProductResponseBody(PublishProductResponseBody &&) = default ;
    PublishProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishProductResponseBody() = default ;
    PublishProductResponseBody& operator=(const PublishProductResponseBody &) = default ;
    PublishProductResponseBody& operator=(PublishProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(publicationId, publicationId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(publicationId, publicationId_);
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
      virtual bool empty() const override { return this->publicationId_ == nullptr; };
      // publicationId Field Functions 
      bool hasPublicationId() const { return this->publicationId_ != nullptr;};
      void deletePublicationId() { this->publicationId_ = nullptr;};
      inline string getPublicationId() const { DARABONBA_PTR_GET_DEFAULT(publicationId_, "") };
      inline Data& setPublicationId(string publicationId) { DARABONBA_PTR_SET_VALUE(publicationId_, publicationId) };


    protected:
      // The publication record ID, which identifies the publication relationship between the published API product and the target portal. You can query this ID in the response of ListProductPublications at /himarket/v1/products/{productId}/publications. You can also use this ID as the publicationId path parameter in UnpublishProduct to unpublish the record.
      shared_ptr<string> publicationId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PublishProductResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PublishProductResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PublishProductResponseBody::Data) };
    inline PublishProductResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PublishProductResponseBody::Data) };
    inline PublishProductResponseBody& setData(const PublishProductResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PublishProductResponseBody& setData(PublishProductResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PublishProductResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublishProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<PublishProductResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
