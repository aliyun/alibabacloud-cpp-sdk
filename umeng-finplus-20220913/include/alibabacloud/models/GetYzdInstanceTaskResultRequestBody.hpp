// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetYzdInstanceTaskResultRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYzdInstanceTaskResultRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(rangeTimeEndTime, rangeTimeEndTime_);
      DARABONBA_PTR_TO_JSON(rangeTimeStartTime, rangeTimeStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetYzdInstanceTaskResultRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(rangeTimeEndTime, rangeTimeEndTime_);
      DARABONBA_PTR_FROM_JSON(rangeTimeStartTime, rangeTimeStartTime_);
    };
    GetYzdInstanceTaskResultRequestBody() = default ;
    GetYzdInstanceTaskResultRequestBody(const GetYzdInstanceTaskResultRequestBody &) = default ;
    GetYzdInstanceTaskResultRequestBody(GetYzdInstanceTaskResultRequestBody &&) = default ;
    GetYzdInstanceTaskResultRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYzdInstanceTaskResultRequestBody() = default ;
    GetYzdInstanceTaskResultRequestBody& operator=(const GetYzdInstanceTaskResultRequestBody &) = default ;
    GetYzdInstanceTaskResultRequestBody& operator=(GetYzdInstanceTaskResultRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->rangeTimeEndTime_ != nullptr && this->rangeTimeStartTime_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetYzdInstanceTaskResultRequestBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // rangeTimeEndTime Field Functions 
    bool hasRangeTimeEndTime() const { return this->rangeTimeEndTime_ != nullptr;};
    void deleteRangeTimeEndTime() { this->rangeTimeEndTime_ = nullptr;};
    inline string rangeTimeEndTime() const { DARABONBA_PTR_GET_DEFAULT(rangeTimeEndTime_, "") };
    inline GetYzdInstanceTaskResultRequestBody& setRangeTimeEndTime(string rangeTimeEndTime) { DARABONBA_PTR_SET_VALUE(rangeTimeEndTime_, rangeTimeEndTime) };


    // rangeTimeStartTime Field Functions 
    bool hasRangeTimeStartTime() const { return this->rangeTimeStartTime_ != nullptr;};
    void deleteRangeTimeStartTime() { this->rangeTimeStartTime_ = nullptr;};
    inline string rangeTimeStartTime() const { DARABONBA_PTR_GET_DEFAULT(rangeTimeStartTime_, "") };
    inline GetYzdInstanceTaskResultRequestBody& setRangeTimeStartTime(string rangeTimeStartTime) { DARABONBA_PTR_SET_VALUE(rangeTimeStartTime_, rangeTimeStartTime) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> rangeTimeEndTime_ = nullptr;
    std::shared_ptr<string> rangeTimeStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
