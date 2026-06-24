// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeDiagnosisSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeDiagnosisSettingsResponseBody() = default ;
    DescribeDiagnosisSettingsResponseBody(const DescribeDiagnosisSettingsResponseBody &) = default ;
    DescribeDiagnosisSettingsResponseBody(DescribeDiagnosisSettingsResponseBody &&) = default ;
    DescribeDiagnosisSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisSettingsResponseBody() = default ;
    DescribeDiagnosisSettingsResponseBody& operator=(const DescribeDiagnosisSettingsResponseBody &) = default ;
    DescribeDiagnosisSettingsResponseBody& operator=(DescribeDiagnosisSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(authorizationStatus, authorizationStatus_);
        DARABONBA_PTR_TO_JSON(dailyLimit, dailyLimit_);
        DARABONBA_PTR_TO_JSON(dailyScheduleEnabled, dailyScheduleEnabled_);
        DARABONBA_PTR_TO_JSON(diagnosisMode, diagnosisMode_);
        DARABONBA_PTR_TO_JSON(scene, scene_);
        DARABONBA_PTR_TO_JSON(selectedItems, selectedItems_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(authorizationStatus, authorizationStatus_);
        DARABONBA_PTR_FROM_JSON(dailyLimit, dailyLimit_);
        DARABONBA_PTR_FROM_JSON(dailyScheduleEnabled, dailyScheduleEnabled_);
        DARABONBA_PTR_FROM_JSON(diagnosisMode, diagnosisMode_);
        DARABONBA_PTR_FROM_JSON(scene, scene_);
        DARABONBA_PTR_FROM_JSON(selectedItems, selectedItems_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationStatus_ == nullptr
        && this->dailyLimit_ == nullptr && this->dailyScheduleEnabled_ == nullptr && this->diagnosisMode_ == nullptr && this->scene_ == nullptr && this->selectedItems_ == nullptr
        && this->updateTime_ == nullptr; };
      // authorizationStatus Field Functions 
      bool hasAuthorizationStatus() const { return this->authorizationStatus_ != nullptr;};
      void deleteAuthorizationStatus() { this->authorizationStatus_ = nullptr;};
      inline bool getAuthorizationStatus() const { DARABONBA_PTR_GET_DEFAULT(authorizationStatus_, false) };
      inline Result& setAuthorizationStatus(bool authorizationStatus) { DARABONBA_PTR_SET_VALUE(authorizationStatus_, authorizationStatus) };


      // dailyLimit Field Functions 
      bool hasDailyLimit() const { return this->dailyLimit_ != nullptr;};
      void deleteDailyLimit() { this->dailyLimit_ = nullptr;};
      inline int32_t getDailyLimit() const { DARABONBA_PTR_GET_DEFAULT(dailyLimit_, 0) };
      inline Result& setDailyLimit(int32_t dailyLimit) { DARABONBA_PTR_SET_VALUE(dailyLimit_, dailyLimit) };


      // dailyScheduleEnabled Field Functions 
      bool hasDailyScheduleEnabled() const { return this->dailyScheduleEnabled_ != nullptr;};
      void deleteDailyScheduleEnabled() { this->dailyScheduleEnabled_ = nullptr;};
      inline bool getDailyScheduleEnabled() const { DARABONBA_PTR_GET_DEFAULT(dailyScheduleEnabled_, false) };
      inline Result& setDailyScheduleEnabled(bool dailyScheduleEnabled) { DARABONBA_PTR_SET_VALUE(dailyScheduleEnabled_, dailyScheduleEnabled) };


      // diagnosisMode Field Functions 
      bool hasDiagnosisMode() const { return this->diagnosisMode_ != nullptr;};
      void deleteDiagnosisMode() { this->diagnosisMode_ = nullptr;};
      inline string getDiagnosisMode() const { DARABONBA_PTR_GET_DEFAULT(diagnosisMode_, "") };
      inline Result& setDiagnosisMode(string diagnosisMode) { DARABONBA_PTR_SET_VALUE(diagnosisMode_, diagnosisMode) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Result& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // selectedItems Field Functions 
      bool hasSelectedItems() const { return this->selectedItems_ != nullptr;};
      void deleteSelectedItems() { this->selectedItems_ = nullptr;};
      inline const vector<string> & getSelectedItems() const { DARABONBA_PTR_GET_CONST(selectedItems_, vector<string>) };
      inline vector<string> getSelectedItems() { DARABONBA_PTR_GET(selectedItems_, vector<string>) };
      inline Result& setSelectedItems(const vector<string> & selectedItems) { DARABONBA_PTR_SET_VALUE(selectedItems_, selectedItems) };
      inline Result& setSelectedItems(vector<string> && selectedItems) { DARABONBA_PTR_SET_RVALUE(selectedItems_, selectedItems) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Result& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<bool> authorizationStatus_ {};
      shared_ptr<int32_t> dailyLimit_ {};
      shared_ptr<bool> dailyScheduleEnabled_ {};
      shared_ptr<string> diagnosisMode_ {};
      // The scenario of intelligent O&M.
      shared_ptr<string> scene_ {};
      shared_ptr<vector<string>> selectedItems_ {};
      // The timestamp when the intelligent O&M scenario was last updated.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeDiagnosisSettingsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeDiagnosisSettingsResponseBody::Result) };
    inline DescribeDiagnosisSettingsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeDiagnosisSettingsResponseBody::Result) };
    inline DescribeDiagnosisSettingsResponseBody& setResult(const DescribeDiagnosisSettingsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeDiagnosisSettingsResponseBody& setResult(DescribeDiagnosisSettingsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<DescribeDiagnosisSettingsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
