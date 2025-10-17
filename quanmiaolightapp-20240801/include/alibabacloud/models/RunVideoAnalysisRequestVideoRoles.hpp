// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISREQUESTVIDEOROLES_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISREQUESTVIDEOROLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisRequestVideoRolesTimeIntervals.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisRequestVideoRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisRequestVideoRoles& obj) { 
      DARABONBA_PTR_TO_JSON(isAutoRecognition, isAutoRecognition_);
      DARABONBA_PTR_TO_JSON(roleInfo, roleInfo_);
      DARABONBA_PTR_TO_JSON(roleName, roleName_);
      DARABONBA_PTR_TO_JSON(timeIntervals, timeIntervals_);
      DARABONBA_PTR_TO_JSON(urls, urls_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisRequestVideoRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(isAutoRecognition, isAutoRecognition_);
      DARABONBA_PTR_FROM_JSON(roleInfo, roleInfo_);
      DARABONBA_PTR_FROM_JSON(roleName, roleName_);
      DARABONBA_PTR_FROM_JSON(timeIntervals, timeIntervals_);
      DARABONBA_PTR_FROM_JSON(urls, urls_);
    };
    RunVideoAnalysisRequestVideoRoles() = default ;
    RunVideoAnalysisRequestVideoRoles(const RunVideoAnalysisRequestVideoRoles &) = default ;
    RunVideoAnalysisRequestVideoRoles(RunVideoAnalysisRequestVideoRoles &&) = default ;
    RunVideoAnalysisRequestVideoRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisRequestVideoRoles() = default ;
    RunVideoAnalysisRequestVideoRoles& operator=(const RunVideoAnalysisRequestVideoRoles &) = default ;
    RunVideoAnalysisRequestVideoRoles& operator=(RunVideoAnalysisRequestVideoRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isAutoRecognition_ == nullptr
        && return this->roleInfo_ == nullptr && return this->roleName_ == nullptr && return this->timeIntervals_ == nullptr && return this->urls_ == nullptr; };
    // isAutoRecognition Field Functions 
    bool hasIsAutoRecognition() const { return this->isAutoRecognition_ != nullptr;};
    void deleteIsAutoRecognition() { this->isAutoRecognition_ = nullptr;};
    inline bool isAutoRecognition() const { DARABONBA_PTR_GET_DEFAULT(isAutoRecognition_, false) };
    inline RunVideoAnalysisRequestVideoRoles& setIsAutoRecognition(bool isAutoRecognition) { DARABONBA_PTR_SET_VALUE(isAutoRecognition_, isAutoRecognition) };


    // roleInfo Field Functions 
    bool hasRoleInfo() const { return this->roleInfo_ != nullptr;};
    void deleteRoleInfo() { this->roleInfo_ = nullptr;};
    inline string roleInfo() const { DARABONBA_PTR_GET_DEFAULT(roleInfo_, "") };
    inline RunVideoAnalysisRequestVideoRoles& setRoleInfo(string roleInfo) { DARABONBA_PTR_SET_VALUE(roleInfo_, roleInfo) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline RunVideoAnalysisRequestVideoRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // timeIntervals Field Functions 
    bool hasTimeIntervals() const { return this->timeIntervals_ != nullptr;};
    void deleteTimeIntervals() { this->timeIntervals_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisRequestVideoRolesTimeIntervals> & timeIntervals() const { DARABONBA_PTR_GET_CONST(timeIntervals_, vector<Models::RunVideoAnalysisRequestVideoRolesTimeIntervals>) };
    inline vector<Models::RunVideoAnalysisRequestVideoRolesTimeIntervals> timeIntervals() { DARABONBA_PTR_GET(timeIntervals_, vector<Models::RunVideoAnalysisRequestVideoRolesTimeIntervals>) };
    inline RunVideoAnalysisRequestVideoRoles& setTimeIntervals(const vector<Models::RunVideoAnalysisRequestVideoRolesTimeIntervals> & timeIntervals) { DARABONBA_PTR_SET_VALUE(timeIntervals_, timeIntervals) };
    inline RunVideoAnalysisRequestVideoRoles& setTimeIntervals(vector<Models::RunVideoAnalysisRequestVideoRolesTimeIntervals> && timeIntervals) { DARABONBA_PTR_SET_RVALUE(timeIntervals_, timeIntervals) };


    // urls Field Functions 
    bool hasUrls() const { return this->urls_ != nullptr;};
    void deleteUrls() { this->urls_ = nullptr;};
    inline const vector<string> & urls() const { DARABONBA_PTR_GET_CONST(urls_, vector<string>) };
    inline vector<string> urls() { DARABONBA_PTR_GET(urls_, vector<string>) };
    inline RunVideoAnalysisRequestVideoRoles& setUrls(const vector<string> & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
    inline RunVideoAnalysisRequestVideoRoles& setUrls(vector<string> && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


  protected:
    std::shared_ptr<bool> isAutoRecognition_ = nullptr;
    std::shared_ptr<string> roleInfo_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<vector<Models::RunVideoAnalysisRequestVideoRolesTimeIntervals>> timeIntervals_ = nullptr;
    std::shared_ptr<vector<string>> urls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
