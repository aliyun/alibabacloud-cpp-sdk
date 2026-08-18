// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRACESITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRACESITEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class TraceSiteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TraceSiteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(Cookies, cookies_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, TraceSiteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(Cookies, cookies_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    TraceSiteRequest() = default ;
    TraceSiteRequest(const TraceSiteRequest &) = default ;
    TraceSiteRequest(TraceSiteRequest &&) = default ;
    TraceSiteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TraceSiteRequest() = default ;
    TraceSiteRequest& operator=(const TraceSiteRequest &) = default ;
    TraceSiteRequest& operator=(TraceSiteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Headers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Headers& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The HTTP request header name.
      shared_ptr<string> name_ {};
      // The HTTP request header value.
      shared_ptr<string> value_ {};
    };

    class Cookies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cookies& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Cookies& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Cookies() = default ;
      Cookies(const Cookies &) = default ;
      Cookies(Cookies &&) = default ;
      Cookies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cookies() = default ;
      Cookies& operator=(const Cookies &) = default ;
      Cookies& operator=(Cookies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Cookies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Cookies& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The cookie name.
      shared_ptr<string> name_ {};
      // The cookie value.
      shared_ptr<string> value_ {};
    };

    class Context : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Context& obj) { 
        DARABONBA_PTR_TO_JSON(GeoLocation, geoLocation_);
        DARABONBA_PTR_TO_JSON(SkipChallenge, skipChallenge_);
      };
      friend void from_json(const Darabonba::Json& j, Context& obj) { 
        DARABONBA_PTR_FROM_JSON(GeoLocation, geoLocation_);
        DARABONBA_PTR_FROM_JSON(SkipChallenge, skipChallenge_);
      };
      Context() = default ;
      Context(const Context &) = default ;
      Context(Context &&) = default ;
      Context(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Context() = default ;
      Context& operator=(const Context &) = default ;
      Context& operator=(Context &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GeoLocation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GeoLocation& obj) { 
          DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
          DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
        };
        friend void from_json(const Darabonba::Json& j, GeoLocation& obj) { 
          DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
          DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
        };
        GeoLocation() = default ;
        GeoLocation(const GeoLocation &) = default ;
        GeoLocation(GeoLocation &&) = default ;
        GeoLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GeoLocation() = default ;
        GeoLocation& operator=(const GeoLocation &) = default ;
        GeoLocation& operator=(GeoLocation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->countryCode_ == nullptr
        && this->ispCode_ == nullptr && this->regionCode_ == nullptr; };
        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline GeoLocation& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // ispCode Field Functions 
        bool hasIspCode() const { return this->ispCode_ != nullptr;};
        void deleteIspCode() { this->ispCode_ = nullptr;};
        inline string getIspCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
        inline GeoLocation& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


        // regionCode Field Functions 
        bool hasRegionCode() const { return this->regionCode_ != nullptr;};
        void deleteRegionCode() { this->regionCode_ = nullptr;};
        inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
        inline GeoLocation& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


      protected:
        // The country/region code.
        shared_ptr<string> countryCode_ {};
        // The Internet service provider (ISP) code. This parameter is valid only when the country or region is the Chinese mainland.
        shared_ptr<string> ispCode_ {};
        // The region or province code. This parameter is valid only when the country or region is the Chinese mainland.
        shared_ptr<string> regionCode_ {};
      };

      virtual bool empty() const override { return this->geoLocation_ == nullptr
        && this->skipChallenge_ == nullptr; };
      // geoLocation Field Functions 
      bool hasGeoLocation() const { return this->geoLocation_ != nullptr;};
      void deleteGeoLocation() { this->geoLocation_ = nullptr;};
      inline const Context::GeoLocation & getGeoLocation() const { DARABONBA_PTR_GET_CONST(geoLocation_, Context::GeoLocation) };
      inline Context::GeoLocation getGeoLocation() { DARABONBA_PTR_GET(geoLocation_, Context::GeoLocation) };
      inline Context& setGeoLocation(const Context::GeoLocation & geoLocation) { DARABONBA_PTR_SET_VALUE(geoLocation_, geoLocation) };
      inline Context& setGeoLocation(Context::GeoLocation && geoLocation) { DARABONBA_PTR_SET_RVALUE(geoLocation_, geoLocation) };


      // skipChallenge Field Functions 
      bool hasSkipChallenge() const { return this->skipChallenge_ != nullptr;};
      void deleteSkipChallenge() { this->skipChallenge_ = nullptr;};
      inline bool getSkipChallenge() const { DARABONBA_PTR_GET_DEFAULT(skipChallenge_, false) };
      inline Context& setSkipChallenge(bool skipChallenge) { DARABONBA_PTR_SET_VALUE(skipChallenge_, skipChallenge) };


    protected:
      // The simulated geolocation information.
      shared_ptr<Context::GeoLocation> geoLocation_ {};
      // Specifies whether to skip the security challenge test.
      shared_ptr<bool> skipChallenge_ {};
    };

    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_ANY_TO_JSON(Json, json_);
        DARABONBA_PTR_TO_JSON(PlainText, plainText_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_ANY_FROM_JSON(Json, json_);
        DARABONBA_PTR_FROM_JSON(PlainText, plainText_);
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
      virtual bool empty() const override { return this->json_ == nullptr
        && this->plainText_ == nullptr; };
      // json Field Functions 
      bool hasJson() const { return this->json_ != nullptr;};
      void deleteJson() { this->json_ = nullptr;};
      inline       const Darabonba::Json & getJson() const { DARABONBA_GET(json_) };
      Darabonba::Json & getJson() { DARABONBA_GET(json_) };
      inline Body& setJson(const Darabonba::Json & json) { DARABONBA_SET_VALUE(json_, json) };
      inline Body& setJson(Darabonba::Json && json) { DARABONBA_SET_RVALUE(json_, json) };


      // plainText Field Functions 
      bool hasPlainText() const { return this->plainText_ != nullptr;};
      void deletePlainText() { this->plainText_ = nullptr;};
      inline string getPlainText() const { DARABONBA_PTR_GET_DEFAULT(plainText_, "") };
      inline Body& setPlainText(string plainText) { DARABONBA_PTR_SET_VALUE(plainText_, plainText) };


    protected:
      // The content in JSON format. If both JSON format content and plain text content are specified, the JSON format content takes precedence.
      Darabonba::Json json_ {};
      // The plain text content.
      shared_ptr<string> plainText_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->context_ == nullptr && this->cookies_ == nullptr && this->headers_ == nullptr && this->method_ == nullptr && this->protocol_ == nullptr
        && this->url_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const TraceSiteRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, TraceSiteRequest::Body) };
    inline TraceSiteRequest::Body getBody() { DARABONBA_PTR_GET(body_, TraceSiteRequest::Body) };
    inline TraceSiteRequest& setBody(const TraceSiteRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline TraceSiteRequest& setBody(TraceSiteRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const TraceSiteRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, TraceSiteRequest::Context) };
    inline TraceSiteRequest::Context getContext() { DARABONBA_PTR_GET(context_, TraceSiteRequest::Context) };
    inline TraceSiteRequest& setContext(const TraceSiteRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline TraceSiteRequest& setContext(TraceSiteRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // cookies Field Functions 
    bool hasCookies() const { return this->cookies_ != nullptr;};
    void deleteCookies() { this->cookies_ = nullptr;};
    inline const vector<TraceSiteRequest::Cookies> & getCookies() const { DARABONBA_PTR_GET_CONST(cookies_, vector<TraceSiteRequest::Cookies>) };
    inline vector<TraceSiteRequest::Cookies> getCookies() { DARABONBA_PTR_GET(cookies_, vector<TraceSiteRequest::Cookies>) };
    inline TraceSiteRequest& setCookies(const vector<TraceSiteRequest::Cookies> & cookies) { DARABONBA_PTR_SET_VALUE(cookies_, cookies) };
    inline TraceSiteRequest& setCookies(vector<TraceSiteRequest::Cookies> && cookies) { DARABONBA_PTR_SET_RVALUE(cookies_, cookies) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<TraceSiteRequest::Headers> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, vector<TraceSiteRequest::Headers>) };
    inline vector<TraceSiteRequest::Headers> getHeaders() { DARABONBA_PTR_GET(headers_, vector<TraceSiteRequest::Headers>) };
    inline TraceSiteRequest& setHeaders(const vector<TraceSiteRequest::Headers> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline TraceSiteRequest& setHeaders(vector<TraceSiteRequest::Headers> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline TraceSiteRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline TraceSiteRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline TraceSiteRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The HTTP request body.
    shared_ptr<TraceSiteRequest::Body> body_ {};
    // The environment context. This parameter is optional.
    shared_ptr<TraceSiteRequest::Context> context_ {};
    // The cookie parameters.
    shared_ptr<vector<TraceSiteRequest::Cookies>> cookies_ {};
    // The request headers.
    shared_ptr<vector<TraceSiteRequest::Headers>> headers_ {};
    // The HTTP method.
    shared_ptr<string> method_ {};
    // The HTTP protocol.
    shared_ptr<string> protocol_ {};
    // The URL of the request.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
