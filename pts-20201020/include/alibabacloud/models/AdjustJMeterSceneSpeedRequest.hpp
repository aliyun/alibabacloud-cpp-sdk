// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADJUSTJMETERSCENESPEEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADJUSTJMETERSCENESPEEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class AdjustJMeterSceneSpeedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AdjustJMeterSceneSpeedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
    };
    friend void from_json(const Darabonba::Json& j, AdjustJMeterSceneSpeedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
    };
    AdjustJMeterSceneSpeedRequest() = default ;
    AdjustJMeterSceneSpeedRequest(const AdjustJMeterSceneSpeedRequest &) = default ;
    AdjustJMeterSceneSpeedRequest(AdjustJMeterSceneSpeedRequest &&) = default ;
    AdjustJMeterSceneSpeedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AdjustJMeterSceneSpeedRequest() = default ;
    AdjustJMeterSceneSpeedRequest& operator=(const AdjustJMeterSceneSpeedRequest &) = default ;
    AdjustJMeterSceneSpeedRequest& operator=(AdjustJMeterSceneSpeedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportId_ == nullptr
        && return this->speed_ == nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline AdjustJMeterSceneSpeedRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int32_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0) };
    inline AdjustJMeterSceneSpeedRequest& setSpeed(int32_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


  protected:
    // The ID of the report.
    // 
    // This parameter is required.
    std::shared_ptr<string> reportId_ = nullptr;
    // The load to which you want to adjust.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> speed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
