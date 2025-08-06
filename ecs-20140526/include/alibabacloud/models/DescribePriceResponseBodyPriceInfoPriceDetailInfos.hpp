// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoPriceDetailInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoPriceDetailInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoPriceDetailInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
    };
    DescribePriceResponseBodyPriceInfoPriceDetailInfos() = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfos(const DescribePriceResponseBodyPriceInfoPriceDetailInfos &) = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfos(DescribePriceResponseBodyPriceInfoPriceDetailInfos &&) = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoPriceDetailInfos() = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfos& operator=(const DescribePriceResponseBodyPriceInfoPriceDetailInfos &) = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfos& operator=(DescribePriceResponseBodyPriceInfoPriceDetailInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detailInfo_ != nullptr; };
    // detailInfo Field Functions 
    bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
    void deleteDetailInfo() { this->detailInfo_ = nullptr;};
    inline const vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> & detailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>) };
    inline vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> detailInfo() { DARABONBA_PTR_GET(detailInfo_, vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>) };
    inline DescribePriceResponseBodyPriceInfoPriceDetailInfos& setDetailInfo(const vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
    inline DescribePriceResponseBodyPriceInfoPriceDetailInfos& setDetailInfo(vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>> detailInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
