// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
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
  class ListNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListNodesResponseBody() = default ;
    ListNodesResponseBody(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody(ListNodesResponseBody &&) = default ;
    ListNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBody() = default ;
    ListNodesResponseBody& operator=(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody& operator=(ListNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
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
      class NodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeList& obj) { 
          DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
          DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
          DARABONBA_PTR_TO_JSON(From, from_);
          DARABONBA_PTR_TO_JSON(HasDev, hasDev_);
          DARABONBA_PTR_TO_JSON(HasProd, hasProd_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
          DARABONBA_PTR_TO_JSON(PriorityList, priorityList_);
          DARABONBA_PTR_TO_JSON(ProjectInfo, projectInfo_);
          DARABONBA_PTR_TO_JSON(SchedulePaused, schedulePaused_);
          DARABONBA_PTR_TO_JSON(SchedulePeriodList, schedulePeriodList_);
          DARABONBA_PTR_TO_JSON(SubDetailType, subDetailType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, NodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
          DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
          DARABONBA_PTR_FROM_JSON(From, from_);
          DARABONBA_PTR_FROM_JSON(HasDev, hasDev_);
          DARABONBA_PTR_FROM_JSON(HasProd, hasProd_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
          DARABONBA_PTR_FROM_JSON(PriorityList, priorityList_);
          DARABONBA_PTR_FROM_JSON(ProjectInfo, projectInfo_);
          DARABONBA_PTR_FROM_JSON(SchedulePaused, schedulePaused_);
          DARABONBA_PTR_FROM_JSON(SchedulePeriodList, schedulePeriodList_);
          DARABONBA_PTR_FROM_JSON(SubDetailType, subDetailType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        NodeList() = default ;
        NodeList(const NodeList &) = default ;
        NodeList(NodeList &&) = default ;
        NodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeList() = default ;
        NodeList& operator=(const NodeList &) = default ;
        NodeList& operator=(NodeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProjectInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProjectInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ProjectInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          ProjectInfo() = default ;
          ProjectInfo(const ProjectInfo &) = default ;
          ProjectInfo(ProjectInfo &&) = default ;
          ProjectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProjectInfo() = default ;
          ProjectInfo& operator=(const ProjectInfo &) = default ;
          ProjectInfo& operator=(ProjectInfo &&) = default ;
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
          inline ProjectInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ProjectInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
        };

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
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->extendInfo_ == nullptr
        && this->from_ == nullptr && this->hasDev_ == nullptr && this->hasProd_ == nullptr && this->id_ == nullptr && this->lastModifiedTime_ == nullptr
        && this->modifier_ == nullptr && this->name_ == nullptr && this->ownerList_ == nullptr && this->priorityList_ == nullptr && this->projectInfo_ == nullptr
        && this->schedulePaused_ == nullptr && this->schedulePeriodList_ == nullptr && this->subDetailType_ == nullptr && this->type_ == nullptr; };
        // bizUnitName Field Functions 
        bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
        void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
        inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
        inline NodeList& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline NodeList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline const NodeList::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, NodeList::Creator) };
        inline NodeList::Creator getCreator() { DARABONBA_PTR_GET(creator_, NodeList::Creator) };
        inline NodeList& setCreator(const NodeList::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
        inline NodeList& setCreator(NodeList::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NodeList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dryRun Field Functions 
        bool hasDryRun() const { return this->dryRun_ != nullptr;};
        void deleteDryRun() { this->dryRun_ = nullptr;};
        inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
        inline NodeList& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


        // extendInfo Field Functions 
        bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
        void deleteExtendInfo() { this->extendInfo_ = nullptr;};
        inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
        inline NodeList& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


        // from Field Functions 
        bool hasFrom() const { return this->from_ != nullptr;};
        void deleteFrom() { this->from_ = nullptr;};
        inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
        inline NodeList& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


        // hasDev Field Functions 
        bool hasHasDev() const { return this->hasDev_ != nullptr;};
        void deleteHasDev() { this->hasDev_ = nullptr;};
        inline bool getHasDev() const { DARABONBA_PTR_GET_DEFAULT(hasDev_, false) };
        inline NodeList& setHasDev(bool hasDev) { DARABONBA_PTR_SET_VALUE(hasDev_, hasDev) };


        // hasProd Field Functions 
        bool hasHasProd() const { return this->hasProd_ != nullptr;};
        void deleteHasProd() { this->hasProd_ = nullptr;};
        inline bool getHasProd() const { DARABONBA_PTR_GET_DEFAULT(hasProd_, false) };
        inline NodeList& setHasProd(bool hasProd) { DARABONBA_PTR_SET_VALUE(hasProd_, hasProd) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline NodeList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastModifiedTime Field Functions 
        bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
        void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
        inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
        inline NodeList& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline const NodeList::Modifier & getModifier() const { DARABONBA_PTR_GET_CONST(modifier_, NodeList::Modifier) };
        inline NodeList::Modifier getModifier() { DARABONBA_PTR_GET(modifier_, NodeList::Modifier) };
        inline NodeList& setModifier(const NodeList::Modifier & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
        inline NodeList& setModifier(NodeList::Modifier && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NodeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerList Field Functions 
        bool hasOwnerList() const { return this->ownerList_ != nullptr;};
        void deleteOwnerList() { this->ownerList_ = nullptr;};
        inline const vector<NodeList::OwnerList> & getOwnerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<NodeList::OwnerList>) };
        inline vector<NodeList::OwnerList> getOwnerList() { DARABONBA_PTR_GET(ownerList_, vector<NodeList::OwnerList>) };
        inline NodeList& setOwnerList(const vector<NodeList::OwnerList> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
        inline NodeList& setOwnerList(vector<NodeList::OwnerList> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


        // priorityList Field Functions 
        bool hasPriorityList() const { return this->priorityList_ != nullptr;};
        void deletePriorityList() { this->priorityList_ = nullptr;};
        inline const vector<string> & getPriorityList() const { DARABONBA_PTR_GET_CONST(priorityList_, vector<string>) };
        inline vector<string> getPriorityList() { DARABONBA_PTR_GET(priorityList_, vector<string>) };
        inline NodeList& setPriorityList(const vector<string> & priorityList) { DARABONBA_PTR_SET_VALUE(priorityList_, priorityList) };
        inline NodeList& setPriorityList(vector<string> && priorityList) { DARABONBA_PTR_SET_RVALUE(priorityList_, priorityList) };


        // projectInfo Field Functions 
        bool hasProjectInfo() const { return this->projectInfo_ != nullptr;};
        void deleteProjectInfo() { this->projectInfo_ = nullptr;};
        inline const NodeList::ProjectInfo & getProjectInfo() const { DARABONBA_PTR_GET_CONST(projectInfo_, NodeList::ProjectInfo) };
        inline NodeList::ProjectInfo getProjectInfo() { DARABONBA_PTR_GET(projectInfo_, NodeList::ProjectInfo) };
        inline NodeList& setProjectInfo(const NodeList::ProjectInfo & projectInfo) { DARABONBA_PTR_SET_VALUE(projectInfo_, projectInfo) };
        inline NodeList& setProjectInfo(NodeList::ProjectInfo && projectInfo) { DARABONBA_PTR_SET_RVALUE(projectInfo_, projectInfo) };


        // schedulePaused Field Functions 
        bool hasSchedulePaused() const { return this->schedulePaused_ != nullptr;};
        void deleteSchedulePaused() { this->schedulePaused_ = nullptr;};
        inline bool getSchedulePaused() const { DARABONBA_PTR_GET_DEFAULT(schedulePaused_, false) };
        inline NodeList& setSchedulePaused(bool schedulePaused) { DARABONBA_PTR_SET_VALUE(schedulePaused_, schedulePaused) };


        // schedulePeriodList Field Functions 
        bool hasSchedulePeriodList() const { return this->schedulePeriodList_ != nullptr;};
        void deleteSchedulePeriodList() { this->schedulePeriodList_ = nullptr;};
        inline const vector<string> & getSchedulePeriodList() const { DARABONBA_PTR_GET_CONST(schedulePeriodList_, vector<string>) };
        inline vector<string> getSchedulePeriodList() { DARABONBA_PTR_GET(schedulePeriodList_, vector<string>) };
        inline NodeList& setSchedulePeriodList(const vector<string> & schedulePeriodList) { DARABONBA_PTR_SET_VALUE(schedulePeriodList_, schedulePeriodList) };
        inline NodeList& setSchedulePeriodList(vector<string> && schedulePeriodList) { DARABONBA_PTR_SET_RVALUE(schedulePeriodList_, schedulePeriodList) };


        // subDetailType Field Functions 
        bool hasSubDetailType() const { return this->subDetailType_ != nullptr;};
        void deleteSubDetailType() { this->subDetailType_ = nullptr;};
        inline string getSubDetailType() const { DARABONBA_PTR_GET_DEFAULT(subDetailType_, "") };
        inline NodeList& setSubDetailType(string subDetailType) { DARABONBA_PTR_SET_VALUE(subDetailType_, subDetailType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NodeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> bizUnitName_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<NodeList::Creator> creator_ {};
        shared_ptr<string> description_ {};
        shared_ptr<bool> dryRun_ {};
        shared_ptr<string> extendInfo_ {};
        shared_ptr<string> from_ {};
        shared_ptr<bool> hasDev_ {};
        shared_ptr<bool> hasProd_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> lastModifiedTime_ {};
        shared_ptr<NodeList::Modifier> modifier_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<NodeList::OwnerList>> ownerList_ {};
        shared_ptr<vector<string>> priorityList_ {};
        shared_ptr<NodeList::ProjectInfo> projectInfo_ {};
        shared_ptr<bool> schedulePaused_ {};
        shared_ptr<vector<string>> schedulePeriodList_ {};
        shared_ptr<string> subDetailType_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->nodeList_ == nullptr
        && this->totalCount_ == nullptr; };
      // nodeList Field Functions 
      bool hasNodeList() const { return this->nodeList_ != nullptr;};
      void deleteNodeList() { this->nodeList_ = nullptr;};
      inline const vector<PageResult::NodeList> & getNodeList() const { DARABONBA_PTR_GET_CONST(nodeList_, vector<PageResult::NodeList>) };
      inline vector<PageResult::NodeList> getNodeList() { DARABONBA_PTR_GET(nodeList_, vector<PageResult::NodeList>) };
      inline PageResult& setNodeList(const vector<PageResult::NodeList> & nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };
      inline PageResult& setNodeList(vector<PageResult::NodeList> && nodeList) { DARABONBA_PTR_SET_RVALUE(nodeList_, nodeList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::NodeList>> nodeList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListNodesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListNodesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNodesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListNodesResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListNodesResponseBody::PageResult) };
    inline ListNodesResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListNodesResponseBody::PageResult) };
    inline ListNodesResponseBody& setPageResult(const ListNodesResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListNodesResponseBody& setPageResult(ListNodesResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNodesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListNodesResponseBody::PageResult> pageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
