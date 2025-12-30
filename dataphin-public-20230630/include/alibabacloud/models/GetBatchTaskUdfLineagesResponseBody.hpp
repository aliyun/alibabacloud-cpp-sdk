// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODY_HPP_
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
  class GetBatchTaskUdfLineagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskUdfLineagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskUdfLineagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBatchTaskUdfLineagesResponseBody() = default ;
    GetBatchTaskUdfLineagesResponseBody(const GetBatchTaskUdfLineagesResponseBody &) = default ;
    GetBatchTaskUdfLineagesResponseBody(GetBatchTaskUdfLineagesResponseBody &&) = default ;
    GetBatchTaskUdfLineagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskUdfLineagesResponseBody() = default ;
    GetBatchTaskUdfLineagesResponseBody& operator=(const GetBatchTaskUdfLineagesResponseBody &) = default ;
    GetBatchTaskUdfLineagesResponseBody& operator=(GetBatchTaskUdfLineagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LineageGroupList, lineageGroupList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LineageGroupList, lineageGroupList_);
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
      class LineageGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LineageGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(InputLineageList, inputLineageList_);
          DARABONBA_PTR_TO_JSON(OutputLineageList, outputLineageList_);
        };
        friend void from_json(const Darabonba::Json& j, LineageGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(InputLineageList, inputLineageList_);
          DARABONBA_PTR_FROM_JSON(OutputLineageList, outputLineageList_);
        };
        LineageGroupList() = default ;
        LineageGroupList(const LineageGroupList &) = default ;
        LineageGroupList(LineageGroupList &&) = default ;
        LineageGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LineageGroupList() = default ;
        LineageGroupList& operator=(const LineageGroupList &) = default ;
        LineageGroupList& operator=(LineageGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OutputLineageList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputLineageList& obj) { 
            DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
            DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
            DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(Env, env_);
            DARABONBA_PTR_TO_JSON(FullTable, fullTable_);
            DARABONBA_PTR_TO_JSON(Guid, guid_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
            DARABONBA_PTR_TO_JSON(SubType, subType_);
          };
          friend void from_json(const Darabonba::Json& j, OutputLineageList& obj) { 
            DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
            DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
            DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(Env, env_);
            DARABONBA_PTR_FROM_JSON(FullTable, fullTable_);
            DARABONBA_PTR_FROM_JSON(Guid, guid_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
            DARABONBA_PTR_FROM_JSON(SubType, subType_);
          };
          OutputLineageList() = default ;
          OutputLineageList(const OutputLineageList &) = default ;
          OutputLineageList(OutputLineageList &&) = default ;
          OutputLineageList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputLineageList() = default ;
          OutputLineageList& operator=(const OutputLineageList &) = default ;
          OutputLineageList& operator=(OutputLineageList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ColumnList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ColumnList& obj) { 
              DARABONBA_PTR_TO_JSON(DataType, dataType_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(PartitionKey, partitionKey_);
              DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
            };
            friend void from_json(const Darabonba::Json& j, ColumnList& obj) { 
              DARABONBA_PTR_FROM_JSON(DataType, dataType_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(PartitionKey, partitionKey_);
              DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
            };
            ColumnList() = default ;
            ColumnList(const ColumnList &) = default ;
            ColumnList(ColumnList &&) = default ;
            ColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ColumnList() = default ;
            ColumnList& operator=(const ColumnList &) = default ;
            ColumnList& operator=(ColumnList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->dataType_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->partitionKey_ == nullptr && this->primaryKey_ == nullptr; };
            // dataType Field Functions 
            bool hasDataType() const { return this->dataType_ != nullptr;};
            void deleteDataType() { this->dataType_ = nullptr;};
            inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
            inline ColumnList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline ColumnList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline ColumnList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline ColumnList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // partitionKey Field Functions 
            bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
            void deletePartitionKey() { this->partitionKey_ = nullptr;};
            inline bool getPartitionKey() const { DARABONBA_PTR_GET_DEFAULT(partitionKey_, false) };
            inline ColumnList& setPartitionKey(bool partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };


            // primaryKey Field Functions 
            bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
            void deletePrimaryKey() { this->primaryKey_ = nullptr;};
            inline bool getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
            inline ColumnList& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


          protected:
            shared_ptr<string> dataType_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> id_ {};
            shared_ptr<string> name_ {};
            shared_ptr<bool> partitionKey_ {};
            shared_ptr<bool> primaryKey_ {};
          };

          virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && this->bizUnitName_ == nullptr && this->columnList_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->env_ == nullptr
        && this->fullTable_ == nullptr && this->guid_ == nullptr && this->name_ == nullptr && this->ownerName_ == nullptr && this->ownerUserId_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->subType_ == nullptr; };
          // bizUnitId Field Functions 
          bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
          void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
          inline string getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, "") };
          inline OutputLineageList& setBizUnitId(string bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


          // bizUnitName Field Functions 
          bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
          void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
          inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
          inline OutputLineageList& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


          // columnList Field Functions 
          bool hasColumnList() const { return this->columnList_ != nullptr;};
          void deleteColumnList() { this->columnList_ = nullptr;};
          inline const vector<OutputLineageList::ColumnList> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<OutputLineageList::ColumnList>) };
          inline vector<OutputLineageList::ColumnList> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<OutputLineageList::ColumnList>) };
          inline OutputLineageList& setColumnList(const vector<OutputLineageList::ColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
          inline OutputLineageList& setColumnList(vector<OutputLineageList::ColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline OutputLineageList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline OutputLineageList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
          inline OutputLineageList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


          // fullTable Field Functions 
          bool hasFullTable() const { return this->fullTable_ != nullptr;};
          void deleteFullTable() { this->fullTable_ = nullptr;};
          inline bool getFullTable() const { DARABONBA_PTR_GET_DEFAULT(fullTable_, false) };
          inline OutputLineageList& setFullTable(bool fullTable) { DARABONBA_PTR_SET_VALUE(fullTable_, fullTable) };


          // guid Field Functions 
          bool hasGuid() const { return this->guid_ != nullptr;};
          void deleteGuid() { this->guid_ = nullptr;};
          inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
          inline OutputLineageList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline OutputLineageList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // ownerName Field Functions 
          bool hasOwnerName() const { return this->ownerName_ != nullptr;};
          void deleteOwnerName() { this->ownerName_ = nullptr;};
          inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
          inline OutputLineageList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


          // ownerUserId Field Functions 
          bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
          void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
          inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
          inline OutputLineageList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
          inline OutputLineageList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // projectName Field Functions 
          bool hasProjectName() const { return this->projectName_ != nullptr;};
          void deleteProjectName() { this->projectName_ = nullptr;};
          inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
          inline OutputLineageList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


          // subType Field Functions 
          bool hasSubType() const { return this->subType_ != nullptr;};
          void deleteSubType() { this->subType_ = nullptr;};
          inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
          inline OutputLineageList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        protected:
          shared_ptr<string> bizUnitId_ {};
          shared_ptr<string> bizUnitName_ {};
          shared_ptr<vector<OutputLineageList::ColumnList>> columnList_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> displayName_ {};
          shared_ptr<string> env_ {};
          shared_ptr<bool> fullTable_ {};
          shared_ptr<string> guid_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> ownerName_ {};
          shared_ptr<string> ownerUserId_ {};
          shared_ptr<string> projectId_ {};
          shared_ptr<string> projectName_ {};
          shared_ptr<string> subType_ {};
        };

        class InputLineageList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputLineageList& obj) { 
            DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
            DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
            DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(Env, env_);
            DARABONBA_PTR_TO_JSON(FullTable, fullTable_);
            DARABONBA_PTR_TO_JSON(Guid, guid_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
            DARABONBA_PTR_TO_JSON(SubType, subType_);
          };
          friend void from_json(const Darabonba::Json& j, InputLineageList& obj) { 
            DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
            DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
            DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(Env, env_);
            DARABONBA_PTR_FROM_JSON(FullTable, fullTable_);
            DARABONBA_PTR_FROM_JSON(Guid, guid_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
            DARABONBA_PTR_FROM_JSON(SubType, subType_);
          };
          InputLineageList() = default ;
          InputLineageList(const InputLineageList &) = default ;
          InputLineageList(InputLineageList &&) = default ;
          InputLineageList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputLineageList() = default ;
          InputLineageList& operator=(const InputLineageList &) = default ;
          InputLineageList& operator=(InputLineageList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ColumnList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ColumnList& obj) { 
              DARABONBA_PTR_TO_JSON(DataType, dataType_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(PartitionKey, partitionKey_);
              DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
            };
            friend void from_json(const Darabonba::Json& j, ColumnList& obj) { 
              DARABONBA_PTR_FROM_JSON(DataType, dataType_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(PartitionKey, partitionKey_);
              DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
            };
            ColumnList() = default ;
            ColumnList(const ColumnList &) = default ;
            ColumnList(ColumnList &&) = default ;
            ColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ColumnList() = default ;
            ColumnList& operator=(const ColumnList &) = default ;
            ColumnList& operator=(ColumnList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->dataType_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->partitionKey_ == nullptr && this->primaryKey_ == nullptr; };
            // dataType Field Functions 
            bool hasDataType() const { return this->dataType_ != nullptr;};
            void deleteDataType() { this->dataType_ = nullptr;};
            inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
            inline ColumnList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline ColumnList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline ColumnList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline ColumnList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // partitionKey Field Functions 
            bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
            void deletePartitionKey() { this->partitionKey_ = nullptr;};
            inline bool getPartitionKey() const { DARABONBA_PTR_GET_DEFAULT(partitionKey_, false) };
            inline ColumnList& setPartitionKey(bool partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };


            // primaryKey Field Functions 
            bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
            void deletePrimaryKey() { this->primaryKey_ = nullptr;};
            inline bool getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
            inline ColumnList& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


          protected:
            shared_ptr<string> dataType_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> id_ {};
            shared_ptr<string> name_ {};
            shared_ptr<bool> partitionKey_ {};
            shared_ptr<bool> primaryKey_ {};
          };

          virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && this->bizUnitName_ == nullptr && this->columnList_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->env_ == nullptr
        && this->fullTable_ == nullptr && this->guid_ == nullptr && this->name_ == nullptr && this->ownerName_ == nullptr && this->ownerUserId_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->subType_ == nullptr; };
          // bizUnitId Field Functions 
          bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
          void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
          inline string getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, "") };
          inline InputLineageList& setBizUnitId(string bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


          // bizUnitName Field Functions 
          bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
          void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
          inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
          inline InputLineageList& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


          // columnList Field Functions 
          bool hasColumnList() const { return this->columnList_ != nullptr;};
          void deleteColumnList() { this->columnList_ = nullptr;};
          inline const vector<InputLineageList::ColumnList> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<InputLineageList::ColumnList>) };
          inline vector<InputLineageList::ColumnList> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<InputLineageList::ColumnList>) };
          inline InputLineageList& setColumnList(const vector<InputLineageList::ColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
          inline InputLineageList& setColumnList(vector<InputLineageList::ColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline InputLineageList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline InputLineageList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
          inline InputLineageList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


          // fullTable Field Functions 
          bool hasFullTable() const { return this->fullTable_ != nullptr;};
          void deleteFullTable() { this->fullTable_ = nullptr;};
          inline bool getFullTable() const { DARABONBA_PTR_GET_DEFAULT(fullTable_, false) };
          inline InputLineageList& setFullTable(bool fullTable) { DARABONBA_PTR_SET_VALUE(fullTable_, fullTable) };


          // guid Field Functions 
          bool hasGuid() const { return this->guid_ != nullptr;};
          void deleteGuid() { this->guid_ = nullptr;};
          inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
          inline InputLineageList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline InputLineageList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // ownerName Field Functions 
          bool hasOwnerName() const { return this->ownerName_ != nullptr;};
          void deleteOwnerName() { this->ownerName_ = nullptr;};
          inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
          inline InputLineageList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


          // ownerUserId Field Functions 
          bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
          void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
          inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
          inline InputLineageList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
          inline InputLineageList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // projectName Field Functions 
          bool hasProjectName() const { return this->projectName_ != nullptr;};
          void deleteProjectName() { this->projectName_ = nullptr;};
          inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
          inline InputLineageList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


          // subType Field Functions 
          bool hasSubType() const { return this->subType_ != nullptr;};
          void deleteSubType() { this->subType_ = nullptr;};
          inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
          inline InputLineageList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        protected:
          shared_ptr<string> bizUnitId_ {};
          shared_ptr<string> bizUnitName_ {};
          shared_ptr<vector<InputLineageList::ColumnList>> columnList_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> displayName_ {};
          shared_ptr<string> env_ {};
          shared_ptr<bool> fullTable_ {};
          shared_ptr<string> guid_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> ownerName_ {};
          shared_ptr<string> ownerUserId_ {};
          shared_ptr<string> projectId_ {};
          shared_ptr<string> projectName_ {};
          shared_ptr<string> subType_ {};
        };

        virtual bool empty() const override { return this->inputLineageList_ == nullptr
        && this->outputLineageList_ == nullptr; };
        // inputLineageList Field Functions 
        bool hasInputLineageList() const { return this->inputLineageList_ != nullptr;};
        void deleteInputLineageList() { this->inputLineageList_ = nullptr;};
        inline const vector<LineageGroupList::InputLineageList> & getInputLineageList() const { DARABONBA_PTR_GET_CONST(inputLineageList_, vector<LineageGroupList::InputLineageList>) };
        inline vector<LineageGroupList::InputLineageList> getInputLineageList() { DARABONBA_PTR_GET(inputLineageList_, vector<LineageGroupList::InputLineageList>) };
        inline LineageGroupList& setInputLineageList(const vector<LineageGroupList::InputLineageList> & inputLineageList) { DARABONBA_PTR_SET_VALUE(inputLineageList_, inputLineageList) };
        inline LineageGroupList& setInputLineageList(vector<LineageGroupList::InputLineageList> && inputLineageList) { DARABONBA_PTR_SET_RVALUE(inputLineageList_, inputLineageList) };


        // outputLineageList Field Functions 
        bool hasOutputLineageList() const { return this->outputLineageList_ != nullptr;};
        void deleteOutputLineageList() { this->outputLineageList_ = nullptr;};
        inline const vector<LineageGroupList::OutputLineageList> & getOutputLineageList() const { DARABONBA_PTR_GET_CONST(outputLineageList_, vector<LineageGroupList::OutputLineageList>) };
        inline vector<LineageGroupList::OutputLineageList> getOutputLineageList() { DARABONBA_PTR_GET(outputLineageList_, vector<LineageGroupList::OutputLineageList>) };
        inline LineageGroupList& setOutputLineageList(const vector<LineageGroupList::OutputLineageList> & outputLineageList) { DARABONBA_PTR_SET_VALUE(outputLineageList_, outputLineageList) };
        inline LineageGroupList& setOutputLineageList(vector<LineageGroupList::OutputLineageList> && outputLineageList) { DARABONBA_PTR_SET_RVALUE(outputLineageList_, outputLineageList) };


      protected:
        shared_ptr<vector<LineageGroupList::InputLineageList>> inputLineageList_ {};
        shared_ptr<vector<LineageGroupList::OutputLineageList>> outputLineageList_ {};
      };

      virtual bool empty() const override { return this->lineageGroupList_ == nullptr; };
      // lineageGroupList Field Functions 
      bool hasLineageGroupList() const { return this->lineageGroupList_ != nullptr;};
      void deleteLineageGroupList() { this->lineageGroupList_ = nullptr;};
      inline const vector<Data::LineageGroupList> & getLineageGroupList() const { DARABONBA_PTR_GET_CONST(lineageGroupList_, vector<Data::LineageGroupList>) };
      inline vector<Data::LineageGroupList> getLineageGroupList() { DARABONBA_PTR_GET(lineageGroupList_, vector<Data::LineageGroupList>) };
      inline Data& setLineageGroupList(const vector<Data::LineageGroupList> & lineageGroupList) { DARABONBA_PTR_SET_VALUE(lineageGroupList_, lineageGroupList) };
      inline Data& setLineageGroupList(vector<Data::LineageGroupList> && lineageGroupList) { DARABONBA_PTR_SET_RVALUE(lineageGroupList_, lineageGroupList) };


    protected:
      shared_ptr<vector<Data::LineageGroupList>> lineageGroupList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBatchTaskUdfLineagesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBatchTaskUdfLineagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBatchTaskUdfLineagesResponseBody::Data) };
    inline GetBatchTaskUdfLineagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBatchTaskUdfLineagesResponseBody::Data) };
    inline GetBatchTaskUdfLineagesResponseBody& setData(const GetBatchTaskUdfLineagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBatchTaskUdfLineagesResponseBody& setData(GetBatchTaskUdfLineagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBatchTaskUdfLineagesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBatchTaskUdfLineagesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBatchTaskUdfLineagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBatchTaskUdfLineagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetBatchTaskUdfLineagesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
