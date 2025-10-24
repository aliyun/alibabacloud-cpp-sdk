// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDTRENDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDTRENDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveOutboundTrendResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveOutboundTrendResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_TO_JSON(InfoOutboundCount, infoOutboundCount_);
      DARABONBA_PTR_TO_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveOutboundTrendResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_FROM_JSON(InfoOutboundCount, infoOutboundCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeSensitiveOutboundTrendResponseBodyData() = default ;
    DescribeSensitiveOutboundTrendResponseBodyData(const DescribeSensitiveOutboundTrendResponseBodyData &) = default ;
    DescribeSensitiveOutboundTrendResponseBodyData(DescribeSensitiveOutboundTrendResponseBodyData &&) = default ;
    DescribeSensitiveOutboundTrendResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveOutboundTrendResponseBodyData() = default ;
    DescribeSensitiveOutboundTrendResponseBodyData& operator=(const DescribeSensitiveOutboundTrendResponseBodyData &) = default ;
    DescribeSensitiveOutboundTrendResponseBodyData& operator=(DescribeSensitiveOutboundTrendResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->infoCount_ == nullptr
        && return this->infoOutboundCount_ == nullptr && return this->sensitiveOutboundCount_ == nullptr && return this->timestamp_ == nullptr; };
    // infoCount Field Functions 
    bool hasInfoCount() const { return this->infoCount_ != nullptr;};
    void deleteInfoCount() { this->infoCount_ = nullptr;};
    inline int64_t infoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0L) };
    inline DescribeSensitiveOutboundTrendResponseBodyData& setInfoCount(int64_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


    // infoOutboundCount Field Functions 
    bool hasInfoOutboundCount() const { return this->infoOutboundCount_ != nullptr;};
    void deleteInfoOutboundCount() { this->infoOutboundCount_ = nullptr;};
    inline int64_t infoOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(infoOutboundCount_, 0L) };
    inline DescribeSensitiveOutboundTrendResponseBodyData& setInfoOutboundCount(int64_t infoOutboundCount) { DARABONBA_PTR_SET_VALUE(infoOutboundCount_, infoOutboundCount) };


    // sensitiveOutboundCount Field Functions 
    bool hasSensitiveOutboundCount() const { return this->sensitiveOutboundCount_ != nullptr;};
    void deleteSensitiveOutboundCount() { this->sensitiveOutboundCount_ = nullptr;};
    inline int64_t sensitiveOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveOutboundCount_, 0L) };
    inline DescribeSensitiveOutboundTrendResponseBodyData& setSensitiveOutboundCount(int64_t sensitiveOutboundCount) { DARABONBA_PTR_SET_VALUE(sensitiveOutboundCount_, sensitiveOutboundCount) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeSensitiveOutboundTrendResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The total number of personal information records.
    std::shared_ptr<int64_t> infoCount_ = nullptr;
    // The total number of personal information records involved in cross-border data transfer.
    std::shared_ptr<int64_t> infoOutboundCount_ = nullptr;
    // The total number of sensitive information records involved in cross-border data transfer.
    std::shared_ptr<int64_t> sensitiveOutboundCount_ = nullptr;
    // The time of cross-border data transfer. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
