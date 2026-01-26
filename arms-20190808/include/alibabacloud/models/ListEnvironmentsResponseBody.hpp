// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEnvironmentsResponseBody() = default ;
    ListEnvironmentsResponseBody(const ListEnvironmentsResponseBody &) = default ;
    ListEnvironmentsResponseBody(ListEnvironmentsResponseBody &&) = default ;
    ListEnvironmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentsResponseBody() = default ;
    ListEnvironmentsResponseBody& operator=(const ListEnvironmentsResponseBody &) = default ;
    ListEnvironmentsResponseBody& operator=(ListEnvironmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Environments, environments_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Environments, environments_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Environments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Environments& obj) { 
          DARABONBA_PTR_TO_JSON(Addons, addons_);
          DARABONBA_PTR_TO_JSON(BindResourceId, bindResourceId_);
          DARABONBA_PTR_TO_JSON(BindResourceProfile, bindResourceProfile_);
          DARABONBA_PTR_TO_JSON(BindResourceType, bindResourceType_);
          DARABONBA_PTR_TO_JSON(BindVpcCidr, bindVpcCidr_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreatedUserId, createdUserId_);
          DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
          DARABONBA_PTR_TO_JSON(EnvironmentName, environmentName_);
          DARABONBA_PTR_TO_JSON(EnvironmentType, environmentType_);
          DARABONBA_PTR_TO_JSON(Features, features_);
          DARABONBA_PTR_TO_JSON(FeePackage, feePackage_);
          DARABONBA_PTR_TO_JSON(GrafanaDatasourceUid, grafanaDatasourceUid_);
          DARABONBA_PTR_TO_JSON(GrafanaFolderTitle, grafanaFolderTitle_);
          DARABONBA_PTR_TO_JSON(GrafanaFolderUid, grafanaFolderUid_);
          DARABONBA_PTR_TO_JSON(LatestReleaseCreateTime, latestReleaseCreateTime_);
          DARABONBA_PTR_TO_JSON(ManagedType, managedType_);
          DARABONBA_PTR_TO_JSON(PrometheusId, prometheusId_);
          DARABONBA_PTR_TO_JSON(PrometheusInstanceId, prometheusInstanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReleaseCount, releaseCount_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Environments& obj) { 
          DARABONBA_PTR_FROM_JSON(Addons, addons_);
          DARABONBA_PTR_FROM_JSON(BindResourceId, bindResourceId_);
          DARABONBA_PTR_FROM_JSON(BindResourceProfile, bindResourceProfile_);
          DARABONBA_PTR_FROM_JSON(BindResourceType, bindResourceType_);
          DARABONBA_PTR_FROM_JSON(BindVpcCidr, bindVpcCidr_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreatedUserId, createdUserId_);
          DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
          DARABONBA_PTR_FROM_JSON(EnvironmentName, environmentName_);
          DARABONBA_PTR_FROM_JSON(EnvironmentType, environmentType_);
          DARABONBA_PTR_FROM_JSON(Features, features_);
          DARABONBA_PTR_FROM_JSON(FeePackage, feePackage_);
          DARABONBA_PTR_FROM_JSON(GrafanaDatasourceUid, grafanaDatasourceUid_);
          DARABONBA_PTR_FROM_JSON(GrafanaFolderTitle, grafanaFolderTitle_);
          DARABONBA_PTR_FROM_JSON(GrafanaFolderUid, grafanaFolderUid_);
          DARABONBA_PTR_FROM_JSON(LatestReleaseCreateTime, latestReleaseCreateTime_);
          DARABONBA_PTR_FROM_JSON(ManagedType, managedType_);
          DARABONBA_PTR_FROM_JSON(PrometheusId, prometheusId_);
          DARABONBA_PTR_FROM_JSON(PrometheusInstanceId, prometheusInstanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReleaseCount, releaseCount_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Environments() = default ;
        Environments(const Environments &) = default ;
        Environments(Environments &&) = default ;
        Environments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Environments() = default ;
        Environments& operator=(const Environments &) = default ;
        Environments& operator=(Environments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The tag key.
          shared_ptr<string> key_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        class Features : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Features& obj) { 
            DARABONBA_PTR_TO_JSON(Alias, alias_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Icon, icon_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Features& obj) { 
            DARABONBA_PTR_FROM_JSON(Alias, alias_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Icon, icon_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Features() = default ;
          Features(const Features &) = default ;
          Features(Features &&) = default ;
          Features(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Features() = default ;
          Features& operator=(const Features &) = default ;
          Features& operator=(Features &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alias_ == nullptr
        && this->description_ == nullptr && this->icon_ == nullptr && this->name_ == nullptr; };
          // alias Field Functions 
          bool hasAlias() const { return this->alias_ != nullptr;};
          void deleteAlias() { this->alias_ = nullptr;};
          inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
          inline Features& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Features& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // icon Field Functions 
          bool hasIcon() const { return this->icon_ != nullptr;};
          void deleteIcon() { this->icon_ = nullptr;};
          inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
          inline Features& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Features& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The alias of the feature.
          shared_ptr<string> alias_ {};
          // The description of the feature.
          shared_ptr<string> description_ {};
          // The URL of the icon.
          shared_ptr<string> icon_ {};
          // The name of the feature.
          shared_ptr<string> name_ {};
        };

        class Addons : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Addons& obj) { 
            DARABONBA_PTR_TO_JSON(Alias, alias_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Icon, icon_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Addons& obj) { 
            DARABONBA_PTR_FROM_JSON(Alias, alias_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Icon, icon_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Addons() = default ;
          Addons(const Addons &) = default ;
          Addons(Addons &&) = default ;
          Addons(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Addons() = default ;
          Addons& operator=(const Addons &) = default ;
          Addons& operator=(Addons &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alias_ == nullptr
        && this->description_ == nullptr && this->icon_ == nullptr && this->name_ == nullptr; };
          // alias Field Functions 
          bool hasAlias() const { return this->alias_ != nullptr;};
          void deleteAlias() { this->alias_ = nullptr;};
          inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
          inline Addons& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Addons& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // icon Field Functions 
          bool hasIcon() const { return this->icon_ != nullptr;};
          void deleteIcon() { this->icon_ = nullptr;};
          inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
          inline Addons& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Addons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The alias of the add-on.
          shared_ptr<string> alias_ {};
          // The description of the add-on.
          shared_ptr<string> description_ {};
          // The URL of the icon.
          shared_ptr<string> icon_ {};
          // The name of the add-on.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->addons_ == nullptr
        && this->bindResourceId_ == nullptr && this->bindResourceProfile_ == nullptr && this->bindResourceType_ == nullptr && this->bindVpcCidr_ == nullptr && this->createTime_ == nullptr
        && this->createdUserId_ == nullptr && this->environmentId_ == nullptr && this->environmentName_ == nullptr && this->environmentType_ == nullptr && this->features_ == nullptr
        && this->feePackage_ == nullptr && this->grafanaDatasourceUid_ == nullptr && this->grafanaFolderTitle_ == nullptr && this->grafanaFolderUid_ == nullptr && this->latestReleaseCreateTime_ == nullptr
        && this->managedType_ == nullptr && this->prometheusId_ == nullptr && this->prometheusInstanceId_ == nullptr && this->regionId_ == nullptr && this->releaseCount_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->userId_ == nullptr; };
        // addons Field Functions 
        bool hasAddons() const { return this->addons_ != nullptr;};
        void deleteAddons() { this->addons_ = nullptr;};
        inline const vector<Environments::Addons> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<Environments::Addons>) };
        inline vector<Environments::Addons> getAddons() { DARABONBA_PTR_GET(addons_, vector<Environments::Addons>) };
        inline Environments& setAddons(const vector<Environments::Addons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
        inline Environments& setAddons(vector<Environments::Addons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


        // bindResourceId Field Functions 
        bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
        void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
        inline string getBindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
        inline Environments& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


        // bindResourceProfile Field Functions 
        bool hasBindResourceProfile() const { return this->bindResourceProfile_ != nullptr;};
        void deleteBindResourceProfile() { this->bindResourceProfile_ = nullptr;};
        inline string getBindResourceProfile() const { DARABONBA_PTR_GET_DEFAULT(bindResourceProfile_, "") };
        inline Environments& setBindResourceProfile(string bindResourceProfile) { DARABONBA_PTR_SET_VALUE(bindResourceProfile_, bindResourceProfile) };


        // bindResourceType Field Functions 
        bool hasBindResourceType() const { return this->bindResourceType_ != nullptr;};
        void deleteBindResourceType() { this->bindResourceType_ = nullptr;};
        inline string getBindResourceType() const { DARABONBA_PTR_GET_DEFAULT(bindResourceType_, "") };
        inline Environments& setBindResourceType(string bindResourceType) { DARABONBA_PTR_SET_VALUE(bindResourceType_, bindResourceType) };


        // bindVpcCidr Field Functions 
        bool hasBindVpcCidr() const { return this->bindVpcCidr_ != nullptr;};
        void deleteBindVpcCidr() { this->bindVpcCidr_ = nullptr;};
        inline string getBindVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(bindVpcCidr_, "") };
        inline Environments& setBindVpcCidr(string bindVpcCidr) { DARABONBA_PTR_SET_VALUE(bindVpcCidr_, bindVpcCidr) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Environments& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createdUserId Field Functions 
        bool hasCreatedUserId() const { return this->createdUserId_ != nullptr;};
        void deleteCreatedUserId() { this->createdUserId_ = nullptr;};
        inline string getCreatedUserId() const { DARABONBA_PTR_GET_DEFAULT(createdUserId_, "") };
        inline Environments& setCreatedUserId(string createdUserId) { DARABONBA_PTR_SET_VALUE(createdUserId_, createdUserId) };


        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline Environments& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // environmentName Field Functions 
        bool hasEnvironmentName() const { return this->environmentName_ != nullptr;};
        void deleteEnvironmentName() { this->environmentName_ = nullptr;};
        inline string getEnvironmentName() const { DARABONBA_PTR_GET_DEFAULT(environmentName_, "") };
        inline Environments& setEnvironmentName(string environmentName) { DARABONBA_PTR_SET_VALUE(environmentName_, environmentName) };


        // environmentType Field Functions 
        bool hasEnvironmentType() const { return this->environmentType_ != nullptr;};
        void deleteEnvironmentType() { this->environmentType_ = nullptr;};
        inline string getEnvironmentType() const { DARABONBA_PTR_GET_DEFAULT(environmentType_, "") };
        inline Environments& setEnvironmentType(string environmentType) { DARABONBA_PTR_SET_VALUE(environmentType_, environmentType) };


        // features Field Functions 
        bool hasFeatures() const { return this->features_ != nullptr;};
        void deleteFeatures() { this->features_ = nullptr;};
        inline const vector<Environments::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<Environments::Features>) };
        inline vector<Environments::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<Environments::Features>) };
        inline Environments& setFeatures(const vector<Environments::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
        inline Environments& setFeatures(vector<Environments::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


        // feePackage Field Functions 
        bool hasFeePackage() const { return this->feePackage_ != nullptr;};
        void deleteFeePackage() { this->feePackage_ = nullptr;};
        inline string getFeePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
        inline Environments& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


        // grafanaDatasourceUid Field Functions 
        bool hasGrafanaDatasourceUid() const { return this->grafanaDatasourceUid_ != nullptr;};
        void deleteGrafanaDatasourceUid() { this->grafanaDatasourceUid_ = nullptr;};
        inline string getGrafanaDatasourceUid() const { DARABONBA_PTR_GET_DEFAULT(grafanaDatasourceUid_, "") };
        inline Environments& setGrafanaDatasourceUid(string grafanaDatasourceUid) { DARABONBA_PTR_SET_VALUE(grafanaDatasourceUid_, grafanaDatasourceUid) };


        // grafanaFolderTitle Field Functions 
        bool hasGrafanaFolderTitle() const { return this->grafanaFolderTitle_ != nullptr;};
        void deleteGrafanaFolderTitle() { this->grafanaFolderTitle_ = nullptr;};
        inline string getGrafanaFolderTitle() const { DARABONBA_PTR_GET_DEFAULT(grafanaFolderTitle_, "") };
        inline Environments& setGrafanaFolderTitle(string grafanaFolderTitle) { DARABONBA_PTR_SET_VALUE(grafanaFolderTitle_, grafanaFolderTitle) };


        // grafanaFolderUid Field Functions 
        bool hasGrafanaFolderUid() const { return this->grafanaFolderUid_ != nullptr;};
        void deleteGrafanaFolderUid() { this->grafanaFolderUid_ = nullptr;};
        inline string getGrafanaFolderUid() const { DARABONBA_PTR_GET_DEFAULT(grafanaFolderUid_, "") };
        inline Environments& setGrafanaFolderUid(string grafanaFolderUid) { DARABONBA_PTR_SET_VALUE(grafanaFolderUid_, grafanaFolderUid) };


        // latestReleaseCreateTime Field Functions 
        bool hasLatestReleaseCreateTime() const { return this->latestReleaseCreateTime_ != nullptr;};
        void deleteLatestReleaseCreateTime() { this->latestReleaseCreateTime_ = nullptr;};
        inline string getLatestReleaseCreateTime() const { DARABONBA_PTR_GET_DEFAULT(latestReleaseCreateTime_, "") };
        inline Environments& setLatestReleaseCreateTime(string latestReleaseCreateTime) { DARABONBA_PTR_SET_VALUE(latestReleaseCreateTime_, latestReleaseCreateTime) };


        // managedType Field Functions 
        bool hasManagedType() const { return this->managedType_ != nullptr;};
        void deleteManagedType() { this->managedType_ = nullptr;};
        inline string getManagedType() const { DARABONBA_PTR_GET_DEFAULT(managedType_, "") };
        inline Environments& setManagedType(string managedType) { DARABONBA_PTR_SET_VALUE(managedType_, managedType) };


        // prometheusId Field Functions 
        bool hasPrometheusId() const { return this->prometheusId_ != nullptr;};
        void deletePrometheusId() { this->prometheusId_ = nullptr;};
        inline int64_t getPrometheusId() const { DARABONBA_PTR_GET_DEFAULT(prometheusId_, 0L) };
        inline Environments& setPrometheusId(int64_t prometheusId) { DARABONBA_PTR_SET_VALUE(prometheusId_, prometheusId) };


        // prometheusInstanceId Field Functions 
        bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
        void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
        inline string getPrometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
        inline Environments& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Environments& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // releaseCount Field Functions 
        bool hasReleaseCount() const { return this->releaseCount_ != nullptr;};
        void deleteReleaseCount() { this->releaseCount_ = nullptr;};
        inline int32_t getReleaseCount() const { DARABONBA_PTR_GET_DEFAULT(releaseCount_, 0) };
        inline Environments& setReleaseCount(int32_t releaseCount) { DARABONBA_PTR_SET_VALUE(releaseCount_, releaseCount) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Environments& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Environments::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Environments::Tags>) };
        inline vector<Environments::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Environments::Tags>) };
        inline Environments& setTags(const vector<Environments::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Environments& setTags(vector<Environments::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Environments& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The add-ons.
        shared_ptr<vector<Environments::Addons>> addons_ {};
        // The ID of the resource bound to the environment instance. The resource can be a Kubernetes cluster or a VPC.
        shared_ptr<string> bindResourceId_ {};
        // The profile that is bound to the resource.
        shared_ptr<string> bindResourceProfile_ {};
        // The resource type.
        shared_ptr<string> bindResourceType_ {};
        // The CIDR block that is bound to the VPC.
        shared_ptr<string> bindVpcCidr_ {};
        // The time when the environment instance was created.
        shared_ptr<string> createTime_ {};
        // The user ID.
        shared_ptr<string> createdUserId_ {};
        // The ID of the environment instance.
        shared_ptr<string> environmentId_ {};
        // The name of the environment instance.
        shared_ptr<string> environmentName_ {};
        // The type of the environment instance. Valid values:
        // 
        // *   CS: Container Service
        // *   ECS: Elastic Compute Service
        // *   Cloud: cloud service
        shared_ptr<string> environmentType_ {};
        // The parameters of the feature.
        shared_ptr<vector<Environments::Features>> features_ {};
        // The payable resource plan.
        // 
        // *   If the EnvironmentType parameter is set to CS, set the value to CS_Basic or CS_Pro.
        // *   Otherwise, leave the parameter empty.
        shared_ptr<string> feePackage_ {};
        // The unique ID of the Grafana data source.
        shared_ptr<string> grafanaDatasourceUid_ {};
        // The name of the Grafana directory.
        shared_ptr<string> grafanaFolderTitle_ {};
        // The unique ID of the Grafana directory.
        shared_ptr<string> grafanaFolderUid_ {};
        // The time when the last add-on was created.
        shared_ptr<string> latestReleaseCreateTime_ {};
        // Indicates whether agents or exporters are managed. Valid values:
        // 
        // *   none: No. By default, no managed agents or exporters are provided for ACK clusters.
        // *   agent: Agents are managed. By default, managed agents are provided for ASK clusters, ACS clusters, and ACK One clusters.
        // *   agent-exproter: Agents and exporters are managed. By default, managed agents and exporters are provided for cloud services.
        shared_ptr<string> managedType_ {};
        // The Prometheus ID.
        shared_ptr<int64_t> prometheusId_ {};
        // The ID of the Prometheus instance.
        shared_ptr<string> prometheusInstanceId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The number of installed add-ons.
        shared_ptr<int32_t> releaseCount_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The tags of the environment resource.
        shared_ptr<vector<Environments::Tags>> tags_ {};
        // The user ID.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->environments_ == nullptr
        && this->total_ == nullptr; };
      // environments Field Functions 
      bool hasEnvironments() const { return this->environments_ != nullptr;};
      void deleteEnvironments() { this->environments_ = nullptr;};
      inline const vector<Data::Environments> & getEnvironments() const { DARABONBA_PTR_GET_CONST(environments_, vector<Data::Environments>) };
      inline vector<Data::Environments> getEnvironments() { DARABONBA_PTR_GET(environments_, vector<Data::Environments>) };
      inline Data& setEnvironments(const vector<Data::Environments> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
      inline Data& setEnvironments(vector<Data::Environments> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The queried environments.
      shared_ptr<vector<Data::Environments>> environments_ {};
      // The total number of returned entries.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListEnvironmentsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListEnvironmentsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListEnvironmentsResponseBody::Data) };
    inline ListEnvironmentsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListEnvironmentsResponseBody::Data) };
    inline ListEnvironmentsResponseBody& setData(const ListEnvironmentsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEnvironmentsResponseBody& setData(ListEnvironmentsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEnvironmentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnvironmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEnvironmentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<ListEnvironmentsResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
