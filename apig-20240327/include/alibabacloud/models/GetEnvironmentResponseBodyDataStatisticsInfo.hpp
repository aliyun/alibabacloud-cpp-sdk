// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENVIRONMENTRESPONSEBODYDATASTATISTICSINFO_HPP_
#define ALIBABACLOUD_MODELS_GETENVIRONMENTRESPONSEBODYDATASTATISTICSINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResourceStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetEnvironmentResponseBodyDataStatisticsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnvironmentResponseBodyDataStatisticsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(resourceStatistics, resourceStatistics_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnvironmentResponseBodyDataStatisticsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceStatistics, resourceStatistics_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetEnvironmentResponseBodyDataStatisticsInfo() = default ;
    GetEnvironmentResponseBodyDataStatisticsInfo(const GetEnvironmentResponseBodyDataStatisticsInfo &) = default ;
    GetEnvironmentResponseBodyDataStatisticsInfo(GetEnvironmentResponseBodyDataStatisticsInfo &&) = default ;
    GetEnvironmentResponseBodyDataStatisticsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnvironmentResponseBodyDataStatisticsInfo() = default ;
    GetEnvironmentResponseBodyDataStatisticsInfo& operator=(const GetEnvironmentResponseBodyDataStatisticsInfo &) = default ;
    GetEnvironmentResponseBodyDataStatisticsInfo& operator=(GetEnvironmentResponseBodyDataStatisticsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceStatistics_ == nullptr
        && return this->totalCount_ == nullptr; };
    // resourceStatistics Field Functions 
    bool hasResourceStatistics() const { return this->resourceStatistics_ != nullptr;};
    void deleteResourceStatistics() { this->resourceStatistics_ = nullptr;};
    inline const vector<Models::ResourceStatistic> & resourceStatistics() const { DARABONBA_PTR_GET_CONST(resourceStatistics_, vector<Models::ResourceStatistic>) };
    inline vector<Models::ResourceStatistic> resourceStatistics() { DARABONBA_PTR_GET(resourceStatistics_, vector<Models::ResourceStatistic>) };
    inline GetEnvironmentResponseBodyDataStatisticsInfo& setResourceStatistics(const vector<Models::ResourceStatistic> & resourceStatistics) { DARABONBA_PTR_SET_VALUE(resourceStatistics_, resourceStatistics) };
    inline GetEnvironmentResponseBodyDataStatisticsInfo& setResourceStatistics(vector<Models::ResourceStatistic> && resourceStatistics) { DARABONBA_PTR_SET_RVALUE(resourceStatistics_, resourceStatistics) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetEnvironmentResponseBodyDataStatisticsInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The array of related resource information.
    std::shared_ptr<vector<Models::ResourceStatistic>> resourceStatistics_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
