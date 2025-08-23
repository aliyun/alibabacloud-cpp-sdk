// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOROLERECOGNITIONRESULTVIDEOROLES_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOROLERECOGNITIONRESULTVIDEOROLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles& obj) { 
      DARABONBA_PTR_TO_JSON(isAutoRecognition, isAutoRecognition_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(roleInfo, roleInfo_);
      DARABONBA_PTR_TO_JSON(roleName, roleName_);
      DARABONBA_PTR_TO_JSON(timeIntervals, timeIntervals_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(isAutoRecognition, isAutoRecognition_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(roleInfo, roleInfo_);
      DARABONBA_PTR_FROM_JSON(roleName, roleName_);
      DARABONBA_PTR_FROM_JSON(timeIntervals, timeIntervals_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles &&) = default ;
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
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles& setIsAutoRecognition(bool isAutoRecognition) { DARABONBA_PTR_SET_VALUE(isAutoRecognition_, isAutoRecognition) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline float ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles& setRatio(float ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // roleInfo Field Functions 
    bool hasRoleInfo() const { return this->roleInfo_ != nullptr;};
    void deleteRoleInfo() { this->roleInfo_ = nullptr;};
    inline string roleInfo() const { DARABONBA_PTR_GET_DEFAULT(roleInfo_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles& setRoleInfo(string roleInfo) { DARABONBA_PTR_SET_VALUE(roleInfo_, roleInfo) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // timeIntervals Field Functions 
    bool hasTimeIntervals() const { return this->timeIntervals_ != nullptr;};
    void deleteTimeIntervals() { this->timeIntervals_ = nullptr;};
    inline const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals> & timeIntervals() const { DARABONBA_PTR_GET_CONST(timeIntervals_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals>) };
    inline vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals> timeIntervals() { DARABONBA_PTR_GET(timeIntervals_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals>) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles& setTimeIntervals(const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals> & timeIntervals) { DARABONBA_PTR_SET_VALUE(timeIntervals_, timeIntervals) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles& setTimeIntervals(vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals> && timeIntervals) { DARABONBA_PTR_SET_RVALUE(timeIntervals_, timeIntervals) };


  protected:
    std::shared_ptr<bool> isAutoRecognition_ = nullptr;
    std::shared_ptr<float> ratio_ = nullptr;
    std::shared_ptr<string> roleInfo_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals>> timeIntervals_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
