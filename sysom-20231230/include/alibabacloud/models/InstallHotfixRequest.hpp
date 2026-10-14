// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLHOTFIXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLHOTFIXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InstallHotfixRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallHotfixRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cveId, cveId_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, InstallHotfixRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cveId, cveId_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    InstallHotfixRequest() = default ;
    InstallHotfixRequest(const InstallHotfixRequest &) = default ;
    InstallHotfixRequest(InstallHotfixRequest &&) = default ;
    InstallHotfixRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallHotfixRequest() = default ;
    InstallHotfixRequest& operator=(const InstallHotfixRequest &) = default ;
    InstallHotfixRequest& operator=(InstallHotfixRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
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
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr; };
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


    protected:
      // The instance ID.
      // 
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // The region ID.
      // 
      // This parameter is required.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->cveId_ == nullptr
        && this->instances_ == nullptr; };
    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline InstallHotfixRequest& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<InstallHotfixRequest::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<InstallHotfixRequest::Instances>) };
    inline vector<InstallHotfixRequest::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<InstallHotfixRequest::Instances>) };
    inline InstallHotfixRequest& setInstances(const vector<InstallHotfixRequest::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline InstallHotfixRequest& setInstances(vector<InstallHotfixRequest::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // CVE ID
    // 
    // This parameter is required.
    shared_ptr<string> cveId_ {};
    // The target instances.
    // 
    // This parameter is required.
    shared_ptr<vector<InstallHotfixRequest::Instances>> instances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
