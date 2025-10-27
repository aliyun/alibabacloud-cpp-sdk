// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULETRIALAUTHINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMODULETRIALAUTHINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModuleTrialAuthInfoResponseBodyDataTrialRecordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleTrialAuthInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleTrialAuthInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CanTry, canTry_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(TrialRecordList, trialRecordList_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleTrialAuthInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CanTry, canTry_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(TrialRecordList, trialRecordList_);
    };
    GetModuleTrialAuthInfoResponseBodyData() = default ;
    GetModuleTrialAuthInfoResponseBodyData(const GetModuleTrialAuthInfoResponseBodyData &) = default ;
    GetModuleTrialAuthInfoResponseBodyData(GetModuleTrialAuthInfoResponseBodyData &&) = default ;
    GetModuleTrialAuthInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleTrialAuthInfoResponseBodyData() = default ;
    GetModuleTrialAuthInfoResponseBodyData& operator=(const GetModuleTrialAuthInfoResponseBodyData &) = default ;
    GetModuleTrialAuthInfoResponseBodyData& operator=(GetModuleTrialAuthInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canTry_ == nullptr
        && return this->moduleCode_ == nullptr && return this->trialRecordList_ == nullptr; };
    // canTry Field Functions 
    bool hasCanTry() const { return this->canTry_ != nullptr;};
    void deleteCanTry() { this->canTry_ = nullptr;};
    inline bool canTry() const { DARABONBA_PTR_GET_DEFAULT(canTry_, false) };
    inline GetModuleTrialAuthInfoResponseBodyData& setCanTry(bool canTry) { DARABONBA_PTR_SET_VALUE(canTry_, canTry) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetModuleTrialAuthInfoResponseBodyData& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // trialRecordList Field Functions 
    bool hasTrialRecordList() const { return this->trialRecordList_ != nullptr;};
    void deleteTrialRecordList() { this->trialRecordList_ = nullptr;};
    inline const vector<Models::GetModuleTrialAuthInfoResponseBodyDataTrialRecordList> & trialRecordList() const { DARABONBA_PTR_GET_CONST(trialRecordList_, vector<Models::GetModuleTrialAuthInfoResponseBodyDataTrialRecordList>) };
    inline vector<Models::GetModuleTrialAuthInfoResponseBodyDataTrialRecordList> trialRecordList() { DARABONBA_PTR_GET(trialRecordList_, vector<Models::GetModuleTrialAuthInfoResponseBodyDataTrialRecordList>) };
    inline GetModuleTrialAuthInfoResponseBodyData& setTrialRecordList(const vector<Models::GetModuleTrialAuthInfoResponseBodyDataTrialRecordList> & trialRecordList) { DARABONBA_PTR_SET_VALUE(trialRecordList_, trialRecordList) };
    inline GetModuleTrialAuthInfoResponseBodyData& setTrialRecordList(vector<Models::GetModuleTrialAuthInfoResponseBodyDataTrialRecordList> && trialRecordList) { DARABONBA_PTR_SET_RVALUE(trialRecordList_, trialRecordList) };


  protected:
    // Indicates whether the user is qualified for the trial use. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> canTry_ = nullptr;
    // The code of the feature. Valid values:
    // 
    // *   **vulFix**: vulnerability fixing.
    // *   **cloudSiem**: threat analysis and response.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // The trial use record.
    std::shared_ptr<vector<Models::GetModuleTrialAuthInfoResponseBodyDataTrialRecordList>> trialRecordList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
