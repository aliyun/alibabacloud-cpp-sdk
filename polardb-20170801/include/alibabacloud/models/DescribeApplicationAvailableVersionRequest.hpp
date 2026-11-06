// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONAVAILABLEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONAVAILABLEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAvailableVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAvailableVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAvailableVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeApplicationAvailableVersionRequest() = default ;
    DescribeApplicationAvailableVersionRequest(const DescribeApplicationAvailableVersionRequest &) = default ;
    DescribeApplicationAvailableVersionRequest(DescribeApplicationAvailableVersionRequest &&) = default ;
    DescribeApplicationAvailableVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAvailableVersionRequest() = default ;
    DescribeApplicationAvailableVersionRequest& operator=(const DescribeApplicationAvailableVersionRequest &) = default ;
    DescribeApplicationAvailableVersionRequest& operator=(DescribeApplicationAvailableVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentClass, componentClass_);
        DARABONBA_PTR_TO_JSON(ComponentMaxReplica, componentMaxReplica_);
        DARABONBA_PTR_TO_JSON(ComponentReplica, componentReplica_);
        DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentClass, componentClass_);
        DARABONBA_PTR_FROM_JSON(ComponentMaxReplica, componentMaxReplica_);
        DARABONBA_PTR_FROM_JSON(ComponentReplica, componentReplica_);
        DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentClass_ == nullptr
        && this->componentMaxReplica_ == nullptr && this->componentReplica_ == nullptr && this->componentType_ == nullptr; };
      // componentClass Field Functions 
      bool hasComponentClass() const { return this->componentClass_ != nullptr;};
      void deleteComponentClass() { this->componentClass_ = nullptr;};
      inline string getComponentClass() const { DARABONBA_PTR_GET_DEFAULT(componentClass_, "") };
      inline Components& setComponentClass(string componentClass) { DARABONBA_PTR_SET_VALUE(componentClass_, componentClass) };


      // componentMaxReplica Field Functions 
      bool hasComponentMaxReplica() const { return this->componentMaxReplica_ != nullptr;};
      void deleteComponentMaxReplica() { this->componentMaxReplica_ = nullptr;};
      inline int64_t getComponentMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(componentMaxReplica_, 0L) };
      inline Components& setComponentMaxReplica(int64_t componentMaxReplica) { DARABONBA_PTR_SET_VALUE(componentMaxReplica_, componentMaxReplica) };


      // componentReplica Field Functions 
      bool hasComponentReplica() const { return this->componentReplica_ != nullptr;};
      void deleteComponentReplica() { this->componentReplica_ = nullptr;};
      inline int64_t getComponentReplica() const { DARABONBA_PTR_GET_DEFAULT(componentReplica_, 0L) };
      inline Components& setComponentReplica(int64_t componentReplica) { DARABONBA_PTR_SET_VALUE(componentReplica_, componentReplica) };


      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
      inline Components& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    protected:
      // The specifications of the application subcomponent.
      shared_ptr<string> componentClass_ {};
      // The maximum number of application subcomponents of the same specifications. Default value: the value of ComponentReplica. This parameter is supported only by raycluster applications.
      shared_ptr<int64_t> componentMaxReplica_ {};
      // The number of replicas for the application subcomponent. Default value: 1.
      shared_ptr<int64_t> componentReplica_ {};
      // The type of the application subcomponent.
      shared_ptr<string> componentType_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->components_ == nullptr && this->regionId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationAvailableVersionRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DescribeApplicationAvailableVersionRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<DescribeApplicationAvailableVersionRequest::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<DescribeApplicationAvailableVersionRequest::Components>) };
    inline vector<DescribeApplicationAvailableVersionRequest::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<DescribeApplicationAvailableVersionRequest::Components>) };
    inline DescribeApplicationAvailableVersionRequest& setComponents(const vector<DescribeApplicationAvailableVersionRequest::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline DescribeApplicationAvailableVersionRequest& setComponents(vector<DescribeApplicationAvailableVersionRequest::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApplicationAvailableVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The application type.
    shared_ptr<string> applicationType_ {};
    // The list of application subcomponents.
    shared_ptr<vector<DescribeApplicationAvailableVersionRequest::Components>> components_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
