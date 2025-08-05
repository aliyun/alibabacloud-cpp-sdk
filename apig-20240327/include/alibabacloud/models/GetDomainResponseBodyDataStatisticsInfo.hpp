// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODYDATASTATISTICSINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODYDATASTATISTICSINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/APIG20240327.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetDomainResponseBodyDataStatisticsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainResponseBodyDataStatisticsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(resourceStatistics, resourceStatistics_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainResponseBodyDataStatisticsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceStatistics, resourceStatistics_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetDomainResponseBodyDataStatisticsInfo() = default ;
    GetDomainResponseBodyDataStatisticsInfo(const GetDomainResponseBodyDataStatisticsInfo &) = default ;
    GetDomainResponseBodyDataStatisticsInfo(GetDomainResponseBodyDataStatisticsInfo &&) = default ;
    GetDomainResponseBodyDataStatisticsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainResponseBodyDataStatisticsInfo() = default ;
    GetDomainResponseBodyDataStatisticsInfo& operator=(const GetDomainResponseBodyDataStatisticsInfo &) = default ;
    GetDomainResponseBodyDataStatisticsInfo& operator=(GetDomainResponseBodyDataStatisticsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceStatistics_ != nullptr
        && this->totalCount_ != nullptr; };
    // resourceStatistics Field Functions 
    bool hasResourceStatistics() const { return this->resourceStatistics_ != nullptr;};
    void deleteResourceStatistics() { this->resourceStatistics_ = nullptr;};
    inline const vector<Models::ResourceStatistic> & resourceStatistics() const { DARABONBA_PTR_GET_CONST(resourceStatistics_, vector<Models::ResourceStatistic>) };
    inline vector<Models::ResourceStatistic> resourceStatistics() { DARABONBA_PTR_GET(resourceStatistics_, vector<Models::ResourceStatistic>) };
    inline GetDomainResponseBodyDataStatisticsInfo& setResourceStatistics(const vector<Models::ResourceStatistic> & resourceStatistics) { DARABONBA_PTR_SET_VALUE(resourceStatistics_, resourceStatistics) };
    inline GetDomainResponseBodyDataStatisticsInfo& setResourceStatistics(vector<Models::ResourceStatistic> && resourceStatistics) { DARABONBA_PTR_SET_RVALUE(resourceStatistics_, resourceStatistics) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline GetDomainResponseBodyDataStatisticsInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The resource statistics.
    std::shared_ptr<vector<Models::ResourceStatistic>> resourceStatistics_ = nullptr;
    // The total number of resources.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
