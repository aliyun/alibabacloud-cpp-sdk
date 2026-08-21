// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELDEPLOYMENTPROFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELDEPLOYMENTPROFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{
namespace Models
{
  class ListModelDeploymentProfilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelDeploymentProfilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(Profiles, profiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelDeploymentProfilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(Profiles, profiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListModelDeploymentProfilesResponseBody() = default ;
    ListModelDeploymentProfilesResponseBody(const ListModelDeploymentProfilesResponseBody &) = default ;
    ListModelDeploymentProfilesResponseBody(ListModelDeploymentProfilesResponseBody &&) = default ;
    ListModelDeploymentProfilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelDeploymentProfilesResponseBody() = default ;
    ListModelDeploymentProfilesResponseBody& operator=(const ListModelDeploymentProfilesResponseBody &) = default ;
    ListModelDeploymentProfilesResponseBody& operator=(ListModelDeploymentProfilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Profiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Profiles& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Devices, devices_);
        DARABONBA_PTR_TO_JSON(Framework, framework_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Members, members_);
        DARABONBA_PTR_TO_JSON(Optimizations, optimizations_);
        DARABONBA_PTR_TO_JSON(ProfileId, profileId_);
        DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      };
      friend void from_json(const Darabonba::Json& j, Profiles& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Devices, devices_);
        DARABONBA_PTR_FROM_JSON(Framework, framework_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Members, members_);
        DARABONBA_PTR_FROM_JSON(Optimizations, optimizations_);
        DARABONBA_PTR_FROM_JSON(ProfileId, profileId_);
        DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      };
      Profiles() = default ;
      Profiles(const Profiles &) = default ;
      Profiles(Profiles &&) = default ;
      Profiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Profiles() = default ;
      Profiles& operator=(const Profiles &) = default ;
      Profiles& operator=(Profiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Members : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Members& obj) { 
          DARABONBA_PTR_TO_JSON(MemberType, memberType_);
          DARABONBA_ANY_TO_JSON(Meta, meta_);
        };
        friend void from_json(const Darabonba::Json& j, Members& obj) { 
          DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
          DARABONBA_ANY_FROM_JSON(Meta, meta_);
        };
        Members() = default ;
        Members(const Members &) = default ;
        Members(Members &&) = default ;
        Members(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Members() = default ;
        Members& operator=(const Members &) = default ;
        Members& operator=(Members &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memberType_ == nullptr
        && this->meta_ == nullptr; };
        // memberType Field Functions 
        bool hasMemberType() const { return this->memberType_ != nullptr;};
        void deleteMemberType() { this->memberType_ = nullptr;};
        inline string getMemberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
        inline Members& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


        // meta Field Functions 
        bool hasMeta() const { return this->meta_ != nullptr;};
        void deleteMeta() { this->meta_ = nullptr;};
        inline         const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
        Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
        inline Members& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
        inline Members& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


      protected:
        shared_ptr<string> memberType_ {};
        Darabonba::Json meta_ {};
      };

