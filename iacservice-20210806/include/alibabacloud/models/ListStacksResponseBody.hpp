// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListStacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(stacks, stacks_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(stacks, stacks_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListStacksResponseBody() = default ;
    ListStacksResponseBody(const ListStacksResponseBody &) = default ;
    ListStacksResponseBody(ListStacksResponseBody &&) = default ;
    ListStacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStacksResponseBody() = default ;
    ListStacksResponseBody& operator=(const ListStacksResponseBody &) = default ;
    ListStacksResponseBody& operator=(ListStacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Stacks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Stacks& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
        DARABONBA_PTR_TO_JSON(stackDescription, stackDescription_);
        DARABONBA_PTR_TO_JSON(stackId, stackId_);
        DARABONBA_PTR_TO_JSON(stackName, stackName_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Stacks& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
        DARABONBA_PTR_FROM_JSON(stackDescription, stackDescription_);
        DARABONBA_PTR_FROM_JSON(stackId, stackId_);
        DARABONBA_PTR_FROM_JSON(stackName, stackName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Stacks() = default ;
      Stacks(const Stacks &) = default ;
      Stacks(Stacks &&) = default ;
      Stacks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Stacks() = default ;
      Stacks& operator=(const Stacks &) = default ;
      Stacks& operator=(Stacks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->source_ == nullptr && this->sourcePath_ == nullptr && this->stackDescription_ == nullptr
        && this->stackId_ == nullptr && this->stackName_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Stacks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Stacks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Stacks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Stacks& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourcePath Field Functions 
      bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
      void deleteSourcePath() { this->sourcePath_ = nullptr;};
      inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
      inline Stacks& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


      // stackDescription Field Functions 
      bool hasStackDescription() const { return this->stackDescription_ != nullptr;};
      void deleteStackDescription() { this->stackDescription_ = nullptr;};
      inline string getStackDescription() const { DARABONBA_PTR_GET_DEFAULT(stackDescription_, "") };
      inline Stacks& setStackDescription(string stackDescription) { DARABONBA_PTR_SET_VALUE(stackDescription_, stackDescription) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline Stacks& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // stackName Field Functions 
      bool hasStackName() const { return this->stackName_ != nullptr;};
      void deleteStackName() { this->stackName_ = nullptr;};
      inline string getStackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
      inline Stacks& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Stacks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The creation time in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format.
      shared_ptr<string> createTime_ {};
      // The description of the stack.
      shared_ptr<string> description_ {};
      // The stack name.
      shared_ptr<string> name_ {};
      // The creation source. Valid values:
      // - OSS: a template stored in Object Storage Service (OSS).
      // - IAC_SERVICE_MODULE: a template created in the automation service console.
      shared_ptr<string> source_ {};
      // The path value of the configuration source. The value cannot exceed 1000 characters.
      // - If the source is OSS, the value is in the format oss::<file link> and must be a zip file. Example: oss::https://terraform-pipeline.oss-eu-central-1.aliyuncs.com/code.zip
      // - If the source is IAC_SERVICE_MODULE, the value is a template ID. Example: mod-xxxxx
      shared_ptr<string> sourcePath_ {};
      // The description of the stack.
      shared_ptr<string> stackDescription_ {};
      // The stack ID, which is the unique identifier generated after the stack is created.
      shared_ptr<string> stackId_ {};
      // The stack name (deprecated). Use name instead.
      shared_ptr<string> stackName_ {};
      // The stack status.
      // | Name | Description |
      // |------|------|
      // | Creating | Being created. |
      // | Created | Created. |
      // | Waiting | Waiting for deployment. |
      // | Deploying | Being deployed. |
      // | Deployed | Deployed. |
      // | Errored | Deployment failed. |
      // | Deleting | Being deleted. |
      // | Deleted | Deleted. |
      // | DeleteFailed | Deletion failed. |
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->stacks_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListStacksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListStacksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stacks Field Functions 
    bool hasStacks() const { return this->stacks_ != nullptr;};
    void deleteStacks() { this->stacks_ = nullptr;};
    inline const vector<ListStacksResponseBody::Stacks> & getStacks() const { DARABONBA_PTR_GET_CONST(stacks_, vector<ListStacksResponseBody::Stacks>) };
    inline vector<ListStacksResponseBody::Stacks> getStacks() { DARABONBA_PTR_GET(stacks_, vector<ListStacksResponseBody::Stacks>) };
    inline ListStacksResponseBody& setStacks(const vector<ListStacksResponseBody::Stacks> & stacks) { DARABONBA_PTR_SET_VALUE(stacks_, stacks) };
    inline ListStacksResponseBody& setStacks(vector<ListStacksResponseBody::Stacks> && stacks) { DARABONBA_PTR_SET_RVALUE(stacks_, stacks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStacksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of results returned.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. This parameter is empty if no more pages are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of stacks.
    shared_ptr<vector<ListStacksResponseBody::Stacks>> stacks_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
