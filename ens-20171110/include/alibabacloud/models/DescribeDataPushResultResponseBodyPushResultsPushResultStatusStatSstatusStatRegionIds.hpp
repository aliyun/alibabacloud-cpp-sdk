// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODYPUSHRESULTSPUSHRESULTSTATUSSTATSSTATUSSTATREGIONIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODYPUSHRESULTSPUSHRESULTSTATUSSTATSSTATUSSTATREGIONIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIdsRegionId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds() = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds(const DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds &) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds(DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds &&) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds() = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds& operator=(const DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds &) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds& operator=(DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline const vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIdsRegionId> & regionId() const { DARABONBA_PTR_GET_CONST(regionId_, vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIdsRegionId>) };
    inline vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIdsRegionId> regionId() { DARABONBA_PTR_GET(regionId_, vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIdsRegionId>) };
    inline DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds& setRegionId(const vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIdsRegionId> & regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };
    inline DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIds& setRegionId(vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIdsRegionId> && regionId) { DARABONBA_PTR_SET_RVALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStatRegionIdsRegionId>> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
