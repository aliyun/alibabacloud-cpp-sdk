// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETSRESPONSEBODYPAGINGINFODATAASSETS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETSRESPONSEBODYPAGINGINFODATAASSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataAssetsResponseBodyPagingInfoDataAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAssetsResponseBodyPagingInfoDataAssets& obj) { 
      DARABONBA_PTR_TO_JSON(DataAssetTagMappings, dataAssetTagMappings_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetsResponseBodyPagingInfoDataAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(DataAssetTagMappings, dataAssetTagMappings_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListDataAssetsResponseBodyPagingInfoDataAssets() = default ;
    ListDataAssetsResponseBodyPagingInfoDataAssets(const ListDataAssetsResponseBodyPagingInfoDataAssets &) = default ;
    ListDataAssetsResponseBodyPagingInfoDataAssets(ListDataAssetsResponseBodyPagingInfoDataAssets &&) = default ;
    ListDataAssetsResponseBodyPagingInfoDataAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAssetsResponseBodyPagingInfoDataAssets() = default ;
    ListDataAssetsResponseBodyPagingInfoDataAssets& operator=(const ListDataAssetsResponseBodyPagingInfoDataAssets &) = default ;
    ListDataAssetsResponseBodyPagingInfoDataAssets& operator=(ListDataAssetsResponseBodyPagingInfoDataAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataAssetTagMappings_ == nullptr
        && return this->envType_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr && return this->type_ == nullptr; };
    // dataAssetTagMappings Field Functions 
    bool hasDataAssetTagMappings() const { return this->dataAssetTagMappings_ != nullptr;};
    void deleteDataAssetTagMappings() { this->dataAssetTagMappings_ = nullptr;};
    inline const vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings> & dataAssetTagMappings() const { DARABONBA_PTR_GET_CONST(dataAssetTagMappings_, vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings>) };
    inline vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings> dataAssetTagMappings() { DARABONBA_PTR_GET(dataAssetTagMappings_, vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings>) };
    inline ListDataAssetsResponseBodyPagingInfoDataAssets& setDataAssetTagMappings(const vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings> & dataAssetTagMappings) { DARABONBA_PTR_SET_VALUE(dataAssetTagMappings_, dataAssetTagMappings) };
    inline ListDataAssetsResponseBodyPagingInfoDataAssets& setDataAssetTagMappings(vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings> && dataAssetTagMappings) { DARABONBA_PTR_SET_RVALUE(dataAssetTagMappings_, dataAssetTagMappings) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListDataAssetsResponseBodyPagingInfoDataAssets& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListDataAssetsResponseBodyPagingInfoDataAssets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataAssetsResponseBodyPagingInfoDataAssets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataAssetsResponseBodyPagingInfoDataAssets& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDataAssetsResponseBodyPagingInfoDataAssets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The mappings between data assets and tags.
    std::shared_ptr<vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings>> dataAssetTagMappings_ = nullptr;
    // The environment of the workspace to which the data asset belongs. Valid values:
    // 
    // *   Dev: development environment
    // *   Prod: production environment
    std::shared_ptr<string> envType_ = nullptr;
    // The data asset ID.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the data asset.
    std::shared_ptr<string> name_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The type of the data asset. Valid values:
    // 
    // *   ACS::DataWorks::Table
    // *   ACS::DataWorks::Task
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
