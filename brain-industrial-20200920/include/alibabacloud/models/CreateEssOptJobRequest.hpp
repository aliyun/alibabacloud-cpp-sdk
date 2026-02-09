// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEESSOPTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEESSOPTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class SystemData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemData& obj) { 
        DARABONBA_PTR_TO_JSON(HistoryData, historyData_);
        DARABONBA_PTR_TO_JSON(SystemId, systemId_);
        DARABONBA_ANY_TO_JSON(SystemParams, systemParams_);
        DARABONBA_PTR_TO_JSON(SystemType, systemType_);
      };
      friend void from_json(const Darabonba::Json& j, SystemData& obj) { 
        DARABONBA_PTR_FROM_JSON(HistoryData, historyData_);
        DARABONBA_PTR_FROM_JSON(SystemId, systemId_);
        DARABONBA_ANY_FROM_JSON(SystemParams, systemParams_);
        DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
      };
      SystemData() = default ;
      SystemData(const SystemData &) = default ;
      SystemData(SystemData &&) = default ;
      SystemData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemData() = default ;
      SystemData& operator=(const SystemData &) = default ;
      SystemData& operator=(SystemData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->historyData_ == nullptr
        && this->systemId_ == nullptr && this->systemParams_ == nullptr && this->systemType_ == nullptr; };
      // historyData Field Functions 
      bool hasHistoryData() const { return this->historyData_ != nullptr;};
      void deleteHistoryData() { this->historyData_ = nullptr;};
      inline const vector<Darabonba::Json> & getHistoryData() const { DARABONBA_PTR_GET_CONST(historyData_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getHistoryData() { DARABONBA_PTR_GET(historyData_, vector<Darabonba::Json>) };
      inline SystemData& setHistoryData(const vector<Darabonba::Json> & historyData) { DARABONBA_PTR_SET_VALUE(historyData_, historyData) };
      inline SystemData& setHistoryData(vector<Darabonba::Json> && historyData) { DARABONBA_PTR_SET_RVALUE(historyData_, historyData) };


      // systemId Field Functions 
      bool hasSystemId() const { return this->systemId_ != nullptr;};
      void deleteSystemId() { this->systemId_ = nullptr;};
      inline string getSystemId() const { DARABONBA_PTR_GET_DEFAULT(systemId_, "") };
      inline SystemData& setSystemId(string systemId) { DARABONBA_PTR_SET_VALUE(systemId_, systemId) };


      // systemParams Field Functions 
      bool hasSystemParams() const { return this->systemParams_ != nullptr;};
      void deleteSystemParams() { this->systemParams_ = nullptr;};
      inline       const Darabonba::Json & getSystemParams() const { DARABONBA_GET(systemParams_) };
      Darabonba::Json & getSystemParams() { DARABONBA_GET(systemParams_) };
      inline SystemData& setSystemParams(const Darabonba::Json & systemParams) { DARABONBA_SET_VALUE(systemParams_, systemParams) };
      inline SystemData& setSystemParams(Darabonba::Json && systemParams) { DARABONBA_SET_RVALUE(systemParams_, systemParams) };


      // systemType Field Functions 
      bool hasSystemType() const { return this->systemType_ != nullptr;};
      void deleteSystemType() { this->systemType_ = nullptr;};
      inline string getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
      inline SystemData& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


    protected:
      shared_ptr<vector<Darabonba::Json>> historyData_ {};
      shared_ptr<string> systemId_ {};
      Darabonba::Json systemParams_ {};
      shared_ptr<string> systemType_ {};
    };

    class Location : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Location& obj) { 
        DARABONBA_PTR_TO_JSON(Altitude, altitude_);
        DARABONBA_PTR_TO_JSON(Latitude, latitude_);
        DARABONBA_PTR_TO_JSON(Longitude, longitude_);
      };
      friend void from_json(const Darabonba::Json& j, Location& obj) { 
        DARABONBA_PTR_FROM_JSON(Altitude, altitude_);
        DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
        DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
      };
      Location() = default ;
      Location(const Location &) = default ;
      Location(Location &&) = default ;
      Location(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Location() = default ;
      Location& operator=(const Location &) = default ;
      Location& operator=(Location &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->altitude_ == nullptr
        && this->latitude_ == nullptr && this->longitude_ == nullptr; };
      // altitude Field Functions 
      bool hasAltitude() const { return this->altitude_ != nullptr;};
      void deleteAltitude() { this->altitude_ = nullptr;};
      inline double getAltitude() const { DARABONBA_PTR_GET_DEFAULT(altitude_, 0.0) };
      inline Location& setAltitude(double altitude) { DARABONBA_PTR_SET_VALUE(altitude_, altitude) };


      // latitude Field Functions 
      bool hasLatitude() const { return this->latitude_ != nullptr;};
      void deleteLatitude() { this->latitude_ = nullptr;};
      inline double getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, 0.0) };
      inline Location& setLatitude(double latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


      // longitude Field Functions 
      bool hasLongitude() const { return this->longitude_ != nullptr;};
      void deleteLongitude() { this->longitude_ = nullptr;};
      inline double getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, 0.0) };
      inline Location& setLongitude(double longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


    protected:
      shared_ptr<double> altitude_ {};
      shared_ptr<double> latitude_ {};
      shared_ptr<double> longitude_ {};
    };

    class GenPrice : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GenPrice& obj) { 
        DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
        DARABONBA_PTR_TO_JSON(Price, price_);
      };
      friend void from_json(const Darabonba::Json& j, GenPrice& obj) { 
        DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
      };
      GenPrice() = default ;
      GenPrice(const GenPrice &) = default ;
      GenPrice(GenPrice &&) = default ;
      GenPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GenPrice() = default ;
      GenPrice& operator=(const GenPrice &) = default ;
      GenPrice& operator=(GenPrice &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataTime_ == nullptr
        && this->price_ == nullptr; };
      // dataTime Field Functions 
      bool hasDataTime() const { return this->dataTime_ != nullptr;};
      void deleteDataTime() { this->dataTime_ = nullptr;};
      inline string getDataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
      inline GenPrice& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
      inline GenPrice& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    protected:
      shared_ptr<string> dataTime_ {};
      shared_ptr<string> price_ {};
    };

    class ElecPrice : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElecPrice& obj) { 
        DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
        DARABONBA_PTR_TO_JSON(Price, price_);
      };
      friend void from_json(const Darabonba::Json& j, ElecPrice& obj) { 
        DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
      };
      ElecPrice() = default ;
      ElecPrice(const ElecPrice &) = default ;
      ElecPrice(ElecPrice &&) = default ;
      ElecPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElecPrice() = default ;
      ElecPrice& operator=(const ElecPrice &) = default ;
      ElecPrice& operator=(ElecPrice &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataTime_ == nullptr
        && this->price_ == nullptr; };
      // dataTime Field Functions 
      bool hasDataTime() const { return this->dataTime_ != nullptr;};
      void deleteDataTime() { this->dataTime_ = nullptr;};
      inline string getDataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
      inline ElecPrice& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
      inline ElecPrice& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    protected:
      shared_ptr<string> dataTime_ {};
      shared_ptr<string> price_ {};
    };

    virtual bool empty() const override { return this->businessKey_ == nullptr
        && this->duration_ == nullptr && this->elecPrice_ == nullptr && this->freq_ == nullptr && this->genPrice_ == nullptr && this->location_ == nullptr
        && this->modelVersion_ == nullptr && this->runDate_ == nullptr && this->systemData_ == nullptr && this->timeZone_ == nullptr && this->topoType_ == nullptr; };
    // businessKey Field Functions 
    bool hasBusinessKey() const { return this->businessKey_ != nullptr;};
    void deleteBusinessKey() { this->businessKey_ = nullptr;};
    inline string getBusinessKey() const { DARABONBA_PTR_GET_DEFAULT(businessKey_, "") };
    inline CreateEssOptJobRequest& setBusinessKey(string businessKey) { DARABONBA_PTR_SET_VALUE(businessKey_, businessKey) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateEssOptJobRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // elecPrice Field Functions 
    bool hasElecPrice() const { return this->elecPrice_ != nullptr;};
    void deleteElecPrice() { this->elecPrice_ = nullptr;};
    inline const vector<CreateEssOptJobRequest::ElecPrice> & getElecPrice() const { DARABONBA_PTR_GET_CONST(elecPrice_, vector<CreateEssOptJobRequest::ElecPrice>) };
    inline vector<CreateEssOptJobRequest::ElecPrice> getElecPrice() { DARABONBA_PTR_GET(elecPrice_, vector<CreateEssOptJobRequest::ElecPrice>) };
    inline CreateEssOptJobRequest& setElecPrice(const vector<CreateEssOptJobRequest::ElecPrice> & elecPrice) { DARABONBA_PTR_SET_VALUE(elecPrice_, elecPrice) };
    inline CreateEssOptJobRequest& setElecPrice(vector<CreateEssOptJobRequest::ElecPrice> && elecPrice) { DARABONBA_PTR_SET_RVALUE(elecPrice_, elecPrice) };


    // freq Field Functions 
    bool hasFreq() const { return this->freq_ != nullptr;};
    void deleteFreq() { this->freq_ = nullptr;};
    inline string getFreq() const { DARABONBA_PTR_GET_DEFAULT(freq_, "") };
    inline CreateEssOptJobRequest& setFreq(string freq) { DARABONBA_PTR_SET_VALUE(freq_, freq) };


    // genPrice Field Functions 
    bool hasGenPrice() const { return this->genPrice_ != nullptr;};
    void deleteGenPrice() { this->genPrice_ = nullptr;};
    inline const vector<CreateEssOptJobRequest::GenPrice> & getGenPrice() const { DARABONBA_PTR_GET_CONST(genPrice_, vector<CreateEssOptJobRequest::GenPrice>) };
    inline vector<CreateEssOptJobRequest::GenPrice> getGenPrice() { DARABONBA_PTR_GET(genPrice_, vector<CreateEssOptJobRequest::GenPrice>) };
    inline CreateEssOptJobRequest& setGenPrice(const vector<CreateEssOptJobRequest::GenPrice> & genPrice) { DARABONBA_PTR_SET_VALUE(genPrice_, genPrice) };
    inline CreateEssOptJobRequest& setGenPrice(vector<CreateEssOptJobRequest::GenPrice> && genPrice) { DARABONBA_PTR_SET_RVALUE(genPrice_, genPrice) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const CreateEssOptJobRequest::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, CreateEssOptJobRequest::Location) };
    inline CreateEssOptJobRequest::Location getLocation() { DARABONBA_PTR_GET(location_, CreateEssOptJobRequest::Location) };
    inline CreateEssOptJobRequest& setLocation(const CreateEssOptJobRequest::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline CreateEssOptJobRequest& setLocation(CreateEssOptJobRequest::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline CreateEssOptJobRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // runDate Field Functions 
    bool hasRunDate() const { return this->runDate_ != nullptr;};
    void deleteRunDate() { this->runDate_ = nullptr;};
    inline string getRunDate() const { DARABONBA_PTR_GET_DEFAULT(runDate_, "") };
    inline CreateEssOptJobRequest& setRunDate(string runDate) { DARABONBA_PTR_SET_VALUE(runDate_, runDate) };


    // systemData Field Functions 
    bool hasSystemData() const { return this->systemData_ != nullptr;};
    void deleteSystemData() { this->systemData_ = nullptr;};
    inline const vector<CreateEssOptJobRequest::SystemData> & getSystemData() const { DARABONBA_PTR_GET_CONST(systemData_, vector<CreateEssOptJobRequest::SystemData>) };
    inline vector<CreateEssOptJobRequest::SystemData> getSystemData() { DARABONBA_PTR_GET(systemData_, vector<CreateEssOptJobRequest::SystemData>) };
    inline CreateEssOptJobRequest& setSystemData(const vector<CreateEssOptJobRequest::SystemData> & systemData) { DARABONBA_PTR_SET_VALUE(systemData_, systemData) };
    inline CreateEssOptJobRequest& setSystemData(vector<CreateEssOptJobRequest::SystemData> && systemData) { DARABONBA_PTR_SET_RVALUE(systemData_, systemData) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateEssOptJobRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // topoType Field Functions 
    bool hasTopoType() const { return this->topoType_ != nullptr;};
    void deleteTopoType() { this->topoType_ = nullptr;};
    inline string getTopoType() const { DARABONBA_PTR_GET_DEFAULT(topoType_, "") };
    inline CreateEssOptJobRequest& setTopoType(string topoType) { DARABONBA_PTR_SET_VALUE(topoType_, topoType) };


  protected:
    shared_ptr<string> businessKey_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<vector<CreateEssOptJobRequest::ElecPrice>> elecPrice_ {};
    shared_ptr<string> freq_ {};
    shared_ptr<vector<CreateEssOptJobRequest::GenPrice>> genPrice_ {};
    shared_ptr<CreateEssOptJobRequest::Location> location_ {};
    shared_ptr<string> modelVersion_ {};
    shared_ptr<string> runDate_ {};
    shared_ptr<vector<CreateEssOptJobRequest::SystemData>> systemData_ {};
    shared_ptr<string> timeZone_ {};
    shared_ptr<string> topoType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
