// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODY_HPP_
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
  class GetStrategyTemplateDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStrategyTemplateDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStrategyTemplateDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStrategyTemplateDetailResponseBody() = default ;
    GetStrategyTemplateDetailResponseBody(const GetStrategyTemplateDetailResponseBody &) = default ;
    GetStrategyTemplateDetailResponseBody(GetStrategyTemplateDetailResponseBody &&) = default ;
    GetStrategyTemplateDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStrategyTemplateDetailResponseBody() = default ;
    GetStrategyTemplateDetailResponseBody& operator=(const GetStrategyTemplateDetailResponseBody &) = default ;
    GetStrategyTemplateDetailResponseBody& operator=(GetStrategyTemplateDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmDetail, alarmDetail_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(MaliciousImage, maliciousImage_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_TO_JSON(StrategyTemplateId, strategyTemplateId_);
        DARABONBA_PTR_TO_JSON(UnScanedImage, unScanedImage_);
        DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmDetail, alarmDetail_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(MaliciousImage, maliciousImage_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_FROM_JSON(StrategyTemplateId, strategyTemplateId_);
        DARABONBA_PTR_FROM_JSON(UnScanedImage, unScanedImage_);
        DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
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
      class AlarmDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlarmDetail& obj) { 
          DARABONBA_PTR_TO_JSON(Baseline, baseline_);
          DARABONBA_PTR_TO_JSON(MaliciousFile, maliciousFile_);
          DARABONBA_PTR_TO_JSON(Vul, vul_);
        };
        friend void from_json(const Darabonba::Json& j, AlarmDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
          DARABONBA_PTR_FROM_JSON(MaliciousFile, maliciousFile_);
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
            DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          };
          friend void from_json(const Darabonba::Json& j, Vul& obj) { 
            DARABONBA_PTR_FROM_JSON(Item, item_);
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
            shared_ptr<string> id_ {};
            // The alias of the vulnerability.
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->item_ == nullptr
        && this->riskLevel_ == nullptr; };
          // item Field Functions 
          bool hasItem() const { return this->item_ != nullptr;};
          void deleteItem() { this->item_ = nullptr;};
          inline const vector<Vul::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Vul::Item>) };
          inline vector<Vul::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Vul::Item>) };
          inline Vul& setItem(const vector<Vul::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
          inline Vul& setItem(vector<Vul::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


          // riskLevel Field Functions 
          bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
          void deleteRiskLevel() { this->riskLevel_ = nullptr;};
          inline const vector<string> & getRiskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
          inline vector<string> getRiskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
          inline Vul& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
          inline Vul& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


        protected:
          // The items on which vulnerabilities are detected.
          shared_ptr<vector<Vul::Item>> item_ {};
          // The severities of the vulnerabilities.
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
            // The unique identifier of the malicious sample.
            shared_ptr<string> id_ {};
            // The name of the malicious sample.
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
          // The items on which malicious samples are detected.
          shared_ptr<vector<MaliciousFile::Item>> item_ {};
          // The severities of the malicious samples.
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
            // The unique identifier of the baseline check item.
            shared_ptr<string> id_ {};
            // The name of the baseline check item.
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
          // The baseline items.
          shared_ptr<vector<Baseline::Item>> item_ {};
          // The severities of the baselines. Valid values:
          // 
          // *   **high**
          // *   **medium**
          // *   **low**
          shared_ptr<vector<string>> riskLevel_ {};
        };

        virtual bool empty() const override { return this->baseline_ == nullptr
        && this->maliciousFile_ == nullptr && this->vul_ == nullptr; };
        // baseline Field Functions 
        bool hasBaseline() const { return this->baseline_ != nullptr;};
        void deleteBaseline() { this->baseline_ = nullptr;};
        inline const AlarmDetail::Baseline & getBaseline() const { DARABONBA_PTR_GET_CONST(baseline_, AlarmDetail::Baseline) };
        inline AlarmDetail::Baseline getBaseline() { DARABONBA_PTR_GET(baseline_, AlarmDetail::Baseline) };
        inline AlarmDetail& setBaseline(const AlarmDetail::Baseline & baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };
        inline AlarmDetail& setBaseline(AlarmDetail::Baseline && baseline) { DARABONBA_PTR_SET_RVALUE(baseline_, baseline) };


        // maliciousFile Field Functions 
        bool hasMaliciousFile() const { return this->maliciousFile_ != nullptr;};
        void deleteMaliciousFile() { this->maliciousFile_ = nullptr;};
        inline const AlarmDetail::MaliciousFile & getMaliciousFile() const { DARABONBA_PTR_GET_CONST(maliciousFile_, AlarmDetail::MaliciousFile) };
        inline AlarmDetail::MaliciousFile getMaliciousFile() { DARABONBA_PTR_GET(maliciousFile_, AlarmDetail::MaliciousFile) };
        inline AlarmDetail& setMaliciousFile(const AlarmDetail::MaliciousFile & maliciousFile) { DARABONBA_PTR_SET_VALUE(maliciousFile_, maliciousFile) };
        inline AlarmDetail& setMaliciousFile(AlarmDetail::MaliciousFile && maliciousFile) { DARABONBA_PTR_SET_RVALUE(maliciousFile_, maliciousFile) };


        // vul Field Functions 
        bool hasVul() const { return this->vul_ != nullptr;};
        void deleteVul() { this->vul_ = nullptr;};
        inline const AlarmDetail::Vul & getVul() const { DARABONBA_PTR_GET_CONST(vul_, AlarmDetail::Vul) };
        inline AlarmDetail::Vul getVul() { DARABONBA_PTR_GET(vul_, AlarmDetail::Vul) };
        inline AlarmDetail& setVul(const AlarmDetail::Vul & vul) { DARABONBA_PTR_SET_VALUE(vul_, vul) };
        inline AlarmDetail& setVul(AlarmDetail::Vul && vul) { DARABONBA_PTR_SET_RVALUE(vul_, vul) };


      protected:
        // The configuration of the baseline.
        shared_ptr<AlarmDetail::Baseline> baseline_ {};
        // The configuration of the alert rule for the malicious sample.
        shared_ptr<AlarmDetail::MaliciousFile> maliciousFile_ {};
        // The configuration of the vulnerability detection rule.
        shared_ptr<AlarmDetail::Vul> vul_ {};
      };

      virtual bool empty() const override { return this->alarmDetail_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->description_ == nullptr && this->imageName_ == nullptr && this->label_ == nullptr
        && this->maliciousImage_ == nullptr && this->namespace_ == nullptr && this->ruleAction_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr
        && this->strategyTemplateId_ == nullptr && this->unScanedImage_ == nullptr && this->whiteList_ == nullptr; };
      // alarmDetail Field Functions 
      bool hasAlarmDetail() const { return this->alarmDetail_ != nullptr;};
      void deleteAlarmDetail() { this->alarmDetail_ = nullptr;};
      inline const Data::AlarmDetail & getAlarmDetail() const { DARABONBA_PTR_GET_CONST(alarmDetail_, Data::AlarmDetail) };
      inline Data::AlarmDetail getAlarmDetail() { DARABONBA_PTR_GET(alarmDetail_, Data::AlarmDetail) };
      inline Data& setAlarmDetail(const Data::AlarmDetail & alarmDetail) { DARABONBA_PTR_SET_VALUE(alarmDetail_, alarmDetail) };
      inline Data& setAlarmDetail(Data::AlarmDetail && alarmDetail) { DARABONBA_PTR_SET_RVALUE(alarmDetail_, alarmDetail) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline const vector<string> & getImageName() const { DARABONBA_PTR_GET_CONST(imageName_, vector<string>) };
      inline vector<string> getImageName() { DARABONBA_PTR_GET(imageName_, vector<string>) };
      inline Data& setImageName(const vector<string> & imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };
      inline Data& setImageName(vector<string> && imageName) { DARABONBA_PTR_SET_RVALUE(imageName_, imageName) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline const vector<string> & getLabel() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
      inline vector<string> getLabel() { DARABONBA_PTR_GET(label_, vector<string>) };
      inline Data& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
      inline Data& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


      // maliciousImage Field Functions 
      bool hasMaliciousImage() const { return this->maliciousImage_ != nullptr;};
      void deleteMaliciousImage() { this->maliciousImage_ = nullptr;};
      inline bool getMaliciousImage() const { DARABONBA_PTR_GET_DEFAULT(maliciousImage_, false) };
      inline Data& setMaliciousImage(bool maliciousImage) { DARABONBA_PTR_SET_VALUE(maliciousImage_, maliciousImage) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline const vector<string> & getNamespace() const { DARABONBA_PTR_GET_CONST(namespace_, vector<string>) };
      inline vector<string> getNamespace() { DARABONBA_PTR_GET(namespace_, vector<string>) };
      inline Data& setNamespace(const vector<string> & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
      inline Data& setNamespace(vector<string> && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline int32_t getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
      inline Data& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
      inline Data& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      // strategyName Field Functions 
      bool hasStrategyName() const { return this->strategyName_ != nullptr;};
      void deleteStrategyName() { this->strategyName_ = nullptr;};
      inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
      inline Data& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      // strategyTemplateId Field Functions 
      bool hasStrategyTemplateId() const { return this->strategyTemplateId_ != nullptr;};
      void deleteStrategyTemplateId() { this->strategyTemplateId_ = nullptr;};
      inline int64_t getStrategyTemplateId() const { DARABONBA_PTR_GET_DEFAULT(strategyTemplateId_, 0L) };
      inline Data& setStrategyTemplateId(int64_t strategyTemplateId) { DARABONBA_PTR_SET_VALUE(strategyTemplateId_, strategyTemplateId) };


      // unScanedImage Field Functions 
      bool hasUnScanedImage() const { return this->unScanedImage_ != nullptr;};
      void deleteUnScanedImage() { this->unScanedImage_ = nullptr;};
      inline bool getUnScanedImage() const { DARABONBA_PTR_GET_DEFAULT(unScanedImage_, false) };
      inline Data& setUnScanedImage(bool unScanedImage) { DARABONBA_PTR_SET_VALUE(unScanedImage_, unScanedImage) };


      // whiteList Field Functions 
      bool hasWhiteList() const { return this->whiteList_ != nullptr;};
      void deleteWhiteList() { this->whiteList_ = nullptr;};
      inline const vector<string> & getWhiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
      inline vector<string> getWhiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
      inline Data& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
      inline Data& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


    protected:
      // The configuration of the rule.
      shared_ptr<Data::AlarmDetail> alarmDetail_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The description of the rule.
      shared_ptr<string> description_ {};
      // The names of images.
      shared_ptr<vector<string>> imageName_ {};
      // The tags that are added to the containers.
      shared_ptr<vector<string>> label_ {};
      // Indicates whether the rule supports malicious Internet images. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> maliciousImage_ {};
      // The namespaces.
      shared_ptr<vector<string>> namespace_ {};
      // The action on requests. Valid values:
      // 
      // *   **1**: trigger alerts
      // *   **2**: block
      // *   **3**: allow
      shared_ptr<int32_t> ruleAction_ {};
      // The ID of the rule.
      shared_ptr<int64_t> strategyId_ {};
      // The name of the rule.
      shared_ptr<string> strategyName_ {};
      // The ID of the template.
      shared_ptr<int64_t> strategyTemplateId_ {};
      // Indicates whether the rule supports unscanned images. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> unScanedImage_ {};
      // The whitelists of tags that are added to images.
      shared_ptr<vector<string>> whiteList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetStrategyTemplateDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStrategyTemplateDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStrategyTemplateDetailResponseBody::Data) };
    inline GetStrategyTemplateDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStrategyTemplateDetailResponseBody::Data) };
    inline GetStrategyTemplateDetailResponseBody& setData(const GetStrategyTemplateDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStrategyTemplateDetailResponseBody& setData(GetStrategyTemplateDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStrategyTemplateDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStrategyTemplateDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStrategyTemplateDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The details of the template.
    shared_ptr<GetStrategyTemplateDetailResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
