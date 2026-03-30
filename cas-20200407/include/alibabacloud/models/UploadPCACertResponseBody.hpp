// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADPCACERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADPCACERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class UploadPCACertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadPCACertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadPCACertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UploadPCACertResponseBody() = default ;
    UploadPCACertResponseBody(const UploadPCACertResponseBody &) = default ;
    UploadPCACertResponseBody(UploadPCACertResponseBody &&) = default ;
    UploadPCACertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadPCACertResponseBody() = default ;
    UploadPCACertResponseBody& operator=(const UploadPCACertResponseBody &) = default ;
    UploadPCACertResponseBody& operator=(UploadPCACertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr
        && this->requestId_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline UploadPCACertResponseBody& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadPCACertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The unique identifier of the certificate.
    shared_ptr<string> identifier_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
