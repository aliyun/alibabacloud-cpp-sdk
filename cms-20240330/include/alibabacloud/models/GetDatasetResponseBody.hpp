// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/IndexKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetDatasetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(datasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(datasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetDatasetResponseBody() = default ;
    GetDatasetResponseBody(const GetDatasetResponseBody &) = default ;
    GetDatasetResponseBody(GetDatasetResponseBody &&) = default ;
    GetDatasetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetResponseBody() = default ;
    GetDatasetResponseBody& operator=(const GetDatasetResponseBody &) = default ;
    GetDatasetResponseBody& operator=(GetDatasetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->datasetName_ == nullptr && this->description_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->schema_ == nullptr
        && this->updateTime_ == nullptr && this->workspace_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetDatasetResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline GetDatasetResponseBody& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDatasetResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDatasetResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatasetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const map<string, IndexKey> & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, map<string, IndexKey>) };
    inline map<string, IndexKey> getSchema() { DARABONBA_PTR_GET(schema_, map<string, IndexKey>) };
    inline GetDatasetResponseBody& setSchema(const map<string, IndexKey> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline GetDatasetResponseBody& setSchema(map<string, IndexKey> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetDatasetResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetDatasetResponseBody& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> createTime_ {};
    shared_ptr<string> datasetName_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<map<string, IndexKey>> schema_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
