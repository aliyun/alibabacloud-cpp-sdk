// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7USKEEPALIVERESPONSEBODYRSKEEPALIVE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7USKEEPALIVERESPONSEBODYRSKEEPALIVE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7UsKeepaliveResponseBodyRsKeepalive : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7UsKeepaliveResponseBodyRsKeepalive& obj) { 
      DARABONBA_PTR_TO_JSON(DsKeepaliveTimeout, dsKeepaliveTimeout_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(KeepaliveRequests, keepaliveRequests_);
      DARABONBA_PTR_TO_JSON(KeepaliveTimeout, keepaliveTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7UsKeepaliveResponseBodyRsKeepalive& obj) { 
      DARABONBA_PTR_FROM_JSON(DsKeepaliveTimeout, dsKeepaliveTimeout_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(KeepaliveRequests, keepaliveRequests_);
      DARABONBA_PTR_FROM_JSON(KeepaliveTimeout, keepaliveTimeout_);
    };
    DescribeL7UsKeepaliveResponseBodyRsKeepalive() = default ;
    DescribeL7UsKeepaliveResponseBodyRsKeepalive(const DescribeL7UsKeepaliveResponseBodyRsKeepalive &) = default ;
    DescribeL7UsKeepaliveResponseBodyRsKeepalive(DescribeL7UsKeepaliveResponseBodyRsKeepalive &&) = default ;
    DescribeL7UsKeepaliveResponseBodyRsKeepalive(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7UsKeepaliveResponseBodyRsKeepalive() = default ;
    DescribeL7UsKeepaliveResponseBodyRsKeepalive& operator=(const DescribeL7UsKeepaliveResponseBodyRsKeepalive &) = default ;
    DescribeL7UsKeepaliveResponseBodyRsKeepalive& operator=(DescribeL7UsKeepaliveResponseBodyRsKeepalive &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dsKeepaliveTimeout_ == nullptr
        && return this->enabled_ == nullptr && return this->keepaliveRequests_ == nullptr && return this->keepaliveTimeout_ == nullptr; };
    // dsKeepaliveTimeout Field Functions 
    bool hasDsKeepaliveTimeout() const { return this->dsKeepaliveTimeout_ != nullptr;};
    void deleteDsKeepaliveTimeout() { this->dsKeepaliveTimeout_ = nullptr;};
    inline int64_t dsKeepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(dsKeepaliveTimeout_, 0L) };
    inline DescribeL7UsKeepaliveResponseBodyRsKeepalive& setDsKeepaliveTimeout(int64_t dsKeepaliveTimeout) { DARABONBA_PTR_SET_VALUE(dsKeepaliveTimeout_, dsKeepaliveTimeout) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeL7UsKeepaliveResponseBodyRsKeepalive& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // keepaliveRequests Field Functions 
    bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
    void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
    inline int64_t keepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0L) };
    inline DescribeL7UsKeepaliveResponseBodyRsKeepalive& setKeepaliveRequests(int64_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


    // keepaliveTimeout Field Functions 
    bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
    void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
    inline int64_t keepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0L) };
    inline DescribeL7UsKeepaliveResponseBodyRsKeepalive& setKeepaliveTimeout(int64_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


  protected:
    std::shared_ptr<int64_t> dsKeepaliveTimeout_ = nullptr;
    // Indicates whether Back-to-origin Persistent Connections is turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enabled_ = nullptr;
    // The number of requests that reuse persistent connections.
    std::shared_ptr<int64_t> keepaliveRequests_ = nullptr;
    // The timeout period of idle persistent connections.
    std::shared_ptr<int64_t> keepaliveTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
