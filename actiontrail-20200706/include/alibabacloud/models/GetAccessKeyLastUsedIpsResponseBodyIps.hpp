// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDIPSRESPONSEBODYIPS_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDIPSRESPONSEBODYIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedIpsResponseBodyIps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedIpsResponseBodyIps& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UsedTimestamp, usedTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedIpsResponseBodyIps& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UsedTimestamp, usedTimestamp_);
    };
    GetAccessKeyLastUsedIpsResponseBodyIps() = default ;
    GetAccessKeyLastUsedIpsResponseBodyIps(const GetAccessKeyLastUsedIpsResponseBodyIps &) = default ;
    GetAccessKeyLastUsedIpsResponseBodyIps(GetAccessKeyLastUsedIpsResponseBodyIps &&) = default ;
    GetAccessKeyLastUsedIpsResponseBodyIps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedIpsResponseBodyIps() = default ;
    GetAccessKeyLastUsedIpsResponseBodyIps& operator=(const GetAccessKeyLastUsedIpsResponseBodyIps &) = default ;
    GetAccessKeyLastUsedIpsResponseBodyIps& operator=(GetAccessKeyLastUsedIpsResponseBodyIps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->ip_ != nullptr && this->source_ != nullptr && this->usedTimestamp_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline GetAccessKeyLastUsedIpsResponseBodyIps& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetAccessKeyLastUsedIpsResponseBodyIps& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAccessKeyLastUsedIpsResponseBodyIps& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // usedTimestamp Field Functions 
    bool hasUsedTimestamp() const { return this->usedTimestamp_ != nullptr;};
    void deleteUsedTimestamp() { this->usedTimestamp_ = nullptr;};
    inline int64_t usedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(usedTimestamp_, 0L) };
    inline GetAccessKeyLastUsedIpsResponseBodyIps& setUsedTimestamp(int64_t usedTimestamp) { DARABONBA_PTR_SET_VALUE(usedTimestamp_, usedTimestamp) };


  protected:
    // The event details.
    std::shared_ptr<string> detail_ = nullptr;
    // The IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The event source.
    // 
    // Valid values:
    // 
    // *   Internal: other events.
    // *   ManagementEvent: management events.
    // *   DataEvent: data events.
    std::shared_ptr<string> source_ = nullptr;
    // The timestamp when the IP address was used. Unit: milliseconds.
    std::shared_ptr<int64_t> usedTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
