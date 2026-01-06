// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourcesResponseBody() = default ;
    ListResourcesResponseBody(const ListResourcesResponseBody &) = default ;
    ListResourcesResponseBody(ListResourcesResponseBody &&) = default ;
    ListResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBody() = default ;
    ListResourcesResponseBody& operator=(const ListResourcesResponseBody &) = default ;
    ListResourcesResponseBody& operator=(ListResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(Encryption, encryption_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Executor, executor_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(Quotas, quotas_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_ANY_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Executor, executor_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_ANY_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Quotas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
          DARABONBA_PTR_TO_JSON(CardType, cardType_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
          DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
          DARABONBA_PTR_TO_JSON(Specs, specs_);
        };
        friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
          DARABONBA_PTR_FROM_JSON(CardType, cardType_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
          DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
          DARABONBA_PTR_FROM_JSON(Specs, specs_);
        };
        Quotas() = default ;
        Quotas(const Quotas &) = default ;
        Quotas(Quotas &&) = default ;
        Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Quotas() = default ;
        Quotas& operator=(const Quotas &) = default ;
        Quotas& operator=(Quotas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Specs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Specs& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Specs& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Specs() = default ;
          Specs(const Specs &) = default ;
          Specs(Specs &&) = default ;
          Specs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Specs() = default ;
          Specs& operator=(const Specs &) = default ;
          Specs& operator=(Specs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Specs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Specs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The specification name.
          shared_ptr<string> name_ {};
          // The specification description.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->cardType_ == nullptr
        && this->displayName_ == nullptr && this->id_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr && this->productCode_ == nullptr
        && this->quotaType_ == nullptr && this->specs_ == nullptr; };
        // cardType Field Functions 
        bool hasCardType() const { return this->cardType_ != nullptr;};
        void deleteCardType() { this->cardType_ = nullptr;};
        inline string getCardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, "") };
        inline Quotas& setCardType(string cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Quotas& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Quotas& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline Quotas& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Quotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline Quotas& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        // quotaType Field Functions 
        bool hasQuotaType() const { return this->quotaType_ != nullptr;};
        void deleteQuotaType() { this->quotaType_ = nullptr;};
        inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
        inline Quotas& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


        // specs Field Functions 
        bool hasSpecs() const { return this->specs_ != nullptr;};
        void deleteSpecs() { this->specs_ = nullptr;};
        inline const vector<Quotas::Specs> & getSpecs() const { DARABONBA_PTR_GET_CONST(specs_, vector<Quotas::Specs>) };
        inline vector<Quotas::Specs> getSpecs() { DARABONBA_PTR_GET(specs_, vector<Quotas::Specs>) };
        inline Quotas& setSpecs(const vector<Quotas::Specs> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
        inline Quotas& setSpecs(vector<Quotas::Specs> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


      protected:
        // The resource group type. Valid values:
        // 
        // *   CPU
        // *   GPU
        shared_ptr<string> cardType_ {};
        // The alias of the quota.
        shared_ptr<string> displayName_ {};
        // The quota ID.
        shared_ptr<string> id_ {};
        // The billing method. Valid values:
        // 
        // *   isolate: subscription
        // *   share: pay-as-you-go
        shared_ptr<string> mode_ {};
        // The quota name.
        shared_ptr<string> name_ {};
        // The product code. Valid values:
        // 
        // *   PAI_isolate: CPU subscription resource groups of PAI
        // *   PAI_share: GPU pay-as-you-go resource groups of PAI
        // *   MaxCompute_share: pay-as-you-go resource groups of MaxCompute
        // *   MaxCompute_isolate: subscription resource groups of MaxCompute
        // *   DataWorks_isolate: subscription resource groups of DataWorks
        // *   DataWorks_share: pay-as-you-go resource groups of DataWorks
        // *   DLC_share: pay-as-you-go resource groups of Deep Learning Containers (DLC)
        shared_ptr<string> productCode_ {};
        // The quota type. Valid values:
        // 
        // *   PAI
        // *   MaxCompute
        // *   DLC
        shared_ptr<string> quotaType_ {};
        // The quota specifications.
        shared_ptr<vector<Quotas::Specs>> specs_ {};
      };

      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
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
        inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class Executor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Executor& obj) { 
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        };
        friend void from_json(const Darabonba::Json& j, Executor& obj) { 
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        };
        Executor() = default ;
        Executor(const Executor &) = default ;
        Executor(Executor &&) = default ;
        Executor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Executor() = default ;
        Executor& operator=(const Executor &) = default ;
        Executor& operator=(Executor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ownerId_ == nullptr; };
        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline Executor& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      protected:
        // This parameter is invalid and deprecated.
        shared_ptr<string> ownerId_ {};
      };

      class Encryption : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Encryption& obj) { 
          DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, Encryption& obj) { 
          DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        Encryption() = default ;
        Encryption(const Encryption &) = default ;
        Encryption(Encryption &&) = default ;
        Encryption(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Encryption() = default ;
        Encryption& operator=(const Encryption &) = default ;
        Encryption& operator=(Encryption &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->enabled_ == nullptr && this->key_ == nullptr; };
        // algorithm Field Functions 
        bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
        void deleteAlgorithm() { this->algorithm_ = nullptr;};
        inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
        inline Encryption& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Encryption& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Encryption& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        // The encryption algorithm.
        shared_ptr<string> algorithm_ {};
        // Indicates whether the resources are encrypted.
        shared_ptr<bool> enabled_ {};
        // The primary key for the encryption.
        shared_ptr<string> key_ {};
      };

      virtual bool empty() const override { return this->encryption_ == nullptr
        && this->envType_ == nullptr && this->executor_ == nullptr && this->gmtCreateTime_ == nullptr && this->groupName_ == nullptr && this->id_ == nullptr
        && this->isDefault_ == nullptr && this->labels_ == nullptr && this->name_ == nullptr && this->productType_ == nullptr && this->quotas_ == nullptr
        && this->resourceType_ == nullptr && this->spec_ == nullptr && this->workspaceId_ == nullptr; };
      // encryption Field Functions 
      bool hasEncryption() const { return this->encryption_ != nullptr;};
      void deleteEncryption() { this->encryption_ = nullptr;};
      inline const Resources::Encryption & getEncryption() const { DARABONBA_PTR_GET_CONST(encryption_, Resources::Encryption) };
      inline Resources::Encryption getEncryption() { DARABONBA_PTR_GET(encryption_, Resources::Encryption) };
      inline Resources& setEncryption(const Resources::Encryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
      inline Resources& setEncryption(Resources::Encryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Resources& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // executor Field Functions 
      bool hasExecutor() const { return this->executor_ != nullptr;};
      void deleteExecutor() { this->executor_ = nullptr;};
      inline const Resources::Executor & getExecutor() const { DARABONBA_PTR_GET_CONST(executor_, Resources::Executor) };
      inline Resources::Executor getExecutor() { DARABONBA_PTR_GET(executor_, Resources::Executor) };
      inline Resources& setExecutor(const Resources::Executor & executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };
      inline Resources& setExecutor(Resources::Executor && executor) { DARABONBA_PTR_SET_RVALUE(executor_, executor) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Resources& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Resources& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Resources& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Resources& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<Resources::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Resources::Labels>) };
      inline vector<Resources::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Resources::Labels>) };
      inline Resources& setLabels(const vector<Resources::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Resources& setLabels(vector<Resources::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Resources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Resources& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // quotas Field Functions 
      bool hasQuotas() const { return this->quotas_ != nullptr;};
      void deleteQuotas() { this->quotas_ = nullptr;};
      inline const vector<Resources::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<Resources::Quotas>) };
      inline vector<Resources::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<Resources::Quotas>) };
      inline Resources& setQuotas(const vector<Resources::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
      inline Resources& setQuotas(vector<Resources::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline       const Darabonba::Json & getSpec() const { DARABONBA_GET(spec_) };
      Darabonba::Json & getSpec() { DARABONBA_GET(spec_) };
      inline Resources& setSpec(const Darabonba::Json & spec) { DARABONBA_SET_VALUE(spec_, spec) };
      inline Resources& setSpec(Darabonba::Json && spec) { DARABONBA_SET_RVALUE(spec_, spec) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Resources& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The encryption information, which is valid only for MaxCompute resources.
      shared_ptr<Resources::Encryption> encryption_ {};
      // The environment type. Valid values:
      // 
      // *   dev: development environment
      // *   prod: production environment
      shared_ptr<string> envType_ {};
      // This parameter is invalid and deprecated.
      shared_ptr<Resources::Executor> executor_ {};
      // The time when the resource group is created, in UTC. The time follows the ISO 8601 standard.
      shared_ptr<string> gmtCreateTime_ {};
      // The name of the resource group, which is unique within the Alibaba Cloud account.
      shared_ptr<string> groupName_ {};
      // The resource ID.
      shared_ptr<string> id_ {};
      // Indicates whether the resource is the default resource. Each type of resources has a default resource. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> isDefault_ {};
      // The tags.
      shared_ptr<vector<Resources::Labels>> labels_ {};
      // The resource name.
      shared_ptr<string> name_ {};
      // **This field is no longer used and will be removed. Use the ResourceType field.
      shared_ptr<string> productType_ {};
      // The quotas.
      shared_ptr<vector<Resources::Quotas>> quotas_ {};
      // The resource type. Valid values:
      // 
      // *   MaxCompute
      // *   DLC
      // *   FLINK
      shared_ptr<string> resourceType_ {};
      // The resource specification.
      Darabonba::Json spec_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resources_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListResourcesResponseBody::Resources>) };
    inline vector<ListResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<ListResourcesResponseBody::Resources>) };
    inline ListResourcesResponseBody& setResources(const vector<ListResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListResourcesResponseBody& setResources(vector<ListResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resources.
    shared_ptr<vector<ListResourcesResponseBody::Resources>> resources_ {};
    // The number of resources that meet the filter conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
