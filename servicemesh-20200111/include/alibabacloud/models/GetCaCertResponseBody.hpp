// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCACERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCACERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetCaCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCaCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CaCert, caCert_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCaCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCert, caCert_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCaCertResponseBody() = default ;
    GetCaCertResponseBody(const GetCaCertResponseBody &) = default ;
    GetCaCertResponseBody(GetCaCertResponseBody &&) = default ;
    GetCaCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCaCertResponseBody() = default ;
    GetCaCertResponseBody& operator=(const GetCaCertResponseBody &) = default ;
    GetCaCertResponseBody& operator=(GetCaCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caCert_ == nullptr
        && return this->requestId_ == nullptr; };
    // caCert Field Functions 
    bool hasCaCert() const { return this->caCert_ != nullptr;};
    void deleteCaCert() { this->caCert_ = nullptr;};
    inline string caCert() const { DARABONBA_PTR_GET_DEFAULT(caCert_, "") };
    inline GetCaCertResponseBody& setCaCert(string caCert) { DARABONBA_PTR_SET_VALUE(caCert_, caCert) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCaCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Base64-encoded content of the CA certificate.
    std::shared_ptr<string> caCert_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
