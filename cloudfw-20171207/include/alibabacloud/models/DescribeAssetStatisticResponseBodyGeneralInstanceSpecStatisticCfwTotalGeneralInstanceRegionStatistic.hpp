// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSTATISTICRESPONSEBODYGENERALINSTANCESPECSTATISTICCFWTOTALGENERALINSTANCEREGIONSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSTATISTICRESPONSEBODYGENERALINSTANCESPECSTATISTICCFWTOTALGENERALINSTANCEREGIONSTATISTIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic() = default ;
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic(const DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic &) = default ;
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic(DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic &&) = default ;
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic() = default ;
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic& operator=(const DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic &) = default ;
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic& operator=(DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberList_ == nullptr
        && return this->regionNo_ == nullptr; };
    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<string> & memberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<string>) };
    inline vector<string> memberList() { DARABONBA_PTR_GET(memberList_, vector<string>) };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic& setMemberList(const vector<string> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic& setMemberList(vector<string> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwTotalGeneralInstanceRegionStatistic& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    std::shared_ptr<vector<string>> memberList_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
