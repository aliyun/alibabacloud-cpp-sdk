// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSPACESUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSPACESUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterSpaceSummaryResponseBodyDataColdData.hpp>
#include <alibabacloud/models/DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth.hpp>
#include <alibabacloud/models/DescribeDBClusterSpaceSummaryResponseBodyDataHotData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterSpaceSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterSpaceSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ColdData, coldData_);
      DARABONBA_PTR_TO_JSON(DataGrowth, dataGrowth_);
      DARABONBA_PTR_TO_JSON(HotData, hotData_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterSpaceSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdData, coldData_);
      DARABONBA_PTR_FROM_JSON(DataGrowth, dataGrowth_);
      DARABONBA_PTR_FROM_JSON(HotData, hotData_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeDBClusterSpaceSummaryResponseBodyData() = default ;
    DescribeDBClusterSpaceSummaryResponseBodyData(const DescribeDBClusterSpaceSummaryResponseBodyData &) = default ;
    DescribeDBClusterSpaceSummaryResponseBodyData(DescribeDBClusterSpaceSummaryResponseBodyData &&) = default ;
    DescribeDBClusterSpaceSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterSpaceSummaryResponseBodyData() = default ;
    DescribeDBClusterSpaceSummaryResponseBodyData& operator=(const DescribeDBClusterSpaceSummaryResponseBodyData &) = default ;
    DescribeDBClusterSpaceSummaryResponseBodyData& operator=(DescribeDBClusterSpaceSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldData_ == nullptr
        && return this->dataGrowth_ == nullptr && return this->hotData_ == nullptr && return this->totalSize_ == nullptr; };
    // coldData Field Functions 
    bool hasColdData() const { return this->coldData_ != nullptr;};
    void deleteColdData() { this->coldData_ = nullptr;};
    inline const Models::DescribeDBClusterSpaceSummaryResponseBodyDataColdData & coldData() const { DARABONBA_PTR_GET_CONST(coldData_, Models::DescribeDBClusterSpaceSummaryResponseBodyDataColdData) };
    inline Models::DescribeDBClusterSpaceSummaryResponseBodyDataColdData coldData() { DARABONBA_PTR_GET(coldData_, Models::DescribeDBClusterSpaceSummaryResponseBodyDataColdData) };
    inline DescribeDBClusterSpaceSummaryResponseBodyData& setColdData(const Models::DescribeDBClusterSpaceSummaryResponseBodyDataColdData & coldData) { DARABONBA_PTR_SET_VALUE(coldData_, coldData) };
    inline DescribeDBClusterSpaceSummaryResponseBodyData& setColdData(Models::DescribeDBClusterSpaceSummaryResponseBodyDataColdData && coldData) { DARABONBA_PTR_SET_RVALUE(coldData_, coldData) };


    // dataGrowth Field Functions 
    bool hasDataGrowth() const { return this->dataGrowth_ != nullptr;};
    void deleteDataGrowth() { this->dataGrowth_ = nullptr;};
    inline const Models::DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth & dataGrowth() const { DARABONBA_PTR_GET_CONST(dataGrowth_, Models::DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth) };
    inline Models::DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth dataGrowth() { DARABONBA_PTR_GET(dataGrowth_, Models::DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth) };
    inline DescribeDBClusterSpaceSummaryResponseBodyData& setDataGrowth(const Models::DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth & dataGrowth) { DARABONBA_PTR_SET_VALUE(dataGrowth_, dataGrowth) };
    inline DescribeDBClusterSpaceSummaryResponseBodyData& setDataGrowth(Models::DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth && dataGrowth) { DARABONBA_PTR_SET_RVALUE(dataGrowth_, dataGrowth) };


    // hotData Field Functions 
    bool hasHotData() const { return this->hotData_ != nullptr;};
    void deleteHotData() { this->hotData_ = nullptr;};
    inline const Models::DescribeDBClusterSpaceSummaryResponseBodyDataHotData & hotData() const { DARABONBA_PTR_GET_CONST(hotData_, Models::DescribeDBClusterSpaceSummaryResponseBodyDataHotData) };
    inline Models::DescribeDBClusterSpaceSummaryResponseBodyDataHotData hotData() { DARABONBA_PTR_GET(hotData_, Models::DescribeDBClusterSpaceSummaryResponseBodyDataHotData) };
    inline DescribeDBClusterSpaceSummaryResponseBodyData& setHotData(const Models::DescribeDBClusterSpaceSummaryResponseBodyDataHotData & hotData) { DARABONBA_PTR_SET_VALUE(hotData_, hotData) };
    inline DescribeDBClusterSpaceSummaryResponseBodyData& setHotData(Models::DescribeDBClusterSpaceSummaryResponseBodyDataHotData && hotData) { DARABONBA_PTR_SET_RVALUE(hotData_, hotData) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline string totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, "") };
    inline DescribeDBClusterSpaceSummaryResponseBodyData& setTotalSize(string totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The cold data.
    std::shared_ptr<Models::DescribeDBClusterSpaceSummaryResponseBodyDataColdData> coldData_ = nullptr;
    // The data growth.
    std::shared_ptr<Models::DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth> dataGrowth_ = nullptr;
    // The hot data.
    std::shared_ptr<Models::DescribeDBClusterSpaceSummaryResponseBodyDataHotData> hotData_ = nullptr;
    // The total data size. Unit: bytes.
    // 
    // >  Formula: Total data size = Hot data size+ Cold data size.
    std::shared_ptr<string> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
