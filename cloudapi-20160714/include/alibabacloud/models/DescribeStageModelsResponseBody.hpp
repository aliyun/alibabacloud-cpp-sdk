// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTAGEMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTAGEMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeStageModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStageModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StageModelInfoList, stageModelInfoList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStageModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StageModelInfoList, stageModelInfoList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeStageModelsResponseBody() = default ;
    DescribeStageModelsResponseBody(const DescribeStageModelsResponseBody &) = default ;
    DescribeStageModelsResponseBody(DescribeStageModelsResponseBody &&) = default ;
    DescribeStageModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStageModelsResponseBody() = default ;
    DescribeStageModelsResponseBody& operator=(const DescribeStageModelsResponseBody &) = default ;
    DescribeStageModelsResponseBody& operator=(DescribeStageModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StageModelInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StageModelInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(StageAlias, stageAlias_);
        DARABONBA_PTR_TO_JSON(StageModelId, stageModelId_);
        DARABONBA_PTR_TO_JSON(StageName, stageName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, StageModelInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(StageAlias, stageAlias_);
        DARABONBA_PTR_FROM_JSON(StageModelId, stageModelId_);
        DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      StageModelInfoList() = default ;
      StageModelInfoList(const StageModelInfoList &) = default ;
      StageModelInfoList(StageModelInfoList &&) = default ;
      StageModelInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StageModelInfoList() = default ;
      StageModelInfoList& operator=(const StageModelInfoList &) = default ;
      StageModelInfoList& operator=(StageModelInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->modifiedTime_ == nullptr && this->stageAlias_ == nullptr && this->stageModelId_ == nullptr && this->stageName_ == nullptr
        && this->type_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline StageModelInfoList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StageModelInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline StageModelInfoList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // stageAlias Field Functions 
      bool hasStageAlias() const { return this->stageAlias_ != nullptr;};
      void deleteStageAlias() { this->stageAlias_ = nullptr;};
      inline string getStageAlias() const { DARABONBA_PTR_GET_DEFAULT(stageAlias_, "") };
      inline StageModelInfoList& setStageAlias(string stageAlias) { DARABONBA_PTR_SET_VALUE(stageAlias_, stageAlias) };


      // stageModelId Field Functions 
      bool hasStageModelId() const { return this->stageModelId_ != nullptr;};
      void deleteStageModelId() { this->stageModelId_ = nullptr;};
      inline string getStageModelId() const { DARABONBA_PTR_GET_DEFAULT(stageModelId_, "") };
      inline StageModelInfoList& setStageModelId(string stageModelId) { DARABONBA_PTR_SET_VALUE(stageModelId_, stageModelId) };


      // stageName Field Functions 
      bool hasStageName() const { return this->stageName_ != nullptr;};
      void deleteStageName() { this->stageName_ = nullptr;};
      inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
      inline StageModelInfoList& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline StageModelInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<string> stageAlias_ {};
      shared_ptr<string> stageModelId_ {};
      shared_ptr<string> stageName_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->stageModelInfoList_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeStageModelsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStageModelsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStageModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stageModelInfoList Field Functions 
    bool hasStageModelInfoList() const { return this->stageModelInfoList_ != nullptr;};
    void deleteStageModelInfoList() { this->stageModelInfoList_ = nullptr;};
    inline const vector<DescribeStageModelsResponseBody::StageModelInfoList> & getStageModelInfoList() const { DARABONBA_PTR_GET_CONST(stageModelInfoList_, vector<DescribeStageModelsResponseBody::StageModelInfoList>) };
    inline vector<DescribeStageModelsResponseBody::StageModelInfoList> getStageModelInfoList() { DARABONBA_PTR_GET(stageModelInfoList_, vector<DescribeStageModelsResponseBody::StageModelInfoList>) };
    inline DescribeStageModelsResponseBody& setStageModelInfoList(const vector<DescribeStageModelsResponseBody::StageModelInfoList> & stageModelInfoList) { DARABONBA_PTR_SET_VALUE(stageModelInfoList_, stageModelInfoList) };
    inline DescribeStageModelsResponseBody& setStageModelInfoList(vector<DescribeStageModelsResponseBody::StageModelInfoList> && stageModelInfoList) { DARABONBA_PTR_SET_RVALUE(stageModelInfoList_, stageModelInfoList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeStageModelsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeStageModelsResponseBody::StageModelInfoList>> stageModelInfoList_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
