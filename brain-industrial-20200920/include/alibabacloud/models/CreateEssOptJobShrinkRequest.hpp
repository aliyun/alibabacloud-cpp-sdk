// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEESSOPTJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEESSOPTJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreateEssOptJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEssOptJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ElecPrice, elecPriceShrink_);
      DARABONBA_PTR_TO_JSON(Freq, freq_);
      DARABONBA_PTR_TO_JSON(GenPrice, genPriceShrink_);
      DARABONBA_PTR_TO_JSON(Location, locationShrink_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(RunDate, runDate_);
      DARABONBA_PTR_TO_JSON(SystemData, systemDataShrink_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(TopoType, topoType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEssOptJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ElecPrice, elecPriceShrink_);
      DARABONBA_PTR_FROM_JSON(Freq, freq_);
      DARABONBA_PTR_FROM_JSON(GenPrice, genPriceShrink_);
      DARABONBA_PTR_FROM_JSON(Location, locationShrink_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(RunDate, runDate_);
      DARABONBA_PTR_FROM_JSON(SystemData, systemDataShrink_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(TopoType, topoType_);
    };
    CreateEssOptJobShrinkRequest() = default ;
    CreateEssOptJobShrinkRequest(const CreateEssOptJobShrinkRequest &) = default ;
    CreateEssOptJobShrinkRequest(CreateEssOptJobShrinkRequest &&) = default ;
    CreateEssOptJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEssOptJobShrinkRequest() = default ;
    CreateEssOptJobShrinkRequest& operator=(const CreateEssOptJobShrinkRequest &) = default ;
    CreateEssOptJobShrinkRequest& operator=(CreateEssOptJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessKey_ == nullptr
        && this->duration_ == nullptr && this->elecPriceShrink_ == nullptr && this->freq_ == nullptr && this->genPriceShrink_ == nullptr && this->locationShrink_ == nullptr
        && this->modelVersion_ == nullptr && this->runDate_ == nullptr && this->systemDataShrink_ == nullptr && this->timeZone_ == nullptr && this->topoType_ == nullptr; };
    // businessKey Field Functions 
    bool hasBusinessKey() const { return this->businessKey_ != nullptr;};
    void deleteBusinessKey() { this->businessKey_ = nullptr;};
    inline string getBusinessKey() const { DARABONBA_PTR_GET_DEFAULT(businessKey_, "") };
    inline CreateEssOptJobShrinkRequest& setBusinessKey(string businessKey) { DARABONBA_PTR_SET_VALUE(businessKey_, businessKey) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateEssOptJobShrinkRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // elecPriceShrink Field Functions 
    bool hasElecPriceShrink() const { return this->elecPriceShrink_ != nullptr;};
    void deleteElecPriceShrink() { this->elecPriceShrink_ = nullptr;};
    inline string getElecPriceShrink() const { DARABONBA_PTR_GET_DEFAULT(elecPriceShrink_, "") };
    inline CreateEssOptJobShrinkRequest& setElecPriceShrink(string elecPriceShrink) { DARABONBA_PTR_SET_VALUE(elecPriceShrink_, elecPriceShrink) };


    // freq Field Functions 
    bool hasFreq() const { return this->freq_ != nullptr;};
    void deleteFreq() { this->freq_ = nullptr;};
    inline string getFreq() const { DARABONBA_PTR_GET_DEFAULT(freq_, "") };
    inline CreateEssOptJobShrinkRequest& setFreq(string freq) { DARABONBA_PTR_SET_VALUE(freq_, freq) };


    // genPriceShrink Field Functions 
    bool hasGenPriceShrink() const { return this->genPriceShrink_ != nullptr;};
    void deleteGenPriceShrink() { this->genPriceShrink_ = nullptr;};
    inline string getGenPriceShrink() const { DARABONBA_PTR_GET_DEFAULT(genPriceShrink_, "") };
    inline CreateEssOptJobShrinkRequest& setGenPriceShrink(string genPriceShrink) { DARABONBA_PTR_SET_VALUE(genPriceShrink_, genPriceShrink) };


    // locationShrink Field Functions 
    bool hasLocationShrink() const { return this->locationShrink_ != nullptr;};
    void deleteLocationShrink() { this->locationShrink_ = nullptr;};
    inline string getLocationShrink() const { DARABONBA_PTR_GET_DEFAULT(locationShrink_, "") };
    inline CreateEssOptJobShrinkRequest& setLocationShrink(string locationShrink) { DARABONBA_PTR_SET_VALUE(locationShrink_, locationShrink) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline CreateEssOptJobShrinkRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // runDate Field Functions 
    bool hasRunDate() const { return this->runDate_ != nullptr;};
    void deleteRunDate() { this->runDate_ = nullptr;};
    inline string getRunDate() const { DARABONBA_PTR_GET_DEFAULT(runDate_, "") };
    inline CreateEssOptJobShrinkRequest& setRunDate(string runDate) { DARABONBA_PTR_SET_VALUE(runDate_, runDate) };


    // systemDataShrink Field Functions 
    bool hasSystemDataShrink() const { return this->systemDataShrink_ != nullptr;};
    void deleteSystemDataShrink() { this->systemDataShrink_ = nullptr;};
    inline string getSystemDataShrink() const { DARABONBA_PTR_GET_DEFAULT(systemDataShrink_, "") };
    inline CreateEssOptJobShrinkRequest& setSystemDataShrink(string systemDataShrink) { DARABONBA_PTR_SET_VALUE(systemDataShrink_, systemDataShrink) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateEssOptJobShrinkRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // topoType Field Functions 
    bool hasTopoType() const { return this->topoType_ != nullptr;};
    void deleteTopoType() { this->topoType_ = nullptr;};
    inline string getTopoType() const { DARABONBA_PTR_GET_DEFAULT(topoType_, "") };
    inline CreateEssOptJobShrinkRequest& setTopoType(string topoType) { DARABONBA_PTR_SET_VALUE(topoType_, topoType) };


  protected:
    shared_ptr<string> businessKey_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<string> elecPriceShrink_ {};
    shared_ptr<string> freq_ {};
    shared_ptr<string> genPriceShrink_ {};
    shared_ptr<string> locationShrink_ {};
    shared_ptr<string> modelVersion_ {};
    shared_ptr<string> runDate_ {};
    shared_ptr<string> systemDataShrink_ {};
    shared_ptr<string> timeZone_ {};
    shared_ptr<string> topoType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
