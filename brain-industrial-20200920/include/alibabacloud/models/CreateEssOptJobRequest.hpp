// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEESSOPTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEESSOPTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEssOptJobRequestElecPrice.hpp>
#include <alibabacloud/models/CreateEssOptJobRequestGenPrice.hpp>
#include <alibabacloud/models/CreateEssOptJobRequestLocation.hpp>
#include <alibabacloud/models/CreateEssOptJobRequestSystemData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreateEssOptJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEssOptJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ElecPrice, elecPrice_);
      DARABONBA_PTR_TO_JSON(Freq, freq_);
      DARABONBA_PTR_TO_JSON(GenPrice, genPrice_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(RunDate, runDate_);
      DARABONBA_PTR_TO_JSON(SystemData, systemData_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(TopoType, topoType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEssOptJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ElecPrice, elecPrice_);
      DARABONBA_PTR_FROM_JSON(Freq, freq_);
      DARABONBA_PTR_FROM_JSON(GenPrice, genPrice_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(RunDate, runDate_);
      DARABONBA_PTR_FROM_JSON(SystemData, systemData_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(TopoType, topoType_);
    };
    CreateEssOptJobRequest() = default ;
    CreateEssOptJobRequest(const CreateEssOptJobRequest &) = default ;
    CreateEssOptJobRequest(CreateEssOptJobRequest &&) = default ;
    CreateEssOptJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEssOptJobRequest() = default ;
    CreateEssOptJobRequest& operator=(const CreateEssOptJobRequest &) = default ;
    CreateEssOptJobRequest& operator=(CreateEssOptJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessKey_ != nullptr
        && this->duration_ != nullptr && this->elecPrice_ != nullptr && this->freq_ != nullptr && this->genPrice_ != nullptr && this->location_ != nullptr
        && this->modelVersion_ != nullptr && this->runDate_ != nullptr && this->systemData_ != nullptr && this->timeZone_ != nullptr && this->topoType_ != nullptr; };
    // businessKey Field Functions 
    bool hasBusinessKey() const { return this->businessKey_ != nullptr;};
    void deleteBusinessKey() { this->businessKey_ = nullptr;};
    inline string businessKey() const { DARABONBA_PTR_GET_DEFAULT(businessKey_, "") };
    inline CreateEssOptJobRequest& setBusinessKey(string businessKey) { DARABONBA_PTR_SET_VALUE(businessKey_, businessKey) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateEssOptJobRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // elecPrice Field Functions 
    bool hasElecPrice() const { return this->elecPrice_ != nullptr;};
    void deleteElecPrice() { this->elecPrice_ = nullptr;};
    inline const vector<CreateEssOptJobRequestElecPrice> & elecPrice() const { DARABONBA_PTR_GET_CONST(elecPrice_, vector<CreateEssOptJobRequestElecPrice>) };
    inline vector<CreateEssOptJobRequestElecPrice> elecPrice() { DARABONBA_PTR_GET(elecPrice_, vector<CreateEssOptJobRequestElecPrice>) };
    inline CreateEssOptJobRequest& setElecPrice(const vector<CreateEssOptJobRequestElecPrice> & elecPrice) { DARABONBA_PTR_SET_VALUE(elecPrice_, elecPrice) };
    inline CreateEssOptJobRequest& setElecPrice(vector<CreateEssOptJobRequestElecPrice> && elecPrice) { DARABONBA_PTR_SET_RVALUE(elecPrice_, elecPrice) };


    // freq Field Functions 
    bool hasFreq() const { return this->freq_ != nullptr;};
    void deleteFreq() { this->freq_ = nullptr;};
    inline string freq() const { DARABONBA_PTR_GET_DEFAULT(freq_, "") };
    inline CreateEssOptJobRequest& setFreq(string freq) { DARABONBA_PTR_SET_VALUE(freq_, freq) };


    // genPrice Field Functions 
    bool hasGenPrice() const { return this->genPrice_ != nullptr;};
    void deleteGenPrice() { this->genPrice_ = nullptr;};
    inline const vector<CreateEssOptJobRequestGenPrice> & genPrice() const { DARABONBA_PTR_GET_CONST(genPrice_, vector<CreateEssOptJobRequestGenPrice>) };
    inline vector<CreateEssOptJobRequestGenPrice> genPrice() { DARABONBA_PTR_GET(genPrice_, vector<CreateEssOptJobRequestGenPrice>) };
    inline CreateEssOptJobRequest& setGenPrice(const vector<CreateEssOptJobRequestGenPrice> & genPrice) { DARABONBA_PTR_SET_VALUE(genPrice_, genPrice) };
    inline CreateEssOptJobRequest& setGenPrice(vector<CreateEssOptJobRequestGenPrice> && genPrice) { DARABONBA_PTR_SET_RVALUE(genPrice_, genPrice) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const CreateEssOptJobRequestLocation & location() const { DARABONBA_PTR_GET_CONST(location_, CreateEssOptJobRequestLocation) };
    inline CreateEssOptJobRequestLocation location() { DARABONBA_PTR_GET(location_, CreateEssOptJobRequestLocation) };
    inline CreateEssOptJobRequest& setLocation(const CreateEssOptJobRequestLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline CreateEssOptJobRequest& setLocation(CreateEssOptJobRequestLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string modelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline CreateEssOptJobRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // runDate Field Functions 
    bool hasRunDate() const { return this->runDate_ != nullptr;};
    void deleteRunDate() { this->runDate_ = nullptr;};
    inline string runDate() const { DARABONBA_PTR_GET_DEFAULT(runDate_, "") };
    inline CreateEssOptJobRequest& setRunDate(string runDate) { DARABONBA_PTR_SET_VALUE(runDate_, runDate) };


    // systemData Field Functions 
    bool hasSystemData() const { return this->systemData_ != nullptr;};
    void deleteSystemData() { this->systemData_ = nullptr;};
    inline const vector<CreateEssOptJobRequestSystemData> & systemData() const { DARABONBA_PTR_GET_CONST(systemData_, vector<CreateEssOptJobRequestSystemData>) };
    inline vector<CreateEssOptJobRequestSystemData> systemData() { DARABONBA_PTR_GET(systemData_, vector<CreateEssOptJobRequestSystemData>) };
    inline CreateEssOptJobRequest& setSystemData(const vector<CreateEssOptJobRequestSystemData> & systemData) { DARABONBA_PTR_SET_VALUE(systemData_, systemData) };
    inline CreateEssOptJobRequest& setSystemData(vector<CreateEssOptJobRequestSystemData> && systemData) { DARABONBA_PTR_SET_RVALUE(systemData_, systemData) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateEssOptJobRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // topoType Field Functions 
    bool hasTopoType() const { return this->topoType_ != nullptr;};
    void deleteTopoType() { this->topoType_ = nullptr;};
    inline string topoType() const { DARABONBA_PTR_GET_DEFAULT(topoType_, "") };
    inline CreateEssOptJobRequest& setTopoType(string topoType) { DARABONBA_PTR_SET_VALUE(topoType_, topoType) };


  protected:
    std::shared_ptr<string> businessKey_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<vector<CreateEssOptJobRequestElecPrice>> elecPrice_ = nullptr;
    std::shared_ptr<string> freq_ = nullptr;
    std::shared_ptr<vector<CreateEssOptJobRequestGenPrice>> genPrice_ = nullptr;
    std::shared_ptr<CreateEssOptJobRequestLocation> location_ = nullptr;
    std::shared_ptr<string> modelVersion_ = nullptr;
    std::shared_ptr<string> runDate_ = nullptr;
    std::shared_ptr<vector<CreateEssOptJobRequestSystemData>> systemData_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
    std::shared_ptr<string> topoType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
