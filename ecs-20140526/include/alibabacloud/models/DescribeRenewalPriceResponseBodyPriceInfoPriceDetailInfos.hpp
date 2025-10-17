// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
    };
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos(const DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos(DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos &&) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos& operator=(const DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos& operator=(DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detailInfo_ == nullptr; };
    // detailInfo Field Functions 
    bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
    void deleteDetailInfo() { this->detailInfo_ = nullptr;};
    inline const vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> & detailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>) };
    inline vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> detailInfo() { DARABONBA_PTR_GET(detailInfo_, vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>) };
    inline DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos& setDetailInfo(const vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
    inline DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos& setDetailInfo(vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>> detailInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