      class Devices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Devices& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceCategory, deviceCategory_);
          DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
        };
        friend void from_json(const Darabonba::Json& j, Devices& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceCategory, deviceCategory_);
          DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
        };
        Devices() = default ;
        Devices(const Devices &) = default ;
        Devices(Devices &&) = default ;
        Devices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Devices() = default ;
        Devices& operator=(const Devices &) = default ;
        Devices& operator=(Devices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceCategory_ == nullptr
        && this->deviceType_ == nullptr && this->displayName_ == nullptr && this->instanceTypes_ == nullptr; };
        // deviceCategory Field Functions 
        bool hasDeviceCategory() const { return this->deviceCategory_ != nullptr;};
        void deleteDeviceCategory() { this->deviceCategory_ = nullptr;};
        inline string getDeviceCategory() const { DARABONBA_PTR_GET_DEFAULT(deviceCategory_, "") };
        inline Devices& setDeviceCategory(string deviceCategory) { DARABONBA_PTR_SET_VALUE(deviceCategory_, deviceCategory) };


        // deviceType Field Functions 
        bool hasDeviceType() const { return this->deviceType_ != nullptr;};
        void deleteDeviceType() { this->deviceType_ = nullptr;};
        inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
        inline Devices& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Devices& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // instanceTypes Field Functions 
        bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
        void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
        inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
        inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
        inline Devices& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
        inline Devices& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


      protected:
        shared_ptr<string> deviceCategory_ {};
        shared_ptr<string> deviceType_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<vector<string>> instanceTypes_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->devices_ == nullptr && this->framework_ == nullptr && this->labels_ == nullptr && this->members_ == nullptr && this->optimizations_ == nullptr
        && this->profileId_ == nullptr && this->scenario_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Profiles& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // devices Field Functions 
      bool hasDevices() const { return this->devices_ != nullptr;};
      void deleteDevices() { this->devices_ = nullptr;};
      inline const vector<Profiles::Devices> & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, vector<Profiles::Devices>) };
      inline vector<Profiles::Devices> getDevices() { DARABONBA_PTR_GET(devices_, vector<Profiles::Devices>) };
      inline Profiles& setDevices(const vector<Profiles::Devices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
      inline Profiles& setDevices(vector<Profiles::Devices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


      // framework Field Functions 
      bool hasFramework() const { return this->framework_ != nullptr;};
      void deleteFramework() { this->framework_ = nullptr;};
      inline string getFramework() const { DARABONBA_PTR_GET_DEFAULT(framework_, "") };
      inline Profiles& setFramework(string framework) { DARABONBA_PTR_SET_VALUE(framework_, framework) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
      inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
      inline Profiles& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Profiles& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // members Field Functions 
      bool hasMembers() const { return this->members_ != nullptr;};
      void deleteMembers() { this->members_ = nullptr;};
      inline const vector<Profiles::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<Profiles::Members>) };
      inline vector<Profiles::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<Profiles::Members>) };
      inline Profiles& setMembers(const vector<Profiles::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
      inline Profiles& setMembers(vector<Profiles::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


      // optimizations Field Functions 
      bool hasOptimizations() const { return this->optimizations_ != nullptr;};
      void deleteOptimizations() { this->optimizations_ = nullptr;};
      inline const map<string, string> & getOptimizations() const { DARABONBA_PTR_GET_CONST(optimizations_, map<string, string>) };
      inline map<string, string> getOptimizations() { DARABONBA_PTR_GET(optimizations_, map<string, string>) };
      inline Profiles& setOptimizations(const map<string, string> & optimizations) { DARABONBA_PTR_SET_VALUE(optimizations_, optimizations) };
      inline Profiles& setOptimizations(map<string, string> && optimizations) { DARABONBA_PTR_SET_RVALUE(optimizations_, optimizations) };


      // profileId Field Functions 
      bool hasProfileId() const { return this->profileId_ != nullptr;};
      void deleteProfileId() { this->profileId_ = nullptr;};
      inline string getProfileId() const { DARABONBA_PTR_GET_DEFAULT(profileId_, "") };
      inline Profiles& setProfileId(string profileId) { DARABONBA_PTR_SET_VALUE(profileId_, profileId) };


      // scenario Field Functions 
      bool hasScenario() const { return this->scenario_ != nullptr;};
      void deleteScenario() { this->scenario_ = nullptr;};
      inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
      inline Profiles& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<vector<Profiles::Devices>> devices_ {};
      shared_ptr<string> framework_ {};
      shared_ptr<map<string, string>> labels_ {};
      shared_ptr<vector<Profiles::Members>> members_ {};
      shared_ptr<map<string, string>> optimizations_ {};
      shared_ptr<string> profileId_ {};
      shared_ptr<string> scenario_ {};
    };

    virtual bool empty() const override { return this->modelId_ == nullptr
        && this->modelVersion_ == nullptr && this->profiles_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline ListModelDeploymentProfilesResponseBody& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline ListModelDeploymentProfilesResponseBody& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // profiles Field Functions 
    bool hasProfiles() const { return this->profiles_ != nullptr;};
    void deleteProfiles() { this->profiles_ = nullptr;};
    inline const vector<ListModelDeploymentProfilesResponseBody::Profiles> & getProfiles() const { DARABONBA_PTR_GET_CONST(profiles_, vector<ListModelDeploymentProfilesResponseBody::Profiles>) };
    inline vector<ListModelDeploymentProfilesResponseBody::Profiles> getProfiles() { DARABONBA_PTR_GET(profiles_, vector<ListModelDeploymentProfilesResponseBody::Profiles>) };
    inline ListModelDeploymentProfilesResponseBody& setProfiles(const vector<ListModelDeploymentProfilesResponseBody::Profiles> & profiles) { DARABONBA_PTR_SET_VALUE(profiles_, profiles) };
    inline ListModelDeploymentProfilesResponseBody& setProfiles(vector<ListModelDeploymentProfilesResponseBody::Profiles> && profiles) { DARABONBA_PTR_SET_RVALUE(profiles_, profiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelDeploymentProfilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListModelDeploymentProfilesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> modelId_ {};
    shared_ptr<string> modelVersion_ {};
    shared_ptr<vector<ListModelDeploymentProfilesResponseBody::Profiles>> profiles_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603
#endif
