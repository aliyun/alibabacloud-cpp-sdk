// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
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
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
          DARABONBA_PTR_TO_JSON(DueTime, dueTime_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(EndExecuteTime, endExecuteTime_);
          DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
          DARABONBA_PTR_TO_JSON(StartExecuteTime, startExecuteTime_);
          DARABONBA_PTR_TO_JSON(StatusList, statusList_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
          DARABONBA_PTR_FROM_JSON(DueTime, dueTime_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(EndExecuteTime, endExecuteTime_);
          DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
          DARABONBA_PTR_FROM_JSON(StartExecuteTime, startExecuteTime_);
          DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
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
        class NodeInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
            DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Creator, creator_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
            DARABONBA_PTR_TO_JSON(From, from_);
            DARABONBA_PTR_TO_JSON(HasDev, hasDev_);
            DARABONBA_PTR_TO_JSON(HasProd, hasProd_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
            DARABONBA_PTR_TO_JSON(Modifier, modifier_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
            DARABONBA_PTR_TO_JSON(PriorityList, priorityList_);
            DARABONBA_PTR_TO_JSON(ResourceGroupList, resourceGroupList_);
            DARABONBA_PTR_TO_JSON(SchedulePaused, schedulePaused_);
            DARABONBA_PTR_TO_JSON(SchedulePeriodList, schedulePeriodList_);
            DARABONBA_PTR_TO_JSON(SubDetailType, subDetailType_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Creator, creator_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
            DARABONBA_PTR_FROM_JSON(From, from_);
            DARABONBA_PTR_FROM_JSON(HasDev, hasDev_);
            DARABONBA_PTR_FROM_JSON(HasProd, hasProd_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
            DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
            DARABONBA_PTR_FROM_JSON(PriorityList, priorityList_);
            DARABONBA_PTR_FROM_JSON(ResourceGroupList, resourceGroupList_);
            DARABONBA_PTR_FROM_JSON(SchedulePaused, schedulePaused_);
            DARABONBA_PTR_FROM_JSON(SchedulePeriodList, schedulePeriodList_);
            DARABONBA_PTR_FROM_JSON(SubDetailType, subDetailType_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          NodeInfo() = default ;
          NodeInfo(const NodeInfo &) = default ;
          NodeInfo(NodeInfo &&) = default ;
          NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NodeInfo() = default ;
          NodeInfo& operator=(const NodeInfo &) = default ;
          NodeInfo& operator=(NodeInfo &&) = default ;
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

          class Modifier : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Modifier& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Modifier& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            Modifier() = default ;
            Modifier(const Modifier &) = default ;
            Modifier(Modifier &&) = default ;
            Modifier(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Modifier() = default ;
            Modifier& operator=(const Modifier &) = default ;
            Modifier& operator=(Modifier &&) = default ;
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
            inline Modifier& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Modifier& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            shared_ptr<string> id_ {};
            shared_ptr<string> name_ {};
          };

          class Creator : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Creator& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Creator& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            Creator() = default ;
            Creator(const Creator &) = default ;
            Creator(Creator &&) = default ;
            Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Creator() = default ;
            Creator& operator=(const Creator &) = default ;
            Creator& operator=(Creator &&) = default ;
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
            inline Creator& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Creator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            shared_ptr<string> id_ {};
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->bizUnitName_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->from_ == nullptr
        && this->hasDev_ == nullptr && this->hasProd_ == nullptr && this->id_ == nullptr && this->lastModifiedTime_ == nullptr && this->modifier_ == nullptr
        && this->name_ == nullptr && this->ownerList_ == nullptr && this->priorityList_ == nullptr && this->resourceGroupList_ == nullptr && this->schedulePaused_ == nullptr
        && this->schedulePeriodList_ == nullptr && this->subDetailType_ == nullptr && this->type_ == nullptr; };
          // bizUnitName Field Functions 
          bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
          void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
          inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
          inline NodeInfo& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline NodeInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // creator Field Functions 
          bool hasCreator() const { return this->creator_ != nullptr;};
          void deleteCreator() { this->creator_ = nullptr;};
          inline const NodeInfo::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, NodeInfo::Creator) };
          inline NodeInfo::Creator getCreator() { DARABONBA_PTR_GET(creator_, NodeInfo::Creator) };
          inline NodeInfo& setCreator(const NodeInfo::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
          inline NodeInfo& setCreator(NodeInfo::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline NodeInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // dryRun Field Functions 
          bool hasDryRun() const { return this->dryRun_ != nullptr;};
          void deleteDryRun() { this->dryRun_ = nullptr;};
          inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
          inline NodeInfo& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


          // from Field Functions 
          bool hasFrom() const { return this->from_ != nullptr;};
          void deleteFrom() { this->from_ = nullptr;};
          inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
          inline NodeInfo& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


          // hasDev Field Functions 
          bool hasHasDev() const { return this->hasDev_ != nullptr;};
          void deleteHasDev() { this->hasDev_ = nullptr;};
          inline bool getHasDev() const { DARABONBA_PTR_GET_DEFAULT(hasDev_, false) };
          inline NodeInfo& setHasDev(bool hasDev) { DARABONBA_PTR_SET_VALUE(hasDev_, hasDev) };


          // hasProd Field Functions 
          bool hasHasProd() const { return this->hasProd_ != nullptr;};
          void deleteHasProd() { this->hasProd_ = nullptr;};
          inline bool getHasProd() const { DARABONBA_PTR_GET_DEFAULT(hasProd_, false) };
          inline NodeInfo& setHasProd(bool hasProd) { DARABONBA_PTR_SET_VALUE(hasProd_, hasProd) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline NodeInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // lastModifiedTime Field Functions 
          bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
          void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
          inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
          inline NodeInfo& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


          // modifier Field Functions 
          bool hasModifier() const { return this->modifier_ != nullptr;};
          void deleteModifier() { this->modifier_ = nullptr;};
          inline const NodeInfo::Modifier & getModifier() const { DARABONBA_PTR_GET_CONST(modifier_, NodeInfo::Modifier) };
          inline NodeInfo::Modifier getModifier() { DARABONBA_PTR_GET(modifier_, NodeInfo::Modifier) };
          inline NodeInfo& setModifier(const NodeInfo::Modifier & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
          inline NodeInfo& setModifier(NodeInfo::Modifier && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline NodeInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // ownerList Field Functions 
          bool hasOwnerList() const { return this->ownerList_ != nullptr;};
          void deleteOwnerList() { this->ownerList_ = nullptr;};
          inline const vector<NodeInfo::OwnerList> & getOwnerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<NodeInfo::OwnerList>) };
          inline vector<NodeInfo::OwnerList> getOwnerList() { DARABONBA_PTR_GET(ownerList_, vector<NodeInfo::OwnerList>) };
          inline NodeInfo& setOwnerList(const vector<NodeInfo::OwnerList> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
          inline NodeInfo& setOwnerList(vector<NodeInfo::OwnerList> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


          // priorityList Field Functions 
          bool hasPriorityList() const { return this->priorityList_ != nullptr;};
          void deletePriorityList() { this->priorityList_ = nullptr;};
          inline const vector<string> & getPriorityList() const { DARABONBA_PTR_GET_CONST(priorityList_, vector<string>) };
          inline vector<string> getPriorityList() { DARABONBA_PTR_GET(priorityList_, vector<string>) };
          inline NodeInfo& setPriorityList(const vector<string> & priorityList) { DARABONBA_PTR_SET_VALUE(priorityList_, priorityList) };
          inline NodeInfo& setPriorityList(vector<string> && priorityList) { DARABONBA_PTR_SET_RVALUE(priorityList_, priorityList) };


          // resourceGroupList Field Functions 
          bool hasResourceGroupList() const { return this->resourceGroupList_ != nullptr;};
          void deleteResourceGroupList() { this->resourceGroupList_ = nullptr;};
          inline const vector<string> & getResourceGroupList() const { DARABONBA_PTR_GET_CONST(resourceGroupList_, vector<string>) };
          inline vector<string> getResourceGroupList() { DARABONBA_PTR_GET(resourceGroupList_, vector<string>) };
          inline NodeInfo& setResourceGroupList(const vector<string> & resourceGroupList) { DARABONBA_PTR_SET_VALUE(resourceGroupList_, resourceGroupList) };
          inline NodeInfo& setResourceGroupList(vector<string> && resourceGroupList) { DARABONBA_PTR_SET_RVALUE(resourceGroupList_, resourceGroupList) };


          // schedulePaused Field Functions 
          bool hasSchedulePaused() const { return this->schedulePaused_ != nullptr;};
          void deleteSchedulePaused() { this->schedulePaused_ = nullptr;};
          inline bool getSchedulePaused() const { DARABONBA_PTR_GET_DEFAULT(schedulePaused_, false) };
          inline NodeInfo& setSchedulePaused(bool schedulePaused) { DARABONBA_PTR_SET_VALUE(schedulePaused_, schedulePaused) };


          // schedulePeriodList Field Functions 
          bool hasSchedulePeriodList() const { return this->schedulePeriodList_ != nullptr;};
          void deleteSchedulePeriodList() { this->schedulePeriodList_ = nullptr;};
          inline const vector<string> & getSchedulePeriodList() const { DARABONBA_PTR_GET_CONST(schedulePeriodList_, vector<string>) };
          inline vector<string> getSchedulePeriodList() { DARABONBA_PTR_GET(schedulePeriodList_, vector<string>) };
          inline NodeInfo& setSchedulePeriodList(const vector<string> & schedulePeriodList) { DARABONBA_PTR_SET_VALUE(schedulePeriodList_, schedulePeriodList) };
          inline NodeInfo& setSchedulePeriodList(vector<string> && schedulePeriodList) { DARABONBA_PTR_SET_RVALUE(schedulePeriodList_, schedulePeriodList) };


          // subDetailType Field Functions 
          bool hasSubDetailType() const { return this->subDetailType_ != nullptr;};
          void deleteSubDetailType() { this->subDetailType_ = nullptr;};
          inline string getSubDetailType() const { DARABONBA_PTR_GET_DEFAULT(subDetailType_, "") };
          inline NodeInfo& setSubDetailType(string subDetailType) { DARABONBA_PTR_SET_VALUE(subDetailType_, subDetailType) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline NodeInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> bizUnitName_ {};
          shared_ptr<string> createTime_ {};
          shared_ptr<NodeInfo::Creator> creator_ {};
          shared_ptr<string> description_ {};
          shared_ptr<bool> dryRun_ {};
          shared_ptr<string> from_ {};
          shared_ptr<bool> hasDev_ {};
          shared_ptr<bool> hasProd_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> lastModifiedTime_ {};
          shared_ptr<NodeInfo::Modifier> modifier_ {};
          shared_ptr<string> name_ {};
          shared_ptr<vector<NodeInfo::OwnerList>> ownerList_ {};
          shared_ptr<vector<string>> priorityList_ {};
          shared_ptr<vector<string>> resourceGroupList_ {};
          shared_ptr<bool> schedulePaused_ {};
          shared_ptr<vector<string>> schedulePeriodList_ {};
          shared_ptr<string> subDetailType_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->dueTime_ == nullptr && this->duration_ == nullptr && this->endExecuteTime_ == nullptr && this->extendInfo_ == nullptr && this->id_ == nullptr
        && this->index_ == nullptr && this->nodeInfo_ == nullptr && this->startExecuteTime_ == nullptr && this->statusList_ == nullptr; };
        // bizDate Field Functions 
        bool hasBizDate() const { return this->bizDate_ != nullptr;};
        void deleteBizDate() { this->bizDate_ = nullptr;};
        inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
        inline Data& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


        // dueTime Field Functions 
        bool hasDueTime() const { return this->dueTime_ != nullptr;};
        void deleteDueTime() { this->dueTime_ = nullptr;};
        inline string getDueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, "") };
        inline Data& setDueTime(string dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline Data& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // endExecuteTime Field Functions 
        bool hasEndExecuteTime() const { return this->endExecuteTime_ != nullptr;};
        void deleteEndExecuteTime() { this->endExecuteTime_ = nullptr;};
        inline int64_t getEndExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(endExecuteTime_, 0L) };
        inline Data& setEndExecuteTime(int64_t endExecuteTime) { DARABONBA_PTR_SET_VALUE(endExecuteTime_, endExecuteTime) };


        // extendInfo Field Functions 
        bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
        void deleteExtendInfo() { this->extendInfo_ = nullptr;};
        inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
        inline Data& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline Data& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // nodeInfo Field Functions 
        bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
        void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
        inline const Data::NodeInfo & getNodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, Data::NodeInfo) };
        inline Data::NodeInfo getNodeInfo() { DARABONBA_PTR_GET(nodeInfo_, Data::NodeInfo) };
        inline Data& setNodeInfo(const Data::NodeInfo & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
        inline Data& setNodeInfo(Data::NodeInfo && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


        // startExecuteTime Field Functions 
        bool hasStartExecuteTime() const { return this->startExecuteTime_ != nullptr;};
        void deleteStartExecuteTime() { this->startExecuteTime_ = nullptr;};
        inline int64_t getStartExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(startExecuteTime_, 0L) };
        inline Data& setStartExecuteTime(int64_t startExecuteTime) { DARABONBA_PTR_SET_VALUE(startExecuteTime_, startExecuteTime) };


        // statusList Field Functions 
        bool hasStatusList() const { return this->statusList_ != nullptr;};
        void deleteStatusList() { this->statusList_ = nullptr;};
        inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
        inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
        inline Data& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
        inline Data& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


      protected:
        shared_ptr<string> bizDate_ {};
        shared_ptr<string> dueTime_ {};
        shared_ptr<string> duration_ {};
        shared_ptr<int64_t> endExecuteTime_ {};
        shared_ptr<string> extendInfo_ {};
        shared_ptr<string> id_ {};
        shared_ptr<int32_t> index_ {};
        shared_ptr<Data::NodeInfo> nodeInfo_ {};
        shared_ptr<int64_t> startExecuteTime_ {};
        shared_ptr<vector<string>> statusList_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<PageResult::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PageResult::Data>) };
      inline vector<PageResult::Data> getData() { DARABONBA_PTR_GET(data_, vector<PageResult::Data>) };
      inline PageResult& setData(const vector<PageResult::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline PageResult& setData(vector<PageResult::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::Data>> data_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListInstancesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListInstancesResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListInstancesResponseBody::PageResult) };
    inline ListInstancesResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListInstancesResponseBody::PageResult) };
    inline ListInstancesResponseBody& setPageResult(const ListInstancesResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListInstancesResponseBody& setPageResult(ListInstancesResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListInstancesResponseBody::PageResult> pageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
