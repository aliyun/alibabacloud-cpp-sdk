// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPASTRATEGYNEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPASTRATEGYNEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateOpaStrategyNewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpaStrategyNewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmDetail, alarmDetail_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyTemplateId, strategyTemplateId_);
      DARABONBA_PTR_TO_JSON(UnScanedImage, unScanedImage_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpaStrategyNewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmDetail, alarmDetail_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyTemplateId, strategyTemplateId_);
      DARABONBA_PTR_FROM_JSON(UnScanedImage, unScanedImage_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    CreateOpaStrategyNewRequest() = default ;
    CreateOpaStrategyNewRequest(const CreateOpaStrategyNewRequest &) = default ;
    CreateOpaStrategyNewRequest(CreateOpaStrategyNewRequest &&) = default ;
    CreateOpaStrategyNewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpaStrategyNewRequest() = default ;
    CreateOpaStrategyNewRequest& operator=(const CreateOpaStrategyNewRequest &) = default ;
    CreateOpaStrategyNewRequest& operator=(CreateOpaStrategyNewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Scopes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scopes& obj) { 
        DARABONBA_PTR_TO_JSON(AckPolicyInstanceId, ackPolicyInstanceId_);
        DARABONBA_PTR_TO_JSON(AllNamespace, allNamespace_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
      };
      friend void from_json(const Darabonba::Json& j, Scopes& obj) { 
        DARABONBA_PTR_FROM_JSON(AckPolicyInstanceId, ackPolicyInstanceId_);
        DARABONBA_PTR_FROM_JSON(AllNamespace, allNamespace_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
      };
      Scopes() = default ;
      Scopes(const Scopes &) = default ;
      Scopes(Scopes &&) = default ;
      Scopes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scopes() = default ;
      Scopes& operator=(const Scopes &) = default ;
      Scopes& operator=(Scopes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ackPolicyInstanceId_ == nullptr
        && this->allNamespace_ == nullptr && this->clusterId_ == nullptr && this->namespaceList_ == nullptr; };
      // ackPolicyInstanceId Field Functions 
      bool hasAckPolicyInstanceId() const { return this->ackPolicyInstanceId_ != nullptr;};
      void deleteAckPolicyInstanceId() { this->ackPolicyInstanceId_ = nullptr;};
      inline string getAckPolicyInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ackPolicyInstanceId_, "") };
      inline Scopes& setAckPolicyInstanceId(string ackPolicyInstanceId) { DARABONBA_PTR_SET_VALUE(ackPolicyInstanceId_, ackPolicyInstanceId) };


      // allNamespace Field Functions 
      bool hasAllNamespace() const { return this->allNamespace_ != nullptr;};
      void deleteAllNamespace() { this->allNamespace_ = nullptr;};
      inline int32_t getAllNamespace() const { DARABONBA_PTR_GET_DEFAULT(allNamespace_, 0) };
      inline Scopes& setAllNamespace(int32_t allNamespace) { DARABONBA_PTR_SET_VALUE(allNamespace_, allNamespace) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Scopes& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // namespaceList Field Functions 
      bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
      void deleteNamespaceList() { this->namespaceList_ = nullptr;};
      inline const vector<string> & getNamespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<string>) };
      inline vector<string> getNamespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<string>) };
      inline Scopes& setNamespaceList(const vector<string> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
      inline Scopes& setNamespaceList(vector<string> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


    protected:
      // The ID of the cluster node to which the rule is applied.
      // 
      // > This parameter is not required when you create the instance.
      shared_ptr<string> ackPolicyInstanceId_ {};
      // Specifies whether to include all namespaces. Valid values:
      // 
      // *   **1**: includes all namespaces.
      // *   **0**: does not include all namespaces.
      shared_ptr<int32_t> allNamespace_ {};
      // The ID of the cluster that is specified in the rule.
      // 
      // >  You can call the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/421736.html) operation to query the cluster ID.
      shared_ptr<string> clusterId_ {};
      // The namespaces.
      // 
      // > This parameter is valid only when the AllNamespace parameter is set to 0.
      shared_ptr<vector<string>> namespaceList_ {};
    };

    class AlarmDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlarmDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Baseline, baseline_);
        DARABONBA_PTR_TO_JSON(BuildRisk, buildRisk_);
        DARABONBA_PTR_TO_JSON(MaliciousFile, maliciousFile_);
        DARABONBA_PTR_TO_JSON(SensitiveFile, sensitiveFile_);
        DARABONBA_PTR_TO_JSON(Vul, vul_);
      };
      friend void from_json(const Darabonba::Json& j, AlarmDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
        DARABONBA_PTR_FROM_JSON(BuildRisk, buildRisk_);
        DARABONBA_PTR_FROM_JSON(MaliciousFile, maliciousFile_);
        DARABONBA_PTR_FROM_JSON(SensitiveFile, sensitiveFile_);
        DARABONBA_PTR_FROM_JSON(Vul, vul_);
      };
      AlarmDetail() = default ;
      AlarmDetail(const AlarmDetail &) = default ;
      AlarmDetail(AlarmDetail &&) = default ;
      AlarmDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlarmDetail() = default ;
      AlarmDetail& operator=(const AlarmDetail &) = default ;
      AlarmDetail& operator=(AlarmDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Vul : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Vul& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(RiskClass, riskClass_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Vul& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(RiskClass, riskClass_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        Vul() = default ;
        Vul(const Vul &) = default ;
        Vul(Vul &&) = default ;
        Vul(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Vul() = default ;
        Vul& operator=(const Vul &) = default ;
        Vul& operator=(Vul &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RiskClass : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RiskClass& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, RiskClass& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          RiskClass() = default ;
          RiskClass(const RiskClass &) = default ;
          RiskClass(RiskClass &&) = default ;
          RiskClass(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RiskClass() = default ;
          RiskClass& operator=(const RiskClass &) = default ;
          RiskClass& operator=(RiskClass &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline RiskClass& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RiskClass& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the vulnerability types. Valid values:
          // 
          // *   **cve**: system vulnerability
          // *   **app**: application vulnerability
          shared_ptr<string> id_ {};
          // The name of the vulnerability. Valid values:
          // 
          // *   **system vulnerability**
          // *   **application vulnerability**
          shared_ptr<string> name_ {};
        };

        class Item : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Item& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Item() = default ;
          Item(const Item &) = default ;
          Item(Item &&) = default ;
          Item(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Item() = default ;
          Item& operator=(const Item &) = default ;
          Item& operator=(Item &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Item& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Item& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the vulnerability.
          // 
          // >  You can call the [DescribeVulListPage](https://help.aliyun.com/document_detail/471928.html) operation to query the ID.
          shared_ptr<string> id_ {};
          // The name of the vulnerability.
          // 
          // >  You can call the [DescribeVulListPage](https://help.aliyun.com/document_detail/471928.html) operation to query the name.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->item_ == nullptr
        && this->riskClass_ == nullptr && this->riskLevel_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline const vector<Vul::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Vul::Item>) };
        inline vector<Vul::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Vul::Item>) };
        inline Vul& setItem(const vector<Vul::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
        inline Vul& setItem(vector<Vul::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


        // riskClass Field Functions 
        bool hasRiskClass() const { return this->riskClass_ != nullptr;};
        void deleteRiskClass() { this->riskClass_ = nullptr;};
        inline const vector<Vul::RiskClass> & getRiskClass() const { DARABONBA_PTR_GET_CONST(riskClass_, vector<Vul::RiskClass>) };
        inline vector<Vul::RiskClass> getRiskClass() { DARABONBA_PTR_GET(riskClass_, vector<Vul::RiskClass>) };
        inline Vul& setRiskClass(const vector<Vul::RiskClass> & riskClass) { DARABONBA_PTR_SET_VALUE(riskClass_, riskClass) };
        inline Vul& setRiskClass(vector<Vul::RiskClass> && riskClass) { DARABONBA_PTR_SET_RVALUE(riskClass_, riskClass) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline const vector<string> & getRiskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
        inline vector<string> getRiskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
        inline Vul& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
        inline Vul& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


      protected:
        // The vulnerabilities.
        shared_ptr<vector<Vul::Item>> item_ {};
        // Risk type of vulnerability.
        shared_ptr<vector<Vul::RiskClass>> riskClass_ {};
        // The risk levels.
        shared_ptr<vector<string>> riskLevel_ {};
      };

      class SensitiveFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SensitiveFile& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, SensitiveFile& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        SensitiveFile() = default ;
        SensitiveFile(const SensitiveFile &) = default ;
        SensitiveFile(SensitiveFile &&) = default ;
        SensitiveFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SensitiveFile() = default ;
        SensitiveFile& operator=(const SensitiveFile &) = default ;
        SensitiveFile& operator=(SensitiveFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Item : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Item& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Item() = default ;
          Item(const Item &) = default ;
          Item(Item &&) = default ;
          Item(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Item() = default ;
          Item& operator=(const Item &) = default ;
          Item& operator=(Item &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Item& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Item& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the sensitive files.
          // 
          // >  You can call the [GetSensitiveDefineRuleConfig](~~GetSensitiveDefineRuleConfig~~) operation to query the ID of the malicious sample.
          shared_ptr<string> id_ {};
          // The name of the sensitive files.
          // 
          // >  You can call the [GetSensitiveDefineRuleConfig](~~GetSensitiveDefineRuleConfig~~) operation to query the ID of the malicious sample.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->item_ == nullptr
        && this->riskLevel_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline const vector<SensitiveFile::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<SensitiveFile::Item>) };
        inline vector<SensitiveFile::Item> getItem() { DARABONBA_PTR_GET(item_, vector<SensitiveFile::Item>) };
        inline SensitiveFile& setItem(const vector<SensitiveFile::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
        inline SensitiveFile& setItem(vector<SensitiveFile::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline const vector<string> & getRiskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
        inline vector<string> getRiskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
        inline SensitiveFile& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
        inline SensitiveFile& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


      protected:
        // The configuration of sensitive file.
        shared_ptr<vector<SensitiveFile::Item>> item_ {};
        // The risk levels.
        shared_ptr<vector<string>> riskLevel_ {};
      };

      class MaliciousFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MaliciousFile& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, MaliciousFile& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        MaliciousFile() = default ;
        MaliciousFile(const MaliciousFile &) = default ;
        MaliciousFile(MaliciousFile &&) = default ;
        MaliciousFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MaliciousFile() = default ;
        MaliciousFile& operator=(const MaliciousFile &) = default ;
        MaliciousFile& operator=(MaliciousFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Item : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Item& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Item() = default ;
          Item(const Item &) = default ;
          Item(Item &&) = default ;
          Item(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Item() = default ;
          Item& operator=(const Item &) = default ;
          Item& operator=(Item &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Item& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Item& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the malicious sample.
          // 
          // >  You can call the [DescribeMatchedMaliciousNames](~~DescribeMatchedMaliciousNames~~) operation to query the ID.
          shared_ptr<string> id_ {};
          // The name of the malicious sample.
          // 
          // >  You can call the [DescribeMatchedMaliciousNames](~~DescribeMatchedMaliciousNames~~) operation to query the name.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->item_ == nullptr
        && this->riskLevel_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline const vector<MaliciousFile::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<MaliciousFile::Item>) };
        inline vector<MaliciousFile::Item> getItem() { DARABONBA_PTR_GET(item_, vector<MaliciousFile::Item>) };
        inline MaliciousFile& setItem(const vector<MaliciousFile::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
        inline MaliciousFile& setItem(vector<MaliciousFile::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline const vector<string> & getRiskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
        inline vector<string> getRiskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
        inline MaliciousFile& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
        inline MaliciousFile& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


      protected:
        // The malicious samples.
        shared_ptr<vector<MaliciousFile::Item>> item_ {};
        // The risk levels.
        shared_ptr<vector<string>> riskLevel_ {};
      };

      class BuildRisk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BuildRisk& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, BuildRisk& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        BuildRisk() = default ;
        BuildRisk(const BuildRisk &) = default ;
        BuildRisk(BuildRisk &&) = default ;
        BuildRisk(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BuildRisk() = default ;
        BuildRisk& operator=(const BuildRisk &) = default ;
        BuildRisk& operator=(BuildRisk &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Item : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Item& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Item() = default ;
          Item(const Item &) = default ;
          Item(Item &&) = default ;
          Item(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Item() = default ;
          Item& operator=(const Item &) = default ;
          Item& operator=(Item &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Item& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Item& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the image build risk.
          // 
          // >  You can call the [ListImageBuildRiskItem](~~ListImageBuildRiskItem~~) operation to query the ID of the malicious sample.
          shared_ptr<string> id_ {};
          // The name of the image build risk.
          // 
          // >  You can call the [ListImageBuildRiskItem](~~ListImageBuildRiskItem~~) operation to query the ID of the malicious sample.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->item_ == nullptr
        && this->riskLevel_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline const vector<BuildRisk::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<BuildRisk::Item>) };
        inline vector<BuildRisk::Item> getItem() { DARABONBA_PTR_GET(item_, vector<BuildRisk::Item>) };
        inline BuildRisk& setItem(const vector<BuildRisk::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
        inline BuildRisk& setItem(vector<BuildRisk::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline const vector<string> & getRiskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
        inline vector<string> getRiskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
        inline BuildRisk& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
        inline BuildRisk& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


      protected:
        // The configuration of image build risk.
        shared_ptr<vector<BuildRisk::Item>> item_ {};
        // The risk levels.
        shared_ptr<vector<string>> riskLevel_ {};
      };

      class Baseline : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Baseline& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Baseline& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        Baseline() = default ;
        Baseline(const Baseline &) = default ;
        Baseline(Baseline &&) = default ;
        Baseline(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Baseline() = default ;
        Baseline& operator=(const Baseline &) = default ;
        Baseline& operator=(Baseline &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Item : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Item& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Item() = default ;
          Item(const Item &) = default ;
          Item(Item &&) = default ;
          Item(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Item() = default ;
          Item& operator=(const Item &) = default ;
          Item& operator=(Item &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Item& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Item& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the baseline check item.
          // 
          // >  You can call the [GetOpaClusterBaseLineList](https://help.aliyun.com/document_detail/2539883.html) operation to query the ID.
          shared_ptr<string> id_ {};
          // The name of the baseline check item.
          // 
          // >  You can call the [GetOpaClusterBaseLineList](https://help.aliyun.com/document_detail/2539883.html) operation to query the name.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->item_ == nullptr
        && this->riskLevel_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline const vector<Baseline::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Baseline::Item>) };
        inline vector<Baseline::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Baseline::Item>) };
        inline Baseline& setItem(const vector<Baseline::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
        inline Baseline& setItem(vector<Baseline::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline const vector<string> & getRiskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
        inline vector<string> getRiskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
        inline Baseline& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
        inline Baseline& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


      protected:
        // The baseline check items.
        shared_ptr<vector<Baseline::Item>> item_ {};
        // The risk levels.
        shared_ptr<vector<string>> riskLevel_ {};
      };

      virtual bool empty() const override { return this->baseline_ == nullptr
        && this->buildRisk_ == nullptr && this->maliciousFile_ == nullptr && this->sensitiveFile_ == nullptr && this->vul_ == nullptr; };
      // baseline Field Functions 
      bool hasBaseline() const { return this->baseline_ != nullptr;};
      void deleteBaseline() { this->baseline_ = nullptr;};
      inline const AlarmDetail::Baseline & getBaseline() const { DARABONBA_PTR_GET_CONST(baseline_, AlarmDetail::Baseline) };
      inline AlarmDetail::Baseline getBaseline() { DARABONBA_PTR_GET(baseline_, AlarmDetail::Baseline) };
      inline AlarmDetail& setBaseline(const AlarmDetail::Baseline & baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };
      inline AlarmDetail& setBaseline(AlarmDetail::Baseline && baseline) { DARABONBA_PTR_SET_RVALUE(baseline_, baseline) };


      // buildRisk Field Functions 
      bool hasBuildRisk() const { return this->buildRisk_ != nullptr;};
      void deleteBuildRisk() { this->buildRisk_ = nullptr;};
      inline const AlarmDetail::BuildRisk & getBuildRisk() const { DARABONBA_PTR_GET_CONST(buildRisk_, AlarmDetail::BuildRisk) };
      inline AlarmDetail::BuildRisk getBuildRisk() { DARABONBA_PTR_GET(buildRisk_, AlarmDetail::BuildRisk) };
      inline AlarmDetail& setBuildRisk(const AlarmDetail::BuildRisk & buildRisk) { DARABONBA_PTR_SET_VALUE(buildRisk_, buildRisk) };
      inline AlarmDetail& setBuildRisk(AlarmDetail::BuildRisk && buildRisk) { DARABONBA_PTR_SET_RVALUE(buildRisk_, buildRisk) };


      // maliciousFile Field Functions 
      bool hasMaliciousFile() const { return this->maliciousFile_ != nullptr;};
      void deleteMaliciousFile() { this->maliciousFile_ = nullptr;};
      inline const AlarmDetail::MaliciousFile & getMaliciousFile() const { DARABONBA_PTR_GET_CONST(maliciousFile_, AlarmDetail::MaliciousFile) };
      inline AlarmDetail::MaliciousFile getMaliciousFile() { DARABONBA_PTR_GET(maliciousFile_, AlarmDetail::MaliciousFile) };
      inline AlarmDetail& setMaliciousFile(const AlarmDetail::MaliciousFile & maliciousFile) { DARABONBA_PTR_SET_VALUE(maliciousFile_, maliciousFile) };
      inline AlarmDetail& setMaliciousFile(AlarmDetail::MaliciousFile && maliciousFile) { DARABONBA_PTR_SET_RVALUE(maliciousFile_, maliciousFile) };


      // sensitiveFile Field Functions 
      bool hasSensitiveFile() const { return this->sensitiveFile_ != nullptr;};
      void deleteSensitiveFile() { this->sensitiveFile_ = nullptr;};
      inline const AlarmDetail::SensitiveFile & getSensitiveFile() const { DARABONBA_PTR_GET_CONST(sensitiveFile_, AlarmDetail::SensitiveFile) };
      inline AlarmDetail::SensitiveFile getSensitiveFile() { DARABONBA_PTR_GET(sensitiveFile_, AlarmDetail::SensitiveFile) };
      inline AlarmDetail& setSensitiveFile(const AlarmDetail::SensitiveFile & sensitiveFile) { DARABONBA_PTR_SET_VALUE(sensitiveFile_, sensitiveFile) };
      inline AlarmDetail& setSensitiveFile(AlarmDetail::SensitiveFile && sensitiveFile) { DARABONBA_PTR_SET_RVALUE(sensitiveFile_, sensitiveFile) };


      // vul Field Functions 
      bool hasVul() const { return this->vul_ != nullptr;};
      void deleteVul() { this->vul_ = nullptr;};
      inline const AlarmDetail::Vul & getVul() const { DARABONBA_PTR_GET_CONST(vul_, AlarmDetail::Vul) };
      inline AlarmDetail::Vul getVul() { DARABONBA_PTR_GET(vul_, AlarmDetail::Vul) };
      inline AlarmDetail& setVul(const AlarmDetail::Vul & vul) { DARABONBA_PTR_SET_VALUE(vul_, vul) };
      inline AlarmDetail& setVul(AlarmDetail::Vul && vul) { DARABONBA_PTR_SET_RVALUE(vul_, vul) };


    protected:
      // The baseline risks.
      shared_ptr<AlarmDetail::Baseline> baseline_ {};
      // The configuration of image build risk.
      shared_ptr<AlarmDetail::BuildRisk> buildRisk_ {};
      // The malicious sample risks.
      shared_ptr<AlarmDetail::MaliciousFile> maliciousFile_ {};
      // The configuration of sensitive file.
      shared_ptr<AlarmDetail::SensitiveFile> sensitiveFile_ {};
      // The vulnerability risks.
      shared_ptr<AlarmDetail::Vul> vul_ {};
    };

    virtual bool empty() const override { return this->alarmDetail_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->description_ == nullptr && this->imageName_ == nullptr && this->label_ == nullptr
        && this->maliciousImage_ == nullptr && this->ruleAction_ == nullptr && this->scopes_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr
        && this->strategyTemplateId_ == nullptr && this->unScanedImage_ == nullptr && this->whiteList_ == nullptr; };
    // alarmDetail Field Functions 
    bool hasAlarmDetail() const { return this->alarmDetail_ != nullptr;};
    void deleteAlarmDetail() { this->alarmDetail_ = nullptr;};
    inline const CreateOpaStrategyNewRequest::AlarmDetail & getAlarmDetail() const { DARABONBA_PTR_GET_CONST(alarmDetail_, CreateOpaStrategyNewRequest::AlarmDetail) };
    inline CreateOpaStrategyNewRequest::AlarmDetail getAlarmDetail() { DARABONBA_PTR_GET(alarmDetail_, CreateOpaStrategyNewRequest::AlarmDetail) };
    inline CreateOpaStrategyNewRequest& setAlarmDetail(const CreateOpaStrategyNewRequest::AlarmDetail & alarmDetail) { DARABONBA_PTR_SET_VALUE(alarmDetail_, alarmDetail) };
    inline CreateOpaStrategyNewRequest& setAlarmDetail(CreateOpaStrategyNewRequest::AlarmDetail && alarmDetail) { DARABONBA_PTR_SET_RVALUE(alarmDetail_, alarmDetail) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateOpaStrategyNewRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateOpaStrategyNewRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOpaStrategyNewRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline const vector<string> & getImageName() const { DARABONBA_PTR_GET_CONST(imageName_, vector<string>) };
    inline vector<string> getImageName() { DARABONBA_PTR_GET(imageName_, vector<string>) };
    inline CreateOpaStrategyNewRequest& setImageName(const vector<string> & imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };
    inline CreateOpaStrategyNewRequest& setImageName(vector<string> && imageName) { DARABONBA_PTR_SET_RVALUE(imageName_, imageName) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const vector<string> & getLabel() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
    inline vector<string> getLabel() { DARABONBA_PTR_GET(label_, vector<string>) };
    inline CreateOpaStrategyNewRequest& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline CreateOpaStrategyNewRequest& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // maliciousImage Field Functions 
    bool hasMaliciousImage() const { return this->maliciousImage_ != nullptr;};
    void deleteMaliciousImage() { this->maliciousImage_ = nullptr;};
    inline bool getMaliciousImage() const { DARABONBA_PTR_GET_DEFAULT(maliciousImage_, false) };
    inline CreateOpaStrategyNewRequest& setMaliciousImage(bool maliciousImage) { DARABONBA_PTR_SET_VALUE(maliciousImage_, maliciousImage) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline CreateOpaStrategyNewRequest& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<CreateOpaStrategyNewRequest::Scopes> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<CreateOpaStrategyNewRequest::Scopes>) };
    inline vector<CreateOpaStrategyNewRequest::Scopes> getScopes() { DARABONBA_PTR_GET(scopes_, vector<CreateOpaStrategyNewRequest::Scopes>) };
    inline CreateOpaStrategyNewRequest& setScopes(const vector<CreateOpaStrategyNewRequest::Scopes> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline CreateOpaStrategyNewRequest& setScopes(vector<CreateOpaStrategyNewRequest::Scopes> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline CreateOpaStrategyNewRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline CreateOpaStrategyNewRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyTemplateId Field Functions 
    bool hasStrategyTemplateId() const { return this->strategyTemplateId_ != nullptr;};
    void deleteStrategyTemplateId() { this->strategyTemplateId_ = nullptr;};
    inline int64_t getStrategyTemplateId() const { DARABONBA_PTR_GET_DEFAULT(strategyTemplateId_, 0L) };
    inline CreateOpaStrategyNewRequest& setStrategyTemplateId(int64_t strategyTemplateId) { DARABONBA_PTR_SET_VALUE(strategyTemplateId_, strategyTemplateId) };


    // unScanedImage Field Functions 
    bool hasUnScanedImage() const { return this->unScanedImage_ != nullptr;};
    void deleteUnScanedImage() { this->unScanedImage_ = nullptr;};
    inline bool getUnScanedImage() const { DARABONBA_PTR_GET_DEFAULT(unScanedImage_, false) };
    inline CreateOpaStrategyNewRequest& setUnScanedImage(bool unScanedImage) { DARABONBA_PTR_SET_VALUE(unScanedImage_, unScanedImage) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & getWhiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> getWhiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline CreateOpaStrategyNewRequest& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline CreateOpaStrategyNewRequest& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    // The risks that you want to detect by using the rule.
    shared_ptr<CreateOpaStrategyNewRequest::AlarmDetail> alarmDetail_ {};
    // The cluster ID.
    // 
    // > This parameter is deprecated.
    shared_ptr<string> clusterId_ {};
    // The cluster name.
    // 
    // > This parameter is deprecated.
    shared_ptr<string> clusterName_ {};
    // The rule description.
    shared_ptr<string> description_ {};
    // The image names.
    shared_ptr<vector<string>> imageName_ {};
    // The container tags.
    shared_ptr<vector<string>> label_ {};
    // Specifies whether the rule supports malicious Internet images. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> maliciousImage_ {};
    // The action that is performed when the rule is hit. Valid values:
    // 
    // *   **1**: trigger alerts
    // *   **2**: block
    // *   **3**: allow
    shared_ptr<int32_t> ruleAction_ {};
    // The application scope of the rule.
    shared_ptr<vector<CreateOpaStrategyNewRequest::Scopes>> scopes_ {};
    // The rule ID.
    // 
    // >  You can call the [ListOpaClusterStrategyNew](https://help.aliyun.com/document_detail/2623574.html) operation to query the rule ID.
    // 
    // > This parameter is invalid when you create a rule.
    shared_ptr<int64_t> strategyId_ {};
    // The rule name.
    shared_ptr<string> strategyName_ {};
    // The ID of the rule template.
    // 
    // >  You can call the [GetOpaStrategyTemplateSummary](https://help.aliyun.com/document_detail/2539952.html) operation to query the ID of the rule template.
    shared_ptr<int64_t> strategyTemplateId_ {};
    // Specifies whether the rule supports unscanned images. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> unScanedImage_ {};
    // The whitelist.
    shared_ptr<vector<string>> whiteList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
