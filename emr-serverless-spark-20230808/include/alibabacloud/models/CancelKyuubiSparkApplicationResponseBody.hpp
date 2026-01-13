// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELKYUUBISPARKAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELKYUUBISPARKAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CancelKyuubiSparkApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelKyuubiSparkApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelKyuubiSparkApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CancelKyuubiSparkApplicationResponseBody() = default ;
    CancelKyuubiSparkApplicationResponseBody(const CancelKyuubiSparkApplicationResponseBody &) = default ;
    CancelKyuubiSparkApplicationResponseBody(CancelKyuubiSparkApplicationResponseBody &&) = default ;
    CancelKyuubiSparkApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelKyuubiSparkApplicationResponseBody() = default ;
    CancelKyuubiSparkApplicationResponseBody& operator=(const CancelKyuubiSparkApplicationResponseBody &) = default ;
    CancelKyuubiSparkApplicationResponseBody& operator=(CancelKyuubiSparkApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(applicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(applicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(success, success_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->success_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Body& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Body& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> applicationId_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->requestId_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CancelKyuubiSparkApplicationResponseBody::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CancelKyuubiSparkApplicationResponseBody::Body) };
    inline CancelKyuubiSparkApplicationResponseBody::Body getBody() { DARABONBA_PTR_GET(body_, CancelKyuubiSparkApplicationResponseBody::Body) };
    inline CancelKyuubiSparkApplicationResponseBody& setBody(const CancelKyuubiSparkApplicationResponseBody::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CancelKyuubiSparkApplicationResponseBody& setBody(CancelKyuubiSparkApplicationResponseBody::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelKyuubiSparkApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CancelKyuubiSparkApplicationResponseBody::Body> body_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
