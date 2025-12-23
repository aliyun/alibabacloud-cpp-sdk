// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIPCQUOTARESPONSEBODYIPCQUOTAINFOS_HPP_
#define ALIBABACLOUD_MODELS_QUERYIPCQUOTARESPONSEBODYIPCQUOTAINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryIpcQuotaResponseBodyIpcQuotaInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIpcQuotaResponseBodyIpcQuotaInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Capability, capability_);
      DARABONBA_PTR_TO_JSON(ConsumedQuota, consumedQuota_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(MaxQuota, maxQuota_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIpcQuotaResponseBodyIpcQuotaInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Capability, capability_);
      DARABONBA_PTR_FROM_JSON(ConsumedQuota, consumedQuota_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(MaxQuota, maxQuota_);
    };
    QueryIpcQuotaResponseBodyIpcQuotaInfos() = default ;
    QueryIpcQuotaResponseBodyIpcQuotaInfos(const QueryIpcQuotaResponseBodyIpcQuotaInfos &) = default ;
    QueryIpcQuotaResponseBodyIpcQuotaInfos(QueryIpcQuotaResponseBodyIpcQuotaInfos &&) = default ;
    QueryIpcQuotaResponseBodyIpcQuotaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIpcQuotaResponseBodyIpcQuotaInfos() = default ;
    QueryIpcQuotaResponseBodyIpcQuotaInfos& operator=(const QueryIpcQuotaResponseBodyIpcQuotaInfos &) = default ;
    QueryIpcQuotaResponseBodyIpcQuotaInfos& operator=(QueryIpcQuotaResponseBodyIpcQuotaInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capability_ == nullptr
        && return this->consumedQuota_ == nullptr && return this->dateTime_ == nullptr && return this->maxQuota_ == nullptr; };
    // capability Field Functions 
    bool hasCapability() const { return this->capability_ != nullptr;};
    void deleteCapability() { this->capability_ = nullptr;};
    inline string capability() const { DARABONBA_PTR_GET_DEFAULT(capability_, "") };
    inline QueryIpcQuotaResponseBodyIpcQuotaInfos& setCapability(string capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };


    // consumedQuota Field Functions 
    bool hasConsumedQuota() const { return this->consumedQuota_ != nullptr;};
    void deleteConsumedQuota() { this->consumedQuota_ = nullptr;};
    inline int64_t consumedQuota() const { DARABONBA_PTR_GET_DEFAULT(consumedQuota_, 0L) };
    inline QueryIpcQuotaResponseBodyIpcQuotaInfos& setConsumedQuota(int64_t consumedQuota) { DARABONBA_PTR_SET_VALUE(consumedQuota_, consumedQuota) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline QueryIpcQuotaResponseBodyIpcQuotaInfos& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // maxQuota Field Functions 
    bool hasMaxQuota() const { return this->maxQuota_ != nullptr;};
    void deleteMaxQuota() { this->maxQuota_ = nullptr;};
    inline int64_t maxQuota() const { DARABONBA_PTR_GET_DEFAULT(maxQuota_, 0L) };
    inline QueryIpcQuotaResponseBodyIpcQuotaInfos& setMaxQuota(int64_t maxQuota) { DARABONBA_PTR_SET_VALUE(maxQuota_, maxQuota) };


  protected:
    std::shared_ptr<string> capability_ = nullptr;
    std::shared_ptr<int64_t> consumedQuota_ = nullptr;
    std::shared_ptr<string> dateTime_ = nullptr;
    std::shared_ptr<int64_t> maxQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
