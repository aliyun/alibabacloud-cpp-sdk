// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDDISTRIBUTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDDISTRIBUTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveOutboundDistributionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveOutboundDistributionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(InfoOutboundCount, infoOutboundCount_);
      DARABONBA_PTR_TO_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveOutboundDistributionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(InfoOutboundCount, infoOutboundCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
    };
    DescribeSensitiveOutboundDistributionResponseBodyData() = default ;
    DescribeSensitiveOutboundDistributionResponseBodyData(const DescribeSensitiveOutboundDistributionResponseBodyData &) = default ;
    DescribeSensitiveOutboundDistributionResponseBodyData(DescribeSensitiveOutboundDistributionResponseBodyData &&) = default ;
    DescribeSensitiveOutboundDistributionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveOutboundDistributionResponseBodyData() = default ;
    DescribeSensitiveOutboundDistributionResponseBodyData& operator=(const DescribeSensitiveOutboundDistributionResponseBodyData &) = default ;
    DescribeSensitiveOutboundDistributionResponseBodyData& operator=(DescribeSensitiveOutboundDistributionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->country_ == nullptr
        && return this->infoOutboundCount_ == nullptr && return this->sensitiveOutboundCount_ == nullptr; };
    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline DescribeSensitiveOutboundDistributionResponseBodyData& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // infoOutboundCount Field Functions 
    bool hasInfoOutboundCount() const { return this->infoOutboundCount_ != nullptr;};
    void deleteInfoOutboundCount() { this->infoOutboundCount_ = nullptr;};
    inline int64_t infoOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(infoOutboundCount_, 0L) };
    inline DescribeSensitiveOutboundDistributionResponseBodyData& setInfoOutboundCount(int64_t infoOutboundCount) { DARABONBA_PTR_SET_VALUE(infoOutboundCount_, infoOutboundCount) };


    // sensitiveOutboundCount Field Functions 
    bool hasSensitiveOutboundCount() const { return this->sensitiveOutboundCount_ != nullptr;};
    void deleteSensitiveOutboundCount() { this->sensitiveOutboundCount_ = nullptr;};
    inline int64_t sensitiveOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveOutboundCount_, 0L) };
    inline DescribeSensitiveOutboundDistributionResponseBodyData& setSensitiveOutboundCount(int64_t sensitiveOutboundCount) { DARABONBA_PTR_SET_VALUE(sensitiveOutboundCount_, sensitiveOutboundCount) };


  protected:
    // The country to which the data is transferred.
    std::shared_ptr<string> country_ = nullptr;
    // The number of personal information records involved in cross-border data transfer.
    std::shared_ptr<int64_t> infoOutboundCount_ = nullptr;
    // The number of sensitive information records involved in cross-border data transfer.
    std::shared_ptr<int64_t> sensitiveOutboundCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
