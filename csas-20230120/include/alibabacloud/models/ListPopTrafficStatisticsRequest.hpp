// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOPTRAFFICSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOPTRAFFICSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPopTrafficStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPopTrafficStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListPopTrafficStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListPopTrafficStatisticsRequest() = default ;
    ListPopTrafficStatisticsRequest(const ListPopTrafficStatisticsRequest &) = default ;
    ListPopTrafficStatisticsRequest(ListPopTrafficStatisticsRequest &&) = default ;
    ListPopTrafficStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPopTrafficStatisticsRequest() = default ;
    ListPopTrafficStatisticsRequest& operator=(const ListPopTrafficStatisticsRequest &) = default ;
    ListPopTrafficStatisticsRequest& operator=(ListPopTrafficStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->region_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListPopTrafficStatisticsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListPopTrafficStatisticsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListPopTrafficStatisticsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
