// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7USKEEPALIVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7USKEEPALIVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7UsKeepaliveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7UsKeepaliveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RsKeepalive, rsKeepalive_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7UsKeepaliveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RsKeepalive, rsKeepalive_);
    };
    DescribeL7UsKeepaliveResponseBody() = default ;
    DescribeL7UsKeepaliveResponseBody(const DescribeL7UsKeepaliveResponseBody &) = default ;
    DescribeL7UsKeepaliveResponseBody(DescribeL7UsKeepaliveResponseBody &&) = default ;
    DescribeL7UsKeepaliveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7UsKeepaliveResponseBody() = default ;
    DescribeL7UsKeepaliveResponseBody& operator=(const DescribeL7UsKeepaliveResponseBody &) = default ;
    DescribeL7UsKeepaliveResponseBody& operator=(DescribeL7UsKeepaliveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RsKeepalive : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RsKeepalive& obj) { 
        DARABONBA_PTR_TO_JSON(DsKeepaliveTimeout, dsKeepaliveTimeout_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(KeepaliveRequests, keepaliveRequests_);
        DARABONBA_PTR_TO_JSON(KeepaliveTimeout, keepaliveTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, RsKeepalive& obj) { 
        DARABONBA_PTR_FROM_JSON(DsKeepaliveTimeout, dsKeepaliveTimeout_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(KeepaliveRequests, keepaliveRequests_);
        DARABONBA_PTR_FROM_JSON(KeepaliveTimeout, keepaliveTimeout_);
      };
      RsKeepalive() = default ;
      RsKeepalive(const RsKeepalive &) = default ;
      RsKeepalive(RsKeepalive &&) = default ;
      RsKeepalive(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RsKeepalive() = default ;
      RsKeepalive& operator=(const RsKeepalive &) = default ;
      RsKeepalive& operator=(RsKeepalive &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dsKeepaliveTimeout_ == nullptr
        && this->enabled_ == nullptr && this->keepaliveRequests_ == nullptr && this->keepaliveTimeout_ == nullptr; };
      // dsKeepaliveTimeout Field Functions 
      bool hasDsKeepaliveTimeout() const { return this->dsKeepaliveTimeout_ != nullptr;};
      void deleteDsKeepaliveTimeout() { this->dsKeepaliveTimeout_ = nullptr;};
      inline int64_t getDsKeepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(dsKeepaliveTimeout_, 0L) };
      inline RsKeepalive& setDsKeepaliveTimeout(int64_t dsKeepaliveTimeout) { DARABONBA_PTR_SET_VALUE(dsKeepaliveTimeout_, dsKeepaliveTimeout) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline RsKeepalive& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // keepaliveRequests Field Functions 
      bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
      void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
      inline int64_t getKeepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0L) };
      inline RsKeepalive& setKeepaliveRequests(int64_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


      // keepaliveTimeout Field Functions 
      bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
      void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
      inline int64_t getKeepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0L) };
      inline RsKeepalive& setKeepaliveTimeout(int64_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


    protected:
      shared_ptr<int64_t> dsKeepaliveTimeout_ {};
      // Indicates whether Back-to-origin Persistent Connections is turned on. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enabled_ {};
      // The number of requests that reuse persistent connections.
      shared_ptr<int64_t> keepaliveRequests_ {};
      // The timeout period of idle persistent connections.
      shared_ptr<int64_t> keepaliveTimeout_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rsKeepalive_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeL7UsKeepaliveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rsKeepalive Field Functions 
    bool hasRsKeepalive() const { return this->rsKeepalive_ != nullptr;};
    void deleteRsKeepalive() { this->rsKeepalive_ = nullptr;};
    inline const DescribeL7UsKeepaliveResponseBody::RsKeepalive & getRsKeepalive() const { DARABONBA_PTR_GET_CONST(rsKeepalive_, DescribeL7UsKeepaliveResponseBody::RsKeepalive) };
    inline DescribeL7UsKeepaliveResponseBody::RsKeepalive getRsKeepalive() { DARABONBA_PTR_GET(rsKeepalive_, DescribeL7UsKeepaliveResponseBody::RsKeepalive) };
    inline DescribeL7UsKeepaliveResponseBody& setRsKeepalive(const DescribeL7UsKeepaliveResponseBody::RsKeepalive & rsKeepalive) { DARABONBA_PTR_SET_VALUE(rsKeepalive_, rsKeepalive) };
    inline DescribeL7UsKeepaliveResponseBody& setRsKeepalive(DescribeL7UsKeepaliveResponseBody::RsKeepalive && rsKeepalive) { DARABONBA_PTR_SET_RVALUE(rsKeepalive_, rsKeepalive) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The value of the Back-to-origin Persistent Connections parameter.
    shared_ptr<DescribeL7UsKeepaliveResponseBody::RsKeepalive> rsKeepalive_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
