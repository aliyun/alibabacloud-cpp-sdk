// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITSASMODULERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITSASMODULERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class InitSasModuleRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitSasModuleRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, InitSasModuleRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    InitSasModuleRuleRequest() = default ;
    InitSasModuleRuleRequest(const InitSasModuleRuleRequest &) = default ;
    InitSasModuleRuleRequest(InitSasModuleRuleRequest &&) = default ;
    InitSasModuleRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitSasModuleRuleRequest() = default ;
    InitSasModuleRuleRequest& operator=(const InitSasModuleRuleRequest &) = default ;
    InitSasModuleRuleRequest& operator=(InitSasModuleRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(Cores, cores_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Cores, cores_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cores_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->uuid_ == nullptr; };
      // cores Field Functions 
      bool hasCores() const { return this->cores_ != nullptr;};
      void deleteCores() { this->cores_ = nullptr;};
      inline string getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, "") };
      inline Instances& setCores(string cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Instances& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> cores_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->autoBind_ == nullptr
        && this->instances_ == nullptr && this->isTrial_ == nullptr && this->regionId_ == nullptr; };
    // autoBind Field Functions 
    bool hasAutoBind() const { return this->autoBind_ != nullptr;};
    void deleteAutoBind() { this->autoBind_ = nullptr;};
    inline int32_t getAutoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
    inline InitSasModuleRuleRequest& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<InitSasModuleRuleRequest::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<InitSasModuleRuleRequest::Instances>) };
    inline vector<InitSasModuleRuleRequest::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<InitSasModuleRuleRequest::Instances>) };
    inline InitSasModuleRuleRequest& setInstances(const vector<InitSasModuleRuleRequest::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline InitSasModuleRuleRequest& setInstances(vector<InitSasModuleRuleRequest::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // isTrial Field Functions 
    bool hasIsTrial() const { return this->isTrial_ != nullptr;};
    void deleteIsTrial() { this->isTrial_ = nullptr;};
    inline bool getIsTrial() const { DARABONBA_PTR_GET_DEFAULT(isTrial_, false) };
    inline InitSasModuleRuleRequest& setIsTrial(bool isTrial) { DARABONBA_PTR_SET_VALUE(isTrial_, isTrial) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InitSasModuleRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<int32_t> autoBind_ {};
    shared_ptr<vector<InitSasModuleRuleRequest::Instances>> instances_ {};
    shared_ptr<bool> isTrial_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
