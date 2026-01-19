// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURESBYAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURESBYAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSignaturesByApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignaturesByApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Signatures, signatures_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignaturesByApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Signatures, signatures_);
    };
    DescribeSignaturesByApiResponseBody() = default ;
    DescribeSignaturesByApiResponseBody(const DescribeSignaturesByApiResponseBody &) = default ;
    DescribeSignaturesByApiResponseBody(DescribeSignaturesByApiResponseBody &&) = default ;
    DescribeSignaturesByApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignaturesByApiResponseBody() = default ;
    DescribeSignaturesByApiResponseBody& operator=(const DescribeSignaturesByApiResponseBody &) = default ;
    DescribeSignaturesByApiResponseBody& operator=(DescribeSignaturesByApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Signatures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Signatures& obj) { 
        DARABONBA_PTR_TO_JSON(SignatureItem, signatureItem_);
      };
      friend void from_json(const Darabonba::Json& j, Signatures& obj) { 
        DARABONBA_PTR_FROM_JSON(SignatureItem, signatureItem_);
      };
      Signatures() = default ;
      Signatures(const Signatures &) = default ;
      Signatures(Signatures &&) = default ;
      Signatures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Signatures() = default ;
      Signatures& operator=(const Signatures &) = default ;
      Signatures& operator=(Signatures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SignatureItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SignatureItem& obj) { 
          DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
          DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
        };
        friend void from_json(const Darabonba::Json& j, SignatureItem& obj) { 
          DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
          DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
        };
        SignatureItem() = default ;
        SignatureItem(const SignatureItem &) = default ;
        SignatureItem(SignatureItem &&) = default ;
        SignatureItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SignatureItem() = default ;
        SignatureItem& operator=(const SignatureItem &) = default ;
        SignatureItem& operator=(SignatureItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->boundTime_ == nullptr
        && this->signatureId_ == nullptr && this->signatureName_ == nullptr; };
        // boundTime Field Functions 
        bool hasBoundTime() const { return this->boundTime_ != nullptr;};
        void deleteBoundTime() { this->boundTime_ = nullptr;};
        inline string getBoundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
        inline SignatureItem& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


        // signatureId Field Functions 
        bool hasSignatureId() const { return this->signatureId_ != nullptr;};
        void deleteSignatureId() { this->signatureId_ = nullptr;};
        inline string getSignatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
        inline SignatureItem& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


        // signatureName Field Functions 
        bool hasSignatureName() const { return this->signatureName_ != nullptr;};
        void deleteSignatureName() { this->signatureName_ = nullptr;};
        inline string getSignatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
        inline SignatureItem& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


      protected:
        // The time when the key was bound.
        shared_ptr<string> boundTime_ {};
        // The ID of the backend signature key.
        shared_ptr<string> signatureId_ {};
        // The name of the backend signature key.
        shared_ptr<string> signatureName_ {};
      };

      virtual bool empty() const override { return this->signatureItem_ == nullptr; };
      // signatureItem Field Functions 
      bool hasSignatureItem() const { return this->signatureItem_ != nullptr;};
      void deleteSignatureItem() { this->signatureItem_ = nullptr;};
      inline const vector<Signatures::SignatureItem> & getSignatureItem() const { DARABONBA_PTR_GET_CONST(signatureItem_, vector<Signatures::SignatureItem>) };
      inline vector<Signatures::SignatureItem> getSignatureItem() { DARABONBA_PTR_GET(signatureItem_, vector<Signatures::SignatureItem>) };
      inline Signatures& setSignatureItem(const vector<Signatures::SignatureItem> & signatureItem) { DARABONBA_PTR_SET_VALUE(signatureItem_, signatureItem) };
      inline Signatures& setSignatureItem(vector<Signatures::SignatureItem> && signatureItem) { DARABONBA_PTR_SET_RVALUE(signatureItem_, signatureItem) };


    protected:
      shared_ptr<vector<Signatures::SignatureItem>> signatureItem_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->signatures_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSignaturesByApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signatures Field Functions 
    bool hasSignatures() const { return this->signatures_ != nullptr;};
    void deleteSignatures() { this->signatures_ = nullptr;};
    inline const DescribeSignaturesByApiResponseBody::Signatures & getSignatures() const { DARABONBA_PTR_GET_CONST(signatures_, DescribeSignaturesByApiResponseBody::Signatures) };
    inline DescribeSignaturesByApiResponseBody::Signatures getSignatures() { DARABONBA_PTR_GET(signatures_, DescribeSignaturesByApiResponseBody::Signatures) };
    inline DescribeSignaturesByApiResponseBody& setSignatures(const DescribeSignaturesByApiResponseBody::Signatures & signatures) { DARABONBA_PTR_SET_VALUE(signatures_, signatures) };
    inline DescribeSignaturesByApiResponseBody& setSignatures(DescribeSignaturesByApiResponseBody::Signatures && signatures) { DARABONBA_PTR_SET_RVALUE(signatures_, signatures) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned signature key information. It is an array consisting of SignatureItem data.
    shared_ptr<DescribeSignaturesByApiResponseBody::Signatures> signatures_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
