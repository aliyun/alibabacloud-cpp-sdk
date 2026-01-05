// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGDATAASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGDATAASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UnTagDataAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnTagDataAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataAssetIds, dataAssetIds_);
      DARABONBA_PTR_TO_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UnTagDataAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataAssetIds, dataAssetIds_);
      DARABONBA_PTR_FROM_JSON(DataAssetType, dataAssetType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    UnTagDataAssetsRequest() = default ;
    UnTagDataAssetsRequest(const UnTagDataAssetsRequest &) = default ;
    UnTagDataAssetsRequest(UnTagDataAssetsRequest &&) = default ;
    UnTagDataAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnTagDataAssetsRequest() = default ;
    UnTagDataAssetsRequest& operator=(const UnTagDataAssetsRequest &) = default ;
    UnTagDataAssetsRequest& operator=(UnTagDataAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->dataAssetIds_ == nullptr
        && this->dataAssetType_ == nullptr && this->envType_ == nullptr && this->projectId_ == nullptr && this->tags_ == nullptr; };
    // dataAssetIds Field Functions 
    bool hasDataAssetIds() const { return this->dataAssetIds_ != nullptr;};
    void deleteDataAssetIds() { this->dataAssetIds_ = nullptr;};
    inline const vector<string> & getDataAssetIds() const { DARABONBA_PTR_GET_CONST(dataAssetIds_, vector<string>) };
    inline vector<string> getDataAssetIds() { DARABONBA_PTR_GET(dataAssetIds_, vector<string>) };
    inline UnTagDataAssetsRequest& setDataAssetIds(const vector<string> & dataAssetIds) { DARABONBA_PTR_SET_VALUE(dataAssetIds_, dataAssetIds) };
    inline UnTagDataAssetsRequest& setDataAssetIds(vector<string> && dataAssetIds) { DARABONBA_PTR_SET_RVALUE(dataAssetIds_, dataAssetIds) };


    // dataAssetType Field Functions 
    bool hasDataAssetType() const { return this->dataAssetType_ != nullptr;};
    void deleteDataAssetType() { this->dataAssetType_ = nullptr;};
    inline string getDataAssetType() const { DARABONBA_PTR_GET_DEFAULT(dataAssetType_, "") };
    inline UnTagDataAssetsRequest& setDataAssetType(string dataAssetType) { DARABONBA_PTR_SET_VALUE(dataAssetType_, dataAssetType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UnTagDataAssetsRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UnTagDataAssetsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UnTagDataAssetsRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UnTagDataAssetsRequest::Tags>) };
    inline vector<UnTagDataAssetsRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UnTagDataAssetsRequest::Tags>) };
    inline UnTagDataAssetsRequest& setTags(const vector<UnTagDataAssetsRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UnTagDataAssetsRequest& setTags(vector<UnTagDataAssetsRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The data asset IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> dataAssetIds_ {};
    // The type of the data asset. Valid values:
    // 
    // *   ACS::DataWorks::Table
    // *   ACS::DataWorks::Task
    // 
    // This parameter is required.
    shared_ptr<string> dataAssetType_ {};
    // The environment of the workspace to which the data asset belongs. Valid values:
    // 
    // *   Dev: development environment
    // *   Prod: production environment
    shared_ptr<string> envType_ {};
    // The DataWorks workspace ID.
    shared_ptr<int64_t> projectId_ {};
    // The tags that you want to remove.
    // 
    // This parameter is required.
    shared_ptr<vector<UnTagDataAssetsRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
