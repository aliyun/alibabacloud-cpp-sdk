// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODYPUSHRESULTSPUSHRESULTSTATUSSTATSSTATUSSTAT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODYPUSHRESULTSPUSHRESULTSTATUSSTATSSTATUSSTAT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat& obj) { 
      DARABONBA_PTR_TO_JSON(RegionIdCount, regionIdCount_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionIdCount, regionIdCount_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat() = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat(const DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat &) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat(DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat &&) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat() = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat& operator=(const DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat &) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat& operator=(DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionIdCount_ == nullptr
        && return this->regionIds_ == nullptr && return this->status_ == nullptr; };
    // regionIdCount Field Functions 
    bool hasRegionIdCount() const { return this->regionIdCount_ != nullptr;};
    void deleteRegionIdCount() { this->regionIdCount_ = nullptr;};
    inline int32_t regionIdCount() const { DARABONBA_PTR_GET_DEFAULT(regionIdCount_, 0) };
    inline DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat& setRegionIdCount(int32_t regionIdCount) { DARABONBA_PTR_SET_VALUE(regionIdCount_, regionIdCount) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds & regionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds) };
    inline Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds regionIds() { DARABONBA_PTR_GET(regionIds_, Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds) };
    inline DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat& setRegionIds(const Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat& setRegionIds(Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The total number of ENS nodes.
    std::shared_ptr<int32_t> regionIdCount_ = nullptr;
    // The push status of data files on the ENS node.
    std::shared_ptr<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds> regionIds_ = nullptr;
    // The push status. The value is of the enumeration type. Valid values: SUCCESS FAILED PUSHING
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
