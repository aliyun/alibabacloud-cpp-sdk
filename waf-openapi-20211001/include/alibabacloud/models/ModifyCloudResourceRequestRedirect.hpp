// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCEREQUESTREDIRECT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCEREQUESTREDIRECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCloudResourceRequestRedirectRequestHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyCloudResourceRequestRedirect : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudResourceRequestRedirect& obj) { 
      DARABONBA_PTR_TO_JSON(Keepalive, keepalive_);
      DARABONBA_PTR_TO_JSON(KeepaliveRequests, keepaliveRequests_);
      DARABONBA_PTR_TO_JSON(KeepaliveTimeout, keepaliveTimeout_);
      DARABONBA_PTR_TO_JSON(ReadTimeout, readTimeout_);
      DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_TO_JSON(WriteTimeout, writeTimeout_);
      DARABONBA_PTR_TO_JSON(XffHeaderMode, xffHeaderMode_);
      DARABONBA_PTR_TO_JSON(XffHeaders, xffHeaders_);
      DARABONBA_PTR_TO_JSON(XffProto, xffProto_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudResourceRequestRedirect& obj) { 
      DARABONBA_PTR_FROM_JSON(Keepalive, keepalive_);
      DARABONBA_PTR_FROM_JSON(KeepaliveRequests, keepaliveRequests_);
      DARABONBA_PTR_FROM_JSON(KeepaliveTimeout, keepaliveTimeout_);
      DARABONBA_PTR_FROM_JSON(ReadTimeout, readTimeout_);
      DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_FROM_JSON(WriteTimeout, writeTimeout_);
      DARABONBA_PTR_FROM_JSON(XffHeaderMode, xffHeaderMode_);
      DARABONBA_PTR_FROM_JSON(XffHeaders, xffHeaders_);
      DARABONBA_PTR_FROM_JSON(XffProto, xffProto_);
    };
    ModifyCloudResourceRequestRedirect() = default ;
    ModifyCloudResourceRequestRedirect(const ModifyCloudResourceRequestRedirect &) = default ;
    ModifyCloudResourceRequestRedirect(ModifyCloudResourceRequestRedirect &&) = default ;
    ModifyCloudResourceRequestRedirect(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudResourceRequestRedirect() = default ;
    ModifyCloudResourceRequestRedirect& operator=(const ModifyCloudResourceRequestRedirect &) = default ;
    ModifyCloudResourceRequestRedirect& operator=(ModifyCloudResourceRequestRedirect &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keepalive_ != nullptr
        && this->keepaliveRequests_ != nullptr && this->keepaliveTimeout_ != nullptr && this->readTimeout_ != nullptr && this->requestHeaders_ != nullptr && this->writeTimeout_ != nullptr
        && this->xffHeaderMode_ != nullptr && this->xffHeaders_ != nullptr && this->xffProto_ != nullptr; };
    // keepalive Field Functions 
    bool hasKeepalive() const { return this->keepalive_ != nullptr;};
    void deleteKeepalive() { this->keepalive_ = nullptr;};
    inline bool keepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, false) };
    inline ModifyCloudResourceRequestRedirect& setKeepalive(bool keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


    // keepaliveRequests Field Functions 
    bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
    void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
    inline int32_t keepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0) };
    inline ModifyCloudResourceRequestRedirect& setKeepaliveRequests(int32_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


    // keepaliveTimeout Field Functions 
    bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
    void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
    inline int32_t keepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0) };
    inline ModifyCloudResourceRequestRedirect& setKeepaliveTimeout(int32_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


    // readTimeout Field Functions 
    bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
    void deleteReadTimeout() { this->readTimeout_ = nullptr;};
    inline int32_t readTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0) };
    inline ModifyCloudResourceRequestRedirect& setReadTimeout(int32_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline const vector<Models::ModifyCloudResourceRequestRedirectRequestHeaders> & requestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, vector<Models::ModifyCloudResourceRequestRedirectRequestHeaders>) };
    inline vector<Models::ModifyCloudResourceRequestRedirectRequestHeaders> requestHeaders() { DARABONBA_PTR_GET(requestHeaders_, vector<Models::ModifyCloudResourceRequestRedirectRequestHeaders>) };
    inline ModifyCloudResourceRequestRedirect& setRequestHeaders(const vector<Models::ModifyCloudResourceRequestRedirectRequestHeaders> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
    inline ModifyCloudResourceRequestRedirect& setRequestHeaders(vector<Models::ModifyCloudResourceRequestRedirectRequestHeaders> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


    // writeTimeout Field Functions 
    bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
    void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
    inline int32_t writeTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0) };
    inline ModifyCloudResourceRequestRedirect& setWriteTimeout(int32_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


    // xffHeaderMode Field Functions 
    bool hasXffHeaderMode() const { return this->xffHeaderMode_ != nullptr;};
    void deleteXffHeaderMode() { this->xffHeaderMode_ = nullptr;};
    inline int32_t xffHeaderMode() const { DARABONBA_PTR_GET_DEFAULT(xffHeaderMode_, 0) };
    inline ModifyCloudResourceRequestRedirect& setXffHeaderMode(int32_t xffHeaderMode) { DARABONBA_PTR_SET_VALUE(xffHeaderMode_, xffHeaderMode) };


    // xffHeaders Field Functions 
    bool hasXffHeaders() const { return this->xffHeaders_ != nullptr;};
    void deleteXffHeaders() { this->xffHeaders_ = nullptr;};
    inline const vector<string> & xffHeaders() const { DARABONBA_PTR_GET_CONST(xffHeaders_, vector<string>) };
    inline vector<string> xffHeaders() { DARABONBA_PTR_GET(xffHeaders_, vector<string>) };
    inline ModifyCloudResourceRequestRedirect& setXffHeaders(const vector<string> & xffHeaders) { DARABONBA_PTR_SET_VALUE(xffHeaders_, xffHeaders) };
    inline ModifyCloudResourceRequestRedirect& setXffHeaders(vector<string> && xffHeaders) { DARABONBA_PTR_SET_RVALUE(xffHeaders_, xffHeaders) };


    // xffProto Field Functions 
    bool hasXffProto() const { return this->xffProto_ != nullptr;};
    void deleteXffProto() { this->xffProto_ = nullptr;};
    inline bool xffProto() const { DARABONBA_PTR_GET_DEFAULT(xffProto_, false) };
    inline ModifyCloudResourceRequestRedirect& setXffProto(bool xffProto) { DARABONBA_PTR_SET_VALUE(xffProto_, xffProto) };


  protected:
    // Specifies whether to enable the persistent connection feature. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> keepalive_ = nullptr;
    // The number of reused persistent connections. Valid values: 60 to 1000.
    // 
    // >  This parameter specifies the number of persistent connections that can be reused after you enable the persistent connection feature.
    std::shared_ptr<int32_t> keepaliveRequests_ = nullptr;
    // The timeout period of idle persistent connections. Valid values: 10 to 3600. Default value: 3600. Unit: seconds.
    // 
    // >  This parameter specifies the period of time after which an idle persistent connection is closed.
    std::shared_ptr<int32_t> keepaliveTimeout_ = nullptr;
    // The timeout period of read connections. Unit: seconds. Valid values: 1 to 3600.
    std::shared_ptr<int32_t> readTimeout_ = nullptr;
    // The custom header fields, which are key-value pairs. The fields are used to mark requests that pass through WAF.
    std::shared_ptr<vector<Models::ModifyCloudResourceRequestRedirectRequestHeaders>> requestHeaders_ = nullptr;
    // The timeout period of write connections. Unit: seconds. Valid values: 1 to 3600.
    std::shared_ptr<int32_t> writeTimeout_ = nullptr;
    // The method that is used to obtain the originating IP address of a client. Valid values:
    // 
    // *   **0**: No Layer 7 proxies are deployed in front of WAF.
    // *   **1**: WAF reads the first value of the X-Forwarded-For (XFF) header field as the originating IP address of the client.
    // *   **2**: WAF reads the value of a custom header field as the originating IP address of the client.
    std::shared_ptr<int32_t> xffHeaderMode_ = nullptr;
    // The custom header fields that are used to obtain the originating IP address of a client. Specify the value in the ["header1","header2",...] format.
    // 
    // >  This parameter is required only if you set **XffHeaderMode** to 2.
    std::shared_ptr<vector<string>> xffHeaders_ = nullptr;
    // Specifies whether to use the X-Forward-For-Proto header field to pass the protocol used by WAF to forward requests to the origin server. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> xffProto_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
