// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVOBJECTDEPENDENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVOBJECTDEPENDENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDevObjectDependencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDevObjectDependencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DevObjectDependencyList, devObjectDependencyList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDevObjectDependencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DevObjectDependencyList, devObjectDependencyList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDevObjectDependencyResponseBody() = default ;
    GetDevObjectDependencyResponseBody(const GetDevObjectDependencyResponseBody &) = default ;
    GetDevObjectDependencyResponseBody(GetDevObjectDependencyResponseBody &&) = default ;
    GetDevObjectDependencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDevObjectDependencyResponseBody() = default ;
    GetDevObjectDependencyResponseBody& operator=(const GetDevObjectDependencyResponseBody &) = default ;
    GetDevObjectDependencyResponseBody& operator=(GetDevObjectDependencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DevObjectDependencyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DevObjectDependencyList& obj) { 
        DARABONBA_PTR_TO_JSON(AutoParse, autoParse_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(CustomCronExpression, customCronExpression_);
        DARABONBA_PTR_TO_JSON(DependFieldList, dependFieldList_);
        DARABONBA_PTR_TO_JSON(DependencyPeriod, dependencyPeriod_);
        DARABONBA_PTR_TO_JSON(DependencyStrategy, dependencyStrategy_);
        DARABONBA_PTR_TO_JSON(DimMidNode, dimMidNode_);
        DARABONBA_PTR_TO_JSON(EffectFieldList, effectFieldList_);
        DARABONBA_PTR_TO_JSON(ExternalBizInfo, externalBizInfo_);
        DARABONBA_PTR_TO_JSON(ManuallyAdd, manuallyAdd_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(NodeOutputName, nodeOutputName_);
        DARABONBA_PTR_TO_JSON(NodeOutputTableName, nodeOutputTableName_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(OutputContextParamList, outputContextParamList_);
        DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
        DARABONBA_PTR_TO_JSON(PeriodDiff, periodDiff_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(SelfDepend, selfDepend_);
        DARABONBA_PTR_TO_JSON(SubBizType, subBizType_);
        DARABONBA_PTR_TO_JSON(Valid, valid_);
      };
      friend void from_json(const Darabonba::Json& j, DevObjectDependencyList& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoParse, autoParse_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(CustomCronExpression, customCronExpression_);
        DARABONBA_PTR_FROM_JSON(DependFieldList, dependFieldList_);
        DARABONBA_PTR_FROM_JSON(DependencyPeriod, dependencyPeriod_);
        DARABONBA_PTR_FROM_JSON(DependencyStrategy, dependencyStrategy_);
        DARABONBA_PTR_FROM_JSON(DimMidNode, dimMidNode_);
        DARABONBA_PTR_FROM_JSON(EffectFieldList, effectFieldList_);
        DARABONBA_PTR_FROM_JSON(ExternalBizInfo, externalBizInfo_);
        DARABONBA_PTR_FROM_JSON(ManuallyAdd, manuallyAdd_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(NodeOutputName, nodeOutputName_);
        DARABONBA_PTR_FROM_JSON(NodeOutputTableName, nodeOutputTableName_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(OutputContextParamList, outputContextParamList_);
        DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
        DARABONBA_PTR_FROM_JSON(PeriodDiff, periodDiff_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(SelfDepend, selfDepend_);
        DARABONBA_PTR_FROM_JSON(SubBizType, subBizType_);
        DARABONBA_PTR_FROM_JSON(Valid, valid_);
      };
      DevObjectDependencyList() = default ;
      DevObjectDependencyList(const DevObjectDependencyList &) = default ;
      DevObjectDependencyList(DevObjectDependencyList &&) = default ;
      DevObjectDependencyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DevObjectDependencyList() = default ;
      DevObjectDependencyList& operator=(const DevObjectDependencyList &) = default ;
      DevObjectDependencyList& operator=(DevObjectDependencyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OwnerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OwnerList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, OwnerList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        OwnerList() = default ;
        OwnerList(const OwnerList &) = default ;
        OwnerList(OwnerList &&) = default ;
        OwnerList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OwnerList() = default ;
        OwnerList& operator=(const OwnerList &) = default ;
        OwnerList& operator=(OwnerList &&) = default ;
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
        inline OwnerList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline OwnerList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class OutputContextParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputContextParamList& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, OutputContextParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        OutputContextParamList() = default ;
        OutputContextParamList(const OutputContextParamList &) = default ;
        OutputContextParamList(OutputContextParamList &&) = default ;
        OutputContextParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputContextParamList() = default ;
        OutputContextParamList& operator=(const OutputContextParamList &) = default ;
        OutputContextParamList& operator=(OutputContextParamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->key_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline OutputContextParamList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline OutputContextParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline OutputContextParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        shared_ptr<string> defaultValue_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> key_ {};
      };

      class DependencyPeriod : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DependencyPeriod& obj) { 
          DARABONBA_PTR_TO_JSON(PeriodOffset, periodOffset_);
          DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
        };
        friend void from_json(const Darabonba::Json& j, DependencyPeriod& obj) { 
          DARABONBA_PTR_FROM_JSON(PeriodOffset, periodOffset_);
          DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
        };
        DependencyPeriod() = default ;
        DependencyPeriod(const DependencyPeriod &) = default ;
        DependencyPeriod(DependencyPeriod &&) = default ;
        DependencyPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DependencyPeriod() = default ;
        DependencyPeriod& operator=(const DependencyPeriod &) = default ;
        DependencyPeriod& operator=(DependencyPeriod &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->periodOffset_ == nullptr
        && this->periodType_ == nullptr; };
        // periodOffset Field Functions 
        bool hasPeriodOffset() const { return this->periodOffset_ != nullptr;};
        void deletePeriodOffset() { this->periodOffset_ = nullptr;};
        inline int32_t getPeriodOffset() const { DARABONBA_PTR_GET_DEFAULT(periodOffset_, 0) };
        inline DependencyPeriod& setPeriodOffset(int32_t periodOffset) { DARABONBA_PTR_SET_VALUE(periodOffset_, periodOffset) };


        // periodType Field Functions 
        bool hasPeriodType() const { return this->periodType_ != nullptr;};
        void deletePeriodType() { this->periodType_ = nullptr;};
        inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
        inline DependencyPeriod& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


      protected:
        shared_ptr<int32_t> periodOffset_ {};
        shared_ptr<string> periodType_ {};
      };

      virtual bool empty() const override { return this->autoParse_ == nullptr
        && this->bizType_ == nullptr && this->bizUnitId_ == nullptr && this->bizUnitName_ == nullptr && this->cronExpression_ == nullptr && this->customCronExpression_ == nullptr
        && this->dependFieldList_ == nullptr && this->dependencyPeriod_ == nullptr && this->dependencyStrategy_ == nullptr && this->dimMidNode_ == nullptr && this->effectFieldList_ == nullptr
        && this->externalBizInfo_ == nullptr && this->manuallyAdd_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeOutputName_ == nullptr
        && this->nodeOutputTableName_ == nullptr && this->nodeType_ == nullptr && this->outputContextParamList_ == nullptr && this->ownerList_ == nullptr && this->periodDiff_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->scheduleType_ == nullptr && this->selfDepend_ == nullptr && this->subBizType_ == nullptr
        && this->valid_ == nullptr; };
      // autoParse Field Functions 
      bool hasAutoParse() const { return this->autoParse_ != nullptr;};
      void deleteAutoParse() { this->autoParse_ = nullptr;};
      inline bool getAutoParse() const { DARABONBA_PTR_GET_DEFAULT(autoParse_, false) };
      inline DevObjectDependencyList& setAutoParse(bool autoParse) { DARABONBA_PTR_SET_VALUE(autoParse_, autoParse) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline DevObjectDependencyList& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline string getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, "") };
      inline DevObjectDependencyList& setBizUnitId(string bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // bizUnitName Field Functions 
      bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
      void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
      inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
      inline DevObjectDependencyList& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline DevObjectDependencyList& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // customCronExpression Field Functions 
      bool hasCustomCronExpression() const { return this->customCronExpression_ != nullptr;};
      void deleteCustomCronExpression() { this->customCronExpression_ = nullptr;};
      inline bool getCustomCronExpression() const { DARABONBA_PTR_GET_DEFAULT(customCronExpression_, false) };
      inline DevObjectDependencyList& setCustomCronExpression(bool customCronExpression) { DARABONBA_PTR_SET_VALUE(customCronExpression_, customCronExpression) };


      // dependFieldList Field Functions 
      bool hasDependFieldList() const { return this->dependFieldList_ != nullptr;};
      void deleteDependFieldList() { this->dependFieldList_ = nullptr;};
      inline const vector<string> & getDependFieldList() const { DARABONBA_PTR_GET_CONST(dependFieldList_, vector<string>) };
      inline vector<string> getDependFieldList() { DARABONBA_PTR_GET(dependFieldList_, vector<string>) };
      inline DevObjectDependencyList& setDependFieldList(const vector<string> & dependFieldList) { DARABONBA_PTR_SET_VALUE(dependFieldList_, dependFieldList) };
      inline DevObjectDependencyList& setDependFieldList(vector<string> && dependFieldList) { DARABONBA_PTR_SET_RVALUE(dependFieldList_, dependFieldList) };


      // dependencyPeriod Field Functions 
      bool hasDependencyPeriod() const { return this->dependencyPeriod_ != nullptr;};
      void deleteDependencyPeriod() { this->dependencyPeriod_ = nullptr;};
      inline const DevObjectDependencyList::DependencyPeriod & getDependencyPeriod() const { DARABONBA_PTR_GET_CONST(dependencyPeriod_, DevObjectDependencyList::DependencyPeriod) };
      inline DevObjectDependencyList::DependencyPeriod getDependencyPeriod() { DARABONBA_PTR_GET(dependencyPeriod_, DevObjectDependencyList::DependencyPeriod) };
      inline DevObjectDependencyList& setDependencyPeriod(const DevObjectDependencyList::DependencyPeriod & dependencyPeriod) { DARABONBA_PTR_SET_VALUE(dependencyPeriod_, dependencyPeriod) };
      inline DevObjectDependencyList& setDependencyPeriod(DevObjectDependencyList::DependencyPeriod && dependencyPeriod) { DARABONBA_PTR_SET_RVALUE(dependencyPeriod_, dependencyPeriod) };


      // dependencyStrategy Field Functions 
      bool hasDependencyStrategy() const { return this->dependencyStrategy_ != nullptr;};
      void deleteDependencyStrategy() { this->dependencyStrategy_ = nullptr;};
      inline string getDependencyStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependencyStrategy_, "") };
      inline DevObjectDependencyList& setDependencyStrategy(string dependencyStrategy) { DARABONBA_PTR_SET_VALUE(dependencyStrategy_, dependencyStrategy) };


      // dimMidNode Field Functions 
      bool hasDimMidNode() const { return this->dimMidNode_ != nullptr;};
      void deleteDimMidNode() { this->dimMidNode_ = nullptr;};
      inline bool getDimMidNode() const { DARABONBA_PTR_GET_DEFAULT(dimMidNode_, false) };
      inline DevObjectDependencyList& setDimMidNode(bool dimMidNode) { DARABONBA_PTR_SET_VALUE(dimMidNode_, dimMidNode) };


      // effectFieldList Field Functions 
      bool hasEffectFieldList() const { return this->effectFieldList_ != nullptr;};
      void deleteEffectFieldList() { this->effectFieldList_ = nullptr;};
      inline const vector<string> & getEffectFieldList() const { DARABONBA_PTR_GET_CONST(effectFieldList_, vector<string>) };
      inline vector<string> getEffectFieldList() { DARABONBA_PTR_GET(effectFieldList_, vector<string>) };
      inline DevObjectDependencyList& setEffectFieldList(const vector<string> & effectFieldList) { DARABONBA_PTR_SET_VALUE(effectFieldList_, effectFieldList) };
      inline DevObjectDependencyList& setEffectFieldList(vector<string> && effectFieldList) { DARABONBA_PTR_SET_RVALUE(effectFieldList_, effectFieldList) };


      // externalBizInfo Field Functions 
      bool hasExternalBizInfo() const { return this->externalBizInfo_ != nullptr;};
      void deleteExternalBizInfo() { this->externalBizInfo_ = nullptr;};
      inline string getExternalBizInfo() const { DARABONBA_PTR_GET_DEFAULT(externalBizInfo_, "") };
      inline DevObjectDependencyList& setExternalBizInfo(string externalBizInfo) { DARABONBA_PTR_SET_VALUE(externalBizInfo_, externalBizInfo) };


      // manuallyAdd Field Functions 
      bool hasManuallyAdd() const { return this->manuallyAdd_ != nullptr;};
      void deleteManuallyAdd() { this->manuallyAdd_ = nullptr;};
      inline bool getManuallyAdd() const { DARABONBA_PTR_GET_DEFAULT(manuallyAdd_, false) };
      inline DevObjectDependencyList& setManuallyAdd(bool manuallyAdd) { DARABONBA_PTR_SET_VALUE(manuallyAdd_, manuallyAdd) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline DevObjectDependencyList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline DevObjectDependencyList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeOutputName Field Functions 
      bool hasNodeOutputName() const { return this->nodeOutputName_ != nullptr;};
      void deleteNodeOutputName() { this->nodeOutputName_ = nullptr;};
      inline string getNodeOutputName() const { DARABONBA_PTR_GET_DEFAULT(nodeOutputName_, "") };
      inline DevObjectDependencyList& setNodeOutputName(string nodeOutputName) { DARABONBA_PTR_SET_VALUE(nodeOutputName_, nodeOutputName) };


      // nodeOutputTableName Field Functions 
      bool hasNodeOutputTableName() const { return this->nodeOutputTableName_ != nullptr;};
      void deleteNodeOutputTableName() { this->nodeOutputTableName_ = nullptr;};
      inline string getNodeOutputTableName() const { DARABONBA_PTR_GET_DEFAULT(nodeOutputTableName_, "") };
      inline DevObjectDependencyList& setNodeOutputTableName(string nodeOutputTableName) { DARABONBA_PTR_SET_VALUE(nodeOutputTableName_, nodeOutputTableName) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline DevObjectDependencyList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // outputContextParamList Field Functions 
      bool hasOutputContextParamList() const { return this->outputContextParamList_ != nullptr;};
      void deleteOutputContextParamList() { this->outputContextParamList_ = nullptr;};
      inline const vector<DevObjectDependencyList::OutputContextParamList> & getOutputContextParamList() const { DARABONBA_PTR_GET_CONST(outputContextParamList_, vector<DevObjectDependencyList::OutputContextParamList>) };
      inline vector<DevObjectDependencyList::OutputContextParamList> getOutputContextParamList() { DARABONBA_PTR_GET(outputContextParamList_, vector<DevObjectDependencyList::OutputContextParamList>) };
      inline DevObjectDependencyList& setOutputContextParamList(const vector<DevObjectDependencyList::OutputContextParamList> & outputContextParamList) { DARABONBA_PTR_SET_VALUE(outputContextParamList_, outputContextParamList) };
      inline DevObjectDependencyList& setOutputContextParamList(vector<DevObjectDependencyList::OutputContextParamList> && outputContextParamList) { DARABONBA_PTR_SET_RVALUE(outputContextParamList_, outputContextParamList) };


      // ownerList Field Functions 
      bool hasOwnerList() const { return this->ownerList_ != nullptr;};
      void deleteOwnerList() { this->ownerList_ = nullptr;};
      inline const vector<DevObjectDependencyList::OwnerList> & getOwnerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<DevObjectDependencyList::OwnerList>) };
      inline vector<DevObjectDependencyList::OwnerList> getOwnerList() { DARABONBA_PTR_GET(ownerList_, vector<DevObjectDependencyList::OwnerList>) };
      inline DevObjectDependencyList& setOwnerList(const vector<DevObjectDependencyList::OwnerList> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
      inline DevObjectDependencyList& setOwnerList(vector<DevObjectDependencyList::OwnerList> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


      // periodDiff Field Functions 
      bool hasPeriodDiff() const { return this->periodDiff_ != nullptr;};
      void deletePeriodDiff() { this->periodDiff_ = nullptr;};
      inline int32_t getPeriodDiff() const { DARABONBA_PTR_GET_DEFAULT(periodDiff_, 0) };
      inline DevObjectDependencyList& setPeriodDiff(int32_t periodDiff) { DARABONBA_PTR_SET_VALUE(periodDiff_, periodDiff) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline DevObjectDependencyList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline DevObjectDependencyList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline DevObjectDependencyList& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // selfDepend Field Functions 
      bool hasSelfDepend() const { return this->selfDepend_ != nullptr;};
      void deleteSelfDepend() { this->selfDepend_ = nullptr;};
      inline bool getSelfDepend() const { DARABONBA_PTR_GET_DEFAULT(selfDepend_, false) };
      inline DevObjectDependencyList& setSelfDepend(bool selfDepend) { DARABONBA_PTR_SET_VALUE(selfDepend_, selfDepend) };


      // subBizType Field Functions 
      bool hasSubBizType() const { return this->subBizType_ != nullptr;};
      void deleteSubBizType() { this->subBizType_ = nullptr;};
      inline string getSubBizType() const { DARABONBA_PTR_GET_DEFAULT(subBizType_, "") };
      inline DevObjectDependencyList& setSubBizType(string subBizType) { DARABONBA_PTR_SET_VALUE(subBizType_, subBizType) };


      // valid Field Functions 
      bool hasValid() const { return this->valid_ != nullptr;};
      void deleteValid() { this->valid_ = nullptr;};
      inline bool getValid() const { DARABONBA_PTR_GET_DEFAULT(valid_, false) };
      inline DevObjectDependencyList& setValid(bool valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


    protected:
      shared_ptr<bool> autoParse_ {};
      shared_ptr<string> bizType_ {};
      shared_ptr<string> bizUnitId_ {};
      shared_ptr<string> bizUnitName_ {};
      shared_ptr<string> cronExpression_ {};
      shared_ptr<bool> customCronExpression_ {};
      shared_ptr<vector<string>> dependFieldList_ {};
      shared_ptr<DevObjectDependencyList::DependencyPeriod> dependencyPeriod_ {};
      shared_ptr<string> dependencyStrategy_ {};
      shared_ptr<bool> dimMidNode_ {};
      shared_ptr<vector<string>> effectFieldList_ {};
      shared_ptr<string> externalBizInfo_ {};
      shared_ptr<bool> manuallyAdd_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<string> nodeName_ {};
      shared_ptr<string> nodeOutputName_ {};
      shared_ptr<string> nodeOutputTableName_ {};
      shared_ptr<string> nodeType_ {};
      shared_ptr<vector<DevObjectDependencyList::OutputContextParamList>> outputContextParamList_ {};
      shared_ptr<vector<DevObjectDependencyList::OwnerList>> ownerList_ {};
      shared_ptr<int32_t> periodDiff_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<string> scheduleType_ {};
      shared_ptr<bool> selfDepend_ {};
      shared_ptr<string> subBizType_ {};
      shared_ptr<bool> valid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->devObjectDependencyList_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDevObjectDependencyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // devObjectDependencyList Field Functions 
    bool hasDevObjectDependencyList() const { return this->devObjectDependencyList_ != nullptr;};
    void deleteDevObjectDependencyList() { this->devObjectDependencyList_ = nullptr;};
    inline const vector<GetDevObjectDependencyResponseBody::DevObjectDependencyList> & getDevObjectDependencyList() const { DARABONBA_PTR_GET_CONST(devObjectDependencyList_, vector<GetDevObjectDependencyResponseBody::DevObjectDependencyList>) };
    inline vector<GetDevObjectDependencyResponseBody::DevObjectDependencyList> getDevObjectDependencyList() { DARABONBA_PTR_GET(devObjectDependencyList_, vector<GetDevObjectDependencyResponseBody::DevObjectDependencyList>) };
    inline GetDevObjectDependencyResponseBody& setDevObjectDependencyList(const vector<GetDevObjectDependencyResponseBody::DevObjectDependencyList> & devObjectDependencyList) { DARABONBA_PTR_SET_VALUE(devObjectDependencyList_, devObjectDependencyList) };
    inline GetDevObjectDependencyResponseBody& setDevObjectDependencyList(vector<GetDevObjectDependencyResponseBody::DevObjectDependencyList> && devObjectDependencyList) { DARABONBA_PTR_SET_RVALUE(devObjectDependencyList_, devObjectDependencyList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDevObjectDependencyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDevObjectDependencyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDevObjectDependencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDevObjectDependencyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetDevObjectDependencyResponseBody::DevObjectDependencyList>> devObjectDependencyList_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
