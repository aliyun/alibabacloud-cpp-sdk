// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7RSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7RSPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7RsPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7RsPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(ProxyMode, proxyMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RsAttrRwTimeoutMax, rsAttrRwTimeoutMax_);
      DARABONBA_PTR_TO_JSON(UpstreamRetry, upstreamRetry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7RsPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(ProxyMode, proxyMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RsAttrRwTimeoutMax, rsAttrRwTimeoutMax_);
      DARABONBA_PTR_FROM_JSON(UpstreamRetry, upstreamRetry_);
    };
    DescribeL7RsPolicyResponseBody() = default ;
    DescribeL7RsPolicyResponseBody(const DescribeL7RsPolicyResponseBody &) = default ;
    DescribeL7RsPolicyResponseBody(DescribeL7RsPolicyResponseBody &&) = default ;
    DescribeL7RsPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7RsPolicyResponseBody() = default ;
    DescribeL7RsPolicyResponseBody& operator=(const DescribeL7RsPolicyResponseBody &) = default ;
    DescribeL7RsPolicyResponseBody& operator=(DescribeL7RsPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Attributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
        DARABONBA_PTR_TO_JSON(Attribute, attribute_);
        DARABONBA_PTR_TO_JSON(RealServer, realServer_);
        DARABONBA_PTR_TO_JSON(RsType, rsType_);
      };
      friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
        DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
        DARABONBA_PTR_FROM_JSON(RealServer, realServer_);
        DARABONBA_PTR_FROM_JSON(RsType, rsType_);
      };
      Attributes() = default ;
      Attributes(const Attributes &) = default ;
      Attributes(Attributes &&) = default ;
      Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attributes() = default ;
      Attributes& operator=(const Attributes &) = default ;
      Attributes& operator=(Attributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Attribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attribute& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
          DARABONBA_PTR_TO_JSON(FailTimeout, failTimeout_);
          DARABONBA_PTR_TO_JSON(MaxFails, maxFails_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(ReadTimeout, readTimeout_);
          DARABONBA_PTR_TO_JSON(SendTimeout, sendTimeout_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, Attribute& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
          DARABONBA_PTR_FROM_JSON(FailTimeout, failTimeout_);
          DARABONBA_PTR_FROM_JSON(MaxFails, maxFails_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(ReadTimeout, readTimeout_);
          DARABONBA_PTR_FROM_JSON(SendTimeout, sendTimeout_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        Attribute() = default ;
        Attribute(const Attribute &) = default ;
        Attribute(Attribute &&) = default ;
        Attribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attribute() = default ;
        Attribute& operator=(const Attribute &) = default ;
        Attribute& operator=(Attribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectTimeout_ == nullptr
        && this->failTimeout_ == nullptr && this->maxFails_ == nullptr && this->mode_ == nullptr && this->readTimeout_ == nullptr && this->sendTimeout_ == nullptr
        && this->weight_ == nullptr; };
        // connectTimeout Field Functions 
        bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
        void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
        inline int32_t getConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0) };
        inline Attribute& setConnectTimeout(int32_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


        // failTimeout Field Functions 
        bool hasFailTimeout() const { return this->failTimeout_ != nullptr;};
        void deleteFailTimeout() { this->failTimeout_ = nullptr;};
        inline int32_t getFailTimeout() const { DARABONBA_PTR_GET_DEFAULT(failTimeout_, 0) };
        inline Attribute& setFailTimeout(int32_t failTimeout) { DARABONBA_PTR_SET_VALUE(failTimeout_, failTimeout) };


        // maxFails Field Functions 
        bool hasMaxFails() const { return this->maxFails_ != nullptr;};
        void deleteMaxFails() { this->maxFails_ = nullptr;};
        inline int32_t getMaxFails() const { DARABONBA_PTR_GET_DEFAULT(maxFails_, 0) };
        inline Attribute& setMaxFails(int32_t maxFails) { DARABONBA_PTR_SET_VALUE(maxFails_, maxFails) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline Attribute& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // readTimeout Field Functions 
        bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
        void deleteReadTimeout() { this->readTimeout_ = nullptr;};
        inline int32_t getReadTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0) };
        inline Attribute& setReadTimeout(int32_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


        // sendTimeout Field Functions 
        bool hasSendTimeout() const { return this->sendTimeout_ != nullptr;};
        void deleteSendTimeout() { this->sendTimeout_ = nullptr;};
        inline int32_t getSendTimeout() const { DARABONBA_PTR_GET_DEFAULT(sendTimeout_, 0) };
        inline Attribute& setSendTimeout(int32_t sendTimeout) { DARABONBA_PTR_SET_VALUE(sendTimeout_, sendTimeout) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Attribute& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The timeout period for a new connection. Valid values: **1** to **10**. Unit: seconds. Default value: **5**.
        shared_ptr<int32_t> connectTimeout_ {};
        // The expiration time of a connection, in seconds. If the number of failures at the origin server exceeds the **MaxFails** value, the address of the origin server is set to down and the expiration time is **FailTimeout**. The final value is the maximum value of **ConnectTimeout** and **FailTimeout**. Valid values: **1** to **3600**. Unit: seconds. Default value: **10**.
        shared_ptr<int32_t> failTimeout_ {};
        // The maximum number of failures. This parameter is related to health check. Valid values: **1** to **10**. Unit: seconds. Default value: **3**.
        shared_ptr<int32_t> maxFails_ {};
        // The primary/secondary flag. Valid values:
        // 
        // *   **active**: primary
        // *   **backup**: secondary
        shared_ptr<string> mode_ {};
        // The timeout period for a read connection. Valid values: **10** to **300**. Unit: seconds. Default value: **120**.
        shared_ptr<int32_t> readTimeout_ {};
        // The timeout period for a write connection. Valid values: **10** to **300**. Unit: seconds. Default value: **120**.
        shared_ptr<int32_t> sendTimeout_ {};
        // The weight of the origin server. This parameter takes effect only if the value of **ProxyMode** is **rr** or **ip_hash**.****
        // 
        // Valid values: **1** to **100**. Default value: **100**. A server with a higher weight receives more requests.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->attribute_ == nullptr
        && this->realServer_ == nullptr && this->rsType_ == nullptr; };
      // attribute Field Functions 
      bool hasAttribute() const { return this->attribute_ != nullptr;};
      void deleteAttribute() { this->attribute_ = nullptr;};
      inline const Attributes::Attribute & getAttribute() const { DARABONBA_PTR_GET_CONST(attribute_, Attributes::Attribute) };
      inline Attributes::Attribute getAttribute() { DARABONBA_PTR_GET(attribute_, Attributes::Attribute) };
      inline Attributes& setAttribute(const Attributes::Attribute & attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };
      inline Attributes& setAttribute(Attributes::Attribute && attribute) { DARABONBA_PTR_SET_RVALUE(attribute_, attribute) };


      // realServer Field Functions 
      bool hasRealServer() const { return this->realServer_ != nullptr;};
      void deleteRealServer() { this->realServer_ = nullptr;};
      inline string getRealServer() const { DARABONBA_PTR_GET_DEFAULT(realServer_, "") };
      inline Attributes& setRealServer(string realServer) { DARABONBA_PTR_SET_VALUE(realServer_, realServer) };


      // rsType Field Functions 
      bool hasRsType() const { return this->rsType_ != nullptr;};
      void deleteRsType() { this->rsType_ = nullptr;};
      inline int32_t getRsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
      inline Attributes& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


    protected:
      // The parameters for back-to-origin settings.
      shared_ptr<Attributes::Attribute> attribute_ {};
      // The address of the origin server.
      shared_ptr<string> realServer_ {};
      // The address type of the origin server. Valid values:
      // 
      // *   **0**: IP address
      // *   **1**: domain name
      shared_ptr<int32_t> rsType_ {};
    };

    virtual bool empty() const override { return this->attributes_ == nullptr
        && this->proxyMode_ == nullptr && this->requestId_ == nullptr && this->rsAttrRwTimeoutMax_ == nullptr && this->upstreamRetry_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<DescribeL7RsPolicyResponseBody::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<DescribeL7RsPolicyResponseBody::Attributes>) };
    inline vector<DescribeL7RsPolicyResponseBody::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<DescribeL7RsPolicyResponseBody::Attributes>) };
    inline DescribeL7RsPolicyResponseBody& setAttributes(const vector<DescribeL7RsPolicyResponseBody::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline DescribeL7RsPolicyResponseBody& setAttributes(vector<DescribeL7RsPolicyResponseBody::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // proxyMode Field Functions 
    bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
    void deleteProxyMode() { this->proxyMode_ = nullptr;};
    inline string getProxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
    inline DescribeL7RsPolicyResponseBody& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeL7RsPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rsAttrRwTimeoutMax Field Functions 
    bool hasRsAttrRwTimeoutMax() const { return this->rsAttrRwTimeoutMax_ != nullptr;};
    void deleteRsAttrRwTimeoutMax() { this->rsAttrRwTimeoutMax_ = nullptr;};
    inline int64_t getRsAttrRwTimeoutMax() const { DARABONBA_PTR_GET_DEFAULT(rsAttrRwTimeoutMax_, 0L) };
    inline DescribeL7RsPolicyResponseBody& setRsAttrRwTimeoutMax(int64_t rsAttrRwTimeoutMax) { DARABONBA_PTR_SET_VALUE(rsAttrRwTimeoutMax_, rsAttrRwTimeoutMax) };


    // upstreamRetry Field Functions 
    bool hasUpstreamRetry() const { return this->upstreamRetry_ != nullptr;};
    void deleteUpstreamRetry() { this->upstreamRetry_ = nullptr;};
    inline int32_t getUpstreamRetry() const { DARABONBA_PTR_GET_DEFAULT(upstreamRetry_, 0) };
    inline DescribeL7RsPolicyResponseBody& setUpstreamRetry(int32_t upstreamRetry) { DARABONBA_PTR_SET_VALUE(upstreamRetry_, upstreamRetry) };


  protected:
    // The details about the parameters for back-to-origin settings.
    shared_ptr<vector<DescribeL7RsPolicyResponseBody::Attributes>> attributes_ {};
    // The scheduling algorithm for back-to-origin traffic. Valid values:
    // 
    // *   **ip_hash**: the IP hash algorithm. This algorithm is used to redirect the requests from the same IP address to the same origin server.
    // *   **rr**: the round-robin algorithm. This algorithm is used to redirect requests to origin servers in turn.
    // *   **least_time**: the least response time algorithm. This algorithm is used to minimize the latency when requests are forwarded from Anti-DDoS Pro or Anti-DDoS Premium instances to origin servers based on the intelligent DNS resolution feature.
    shared_ptr<string> proxyMode_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The timeout period for a read or write connection.
    shared_ptr<int64_t> rsAttrRwTimeoutMax_ {};
    // The back-to-origin retry switch. Valid values:
    // 
    // *   **1**: on
    // *   **0**: off
    shared_ptr<int32_t> upstreamRetry_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
