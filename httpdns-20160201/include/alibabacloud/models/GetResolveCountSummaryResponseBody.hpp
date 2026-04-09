// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOLVECOUNTSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOLVECOUNTSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class GetResolveCountSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResolveCountSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResolveSummary, resolveSummary_);
    };
    friend void from_json(const Darabonba::Json& j, GetResolveCountSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResolveSummary, resolveSummary_);
    };
    GetResolveCountSummaryResponseBody() = default ;
    GetResolveCountSummaryResponseBody(const GetResolveCountSummaryResponseBody &) = default ;
    GetResolveCountSummaryResponseBody(GetResolveCountSummaryResponseBody &&) = default ;
    GetResolveCountSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResolveCountSummaryResponseBody() = default ;
    GetResolveCountSummaryResponseBody& operator=(const GetResolveCountSummaryResponseBody &) = default ;
    GetResolveCountSummaryResponseBody& operator=(GetResolveCountSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResolveSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResolveSummary& obj) { 
        DARABONBA_PTR_TO_JSON(Doh, doh_);
        DARABONBA_PTR_TO_JSON(Http, http_);
        DARABONBA_PTR_TO_JSON(Http6, http6_);
        DARABONBA_PTR_TO_JSON(HttpAes, httpAes_);
        DARABONBA_PTR_TO_JSON(Https, https_);
        DARABONBA_PTR_TO_JSON(Https6, https6_);
        DARABONBA_PTR_TO_JSON(HttpsAes, httpsAes_);
      };
      friend void from_json(const Darabonba::Json& j, ResolveSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(Doh, doh_);
        DARABONBA_PTR_FROM_JSON(Http, http_);
        DARABONBA_PTR_FROM_JSON(Http6, http6_);
        DARABONBA_PTR_FROM_JSON(HttpAes, httpAes_);
        DARABONBA_PTR_FROM_JSON(Https, https_);
        DARABONBA_PTR_FROM_JSON(Https6, https6_);
        DARABONBA_PTR_FROM_JSON(HttpsAes, httpsAes_);
      };
      ResolveSummary() = default ;
      ResolveSummary(const ResolveSummary &) = default ;
      ResolveSummary(ResolveSummary &&) = default ;
      ResolveSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResolveSummary() = default ;
      ResolveSummary& operator=(const ResolveSummary &) = default ;
      ResolveSummary& operator=(ResolveSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->doh_ == nullptr
        && this->http_ == nullptr && this->http6_ == nullptr && this->httpAes_ == nullptr && this->https_ == nullptr && this->https6_ == nullptr
        && this->httpsAes_ == nullptr; };
      // doh Field Functions 
      bool hasDoh() const { return this->doh_ != nullptr;};
      void deleteDoh() { this->doh_ = nullptr;};
      inline int64_t getDoh() const { DARABONBA_PTR_GET_DEFAULT(doh_, 0L) };
      inline ResolveSummary& setDoh(int64_t doh) { DARABONBA_PTR_SET_VALUE(doh_, doh) };


      // http Field Functions 
      bool hasHttp() const { return this->http_ != nullptr;};
      void deleteHttp() { this->http_ = nullptr;};
      inline int64_t getHttp() const { DARABONBA_PTR_GET_DEFAULT(http_, 0L) };
      inline ResolveSummary& setHttp(int64_t http) { DARABONBA_PTR_SET_VALUE(http_, http) };


      // http6 Field Functions 
      bool hasHttp6() const { return this->http6_ != nullptr;};
      void deleteHttp6() { this->http6_ = nullptr;};
      inline int64_t getHttp6() const { DARABONBA_PTR_GET_DEFAULT(http6_, 0L) };
      inline ResolveSummary& setHttp6(int64_t http6) { DARABONBA_PTR_SET_VALUE(http6_, http6) };


      // httpAes Field Functions 
      bool hasHttpAes() const { return this->httpAes_ != nullptr;};
      void deleteHttpAes() { this->httpAes_ = nullptr;};
      inline string getHttpAes() const { DARABONBA_PTR_GET_DEFAULT(httpAes_, "") };
      inline ResolveSummary& setHttpAes(string httpAes) { DARABONBA_PTR_SET_VALUE(httpAes_, httpAes) };


      // https Field Functions 
      bool hasHttps() const { return this->https_ != nullptr;};
      void deleteHttps() { this->https_ = nullptr;};
      inline int64_t getHttps() const { DARABONBA_PTR_GET_DEFAULT(https_, 0L) };
      inline ResolveSummary& setHttps(int64_t https) { DARABONBA_PTR_SET_VALUE(https_, https) };


      // https6 Field Functions 
      bool hasHttps6() const { return this->https6_ != nullptr;};
      void deleteHttps6() { this->https6_ = nullptr;};
      inline int64_t getHttps6() const { DARABONBA_PTR_GET_DEFAULT(https6_, 0L) };
      inline ResolveSummary& setHttps6(int64_t https6) { DARABONBA_PTR_SET_VALUE(https6_, https6) };


      // httpsAes Field Functions 
      bool hasHttpsAes() const { return this->httpsAes_ != nullptr;};
      void deleteHttpsAes() { this->httpsAes_ = nullptr;};
      inline string getHttpsAes() const { DARABONBA_PTR_GET_DEFAULT(httpsAes_, "") };
      inline ResolveSummary& setHttpsAes(string httpsAes) { DARABONBA_PTR_SET_VALUE(httpsAes_, httpsAes) };


    protected:
      shared_ptr<int64_t> doh_ {};
      shared_ptr<int64_t> http_ {};
      shared_ptr<int64_t> http6_ {};
      shared_ptr<string> httpAes_ {};
      shared_ptr<int64_t> https_ {};
      shared_ptr<int64_t> https6_ {};
      shared_ptr<string> httpsAes_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resolveSummary_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResolveCountSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resolveSummary Field Functions 
    bool hasResolveSummary() const { return this->resolveSummary_ != nullptr;};
    void deleteResolveSummary() { this->resolveSummary_ = nullptr;};
    inline const GetResolveCountSummaryResponseBody::ResolveSummary & getResolveSummary() const { DARABONBA_PTR_GET_CONST(resolveSummary_, GetResolveCountSummaryResponseBody::ResolveSummary) };
    inline GetResolveCountSummaryResponseBody::ResolveSummary getResolveSummary() { DARABONBA_PTR_GET(resolveSummary_, GetResolveCountSummaryResponseBody::ResolveSummary) };
    inline GetResolveCountSummaryResponseBody& setResolveSummary(const GetResolveCountSummaryResponseBody::ResolveSummary & resolveSummary) { DARABONBA_PTR_SET_VALUE(resolveSummary_, resolveSummary) };
    inline GetResolveCountSummaryResponseBody& setResolveSummary(GetResolveCountSummaryResponseBody::ResolveSummary && resolveSummary) { DARABONBA_PTR_SET_RVALUE(resolveSummary_, resolveSummary) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetResolveCountSummaryResponseBody::ResolveSummary> resolveSummary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
