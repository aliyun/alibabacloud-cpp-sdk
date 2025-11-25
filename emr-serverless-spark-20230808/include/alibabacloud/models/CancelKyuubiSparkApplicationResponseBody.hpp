// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELKYUUBISPARKAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELKYUUBISPARKAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CancelKyuubiSparkApplicationResponseBodyBody.hpp>
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
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->requestId_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CancelKyuubiSparkApplicationResponseBodyBody & body() const { DARABONBA_PTR_GET_CONST(body_, CancelKyuubiSparkApplicationResponseBodyBody) };
    inline CancelKyuubiSparkApplicationResponseBodyBody body() { DARABONBA_PTR_GET(body_, CancelKyuubiSparkApplicationResponseBodyBody) };
    inline CancelKyuubiSparkApplicationResponseBody& setBody(const CancelKyuubiSparkApplicationResponseBodyBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CancelKyuubiSparkApplicationResponseBody& setBody(CancelKyuubiSparkApplicationResponseBodyBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelKyuubiSparkApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CancelKyuubiSparkApplicationResponseBodyBody> body_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
