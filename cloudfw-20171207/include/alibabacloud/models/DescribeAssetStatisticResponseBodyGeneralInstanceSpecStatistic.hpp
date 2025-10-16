// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSTATISTICRESPONSEBODYGENERALINSTANCESPECSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSTATISTICRESPONSEBODYGENERALINSTANCESPECSTATISTIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwGeneralInstanceRegionStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(CfwGeneralInstanceRegionStatistic, cfwGeneralInstanceRegionStatistic_);
      DARABONBA_PTR_TO_JSON(TotalCfwGeneralInstanceCnt, totalCfwGeneralInstanceCnt_);
      DARABONBA_PTR_TO_JSON(TotalCfwGeneralInstanceUsedCnt, totalCfwGeneralInstanceUsedCnt_);
      DARABONBA_PTR_TO_JSON(TotalGeneralInstanceUsedCnt, totalGeneralInstanceUsedCnt_);
      DARABONBA_PTR_TO_JSON(TotalNatGeneralInstanceCnt, totalNatGeneralInstanceCnt_);
      DARABONBA_PTR_TO_JSON(TotalNatGeneralInstanceUsedCnt, totalNatGeneralInstanceUsedCnt_);
      DARABONBA_PTR_TO_JSON(TotalVfwGeneralInstanceUsedCnt, totalVfwGeneralInstanceUsedCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(CfwGeneralInstanceRegionStatistic, cfwGeneralInstanceRegionStatistic_);
      DARABONBA_PTR_FROM_JSON(TotalCfwGeneralInstanceCnt, totalCfwGeneralInstanceCnt_);
      DARABONBA_PTR_FROM_JSON(TotalCfwGeneralInstanceUsedCnt, totalCfwGeneralInstanceUsedCnt_);
      DARABONBA_PTR_FROM_JSON(TotalGeneralInstanceUsedCnt, totalGeneralInstanceUsedCnt_);
      DARABONBA_PTR_FROM_JSON(TotalNatGeneralInstanceCnt, totalNatGeneralInstanceCnt_);
      DARABONBA_PTR_FROM_JSON(TotalNatGeneralInstanceUsedCnt, totalNatGeneralInstanceUsedCnt_);
      DARABONBA_PTR_FROM_JSON(TotalVfwGeneralInstanceUsedCnt, totalVfwGeneralInstanceUsedCnt_);
    };
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic() = default ;
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic(const DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic &) = default ;
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic(DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic &&) = default ;
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic() = default ;
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& operator=(const DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic &) = default ;
    DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& operator=(DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cfwGeneralInstanceRegionStatistic_ == nullptr
        && return this->totalCfwGeneralInstanceCnt_ == nullptr && return this->totalCfwGeneralInstanceUsedCnt_ == nullptr && return this->totalGeneralInstanceUsedCnt_ == nullptr && return this->totalNatGeneralInstanceCnt_ == nullptr && return this->totalNatGeneralInstanceUsedCnt_ == nullptr
        && return this->totalVfwGeneralInstanceUsedCnt_ == nullptr; };
    // cfwGeneralInstanceRegionStatistic Field Functions 
    bool hasCfwGeneralInstanceRegionStatistic() const { return this->cfwGeneralInstanceRegionStatistic_ != nullptr;};
    void deleteCfwGeneralInstanceRegionStatistic() { this->cfwGeneralInstanceRegionStatistic_ = nullptr;};
    inline const vector<Models::DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwGeneralInstanceRegionStatistic> & cfwGeneralInstanceRegionStatistic() const { DARABONBA_PTR_GET_CONST(cfwGeneralInstanceRegionStatistic_, vector<Models::DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwGeneralInstanceRegionStatistic>) };
    inline vector<Models::DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwGeneralInstanceRegionStatistic> cfwGeneralInstanceRegionStatistic() { DARABONBA_PTR_GET(cfwGeneralInstanceRegionStatistic_, vector<Models::DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwGeneralInstanceRegionStatistic>) };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& setCfwGeneralInstanceRegionStatistic(const vector<Models::DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwGeneralInstanceRegionStatistic> & cfwGeneralInstanceRegionStatistic) { DARABONBA_PTR_SET_VALUE(cfwGeneralInstanceRegionStatistic_, cfwGeneralInstanceRegionStatistic) };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& setCfwGeneralInstanceRegionStatistic(vector<Models::DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwGeneralInstanceRegionStatistic> && cfwGeneralInstanceRegionStatistic) { DARABONBA_PTR_SET_RVALUE(cfwGeneralInstanceRegionStatistic_, cfwGeneralInstanceRegionStatistic) };


    // totalCfwGeneralInstanceCnt Field Functions 
    bool hasTotalCfwGeneralInstanceCnt() const { return this->totalCfwGeneralInstanceCnt_ != nullptr;};
    void deleteTotalCfwGeneralInstanceCnt() { this->totalCfwGeneralInstanceCnt_ = nullptr;};
    inline int32_t totalCfwGeneralInstanceCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCfwGeneralInstanceCnt_, 0) };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& setTotalCfwGeneralInstanceCnt(int32_t totalCfwGeneralInstanceCnt) { DARABONBA_PTR_SET_VALUE(totalCfwGeneralInstanceCnt_, totalCfwGeneralInstanceCnt) };


    // totalCfwGeneralInstanceUsedCnt Field Functions 
    bool hasTotalCfwGeneralInstanceUsedCnt() const { return this->totalCfwGeneralInstanceUsedCnt_ != nullptr;};
    void deleteTotalCfwGeneralInstanceUsedCnt() { this->totalCfwGeneralInstanceUsedCnt_ = nullptr;};
    inline int32_t totalCfwGeneralInstanceUsedCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCfwGeneralInstanceUsedCnt_, 0) };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& setTotalCfwGeneralInstanceUsedCnt(int32_t totalCfwGeneralInstanceUsedCnt) { DARABONBA_PTR_SET_VALUE(totalCfwGeneralInstanceUsedCnt_, totalCfwGeneralInstanceUsedCnt) };


    // totalGeneralInstanceUsedCnt Field Functions 
    bool hasTotalGeneralInstanceUsedCnt() const { return this->totalGeneralInstanceUsedCnt_ != nullptr;};
    void deleteTotalGeneralInstanceUsedCnt() { this->totalGeneralInstanceUsedCnt_ = nullptr;};
    inline int32_t totalGeneralInstanceUsedCnt() const { DARABONBA_PTR_GET_DEFAULT(totalGeneralInstanceUsedCnt_, 0) };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& setTotalGeneralInstanceUsedCnt(int32_t totalGeneralInstanceUsedCnt) { DARABONBA_PTR_SET_VALUE(totalGeneralInstanceUsedCnt_, totalGeneralInstanceUsedCnt) };


    // totalNatGeneralInstanceCnt Field Functions 
    bool hasTotalNatGeneralInstanceCnt() const { return this->totalNatGeneralInstanceCnt_ != nullptr;};
    void deleteTotalNatGeneralInstanceCnt() { this->totalNatGeneralInstanceCnt_ = nullptr;};
    inline int32_t totalNatGeneralInstanceCnt() const { DARABONBA_PTR_GET_DEFAULT(totalNatGeneralInstanceCnt_, 0) };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& setTotalNatGeneralInstanceCnt(int32_t totalNatGeneralInstanceCnt) { DARABONBA_PTR_SET_VALUE(totalNatGeneralInstanceCnt_, totalNatGeneralInstanceCnt) };


    // totalNatGeneralInstanceUsedCnt Field Functions 
    bool hasTotalNatGeneralInstanceUsedCnt() const { return this->totalNatGeneralInstanceUsedCnt_ != nullptr;};
    void deleteTotalNatGeneralInstanceUsedCnt() { this->totalNatGeneralInstanceUsedCnt_ = nullptr;};
    inline int32_t totalNatGeneralInstanceUsedCnt() const { DARABONBA_PTR_GET_DEFAULT(totalNatGeneralInstanceUsedCnt_, 0) };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& setTotalNatGeneralInstanceUsedCnt(int32_t totalNatGeneralInstanceUsedCnt) { DARABONBA_PTR_SET_VALUE(totalNatGeneralInstanceUsedCnt_, totalNatGeneralInstanceUsedCnt) };


    // totalVfwGeneralInstanceUsedCnt Field Functions 
    bool hasTotalVfwGeneralInstanceUsedCnt() const { return this->totalVfwGeneralInstanceUsedCnt_ != nullptr;};
    void deleteTotalVfwGeneralInstanceUsedCnt() { this->totalVfwGeneralInstanceUsedCnt_ = nullptr;};
    inline int32_t totalVfwGeneralInstanceUsedCnt() const { DARABONBA_PTR_GET_DEFAULT(totalVfwGeneralInstanceUsedCnt_, 0) };
    inline DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatistic& setTotalVfwGeneralInstanceUsedCnt(int32_t totalVfwGeneralInstanceUsedCnt) { DARABONBA_PTR_SET_VALUE(totalVfwGeneralInstanceUsedCnt_, totalVfwGeneralInstanceUsedCnt) };


  protected:
    std::shared_ptr<vector<Models::DescribeAssetStatisticResponseBodyGeneralInstanceSpecStatisticCfwGeneralInstanceRegionStatistic>> cfwGeneralInstanceRegionStatistic_ = nullptr;
    std::shared_ptr<int32_t> totalCfwGeneralInstanceCnt_ = nullptr;
    std::shared_ptr<int32_t> totalCfwGeneralInstanceUsedCnt_ = nullptr;
    std::shared_ptr<int32_t> totalGeneralInstanceUsedCnt_ = nullptr;
    std::shared_ptr<int32_t> totalNatGeneralInstanceCnt_ = nullptr;
    std::shared_ptr<int32_t> totalNatGeneralInstanceUsedCnt_ = nullptr;
    std::shared_ptr<int32_t> totalVfwGeneralInstanceUsedCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
