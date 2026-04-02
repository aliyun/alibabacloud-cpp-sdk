// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListDatasetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(datasets, datasets_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListDatasetsResponseBody() = default ;
    ListDatasetsResponseBody(const ListDatasetsResponseBody &) = default ;
    ListDatasetsResponseBody(ListDatasetsResponseBody &&) = default ;
    ListDatasetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsResponseBody() = default ;
    ListDatasetsResponseBody& operator=(const ListDatasetsResponseBody &) = default ;
    ListDatasetsResponseBody& operator=(ListDatasetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datasets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datasets& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(datasetName, datasetName_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Datasets& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(datasetName, datasetName_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Datasets() = default ;
      Datasets(const Datasets &) = default ;
      Datasets(Datasets &&) = default ;
      Datasets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datasets() = default ;
      Datasets& operator=(const Datasets &) = default ;
      Datasets& operator=(Datasets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->datasetName_ == nullptr && this->description_ == nullptr && this->regionId_ == nullptr && this->updateTime_ == nullptr && this->workspace_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Datasets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // datasetName Field Functions 
      bool hasDatasetName() const { return this->datasetName_ != nullptr;};
      void deleteDatasetName() { this->datasetName_ = nullptr;};
      inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
      inline Datasets& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Datasets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Datasets& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Datasets& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Datasets& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      shared_ptr<string> datasetName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> regionId_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->datasets_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<ListDatasetsResponseBody::Datasets> & getDatasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<ListDatasetsResponseBody::Datasets>) };
    inline vector<ListDatasetsResponseBody::Datasets> getDatasets() { DARABONBA_PTR_GET(datasets_, vector<ListDatasetsResponseBody::Datasets>) };
    inline ListDatasetsResponseBody& setDatasets(const vector<ListDatasetsResponseBody::Datasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline ListDatasetsResponseBody& setDatasets(vector<ListDatasetsResponseBody::Datasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDatasetsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDatasetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListDatasetsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListDatasetsResponseBody::Datasets>> datasets_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
