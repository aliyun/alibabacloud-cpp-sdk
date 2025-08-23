// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOROLERECOGNITIONRESULTVIDEOROLES_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOROLERECOGNITIONRESULTVIDEOROLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles& obj) { 
      DARABONBA_PTR_TO_JSON(isAutoRecognition, isAutoRecognition_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(roleInfo, roleInfo_);
      DARABONBA_PTR_TO_JSON(roleName, roleName_);
      DARABONBA_PTR_TO_JSON(timeIntervals, timeIntervals_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(isAutoRecognition, isAutoRecognition_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(roleInfo, roleInfo_);
      DARABONBA_PTR_FROM_JSON(roleName, roleName_);
      DARABONBA_PTR_FROM_JSON(timeIntervals, timeIntervals_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles(const RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles(RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isAutoRecognition_ != nullptr
        && this->ratio_ != nullptr && this->roleInfo_ != nullptr && this->roleName_ != nullptr && this->timeIntervals_ != nullptr; };
    // isAutoRecognition Field Functions 
    bool hasIsAutoRecognition() const { return this->isAutoRecognition_ != nullptr;};
    void deleteIsAutoRecognition() { this->isAutoRecognition_ = nullptr;};
    inline bool isAutoRecognition() const { DARABONBA_PTR_GET_DEFAULT(isAutoRecognition_, false) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles& setIsAutoRecognition(bool isAutoRecognition) { DARABONBA_PTR_SET_VALUE(isAutoRecognition_, isAutoRecognition) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline float ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles& setRatio(float ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // roleInfo Field Functions 
    bool hasRoleInfo() const { return this->roleInfo_ != nullptr;};
    void deleteRoleInfo() { this->roleInfo_ = nullptr;};
    inline string roleInfo() const { DARABONBA_PTR_GET_DEFAULT(roleInfo_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles& setRoleInfo(string roleInfo) { DARABONBA_PTR_SET_VALUE(roleInfo_, roleInfo) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // timeIntervals Field Functions 
    bool hasTimeIntervals() const { return this->timeIntervals_ != nullptr;};
    void deleteTimeIntervals() { this->timeIntervals_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals> & timeIntervals() const { DARABONBA_PTR_GET_CONST(timeIntervals_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals>) };
    inline vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals> timeIntervals() { DARABONBA_PTR_GET(timeIntervals_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals>) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles& setTimeIntervals(const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals> & timeIntervals) { DARABONBA_PTR_SET_VALUE(timeIntervals_, timeIntervals) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles& setTimeIntervals(vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals> && timeIntervals) { DARABONBA_PTR_SET_RVALUE(timeIntervals_, timeIntervals) };


  protected:
    std::shared_ptr<bool> isAutoRecognition_ = nullptr;
    std::shared_ptr<float> ratio_ = nullptr;
    std::shared_ptr<string> roleInfo_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals>> timeIntervals_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
