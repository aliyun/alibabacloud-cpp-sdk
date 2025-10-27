// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSASMODULETRIALRESPONSEBODYDATATRIALRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDSASMODULETRIALRESPONSEBODYDATATRIALRECORDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddSasModuleTrialResponseBodyDataTrialRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSasModuleTrialResponseBodyDataTrialRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthLimit, authLimit_);
      DARABONBA_PTR_TO_JSON(AuthLimitList, authLimitList_);
      DARABONBA_PTR_TO_JSON(GmtEnd, gmtEnd_);
      DARABONBA_PTR_TO_JSON(GmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AddSasModuleTrialResponseBodyDataTrialRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthLimit, authLimit_);
      DARABONBA_PTR_FROM_JSON(AuthLimitList, authLimitList_);
      DARABONBA_PTR_FROM_JSON(GmtEnd, gmtEnd_);
      DARABONBA_PTR_FROM_JSON(GmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    AddSasModuleTrialResponseBodyDataTrialRecordList() = default ;
    AddSasModuleTrialResponseBodyDataTrialRecordList(const AddSasModuleTrialResponseBodyDataTrialRecordList &) = default ;
    AddSasModuleTrialResponseBodyDataTrialRecordList(AddSasModuleTrialResponseBodyDataTrialRecordList &&) = default ;
    AddSasModuleTrialResponseBodyDataTrialRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSasModuleTrialResponseBodyDataTrialRecordList() = default ;
    AddSasModuleTrialResponseBodyDataTrialRecordList& operator=(const AddSasModuleTrialResponseBodyDataTrialRecordList &) = default ;
    AddSasModuleTrialResponseBodyDataTrialRecordList& operator=(AddSasModuleTrialResponseBodyDataTrialRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authLimit_ == nullptr
        && return this->authLimitList_ == nullptr && return this->gmtEnd_ == nullptr && return this->gmtStart_ == nullptr && return this->moduleCode_ == nullptr && return this->status_ == nullptr; };
    // authLimit Field Functions 
    bool hasAuthLimit() const { return this->authLimit_ != nullptr;};
    void deleteAuthLimit() { this->authLimit_ = nullptr;};
    inline int64_t authLimit() const { DARABONBA_PTR_GET_DEFAULT(authLimit_, 0L) };
    inline AddSasModuleTrialResponseBodyDataTrialRecordList& setAuthLimit(int64_t authLimit) { DARABONBA_PTR_SET_VALUE(authLimit_, authLimit) };


    // authLimitList Field Functions 
    bool hasAuthLimitList() const { return this->authLimitList_ != nullptr;};
    void deleteAuthLimitList() { this->authLimitList_ = nullptr;};
    inline string authLimitList() const { DARABONBA_PTR_GET_DEFAULT(authLimitList_, "") };
    inline AddSasModuleTrialResponseBodyDataTrialRecordList& setAuthLimitList(string authLimitList) { DARABONBA_PTR_SET_VALUE(authLimitList_, authLimitList) };


    // gmtEnd Field Functions 
    bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
    void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
    inline int64_t gmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, 0L) };
    inline AddSasModuleTrialResponseBodyDataTrialRecordList& setGmtEnd(int64_t gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline int64_t gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, 0L) };
    inline AddSasModuleTrialResponseBodyDataTrialRecordList& setGmtStart(int64_t gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline AddSasModuleTrialResponseBodyDataTrialRecordList& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline AddSasModuleTrialResponseBodyDataTrialRecordList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The quota.
    std::shared_ptr<int64_t> authLimit_ = nullptr;
    // The list of quotas. This parameter is available if the value of the ModuleCode parameter is cloudSiem. The value of this parameter consists of the log storage capacity for the threat analysis and response feature and the log data to add. Units: GB and GB-day.
    std::shared_ptr<string> authLimitList_ = nullptr;
    // The end time of the trial use.
    std::shared_ptr<int64_t> gmtEnd_ = nullptr;
    // The start time of the trial use.
    std::shared_ptr<int64_t> gmtStart_ = nullptr;
    // The code of the feature. Valid values:
    // 
    // *   **vulFix**: vulnerability fixing.
    // *   **cloudSiem**: threat analysis and response.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // The status of the trial use. Valid values:
    // 
    // *   **1**: The feature is in trial use.
    // *   **0**: The trial use ends.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
