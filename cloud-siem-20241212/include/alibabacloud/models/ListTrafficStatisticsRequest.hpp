// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListTrafficStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogUserIds, logUserIds_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionTag, regionTag_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(TrafficStatisticPeriod, trafficStatisticPeriod_);
      DARABONBA_PTR_TO_JSON(TrafficStatisticPeriodType, trafficStatisticPeriodType_);
      DARABONBA_PTR_TO_JSON(TrafficStatisticType, trafficStatisticType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogUserIds, logUserIds_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionTag, regionTag_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(TrafficStatisticPeriod, trafficStatisticPeriod_);
      DARABONBA_PTR_FROM_JSON(TrafficStatisticPeriodType, trafficStatisticPeriodType_);
      DARABONBA_PTR_FROM_JSON(TrafficStatisticType, trafficStatisticType_);
    };
    ListTrafficStatisticsRequest() = default ;
    ListTrafficStatisticsRequest(const ListTrafficStatisticsRequest &) = default ;
    ListTrafficStatisticsRequest(ListTrafficStatisticsRequest &&) = default ;
    ListTrafficStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficStatisticsRequest() = default ;
    ListTrafficStatisticsRequest& operator=(const ListTrafficStatisticsRequest &) = default ;
    ListTrafficStatisticsRequest& operator=(ListTrafficStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->logUserIds_ == nullptr && return this->productId_ == nullptr && return this->regionId_ == nullptr && return this->regionTag_ == nullptr && return this->roleFor_ == nullptr
        && return this->trafficStatisticPeriod_ == nullptr && return this->trafficStatisticPeriodType_ == nullptr && return this->trafficStatisticType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListTrafficStatisticsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logUserIds Field Functions 
    bool hasLogUserIds() const { return this->logUserIds_ != nullptr;};
    void deleteLogUserIds() { this->logUserIds_ = nullptr;};
    inline const vector<int64_t> & logUserIds() const { DARABONBA_PTR_GET_CONST(logUserIds_, vector<int64_t>) };
    inline vector<int64_t> logUserIds() { DARABONBA_PTR_GET(logUserIds_, vector<int64_t>) };
    inline ListTrafficStatisticsRequest& setLogUserIds(const vector<int64_t> & logUserIds) { DARABONBA_PTR_SET_VALUE(logUserIds_, logUserIds) };
    inline ListTrafficStatisticsRequest& setLogUserIds(vector<int64_t> && logUserIds) { DARABONBA_PTR_SET_RVALUE(logUserIds_, logUserIds) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListTrafficStatisticsRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTrafficStatisticsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionTag Field Functions 
    bool hasRegionTag() const { return this->regionTag_ != nullptr;};
    void deleteRegionTag() { this->regionTag_ = nullptr;};
    inline int32_t regionTag() const { DARABONBA_PTR_GET_DEFAULT(regionTag_, 0) };
    inline ListTrafficStatisticsRequest& setRegionTag(int32_t regionTag) { DARABONBA_PTR_SET_VALUE(regionTag_, regionTag) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListTrafficStatisticsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // trafficStatisticPeriod Field Functions 
    bool hasTrafficStatisticPeriod() const { return this->trafficStatisticPeriod_ != nullptr;};
    void deleteTrafficStatisticPeriod() { this->trafficStatisticPeriod_ = nullptr;};
    inline string trafficStatisticPeriod() const { DARABONBA_PTR_GET_DEFAULT(trafficStatisticPeriod_, "") };
    inline ListTrafficStatisticsRequest& setTrafficStatisticPeriod(string trafficStatisticPeriod) { DARABONBA_PTR_SET_VALUE(trafficStatisticPeriod_, trafficStatisticPeriod) };


    // trafficStatisticPeriodType Field Functions 
    bool hasTrafficStatisticPeriodType() const { return this->trafficStatisticPeriodType_ != nullptr;};
    void deleteTrafficStatisticPeriodType() { this->trafficStatisticPeriodType_ = nullptr;};
    inline string trafficStatisticPeriodType() const { DARABONBA_PTR_GET_DEFAULT(trafficStatisticPeriodType_, "") };
    inline ListTrafficStatisticsRequest& setTrafficStatisticPeriodType(string trafficStatisticPeriodType) { DARABONBA_PTR_SET_VALUE(trafficStatisticPeriodType_, trafficStatisticPeriodType) };


    // trafficStatisticType Field Functions 
    bool hasTrafficStatisticType() const { return this->trafficStatisticType_ != nullptr;};
    void deleteTrafficStatisticType() { this->trafficStatisticType_ = nullptr;};
    inline string trafficStatisticType() const { DARABONBA_PTR_GET_DEFAULT(trafficStatisticType_, "") };
    inline ListTrafficStatisticsRequest& setTrafficStatisticType(string trafficStatisticType) { DARABONBA_PTR_SET_VALUE(trafficStatisticType_, trafficStatisticType) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<vector<int64_t>> logUserIds_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> regionTag_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    std::shared_ptr<string> trafficStatisticPeriod_ = nullptr;
    std::shared_ptr<string> trafficStatisticPeriodType_ = nullptr;
    std::shared_ptr<string> trafficStatisticType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
