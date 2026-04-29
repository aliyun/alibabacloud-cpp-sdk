// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUNKNOWNTHREATDETECTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUNKNOWNTHREATDETECTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateUnknownThreatDetectStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUnknownThreatDetectStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSelectionType, assetSelectionType_);
      DARABONBA_PTR_TO_JSON(DurationDaysAfterInit, durationDaysAfterInit_);
      DARABONBA_PTR_TO_JSON(DurationDaysAfterStop, durationDaysAfterStop_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StudyMode, studyMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUnknownThreatDetectStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSelectionType, assetSelectionType_);
      DARABONBA_PTR_FROM_JSON(DurationDaysAfterInit, durationDaysAfterInit_);
      DARABONBA_PTR_FROM_JSON(DurationDaysAfterStop, durationDaysAfterStop_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StudyMode, studyMode_);
    };
    CreateUnknownThreatDetectStrategyRequest() = default ;
    CreateUnknownThreatDetectStrategyRequest(const CreateUnknownThreatDetectStrategyRequest &) = default ;
    CreateUnknownThreatDetectStrategyRequest(CreateUnknownThreatDetectStrategyRequest &&) = default ;
    CreateUnknownThreatDetectStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUnknownThreatDetectStrategyRequest() = default ;
    CreateUnknownThreatDetectStrategyRequest& operator=(const CreateUnknownThreatDetectStrategyRequest &) = default ;
    CreateUnknownThreatDetectStrategyRequest& operator=(CreateUnknownThreatDetectStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetSelectionType_ == nullptr
        && this->durationDaysAfterInit_ == nullptr && this->durationDaysAfterStop_ == nullptr && this->name_ == nullptr && this->studyMode_ == nullptr; };
    // assetSelectionType Field Functions 
    bool hasAssetSelectionType() const { return this->assetSelectionType_ != nullptr;};
    void deleteAssetSelectionType() { this->assetSelectionType_ = nullptr;};
    inline string getAssetSelectionType() const { DARABONBA_PTR_GET_DEFAULT(assetSelectionType_, "") };
    inline CreateUnknownThreatDetectStrategyRequest& setAssetSelectionType(string assetSelectionType) { DARABONBA_PTR_SET_VALUE(assetSelectionType_, assetSelectionType) };


    // durationDaysAfterInit Field Functions 
    bool hasDurationDaysAfterInit() const { return this->durationDaysAfterInit_ != nullptr;};
    void deleteDurationDaysAfterInit() { this->durationDaysAfterInit_ = nullptr;};
    inline int32_t getDurationDaysAfterInit() const { DARABONBA_PTR_GET_DEFAULT(durationDaysAfterInit_, 0) };
    inline CreateUnknownThreatDetectStrategyRequest& setDurationDaysAfterInit(int32_t durationDaysAfterInit) { DARABONBA_PTR_SET_VALUE(durationDaysAfterInit_, durationDaysAfterInit) };


    // durationDaysAfterStop Field Functions 
    bool hasDurationDaysAfterStop() const { return this->durationDaysAfterStop_ != nullptr;};
    void deleteDurationDaysAfterStop() { this->durationDaysAfterStop_ = nullptr;};
    inline int32_t getDurationDaysAfterStop() const { DARABONBA_PTR_GET_DEFAULT(durationDaysAfterStop_, 0) };
    inline CreateUnknownThreatDetectStrategyRequest& setDurationDaysAfterStop(int32_t durationDaysAfterStop) { DARABONBA_PTR_SET_VALUE(durationDaysAfterStop_, durationDaysAfterStop) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateUnknownThreatDetectStrategyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // studyMode Field Functions 
    bool hasStudyMode() const { return this->studyMode_ != nullptr;};
    void deleteStudyMode() { this->studyMode_ = nullptr;};
    inline string getStudyMode() const { DARABONBA_PTR_GET_DEFAULT(studyMode_, "") };
    inline CreateUnknownThreatDetectStrategyRequest& setStudyMode(string studyMode) { DARABONBA_PTR_SET_VALUE(studyMode_, studyMode) };


  protected:
    shared_ptr<string> assetSelectionType_ {};
    shared_ptr<int32_t> durationDaysAfterInit_ {};
    shared_ptr<int32_t> durationDaysAfterStop_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> studyMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
