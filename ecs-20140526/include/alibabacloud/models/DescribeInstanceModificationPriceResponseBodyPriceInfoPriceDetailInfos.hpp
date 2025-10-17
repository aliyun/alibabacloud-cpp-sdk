// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
    };
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos() = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos(const DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos &) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos(DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos &&) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos() = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos& operator=(const DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos &) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos& operator=(DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detailInfo_ == nullptr; };
    // detailInfo Field Functions 
    bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
    void deleteDetailInfo() { this->detailInfo_ = nullptr;};
    inline const vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> & detailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>) };
    inline vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> detailInfo() { DARABONBA_PTR_GET(detailInfo_, vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos& setDetailInfo(const vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos& setDetailInfo(vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>> detailInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
