// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECALLMANAGEMENTTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECALLMANAGEMENTTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListRecallManagementTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecallManagementTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RecallManagementTables, recallManagementTables_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecallManagementTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RecallManagementTables, recallManagementTables_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecallManagementTablesResponseBody() = default ;
    ListRecallManagementTablesResponseBody(const ListRecallManagementTablesResponseBody &) = default ;
    ListRecallManagementTablesResponseBody(ListRecallManagementTablesResponseBody &&) = default ;
    ListRecallManagementTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecallManagementTablesResponseBody() = default ;
    ListRecallManagementTablesResponseBody& operator=(const ListRecallManagementTablesResponseBody &) = default ;
    ListRecallManagementTablesResponseBody& operator=(ListRecallManagementTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecallManagementTables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecallManagementTables& obj) { 
        DARABONBA_PTR_TO_JSON(CanDelete, canDelete_);
        DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(IndexEffectiveTime, indexEffectiveTime_);
        DARABONBA_PTR_TO_JSON(IndexVersionId, indexVersionId_);
        DARABONBA_PTR_TO_JSON(MaxcomputeProjectName, maxcomputeProjectName_);
        DARABONBA_PTR_TO_JSON(MaxcomputeSchema, maxcomputeSchema_);
        DARABONBA_PTR_TO_JSON(MaxcomputeTableName, maxcomputeTableName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PartitionFields, partitionFields_);
        DARABONBA_PTR_TO_JSON(RecallManagementTableId, recallManagementTableId_);
        DARABONBA_PTR_TO_JSON(RecallType, recallType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RecallManagementTables& obj) { 
        DARABONBA_PTR_FROM_JSON(CanDelete, canDelete_);
        DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(IndexEffectiveTime, indexEffectiveTime_);
        DARABONBA_PTR_FROM_JSON(IndexVersionId, indexVersionId_);
        DARABONBA_PTR_FROM_JSON(MaxcomputeProjectName, maxcomputeProjectName_);
        DARABONBA_PTR_FROM_JSON(MaxcomputeSchema, maxcomputeSchema_);
        DARABONBA_PTR_FROM_JSON(MaxcomputeTableName, maxcomputeTableName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PartitionFields, partitionFields_);
        DARABONBA_PTR_FROM_JSON(RecallManagementTableId, recallManagementTableId_);
        DARABONBA_PTR_FROM_JSON(RecallType, recallType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RecallManagementTables() = default ;
      RecallManagementTables(const RecallManagementTables &) = default ;
      RecallManagementTables(RecallManagementTables &&) = default ;
      RecallManagementTables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecallManagementTables() = default ;
      RecallManagementTables& operator=(const RecallManagementTables &) = default ;
      RecallManagementTables& operator=(RecallManagementTables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->canDelete_ == nullptr
        && this->dataSource_ == nullptr && this->description_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->indexEffectiveTime_ == nullptr
        && this->indexVersionId_ == nullptr && this->maxcomputeProjectName_ == nullptr && this->maxcomputeSchema_ == nullptr && this->maxcomputeTableName_ == nullptr && this->name_ == nullptr
        && this->partitionFields_ == nullptr && this->recallManagementTableId_ == nullptr && this->recallType_ == nullptr && this->type_ == nullptr; };
      // canDelete Field Functions 
      bool hasCanDelete() const { return this->canDelete_ != nullptr;};
      void deleteCanDelete() { this->canDelete_ = nullptr;};
      inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
      inline RecallManagementTables& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


      // dataSource Field Functions 
      bool hasDataSource() const { return this->dataSource_ != nullptr;};
      void deleteDataSource() { this->dataSource_ = nullptr;};
      inline string getDataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
      inline RecallManagementTables& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RecallManagementTables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline RecallManagementTables& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline RecallManagementTables& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // indexEffectiveTime Field Functions 
      bool hasIndexEffectiveTime() const { return this->indexEffectiveTime_ != nullptr;};
      void deleteIndexEffectiveTime() { this->indexEffectiveTime_ = nullptr;};
      inline string getIndexEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(indexEffectiveTime_, "") };
      inline RecallManagementTables& setIndexEffectiveTime(string indexEffectiveTime) { DARABONBA_PTR_SET_VALUE(indexEffectiveTime_, indexEffectiveTime) };


      // indexVersionId Field Functions 
      bool hasIndexVersionId() const { return this->indexVersionId_ != nullptr;};
      void deleteIndexVersionId() { this->indexVersionId_ = nullptr;};
      inline string getIndexVersionId() const { DARABONBA_PTR_GET_DEFAULT(indexVersionId_, "") };
      inline RecallManagementTables& setIndexVersionId(string indexVersionId) { DARABONBA_PTR_SET_VALUE(indexVersionId_, indexVersionId) };


      // maxcomputeProjectName Field Functions 
      bool hasMaxcomputeProjectName() const { return this->maxcomputeProjectName_ != nullptr;};
      void deleteMaxcomputeProjectName() { this->maxcomputeProjectName_ = nullptr;};
      inline string getMaxcomputeProjectName() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeProjectName_, "") };
      inline RecallManagementTables& setMaxcomputeProjectName(string maxcomputeProjectName) { DARABONBA_PTR_SET_VALUE(maxcomputeProjectName_, maxcomputeProjectName) };


      // maxcomputeSchema Field Functions 
      bool hasMaxcomputeSchema() const { return this->maxcomputeSchema_ != nullptr;};
      void deleteMaxcomputeSchema() { this->maxcomputeSchema_ = nullptr;};
      inline string getMaxcomputeSchema() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeSchema_, "") };
      inline RecallManagementTables& setMaxcomputeSchema(string maxcomputeSchema) { DARABONBA_PTR_SET_VALUE(maxcomputeSchema_, maxcomputeSchema) };


      // maxcomputeTableName Field Functions 
      bool hasMaxcomputeTableName() const { return this->maxcomputeTableName_ != nullptr;};
      void deleteMaxcomputeTableName() { this->maxcomputeTableName_ = nullptr;};
      inline string getMaxcomputeTableName() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeTableName_, "") };
      inline RecallManagementTables& setMaxcomputeTableName(string maxcomputeTableName) { DARABONBA_PTR_SET_VALUE(maxcomputeTableName_, maxcomputeTableName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RecallManagementTables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // partitionFields Field Functions 
      bool hasPartitionFields() const { return this->partitionFields_ != nullptr;};
      void deletePartitionFields() { this->partitionFields_ = nullptr;};
      inline string getPartitionFields() const { DARABONBA_PTR_GET_DEFAULT(partitionFields_, "") };
      inline RecallManagementTables& setPartitionFields(string partitionFields) { DARABONBA_PTR_SET_VALUE(partitionFields_, partitionFields) };


      // recallManagementTableId Field Functions 
      bool hasRecallManagementTableId() const { return this->recallManagementTableId_ != nullptr;};
      void deleteRecallManagementTableId() { this->recallManagementTableId_ = nullptr;};
      inline string getRecallManagementTableId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementTableId_, "") };
      inline RecallManagementTables& setRecallManagementTableId(string recallManagementTableId) { DARABONBA_PTR_SET_VALUE(recallManagementTableId_, recallManagementTableId) };


      // recallType Field Functions 
      bool hasRecallType() const { return this->recallType_ != nullptr;};
      void deleteRecallType() { this->recallType_ = nullptr;};
      inline string getRecallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, "") };
      inline RecallManagementTables& setRecallType(string recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RecallManagementTables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<bool> canDelete_ {};
      shared_ptr<string> dataSource_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> indexEffectiveTime_ {};
      shared_ptr<string> indexVersionId_ {};
      shared_ptr<string> maxcomputeProjectName_ {};
      // maxcompute schema。
      shared_ptr<string> maxcomputeSchema_ {};
      shared_ptr<string> maxcomputeTableName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> partitionFields_ {};
      shared_ptr<string> recallManagementTableId_ {};
      shared_ptr<string> recallType_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->recallManagementTables_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRecallManagementTablesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRecallManagementTablesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // recallManagementTables Field Functions 
    bool hasRecallManagementTables() const { return this->recallManagementTables_ != nullptr;};
    void deleteRecallManagementTables() { this->recallManagementTables_ = nullptr;};
    inline const vector<ListRecallManagementTablesResponseBody::RecallManagementTables> & getRecallManagementTables() const { DARABONBA_PTR_GET_CONST(recallManagementTables_, vector<ListRecallManagementTablesResponseBody::RecallManagementTables>) };
    inline vector<ListRecallManagementTablesResponseBody::RecallManagementTables> getRecallManagementTables() { DARABONBA_PTR_GET(recallManagementTables_, vector<ListRecallManagementTablesResponseBody::RecallManagementTables>) };
    inline ListRecallManagementTablesResponseBody& setRecallManagementTables(const vector<ListRecallManagementTablesResponseBody::RecallManagementTables> & recallManagementTables) { DARABONBA_PTR_SET_VALUE(recallManagementTables_, recallManagementTables) };
    inline ListRecallManagementTablesResponseBody& setRecallManagementTables(vector<ListRecallManagementTablesResponseBody::RecallManagementTables> && recallManagementTables) { DARABONBA_PTR_SET_RVALUE(recallManagementTables_, recallManagementTables) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecallManagementTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRecallManagementTablesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListRecallManagementTablesResponseBody::RecallManagementTables>> recallManagementTables_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
