// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNERUSAGEDATARESPONSEBODYERACCDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNERUSAGEDATARESPONSEBODYERACCDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnErUsageDataResponseBodyErAccData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnErUsageDataResponseBodyErAccData& obj) { 
      DARABONBA_PTR_TO_JSON(ErAccItem, erAccItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnErUsageDataResponseBodyErAccData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErAccItem, erAccItem_);
    };
    DescribeDcdnErUsageDataResponseBodyErAccData() = default ;
    DescribeDcdnErUsageDataResponseBodyErAccData(const DescribeDcdnErUsageDataResponseBodyErAccData &) = default ;
    DescribeDcdnErUsageDataResponseBodyErAccData(DescribeDcdnErUsageDataResponseBodyErAccData &&) = default ;
    DescribeDcdnErUsageDataResponseBodyErAccData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnErUsageDataResponseBodyErAccData() = default ;
    DescribeDcdnErUsageDataResponseBodyErAccData& operator=(const DescribeDcdnErUsageDataResponseBodyErAccData &) = default ;
    DescribeDcdnErUsageDataResponseBodyErAccData& operator=(DescribeDcdnErUsageDataResponseBodyErAccData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->erAccItem_ != nullptr; };
    // erAccItem Field Functions 
    bool hasErAccItem() const { return this->erAccItem_ != nullptr;};
    void deleteErAccItem() { this->erAccItem_ = nullptr;};
    inline const vector<Models::DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem> & erAccItem() const { DARABONBA_PTR_GET_CONST(erAccItem_, vector<Models::DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem>) };
    inline vector<Models::DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem> erAccItem() { DARABONBA_PTR_GET(erAccItem_, vector<Models::DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem>) };
    inline DescribeDcdnErUsageDataResponseBodyErAccData& setErAccItem(const vector<Models::DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem> & erAccItem) { DARABONBA_PTR_SET_VALUE(erAccItem_, erAccItem) };
    inline DescribeDcdnErUsageDataResponseBodyErAccData& setErAccItem(vector<Models::DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem> && erAccItem) { DARABONBA_PTR_SET_RVALUE(erAccItem_, erAccItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem>> erAccItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
