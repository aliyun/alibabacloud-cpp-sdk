// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEESSOPTJOBREQUESTSYSTEMDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEESSOPTJOBREQUESTSYSTEMDATA_HPP_
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
  class CreateEssOptJobRequestSystemData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEssOptJobRequestSystemData& obj) { 
      DARABONBA_PTR_TO_JSON(HistoryData, historyData_);
      DARABONBA_PTR_TO_JSON(SystemId, systemId_);
      DARABONBA_ANY_TO_JSON(SystemParams, systemParams_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEssOptJobRequestSystemData& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoryData, historyData_);
      DARABONBA_PTR_FROM_JSON(SystemId, systemId_);
      DARABONBA_ANY_FROM_JSON(SystemParams, systemParams_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
    };
    CreateEssOptJobRequestSystemData() = default ;
    CreateEssOptJobRequestSystemData(const CreateEssOptJobRequestSystemData &) = default ;
    CreateEssOptJobRequestSystemData(CreateEssOptJobRequestSystemData &&) = default ;
    CreateEssOptJobRequestSystemData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEssOptJobRequestSystemData() = default ;
    CreateEssOptJobRequestSystemData& operator=(const CreateEssOptJobRequestSystemData &) = default ;
    CreateEssOptJobRequestSystemData& operator=(CreateEssOptJobRequestSystemData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->historyData_ == nullptr
        && return this->systemId_ == nullptr && return this->systemParams_ == nullptr && return this->systemType_ == nullptr; };
    // historyData Field Functions 
    bool hasHistoryData() const { return this->historyData_ != nullptr;};
    void deleteHistoryData() { this->historyData_ = nullptr;};
    inline const vector<Darabonba::Json> & historyData() const { DARABONBA_PTR_GET_CONST(historyData_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> historyData() { DARABONBA_PTR_GET(historyData_, vector<Darabonba::Json>) };
    inline CreateEssOptJobRequestSystemData& setHistoryData(const vector<Darabonba::Json> & historyData) { DARABONBA_PTR_SET_VALUE(historyData_, historyData) };
    inline CreateEssOptJobRequestSystemData& setHistoryData(vector<Darabonba::Json> && historyData) { DARABONBA_PTR_SET_RVALUE(historyData_, historyData) };


    // systemId Field Functions 
    bool hasSystemId() const { return this->systemId_ != nullptr;};
    void deleteSystemId() { this->systemId_ = nullptr;};
    inline string systemId() const { DARABONBA_PTR_GET_DEFAULT(systemId_, "") };
    inline CreateEssOptJobRequestSystemData& setSystemId(string systemId) { DARABONBA_PTR_SET_VALUE(systemId_, systemId) };


    // systemParams Field Functions 
    bool hasSystemParams() const { return this->systemParams_ != nullptr;};
    void deleteSystemParams() { this->systemParams_ = nullptr;};
    inline     const Darabonba::Json & systemParams() const { DARABONBA_GET(systemParams_) };
    Darabonba::Json & systemParams() { DARABONBA_GET(systemParams_) };
    inline CreateEssOptJobRequestSystemData& setSystemParams(const Darabonba::Json & systemParams) { DARABONBA_SET_VALUE(systemParams_, systemParams) };
    inline CreateEssOptJobRequestSystemData& setSystemParams(Darabonba::Json & systemParams) { DARABONBA_SET_RVALUE(systemParams_, systemParams) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string systemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline CreateEssOptJobRequestSystemData& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> historyData_ = nullptr;
    std::shared_ptr<string> systemId_ = nullptr;
    Darabonba::Json systemParams_ = nullptr;
    std::shared_ptr<string> systemType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
