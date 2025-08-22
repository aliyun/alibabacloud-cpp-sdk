// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENVSERVICEMONITORRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENVSERVICEMONITORRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateEnvServiceMonitorResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnvServiceMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MatchedMsg, matchedMsg_);
      DARABONBA_PTR_TO_JSON(MatchedTargetCount, matchedTargetCount_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnvServiceMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchedMsg, matchedMsg_);
      DARABONBA_PTR_FROM_JSON(MatchedTargetCount, matchedTargetCount_);
    };
    UpdateEnvServiceMonitorResponseBodyData() = default ;
    UpdateEnvServiceMonitorResponseBodyData(const UpdateEnvServiceMonitorResponseBodyData &) = default ;
    UpdateEnvServiceMonitorResponseBodyData(UpdateEnvServiceMonitorResponseBodyData &&) = default ;
    UpdateEnvServiceMonitorResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnvServiceMonitorResponseBodyData() = default ;
    UpdateEnvServiceMonitorResponseBodyData& operator=(const UpdateEnvServiceMonitorResponseBodyData &) = default ;
    UpdateEnvServiceMonitorResponseBodyData& operator=(UpdateEnvServiceMonitorResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchedMsg_ != nullptr
        && this->matchedTargetCount_ != nullptr; };
    // matchedMsg Field Functions 
    bool hasMatchedMsg() const { return this->matchedMsg_ != nullptr;};
    void deleteMatchedMsg() { this->matchedMsg_ = nullptr;};
    inline string matchedMsg() const { DARABONBA_PTR_GET_DEFAULT(matchedMsg_, "") };
    inline UpdateEnvServiceMonitorResponseBodyData& setMatchedMsg(string matchedMsg) { DARABONBA_PTR_SET_VALUE(matchedMsg_, matchedMsg) };


    // matchedTargetCount Field Functions 
    bool hasMatchedTargetCount() const { return this->matchedTargetCount_ != nullptr;};
    void deleteMatchedTargetCount() { this->matchedTargetCount_ = nullptr;};
    inline string matchedTargetCount() const { DARABONBA_PTR_GET_DEFAULT(matchedTargetCount_, "") };
    inline UpdateEnvServiceMonitorResponseBodyData& setMatchedTargetCount(string matchedTargetCount) { DARABONBA_PTR_SET_VALUE(matchedTargetCount_, matchedTargetCount) };


  protected:
    // Indicates whether targets are matched.
    std::shared_ptr<string> matchedMsg_ = nullptr;
    // The number of matched targets.
    std::shared_ptr<string> matchedTargetCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
