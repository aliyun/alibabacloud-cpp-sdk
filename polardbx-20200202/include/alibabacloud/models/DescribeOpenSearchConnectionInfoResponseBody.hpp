// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHCONNECTIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHCONNECTIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeOpenSearchConnectionInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenSearchConnectionInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenSearchConnectionInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOpenSearchConnectionInfoResponseBody() = default ;
    DescribeOpenSearchConnectionInfoResponseBody(const DescribeOpenSearchConnectionInfoResponseBody &) = default ;
    DescribeOpenSearchConnectionInfoResponseBody(DescribeOpenSearchConnectionInfoResponseBody &&) = default ;
    DescribeOpenSearchConnectionInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenSearchConnectionInfoResponseBody() = default ;
    DescribeOpenSearchConnectionInfoResponseBody& operator=(const DescribeOpenSearchConnectionInfoResponseBody &) = default ;
    DescribeOpenSearchConnectionInfoResponseBody& operator=(DescribeOpenSearchConnectionInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DashboardEndpoint, dashboardEndpoint_);
        DARABONBA_PTR_TO_JSON(DashboardPublicEndpoint, dashboardPublicEndpoint_);
        DARABONBA_PTR_TO_JSON(DefaultUsername, defaultUsername_);
        DARABONBA_PTR_TO_JSON(PrivateEndpoint, privateEndpoint_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(PublicEndpoint, publicEndpoint_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DashboardEndpoint, dashboardEndpoint_);
        DARABONBA_PTR_FROM_JSON(DashboardPublicEndpoint, dashboardPublicEndpoint_);
        DARABONBA_PTR_FROM_JSON(DefaultUsername, defaultUsername_);
        DARABONBA_PTR_FROM_JSON(PrivateEndpoint, privateEndpoint_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(PublicEndpoint, publicEndpoint_);
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
      class PublicEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublicEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, PublicEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        PublicEndpoint() = default ;
        PublicEndpoint(const PublicEndpoint &) = default ;
        PublicEndpoint(PublicEndpoint &&) = default ;
        PublicEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PublicEndpoint() = default ;
        PublicEndpoint& operator=(const PublicEndpoint &) = default ;
        PublicEndpoint& operator=(PublicEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->host_ == nullptr && this->port_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline PublicEndpoint& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline PublicEndpoint& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline PublicEndpoint& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        // Specifies whether to enable dead-letter message delivery.
        shared_ptr<bool> enabled_ {};
        // The machine.
        shared_ptr<string> host_ {};
        // The port.
        shared_ptr<int32_t> port_ {};
      };

      class PrivateEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        PrivateEndpoint() = default ;
        PrivateEndpoint(const PrivateEndpoint &) = default ;
        PrivateEndpoint(PrivateEndpoint &&) = default ;
        PrivateEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateEndpoint() = default ;
        PrivateEndpoint& operator=(const PrivateEndpoint &) = default ;
        PrivateEndpoint& operator=(PrivateEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->host_ == nullptr && this->port_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline PrivateEndpoint& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline PrivateEndpoint& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline PrivateEndpoint& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        // Specifies whether to enable the echo feature. This parameter is required. Valid values: true/false.
        shared_ptr<bool> enabled_ {};
        // The OSS domain name.
        shared_ptr<string> host_ {};
        // The port.
        shared_ptr<int32_t> port_ {};
      };

      class DashboardPublicEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DashboardPublicEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, DashboardPublicEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        DashboardPublicEndpoint() = default ;
        DashboardPublicEndpoint(const DashboardPublicEndpoint &) = default ;
        DashboardPublicEndpoint(DashboardPublicEndpoint &&) = default ;
        DashboardPublicEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DashboardPublicEndpoint() = default ;
        DashboardPublicEndpoint& operator=(const DashboardPublicEndpoint &) = default ;
        DashboardPublicEndpoint& operator=(DashboardPublicEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->host_ == nullptr && this->port_ == nullptr && this->url_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline DashboardPublicEndpoint& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline DashboardPublicEndpoint& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline DashboardPublicEndpoint& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline DashboardPublicEndpoint& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The service activation status. Valid values:
        // 
        // - **on**: Activated.
        // - **off**: Not activated.
        shared_ptr<bool> enabled_ {};
        // The hostname. Retrieves data under the specified host.
        shared_ptr<string> host_ {};
        // The port.
        shared_ptr<int32_t> port_ {};
        // The URL.
        shared_ptr<string> url_ {};
      };

      class DashboardEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DashboardEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, DashboardEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        DashboardEndpoint() = default ;
        DashboardEndpoint(const DashboardEndpoint &) = default ;
        DashboardEndpoint(DashboardEndpoint &&) = default ;
        DashboardEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DashboardEndpoint() = default ;
        DashboardEndpoint& operator=(const DashboardEndpoint &) = default ;
        DashboardEndpoint& operator=(DashboardEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->host_ == nullptr && this->port_ == nullptr && this->url_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline DashboardEndpoint& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline DashboardEndpoint& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline DashboardEndpoint& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline DashboardEndpoint& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // Specifies whether static frame check is enabled. Default value: false.
        shared_ptr<bool> enabled_ {};
        // The host address.
        shared_ptr<string> host_ {};
        // The port.
        shared_ptr<int32_t> port_ {};
        // The URL.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->dashboardEndpoint_ == nullptr
        && this->dashboardPublicEndpoint_ == nullptr && this->defaultUsername_ == nullptr && this->privateEndpoint_ == nullptr && this->protocol_ == nullptr && this->publicEndpoint_ == nullptr; };
      // dashboardEndpoint Field Functions 
      bool hasDashboardEndpoint() const { return this->dashboardEndpoint_ != nullptr;};
      void deleteDashboardEndpoint() { this->dashboardEndpoint_ = nullptr;};
      inline const Data::DashboardEndpoint & getDashboardEndpoint() const { DARABONBA_PTR_GET_CONST(dashboardEndpoint_, Data::DashboardEndpoint) };
      inline Data::DashboardEndpoint getDashboardEndpoint() { DARABONBA_PTR_GET(dashboardEndpoint_, Data::DashboardEndpoint) };
      inline Data& setDashboardEndpoint(const Data::DashboardEndpoint & dashboardEndpoint) { DARABONBA_PTR_SET_VALUE(dashboardEndpoint_, dashboardEndpoint) };
      inline Data& setDashboardEndpoint(Data::DashboardEndpoint && dashboardEndpoint) { DARABONBA_PTR_SET_RVALUE(dashboardEndpoint_, dashboardEndpoint) };


      // dashboardPublicEndpoint Field Functions 
      bool hasDashboardPublicEndpoint() const { return this->dashboardPublicEndpoint_ != nullptr;};
      void deleteDashboardPublicEndpoint() { this->dashboardPublicEndpoint_ = nullptr;};
      inline const Data::DashboardPublicEndpoint & getDashboardPublicEndpoint() const { DARABONBA_PTR_GET_CONST(dashboardPublicEndpoint_, Data::DashboardPublicEndpoint) };
      inline Data::DashboardPublicEndpoint getDashboardPublicEndpoint() { DARABONBA_PTR_GET(dashboardPublicEndpoint_, Data::DashboardPublicEndpoint) };
      inline Data& setDashboardPublicEndpoint(const Data::DashboardPublicEndpoint & dashboardPublicEndpoint) { DARABONBA_PTR_SET_VALUE(dashboardPublicEndpoint_, dashboardPublicEndpoint) };
      inline Data& setDashboardPublicEndpoint(Data::DashboardPublicEndpoint && dashboardPublicEndpoint) { DARABONBA_PTR_SET_RVALUE(dashboardPublicEndpoint_, dashboardPublicEndpoint) };


      // defaultUsername Field Functions 
      bool hasDefaultUsername() const { return this->defaultUsername_ != nullptr;};
      void deleteDefaultUsername() { this->defaultUsername_ = nullptr;};
      inline string getDefaultUsername() const { DARABONBA_PTR_GET_DEFAULT(defaultUsername_, "") };
      inline Data& setDefaultUsername(string defaultUsername) { DARABONBA_PTR_SET_VALUE(defaultUsername_, defaultUsername) };


      // privateEndpoint Field Functions 
      bool hasPrivateEndpoint() const { return this->privateEndpoint_ != nullptr;};
      void deletePrivateEndpoint() { this->privateEndpoint_ = nullptr;};
      inline const Data::PrivateEndpoint & getPrivateEndpoint() const { DARABONBA_PTR_GET_CONST(privateEndpoint_, Data::PrivateEndpoint) };
      inline Data::PrivateEndpoint getPrivateEndpoint() { DARABONBA_PTR_GET(privateEndpoint_, Data::PrivateEndpoint) };
      inline Data& setPrivateEndpoint(const Data::PrivateEndpoint & privateEndpoint) { DARABONBA_PTR_SET_VALUE(privateEndpoint_, privateEndpoint) };
      inline Data& setPrivateEndpoint(Data::PrivateEndpoint && privateEndpoint) { DARABONBA_PTR_SET_RVALUE(privateEndpoint_, privateEndpoint) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // publicEndpoint Field Functions 
      bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
      void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
      inline const Data::PublicEndpoint & getPublicEndpoint() const { DARABONBA_PTR_GET_CONST(publicEndpoint_, Data::PublicEndpoint) };
      inline Data::PublicEndpoint getPublicEndpoint() { DARABONBA_PTR_GET(publicEndpoint_, Data::PublicEndpoint) };
      inline Data& setPublicEndpoint(const Data::PublicEndpoint & publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };
      inline Data& setPublicEndpoint(Data::PublicEndpoint && publicEndpoint) { DARABONBA_PTR_SET_RVALUE(publicEndpoint_, publicEndpoint) };


    protected:
      // The internal endpoint of the OpenSearch Dashboard.
      shared_ptr<Data::DashboardEndpoint> dashboardEndpoint_ {};
      // The public network access endpoint of the OpenSearch Dashboard.
      shared_ptr<Data::DashboardPublicEndpoint> dashboardPublicEndpoint_ {};
      // The default account name of OpenSearch.
      shared_ptr<string> defaultUsername_ {};
      // The VPC endpoint of the instance.
      shared_ptr<Data::PrivateEndpoint> privateEndpoint_ {};
      // The protocol of the monitoring task. Valid values:
      // 
      // - **ICMP**.
      // - **TCP**.
      // - **HTTP**.
      // 
      // > Private network monitoring supports only the ICMP and TCP protocols.
      shared_ptr<string> protocol_ {};
      // The public endpoint of the instance.
      shared_ptr<Data::PublicEndpoint> publicEndpoint_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The authentication action.
      shared_ptr<string> authAction_ {};
      // The display name of the authentication principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The description is the same as above.
      shared_ptr<string> authPrincipalType_ {};
      // The diagnostic information.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // NoPermissionType
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeOpenSearchConnectionInfoResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeOpenSearchConnectionInfoResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchConnectionInfoResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeOpenSearchConnectionInfoResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchConnectionInfoResponseBody& setAccessDeniedDetail(const DescribeOpenSearchConnectionInfoResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeOpenSearchConnectionInfoResponseBody& setAccessDeniedDetail(DescribeOpenSearchConnectionInfoResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeOpenSearchConnectionInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeOpenSearchConnectionInfoResponseBody::Data) };
    inline DescribeOpenSearchConnectionInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeOpenSearchConnectionInfoResponseBody::Data) };
    inline DescribeOpenSearchConnectionInfoResponseBody& setData(const DescribeOpenSearchConnectionInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOpenSearchConnectionInfoResponseBody& setData(DescribeOpenSearchConnectionInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenSearchConnectionInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<DescribeOpenSearchConnectionInfoResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The data struct.
    shared_ptr<DescribeOpenSearchConnectionInfoResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
