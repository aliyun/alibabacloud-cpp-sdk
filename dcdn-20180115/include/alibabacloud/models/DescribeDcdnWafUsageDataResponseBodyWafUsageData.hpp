// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFUSAGEDATARESPONSEBODYWAFUSAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFUSAGEDATARESPONSEBODYWAFUSAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafUsageDataResponseBodyWafUsageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafUsageDataResponseBodyWafUsageData& obj) { 
      DARABONBA_PTR_TO_JSON(WafUsageDataItem, wafUsageDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafUsageDataResponseBodyWafUsageData& obj) { 
      DARABONBA_PTR_FROM_JSON(WafUsageDataItem, wafUsageDataItem_);
    };
    DescribeDcdnWafUsageDataResponseBodyWafUsageData() = default ;
    DescribeDcdnWafUsageDataResponseBodyWafUsageData(const DescribeDcdnWafUsageDataResponseBodyWafUsageData &) = default ;
    DescribeDcdnWafUsageDataResponseBodyWafUsageData(DescribeDcdnWafUsageDataResponseBodyWafUsageData &&) = default ;
    DescribeDcdnWafUsageDataResponseBodyWafUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafUsageDataResponseBodyWafUsageData() = default ;
    DescribeDcdnWafUsageDataResponseBodyWafUsageData& operator=(const DescribeDcdnWafUsageDataResponseBodyWafUsageData &) = default ;
    DescribeDcdnWafUsageDataResponseBodyWafUsageData& operator=(DescribeDcdnWafUsageDataResponseBodyWafUsageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->wafUsageDataItem_ != nullptr; };
    // wafUsageDataItem Field Functions 
    bool hasWafUsageDataItem() const { return this->wafUsageDataItem_ != nullptr;};
    void deleteWafUsageDataItem() { this->wafUsageDataItem_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem> & wafUsageDataItem() const { DARABONBA_PTR_GET_CONST(wafUsageDataItem_, vector<Models::DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem>) };
    inline vector<Models::DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem> wafUsageDataItem() { DARABONBA_PTR_GET(wafUsageDataItem_, vector<Models::DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem>) };
    inline DescribeDcdnWafUsageDataResponseBodyWafUsageData& setWafUsageDataItem(const vector<Models::DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem> & wafUsageDataItem) { DARABONBA_PTR_SET_VALUE(wafUsageDataItem_, wafUsageDataItem) };
    inline DescribeDcdnWafUsageDataResponseBodyWafUsageData& setWafUsageDataItem(vector<Models::DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem> && wafUsageDataItem) { DARABONBA_PTR_SET_RVALUE(wafUsageDataItem_, wafUsageDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem>> wafUsageDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
