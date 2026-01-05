// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListListenersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListListenersResponseBody() = default ;
    ListListenersResponseBody(const ListListenersResponseBody &) = default ;
    ListListenersResponseBody(ListListenersResponseBody &&) = default ;
    ListListenersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBody() = default ;
    ListListenersResponseBody& operator=(const ListListenersResponseBody &) = default ;
    ListListenersResponseBody& operator=(ListListenersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Listeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultActions, defaultActions_);
        DARABONBA_PTR_TO_JSON(GzipEnabled, gzipEnabled_);
        DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
        DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
        DARABONBA_PTR_TO_JSON(ListenerDescription, listenerDescription_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
        DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
        DARABONBA_PTR_TO_JSON(ListenerStatus, listenerStatus_);
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(LogConfig, logConfig_);
        DARABONBA_PTR_TO_JSON(QuicConfig, quicConfig_);
        DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultActions, defaultActions_);
        DARABONBA_PTR_FROM_JSON(GzipEnabled, gzipEnabled_);
        DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
        DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
        DARABONBA_PTR_FROM_JSON(ListenerDescription, listenerDescription_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
        DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
        DARABONBA_PTR_FROM_JSON(ListenerStatus, listenerStatus_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(LogConfig, logConfig_);
        DARABONBA_PTR_FROM_JSON(QuicConfig, quicConfig_);
        DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(XForwardedForConfig, XForwardedForConfig_);
      };
      Listeners() = default ;
      Listeners(const Listeners &) = default ;
      Listeners(Listeners &&) = default ;
      Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Listeners() = default ;
      Listeners& operator=(const Listeners &) = default ;
      Listeners& operator=(Listeners &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class XForwardedForConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const XForwardedForConfig& obj) { 
          DARABONBA_PTR_TO_JSON(XForwardedForClientCertClientVerifyAlias, XForwardedForClientCertClientVerifyAlias_);
          DARABONBA_PTR_TO_JSON(XForwardedForClientCertClientVerifyEnabled, XForwardedForClientCertClientVerifyEnabled_);
          DARABONBA_PTR_TO_JSON(XForwardedForClientCertFingerprintAlias, XForwardedForClientCertFingerprintAlias_);
          DARABONBA_PTR_TO_JSON(XForwardedForClientCertFingerprintEnabled, XForwardedForClientCertFingerprintEnabled_);
          DARABONBA_PTR_TO_JSON(XForwardedForClientCertIssuerDNAlias, XForwardedForClientCertIssuerDNAlias_);
          DARABONBA_PTR_TO_JSON(XForwardedForClientCertIssuerDNEnabled, XForwardedForClientCertIssuerDNEnabled_);
          DARABONBA_PTR_TO_JSON(XForwardedForClientCertSubjectDNAlias, XForwardedForClientCertSubjectDNAlias_);
          DARABONBA_PTR_TO_JSON(XForwardedForClientCertSubjectDNEnabled, XForwardedForClientCertSubjectDNEnabled_);
          DARABONBA_PTR_TO_JSON(XForwardedForClientSourceIpsEnabled, XForwardedForClientSourceIpsEnabled_);
          DARABONBA_PTR_TO_JSON(XForwardedForClientSourceIpsTrusted, XForwardedForClientSourceIpsTrusted_);
          DARABONBA_PTR_TO_JSON(XForwardedForClientSrcPortEnabled, XForwardedForClientSrcPortEnabled_);
          DARABONBA_PTR_TO_JSON(XForwardedForEnabled, XForwardedForEnabled_);
          DARABONBA_PTR_TO_JSON(XForwardedForHostEnabled, XForwardedForHostEnabled_);
          DARABONBA_PTR_TO_JSON(XForwardedForProcessingMode, XForwardedForProcessingMode_);
          DARABONBA_PTR_TO_JSON(XForwardedForProtoEnabled, XForwardedForProtoEnabled_);
          DARABONBA_PTR_TO_JSON(XForwardedForSLBIdEnabled, XForwardedForSLBIdEnabled_);
          DARABONBA_PTR_TO_JSON(XForwardedForSLBPortEnabled, XForwardedForSLBPortEnabled_);
        };
        friend void from_json(const Darabonba::Json& j, XForwardedForConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(XForwardedForClientCertClientVerifyAlias, XForwardedForClientCertClientVerifyAlias_);
          DARABONBA_PTR_FROM_JSON(XForwardedForClientCertClientVerifyEnabled, XForwardedForClientCertClientVerifyEnabled_);
          DARABONBA_PTR_FROM_JSON(XForwardedForClientCertFingerprintAlias, XForwardedForClientCertFingerprintAlias_);
          DARABONBA_PTR_FROM_JSON(XForwardedForClientCertFingerprintEnabled, XForwardedForClientCertFingerprintEnabled_);
          DARABONBA_PTR_FROM_JSON(XForwardedForClientCertIssuerDNAlias, XForwardedForClientCertIssuerDNAlias_);
          DARABONBA_PTR_FROM_JSON(XForwardedForClientCertIssuerDNEnabled, XForwardedForClientCertIssuerDNEnabled_);
          DARABONBA_PTR_FROM_JSON(XForwardedForClientCertSubjectDNAlias, XForwardedForClientCertSubjectDNAlias_);
          DARABONBA_PTR_FROM_JSON(XForwardedForClientCertSubjectDNEnabled, XForwardedForClientCertSubjectDNEnabled_);
          DARABONBA_PTR_FROM_JSON(XForwardedForClientSourceIpsEnabled, XForwardedForClientSourceIpsEnabled_);
          DARABONBA_PTR_FROM_JSON(XForwardedForClientSourceIpsTrusted, XForwardedForClientSourceIpsTrusted_);
          DARABONBA_PTR_FROM_JSON(XForwardedForClientSrcPortEnabled, XForwardedForClientSrcPortEnabled_);
          DARABONBA_PTR_FROM_JSON(XForwardedForEnabled, XForwardedForEnabled_);
          DARABONBA_PTR_FROM_JSON(XForwardedForHostEnabled, XForwardedForHostEnabled_);
          DARABONBA_PTR_FROM_JSON(XForwardedForProcessingMode, XForwardedForProcessingMode_);
          DARABONBA_PTR_FROM_JSON(XForwardedForProtoEnabled, XForwardedForProtoEnabled_);
          DARABONBA_PTR_FROM_JSON(XForwardedForSLBIdEnabled, XForwardedForSLBIdEnabled_);
          DARABONBA_PTR_FROM_JSON(XForwardedForSLBPortEnabled, XForwardedForSLBPortEnabled_);
        };
        XForwardedForConfig() = default ;
        XForwardedForConfig(const XForwardedForConfig &) = default ;
        XForwardedForConfig(XForwardedForConfig &&) = default ;
        XForwardedForConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~XForwardedForConfig() = default ;
        XForwardedForConfig& operator=(const XForwardedForConfig &) = default ;
        XForwardedForConfig& operator=(XForwardedForConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->XForwardedForClientCertClientVerifyAlias_ == nullptr
        && this->XForwardedForClientCertClientVerifyEnabled_ == nullptr && this->XForwardedForClientCertFingerprintAlias_ == nullptr && this->XForwardedForClientCertFingerprintEnabled_ == nullptr && this->XForwardedForClientCertIssuerDNAlias_ == nullptr && this->XForwardedForClientCertIssuerDNEnabled_ == nullptr
        && this->XForwardedForClientCertSubjectDNAlias_ == nullptr && this->XForwardedForClientCertSubjectDNEnabled_ == nullptr && this->XForwardedForClientSourceIpsEnabled_ == nullptr && this->XForwardedForClientSourceIpsTrusted_ == nullptr && this->XForwardedForClientSrcPortEnabled_ == nullptr
        && this->XForwardedForEnabled_ == nullptr && this->XForwardedForHostEnabled_ == nullptr && this->XForwardedForProcessingMode_ == nullptr && this->XForwardedForProtoEnabled_ == nullptr && this->XForwardedForSLBIdEnabled_ == nullptr
        && this->XForwardedForSLBPortEnabled_ == nullptr; };
        // XForwardedForClientCertClientVerifyAlias Field Functions 
        bool hasXForwardedForClientCertClientVerifyAlias() const { return this->XForwardedForClientCertClientVerifyAlias_ != nullptr;};
        void deleteXForwardedForClientCertClientVerifyAlias() { this->XForwardedForClientCertClientVerifyAlias_ = nullptr;};
        inline string getXForwardedForClientCertClientVerifyAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertClientVerifyAlias_, "") };
        inline XForwardedForConfig& setXForwardedForClientCertClientVerifyAlias(string XForwardedForClientCertClientVerifyAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertClientVerifyAlias_, XForwardedForClientCertClientVerifyAlias) };


        // XForwardedForClientCertClientVerifyEnabled Field Functions 
        bool hasXForwardedForClientCertClientVerifyEnabled() const { return this->XForwardedForClientCertClientVerifyEnabled_ != nullptr;};
        void deleteXForwardedForClientCertClientVerifyEnabled() { this->XForwardedForClientCertClientVerifyEnabled_ = nullptr;};
        inline bool getXForwardedForClientCertClientVerifyEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertClientVerifyEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForClientCertClientVerifyEnabled(bool XForwardedForClientCertClientVerifyEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertClientVerifyEnabled_, XForwardedForClientCertClientVerifyEnabled) };


        // XForwardedForClientCertFingerprintAlias Field Functions 
        bool hasXForwardedForClientCertFingerprintAlias() const { return this->XForwardedForClientCertFingerprintAlias_ != nullptr;};
        void deleteXForwardedForClientCertFingerprintAlias() { this->XForwardedForClientCertFingerprintAlias_ = nullptr;};
        inline string getXForwardedForClientCertFingerprintAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertFingerprintAlias_, "") };
        inline XForwardedForConfig& setXForwardedForClientCertFingerprintAlias(string XForwardedForClientCertFingerprintAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertFingerprintAlias_, XForwardedForClientCertFingerprintAlias) };


        // XForwardedForClientCertFingerprintEnabled Field Functions 
        bool hasXForwardedForClientCertFingerprintEnabled() const { return this->XForwardedForClientCertFingerprintEnabled_ != nullptr;};
        void deleteXForwardedForClientCertFingerprintEnabled() { this->XForwardedForClientCertFingerprintEnabled_ = nullptr;};
        inline bool getXForwardedForClientCertFingerprintEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertFingerprintEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForClientCertFingerprintEnabled(bool XForwardedForClientCertFingerprintEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertFingerprintEnabled_, XForwardedForClientCertFingerprintEnabled) };


        // XForwardedForClientCertIssuerDNAlias Field Functions 
        bool hasXForwardedForClientCertIssuerDNAlias() const { return this->XForwardedForClientCertIssuerDNAlias_ != nullptr;};
        void deleteXForwardedForClientCertIssuerDNAlias() { this->XForwardedForClientCertIssuerDNAlias_ = nullptr;};
        inline string getXForwardedForClientCertIssuerDNAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertIssuerDNAlias_, "") };
        inline XForwardedForConfig& setXForwardedForClientCertIssuerDNAlias(string XForwardedForClientCertIssuerDNAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertIssuerDNAlias_, XForwardedForClientCertIssuerDNAlias) };


        // XForwardedForClientCertIssuerDNEnabled Field Functions 
        bool hasXForwardedForClientCertIssuerDNEnabled() const { return this->XForwardedForClientCertIssuerDNEnabled_ != nullptr;};
        void deleteXForwardedForClientCertIssuerDNEnabled() { this->XForwardedForClientCertIssuerDNEnabled_ = nullptr;};
        inline bool getXForwardedForClientCertIssuerDNEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertIssuerDNEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForClientCertIssuerDNEnabled(bool XForwardedForClientCertIssuerDNEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertIssuerDNEnabled_, XForwardedForClientCertIssuerDNEnabled) };


        // XForwardedForClientCertSubjectDNAlias Field Functions 
        bool hasXForwardedForClientCertSubjectDNAlias() const { return this->XForwardedForClientCertSubjectDNAlias_ != nullptr;};
        void deleteXForwardedForClientCertSubjectDNAlias() { this->XForwardedForClientCertSubjectDNAlias_ = nullptr;};
        inline string getXForwardedForClientCertSubjectDNAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertSubjectDNAlias_, "") };
        inline XForwardedForConfig& setXForwardedForClientCertSubjectDNAlias(string XForwardedForClientCertSubjectDNAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertSubjectDNAlias_, XForwardedForClientCertSubjectDNAlias) };


        // XForwardedForClientCertSubjectDNEnabled Field Functions 
        bool hasXForwardedForClientCertSubjectDNEnabled() const { return this->XForwardedForClientCertSubjectDNEnabled_ != nullptr;};
        void deleteXForwardedForClientCertSubjectDNEnabled() { this->XForwardedForClientCertSubjectDNEnabled_ = nullptr;};
        inline bool getXForwardedForClientCertSubjectDNEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertSubjectDNEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForClientCertSubjectDNEnabled(bool XForwardedForClientCertSubjectDNEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertSubjectDNEnabled_, XForwardedForClientCertSubjectDNEnabled) };


        // XForwardedForClientSourceIpsEnabled Field Functions 
        bool hasXForwardedForClientSourceIpsEnabled() const { return this->XForwardedForClientSourceIpsEnabled_ != nullptr;};
        void deleteXForwardedForClientSourceIpsEnabled() { this->XForwardedForClientSourceIpsEnabled_ = nullptr;};
        inline bool getXForwardedForClientSourceIpsEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientSourceIpsEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForClientSourceIpsEnabled(bool XForwardedForClientSourceIpsEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientSourceIpsEnabled_, XForwardedForClientSourceIpsEnabled) };


        // XForwardedForClientSourceIpsTrusted Field Functions 
        bool hasXForwardedForClientSourceIpsTrusted() const { return this->XForwardedForClientSourceIpsTrusted_ != nullptr;};
        void deleteXForwardedForClientSourceIpsTrusted() { this->XForwardedForClientSourceIpsTrusted_ = nullptr;};
        inline string getXForwardedForClientSourceIpsTrusted() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientSourceIpsTrusted_, "") };
        inline XForwardedForConfig& setXForwardedForClientSourceIpsTrusted(string XForwardedForClientSourceIpsTrusted) { DARABONBA_PTR_SET_VALUE(XForwardedForClientSourceIpsTrusted_, XForwardedForClientSourceIpsTrusted) };


        // XForwardedForClientSrcPortEnabled Field Functions 
        bool hasXForwardedForClientSrcPortEnabled() const { return this->XForwardedForClientSrcPortEnabled_ != nullptr;};
        void deleteXForwardedForClientSrcPortEnabled() { this->XForwardedForClientSrcPortEnabled_ = nullptr;};
        inline bool getXForwardedForClientSrcPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientSrcPortEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForClientSrcPortEnabled(bool XForwardedForClientSrcPortEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientSrcPortEnabled_, XForwardedForClientSrcPortEnabled) };


        // XForwardedForEnabled Field Functions 
        bool hasXForwardedForEnabled() const { return this->XForwardedForEnabled_ != nullptr;};
        void deleteXForwardedForEnabled() { this->XForwardedForEnabled_ = nullptr;};
        inline bool getXForwardedForEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForEnabled(bool XForwardedForEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForEnabled_, XForwardedForEnabled) };


        // XForwardedForHostEnabled Field Functions 
        bool hasXForwardedForHostEnabled() const { return this->XForwardedForHostEnabled_ != nullptr;};
        void deleteXForwardedForHostEnabled() { this->XForwardedForHostEnabled_ = nullptr;};
        inline bool getXForwardedForHostEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForHostEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForHostEnabled(bool XForwardedForHostEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForHostEnabled_, XForwardedForHostEnabled) };


        // XForwardedForProcessingMode Field Functions 
        bool hasXForwardedForProcessingMode() const { return this->XForwardedForProcessingMode_ != nullptr;};
        void deleteXForwardedForProcessingMode() { this->XForwardedForProcessingMode_ = nullptr;};
        inline string getXForwardedForProcessingMode() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForProcessingMode_, "") };
        inline XForwardedForConfig& setXForwardedForProcessingMode(string XForwardedForProcessingMode) { DARABONBA_PTR_SET_VALUE(XForwardedForProcessingMode_, XForwardedForProcessingMode) };


        // XForwardedForProtoEnabled Field Functions 
        bool hasXForwardedForProtoEnabled() const { return this->XForwardedForProtoEnabled_ != nullptr;};
        void deleteXForwardedForProtoEnabled() { this->XForwardedForProtoEnabled_ = nullptr;};
        inline bool getXForwardedForProtoEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForProtoEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForProtoEnabled(bool XForwardedForProtoEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForProtoEnabled_, XForwardedForProtoEnabled) };


        // XForwardedForSLBIdEnabled Field Functions 
        bool hasXForwardedForSLBIdEnabled() const { return this->XForwardedForSLBIdEnabled_ != nullptr;};
        void deleteXForwardedForSLBIdEnabled() { this->XForwardedForSLBIdEnabled_ = nullptr;};
        inline bool getXForwardedForSLBIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForSLBIdEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForSLBIdEnabled(bool XForwardedForSLBIdEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForSLBIdEnabled_, XForwardedForSLBIdEnabled) };


        // XForwardedForSLBPortEnabled Field Functions 
        bool hasXForwardedForSLBPortEnabled() const { return this->XForwardedForSLBPortEnabled_ != nullptr;};
        void deleteXForwardedForSLBPortEnabled() { this->XForwardedForSLBPortEnabled_ = nullptr;};
        inline bool getXForwardedForSLBPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForSLBPortEnabled_, false) };
        inline XForwardedForConfig& setXForwardedForSLBPortEnabled(bool XForwardedForSLBPortEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForSLBPortEnabled_, XForwardedForSLBPortEnabled) };


      protected:
        // The name of the custom header. This parameter takes effect only when **XForwardedForClientCertClientVerifyEnabled** is set to **true**.
        // 
        // The name must be 1 to 40 characters in length, and can contain lowercase letters, digits, hyphens (-), and underscores (_).
        // 
        // >  Only HTTPS listeners support this parameter.
        shared_ptr<string> XForwardedForClientCertClientVerifyAlias_ {};
        // Indicates whether the `X-Forwarded-Clientcert-clientverify` header is used to obtain the verification result of the client certificate. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  Only HTTPS listeners support this parameter.
        shared_ptr<bool> XForwardedForClientCertClientVerifyEnabled_ {};
        // The name of the custom header. This parameter takes effect only when **XForwardedForClientCertFingerprintEnabled** is set to **true**.
        // 
        // The name must be 1 to 40 characters in length, and can contain lowercase letters, digits, hyphens (-), and underscores (_).
        // 
        // >  Only HTTPS listeners support this parameter.
        shared_ptr<string> XForwardedForClientCertFingerprintAlias_ {};
        // Indicates whether the `X-Forwarded-Clientcert-fingerprint` header is used to retrieve the fingerprint of the client certificate. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  Only HTTPS listeners support this parameter.
        shared_ptr<bool> XForwardedForClientCertFingerprintEnabled_ {};
        // The name of the custom header. This parameter takes effect only when **XForwardedForClientCertIssuerDNEnabled** is set to **true**.
        // 
        // The name must be 1 to 40 characters in length, and can contain lowercase letters, digits, hyphens (-), and underscores (_).
        // 
        // >  Only HTTPS listeners support this parameter.
        shared_ptr<string> XForwardedForClientCertIssuerDNAlias_ {};
        // Indicates whether the `X-Forwarded-Clientcert-issuerdn` header is used to retrieve information about the authority that issues the client certificate. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  Only HTTPS listeners support this parameter.
        shared_ptr<bool> XForwardedForClientCertIssuerDNEnabled_ {};
        // The name of the custom header. This parameter takes effect only when **XForwardedForClientCertSubjectDNEnabled** is set to **true**.
        // 
        // The name must be 1 to 40 characters in length, and can contain lowercase letters, digits, hyphens (-), and underscores (_).
        // 
        // >  Only HTTPS listeners support this parameter.
        shared_ptr<string> XForwardedForClientCertSubjectDNAlias_ {};
        // Indicates whether the `X-Forwarded-Clientcert-subjectdn` header is used to retrieve information about the owner of the client certificate. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  Only HTTPS listeners support this parameter.
        shared_ptr<bool> XForwardedForClientCertSubjectDNEnabled_ {};
        // Indicates whether the X-Forwarded-For header is used to preserver client IP addresses for the ALB instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter is returned only for HTTP and HTTPS listeners.
        shared_ptr<bool> XForwardedForClientSourceIpsEnabled_ {};
        // The trusted proxy IP address.
        // 
        // ALB instances traverse the IP addresses in the `X-Forwarded-For` header from the rightmost IP address to the leftmost IP address. The first IP address that is not on the trusted IP address list is considered the client IP address. Requests from the client IP address are throttled.
        shared_ptr<string> XForwardedForClientSourceIpsTrusted_ {};
        // Indicates whether the `X-Forwarded-Client-Port` header is used to retrieve the client port. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter is returned only for HTTP and HTTPS listeners.
        shared_ptr<bool> XForwardedForClientSrcPortEnabled_ {};
        // Specifies whether to use the `X-Forwarded-For` header to retrieve client IP addresses. Valid values:
        // 
        // *   **true** (default)
        // *   **false**
        // 
        // > *   If this parameter is set to **true**, the default value of the **XForwardedForProcessingMode** parameter is **append**. You can change it to **remove**.
        // > *   If this parameter is set to **false**, the `X-Forwarded-For` header in the request is not modified in any way before the request is sent to backend servers.
        // > *   Both HTTP and HTTPS listeners support this parameter.
        shared_ptr<bool> XForwardedForEnabled_ {};
        // Specifies whether to use the `X-Forwarded-Host` header to retrieve client domain names. Valid values:
        // 
        // *   **true**
        // *   **false** (default)
        // 
        // >  HTTP, HTTPS, and QUIC listeners all support this parameter.
        shared_ptr<bool> XForwardedForHostEnabled_ {};
        // Specifies how the `X-Forwarded-For` header is processed. This parameter takes effect only when **XForwardedForEnabled** is set to **true**. Valid values:
        // 
        // *   **append** (default)
        // *   **remove**
        // 
        // > *   If this parameter is set to **append**, ALB appends the IP address of the last hop to the existing `X-Forwarded-For` header in the request before the request is sent to backend servers.
        // > *   If this parameter is set to **remove**, ALB removes the `X-Forwarded-For` header in the request before the request is sent to backend servers, no matter whether the request carries the `X-Forwarded-For` header.
        // > *   Both HTTP and HTTPS listeners support this parameter.
        shared_ptr<string> XForwardedForProcessingMode_ {};
        // Indicates whether the `X-Forwarded-Proto` header is used to retrieve the listener protocol. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter is supported by HTTP, HTTPS, and QUIC listeners.
        shared_ptr<bool> XForwardedForProtoEnabled_ {};
        // Specifies whether to use the `SLB-ID` header to retrieve the ID of the ALB instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter is supported by HTTP, HTTPS, and QUIC listeners.
        shared_ptr<bool> XForwardedForSLBIdEnabled_ {};
        // Indicates whether the `X-Forwarded-Port` header is used to retrieve the listener port of the ALB instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter is supported by HTTP, HTTPS, and QUIC listeners.
        shared_ptr<bool> XForwardedForSLBPortEnabled_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key. The tag key can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
        shared_ptr<string> key_ {};
        // The tag value. The tag value can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
        shared_ptr<string> value_ {};
      };

      class QuicConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QuicConfig& obj) { 
          DARABONBA_PTR_TO_JSON(QuicListenerId, quicListenerId_);
          DARABONBA_PTR_TO_JSON(QuicUpgradeEnabled, quicUpgradeEnabled_);
        };
        friend void from_json(const Darabonba::Json& j, QuicConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(QuicListenerId, quicListenerId_);
          DARABONBA_PTR_FROM_JSON(QuicUpgradeEnabled, quicUpgradeEnabled_);
        };
        QuicConfig() = default ;
        QuicConfig(const QuicConfig &) = default ;
        QuicConfig(QuicConfig &&) = default ;
        QuicConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QuicConfig() = default ;
        QuicConfig& operator=(const QuicConfig &) = default ;
        QuicConfig& operator=(QuicConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quicListenerId_ == nullptr
        && this->quicUpgradeEnabled_ == nullptr; };
        // quicListenerId Field Functions 
        bool hasQuicListenerId() const { return this->quicListenerId_ != nullptr;};
        void deleteQuicListenerId() { this->quicListenerId_ = nullptr;};
        inline string getQuicListenerId() const { DARABONBA_PTR_GET_DEFAULT(quicListenerId_, "") };
        inline QuicConfig& setQuicListenerId(string quicListenerId) { DARABONBA_PTR_SET_VALUE(quicListenerId_, quicListenerId) };


        // quicUpgradeEnabled Field Functions 
        bool hasQuicUpgradeEnabled() const { return this->quicUpgradeEnabled_ != nullptr;};
        void deleteQuicUpgradeEnabled() { this->quicUpgradeEnabled_ = nullptr;};
        inline bool getQuicUpgradeEnabled() const { DARABONBA_PTR_GET_DEFAULT(quicUpgradeEnabled_, false) };
        inline QuicConfig& setQuicUpgradeEnabled(bool quicUpgradeEnabled) { DARABONBA_PTR_SET_VALUE(quicUpgradeEnabled_, quicUpgradeEnabled) };


      protected:
        // The ID of the QUIC listener associated with the ALB instance. This parameter is required if the **QuicUpgradeEnabled** parameter is set to **true**. Only HTTPS listeners support this parameter.
        // 
        // >  The existing listener and QUIC listener must be to the same ALB instance, and the QUIC listener has not been associated with an ALB instance.
        shared_ptr<string> quicListenerId_ {};
        // Indicates whether QUIC upgrade is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  Only HTTPS listeners support this parameter.
        shared_ptr<bool> quicUpgradeEnabled_ {};
      };

      class LogConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
          DARABONBA_PTR_TO_JSON(AccessLogTracingConfig, accessLogTracingConfig_);
        };
        friend void from_json(const Darabonba::Json& j, LogConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
          DARABONBA_PTR_FROM_JSON(AccessLogTracingConfig, accessLogTracingConfig_);
        };
        LogConfig() = default ;
        LogConfig(const LogConfig &) = default ;
        LogConfig(LogConfig &&) = default ;
        LogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogConfig() = default ;
        LogConfig& operator=(const LogConfig &) = default ;
        LogConfig& operator=(LogConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AccessLogTracingConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccessLogTracingConfig& obj) { 
            DARABONBA_PTR_TO_JSON(TracingEnabled, tracingEnabled_);
            DARABONBA_PTR_TO_JSON(TracingSample, tracingSample_);
            DARABONBA_PTR_TO_JSON(TracingType, tracingType_);
          };
          friend void from_json(const Darabonba::Json& j, AccessLogTracingConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(TracingEnabled, tracingEnabled_);
            DARABONBA_PTR_FROM_JSON(TracingSample, tracingSample_);
            DARABONBA_PTR_FROM_JSON(TracingType, tracingType_);
          };
          AccessLogTracingConfig() = default ;
          AccessLogTracingConfig(const AccessLogTracingConfig &) = default ;
          AccessLogTracingConfig(AccessLogTracingConfig &&) = default ;
          AccessLogTracingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccessLogTracingConfig() = default ;
          AccessLogTracingConfig& operator=(const AccessLogTracingConfig &) = default ;
          AccessLogTracingConfig& operator=(AccessLogTracingConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tracingEnabled_ == nullptr
        && this->tracingSample_ == nullptr && this->tracingType_ == nullptr; };
          // tracingEnabled Field Functions 
          bool hasTracingEnabled() const { return this->tracingEnabled_ != nullptr;};
          void deleteTracingEnabled() { this->tracingEnabled_ = nullptr;};
          inline bool getTracingEnabled() const { DARABONBA_PTR_GET_DEFAULT(tracingEnabled_, false) };
          inline AccessLogTracingConfig& setTracingEnabled(bool tracingEnabled) { DARABONBA_PTR_SET_VALUE(tracingEnabled_, tracingEnabled) };


          // tracingSample Field Functions 
          bool hasTracingSample() const { return this->tracingSample_ != nullptr;};
          void deleteTracingSample() { this->tracingSample_ = nullptr;};
          inline int32_t getTracingSample() const { DARABONBA_PTR_GET_DEFAULT(tracingSample_, 0) };
          inline AccessLogTracingConfig& setTracingSample(int32_t tracingSample) { DARABONBA_PTR_SET_VALUE(tracingSample_, tracingSample) };


          // tracingType Field Functions 
          bool hasTracingType() const { return this->tracingType_ != nullptr;};
          void deleteTracingType() { this->tracingType_ = nullptr;};
          inline string getTracingType() const { DARABONBA_PTR_GET_DEFAULT(tracingType_, "") };
          inline AccessLogTracingConfig& setTracingType(string tracingType) { DARABONBA_PTR_SET_VALUE(tracingType_, tracingType) };


        protected:
          // Indicates whether xtrace is enabled. Valid values:
          // 
          // *   **true**
          // *   **false**
          // 
          // >  This parameter can be set to **true** only when the access log feature of ALB is enabled by setting **AccessLogEnabled** to true.
          shared_ptr<bool> tracingEnabled_ {};
          // The sampling rate of xtrace. Valid values: **1 to 10000**.
          // 
          // >  This parameter takes effect when **TracingEnabled** is set to **true**.
          shared_ptr<int32_t> tracingSample_ {};
          // The type of xtrace. The value is set to **Zipkin**.
          // 
          // >  This parameter takes effect when **TracingEnabled** is set to **true**.
          shared_ptr<string> tracingType_ {};
        };

        virtual bool empty() const override { return this->accessLogRecordCustomizedHeadersEnabled_ == nullptr
        && this->accessLogTracingConfig_ == nullptr; };
        // accessLogRecordCustomizedHeadersEnabled Field Functions 
        bool hasAccessLogRecordCustomizedHeadersEnabled() const { return this->accessLogRecordCustomizedHeadersEnabled_ != nullptr;};
        void deleteAccessLogRecordCustomizedHeadersEnabled() { this->accessLogRecordCustomizedHeadersEnabled_ = nullptr;};
        inline bool getAccessLogRecordCustomizedHeadersEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogRecordCustomizedHeadersEnabled_, false) };
        inline LogConfig& setAccessLogRecordCustomizedHeadersEnabled(bool accessLogRecordCustomizedHeadersEnabled) { DARABONBA_PTR_SET_VALUE(accessLogRecordCustomizedHeadersEnabled_, accessLogRecordCustomizedHeadersEnabled) };


        // accessLogTracingConfig Field Functions 
        bool hasAccessLogTracingConfig() const { return this->accessLogTracingConfig_ != nullptr;};
        void deleteAccessLogTracingConfig() { this->accessLogTracingConfig_ = nullptr;};
        inline const LogConfig::AccessLogTracingConfig & getAccessLogTracingConfig() const { DARABONBA_PTR_GET_CONST(accessLogTracingConfig_, LogConfig::AccessLogTracingConfig) };
        inline LogConfig::AccessLogTracingConfig getAccessLogTracingConfig() { DARABONBA_PTR_GET(accessLogTracingConfig_, LogConfig::AccessLogTracingConfig) };
        inline LogConfig& setAccessLogTracingConfig(const LogConfig::AccessLogTracingConfig & accessLogTracingConfig) { DARABONBA_PTR_SET_VALUE(accessLogTracingConfig_, accessLogTracingConfig) };
        inline LogConfig& setAccessLogTracingConfig(LogConfig::AccessLogTracingConfig && accessLogTracingConfig) { DARABONBA_PTR_SET_RVALUE(accessLogTracingConfig_, accessLogTracingConfig) };


      protected:
        // Indicates whether custom headers are carried in the access log. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> accessLogRecordCustomizedHeadersEnabled_ {};
        // The configurations of xtrace.
        shared_ptr<LogConfig::AccessLogTracingConfig> accessLogTracingConfig_ {};
      };

      class DefaultActions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DefaultActions& obj) { 
          DARABONBA_PTR_TO_JSON(ForwardGroupConfig, forwardGroupConfig_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DefaultActions& obj) { 
          DARABONBA_PTR_FROM_JSON(ForwardGroupConfig, forwardGroupConfig_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DefaultActions() = default ;
        DefaultActions(const DefaultActions &) = default ;
        DefaultActions(DefaultActions &&) = default ;
        DefaultActions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DefaultActions() = default ;
        DefaultActions& operator=(const DefaultActions &) = default ;
        DefaultActions& operator=(DefaultActions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ForwardGroupConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ForwardGroupConfig& obj) { 
            DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
          };
          friend void from_json(const Darabonba::Json& j, ForwardGroupConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
          };
          ForwardGroupConfig() = default ;
          ForwardGroupConfig(const ForwardGroupConfig &) = default ;
          ForwardGroupConfig(ForwardGroupConfig &&) = default ;
          ForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ForwardGroupConfig() = default ;
          ForwardGroupConfig& operator=(const ForwardGroupConfig &) = default ;
          ForwardGroupConfig& operator=(ForwardGroupConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ServerGroupTuples : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServerGroupTuples& obj) { 
              DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
            };
            friend void from_json(const Darabonba::Json& j, ServerGroupTuples& obj) { 
              DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
            };
            ServerGroupTuples() = default ;
            ServerGroupTuples(const ServerGroupTuples &) = default ;
            ServerGroupTuples(ServerGroupTuples &&) = default ;
            ServerGroupTuples(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServerGroupTuples() = default ;
            ServerGroupTuples& operator=(const ServerGroupTuples &) = default ;
            ServerGroupTuples& operator=(ServerGroupTuples &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->serverGroupId_ == nullptr; };
            // serverGroupId Field Functions 
            bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
            void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
            inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
            inline ServerGroupTuples& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


          protected:
            // The ID of the server group to which requests are forwarded.
            shared_ptr<string> serverGroupId_ {};
          };

          virtual bool empty() const override { return this->serverGroupTuples_ == nullptr; };
          // serverGroupTuples Field Functions 
          bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
          void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
          inline const vector<ForwardGroupConfig::ServerGroupTuples> & getServerGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<ForwardGroupConfig::ServerGroupTuples>) };
          inline vector<ForwardGroupConfig::ServerGroupTuples> getServerGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<ForwardGroupConfig::ServerGroupTuples>) };
          inline ForwardGroupConfig& setServerGroupTuples(const vector<ForwardGroupConfig::ServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
          inline ForwardGroupConfig& setServerGroupTuples(vector<ForwardGroupConfig::ServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


        protected:
          // The server groups to which requests are forwarded.
          shared_ptr<vector<ForwardGroupConfig::ServerGroupTuples>> serverGroupTuples_ {};
        };

        virtual bool empty() const override { return this->forwardGroupConfig_ == nullptr
        && this->type_ == nullptr; };
        // forwardGroupConfig Field Functions 
        bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
        void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
        inline const DefaultActions::ForwardGroupConfig & getForwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, DefaultActions::ForwardGroupConfig) };
        inline DefaultActions::ForwardGroupConfig getForwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, DefaultActions::ForwardGroupConfig) };
        inline DefaultActions& setForwardGroupConfig(const DefaultActions::ForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
        inline DefaultActions& setForwardGroupConfig(DefaultActions::ForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DefaultActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The configuration of the forwarding rule action. This parameter takes effect only when the action is **ForwardGroup**.
        shared_ptr<DefaultActions::ForwardGroupConfig> forwardGroupConfig_ {};
        // The action. **ForwardGroup**: forwards requests to multiple server groups.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->defaultActions_ == nullptr
        && this->gzipEnabled_ == nullptr && this->http2Enabled_ == nullptr && this->idleTimeout_ == nullptr && this->listenerDescription_ == nullptr && this->listenerId_ == nullptr
        && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->listenerStatus_ == nullptr && this->loadBalancerId_ == nullptr && this->logConfig_ == nullptr
        && this->quicConfig_ == nullptr && this->requestTimeout_ == nullptr && this->securityPolicyId_ == nullptr && this->tags_ == nullptr && this->XForwardedForConfig_ == nullptr; };
      // defaultActions Field Functions 
      bool hasDefaultActions() const { return this->defaultActions_ != nullptr;};
      void deleteDefaultActions() { this->defaultActions_ = nullptr;};
      inline const vector<Listeners::DefaultActions> & getDefaultActions() const { DARABONBA_PTR_GET_CONST(defaultActions_, vector<Listeners::DefaultActions>) };
      inline vector<Listeners::DefaultActions> getDefaultActions() { DARABONBA_PTR_GET(defaultActions_, vector<Listeners::DefaultActions>) };
      inline Listeners& setDefaultActions(const vector<Listeners::DefaultActions> & defaultActions) { DARABONBA_PTR_SET_VALUE(defaultActions_, defaultActions) };
      inline Listeners& setDefaultActions(vector<Listeners::DefaultActions> && defaultActions) { DARABONBA_PTR_SET_RVALUE(defaultActions_, defaultActions) };


      // gzipEnabled Field Functions 
      bool hasGzipEnabled() const { return this->gzipEnabled_ != nullptr;};
      void deleteGzipEnabled() { this->gzipEnabled_ = nullptr;};
      inline bool getGzipEnabled() const { DARABONBA_PTR_GET_DEFAULT(gzipEnabled_, false) };
      inline Listeners& setGzipEnabled(bool gzipEnabled) { DARABONBA_PTR_SET_VALUE(gzipEnabled_, gzipEnabled) };


      // http2Enabled Field Functions 
      bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
      void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
      inline bool getHttp2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
      inline Listeners& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


      // idleTimeout Field Functions 
      bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
      void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
      inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
      inline Listeners& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


      // listenerDescription Field Functions 
      bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
      void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
      inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
      inline Listeners& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline Listeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // listenerPort Field Functions 
      bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
      void deleteListenerPort() { this->listenerPort_ = nullptr;};
      inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
      inline Listeners& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


      // listenerProtocol Field Functions 
      bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
      void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
      inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
      inline Listeners& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


      // listenerStatus Field Functions 
      bool hasListenerStatus() const { return this->listenerStatus_ != nullptr;};
      void deleteListenerStatus() { this->listenerStatus_ = nullptr;};
      inline string getListenerStatus() const { DARABONBA_PTR_GET_DEFAULT(listenerStatus_, "") };
      inline Listeners& setListenerStatus(string listenerStatus) { DARABONBA_PTR_SET_VALUE(listenerStatus_, listenerStatus) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline Listeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // logConfig Field Functions 
      bool hasLogConfig() const { return this->logConfig_ != nullptr;};
      void deleteLogConfig() { this->logConfig_ = nullptr;};
      inline const Listeners::LogConfig & getLogConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, Listeners::LogConfig) };
      inline Listeners::LogConfig getLogConfig() { DARABONBA_PTR_GET(logConfig_, Listeners::LogConfig) };
      inline Listeners& setLogConfig(const Listeners::LogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
      inline Listeners& setLogConfig(Listeners::LogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


      // quicConfig Field Functions 
      bool hasQuicConfig() const { return this->quicConfig_ != nullptr;};
      void deleteQuicConfig() { this->quicConfig_ = nullptr;};
      inline const Listeners::QuicConfig & getQuicConfig() const { DARABONBA_PTR_GET_CONST(quicConfig_, Listeners::QuicConfig) };
      inline Listeners::QuicConfig getQuicConfig() { DARABONBA_PTR_GET(quicConfig_, Listeners::QuicConfig) };
      inline Listeners& setQuicConfig(const Listeners::QuicConfig & quicConfig) { DARABONBA_PTR_SET_VALUE(quicConfig_, quicConfig) };
      inline Listeners& setQuicConfig(Listeners::QuicConfig && quicConfig) { DARABONBA_PTR_SET_RVALUE(quicConfig_, quicConfig) };


      // requestTimeout Field Functions 
      bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
      void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
      inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
      inline Listeners& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


      // securityPolicyId Field Functions 
      bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
      void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
      inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
      inline Listeners& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Listeners::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Listeners::Tags>) };
      inline vector<Listeners::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Listeners::Tags>) };
      inline Listeners& setTags(const vector<Listeners::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Listeners& setTags(vector<Listeners::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // XForwardedForConfig Field Functions 
      bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
      void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
      inline const Listeners::XForwardedForConfig & getXForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, Listeners::XForwardedForConfig) };
      inline Listeners::XForwardedForConfig getXForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, Listeners::XForwardedForConfig) };
      inline Listeners& setXForwardedForConfig(const Listeners::XForwardedForConfig & xForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, xForwardedForConfig) };
      inline Listeners& setXForwardedForConfig(Listeners::XForwardedForConfig && xForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, xForwardedForConfig) };


    protected:
      // The default actions in the forwarding rules.
      shared_ptr<vector<Listeners::DefaultActions>> defaultActions_ {};
      // Indicates whether GZIP compression is enabled to compress specific types of files. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> gzipEnabled_ {};
      // Indicates whether HTTP/2 is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  Only HTTPS listeners support this parameter.
      shared_ptr<bool> http2Enabled_ {};
      // The timeout period of an idle connection. Unit: seconds. Valid values: **1 to 60**.
      // 
      // If no request is received within the specified timeout period, ALB closes the connection. ALB establishes the connection again when a new connection request is received.
      shared_ptr<int32_t> idleTimeout_ {};
      // The name of the listener.
      shared_ptr<string> listenerDescription_ {};
      // The listener ID.
      shared_ptr<string> listenerId_ {};
      // The frontend port that is used by the ALB instance. Valid values: **1 to 65535**.
      shared_ptr<int32_t> listenerPort_ {};
      // The listener protocol of the instance. Valid values:
      // 
      // *   **HTTP**
      // *   **HTTPS**
      // *   **QUIC**
      shared_ptr<string> listenerProtocol_ {};
      // The status of the listener. Valid values:
      // 
      // *   **Provisioning**: The listener is being created.
      // *   **Running**: The listener is running.
      // *   **Configuring**: The listener is being configured.
      // *   **Stopped**: The listener is disabled.
      shared_ptr<string> listenerStatus_ {};
      // The ALB instance ID.
      shared_ptr<string> loadBalancerId_ {};
      // The logging configurations.
      shared_ptr<Listeners::LogConfig> logConfig_ {};
      // The configurations of the QUIC listener associated with the ALB instance.
      shared_ptr<Listeners::QuicConfig> quicConfig_ {};
      // The timeout period of a request. Unit: seconds. Valid values: **1 to 180**.
      // 
      // If no responses are received from the backend server within the specified timeout period, ALB returns an `HTTP 504` error code to the client.
      shared_ptr<int32_t> requestTimeout_ {};
      // The security policy.
      // 
      // >  Only HTTPS listeners support this parameter.
      shared_ptr<string> securityPolicyId_ {};
      // The tags.
      shared_ptr<vector<Listeners::Tags>> tags_ {};
      // The configuration of the `XForward` header.
      shared_ptr<Listeners::XForwardedForConfig> XForwardedForConfig_ {};
    };

    virtual bool empty() const override { return this->listeners_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<ListListenersResponseBody::Listeners> & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<ListListenersResponseBody::Listeners>) };
    inline vector<ListListenersResponseBody::Listeners> getListeners() { DARABONBA_PTR_GET(listeners_, vector<ListListenersResponseBody::Listeners>) };
    inline ListListenersResponseBody& setListeners(const vector<ListListenersResponseBody::Listeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline ListListenersResponseBody& setListeners(vector<ListListenersResponseBody::Listeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListListenersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListListenersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListListenersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListListenersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The listeners.
    shared_ptr<vector<ListListenersResponseBody::Listeners>> listeners_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // The position where the query stopped. If this parameter is not returned, all data is queried.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
