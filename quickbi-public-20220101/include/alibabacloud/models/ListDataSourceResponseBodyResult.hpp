// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListDataSourceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DsType, dsType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ParentDsType, parentDsType_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DsType, dsType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ParentDsType, parentDsType_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
    };
    ListDataSourceResponseBodyResult() = default ;
    ListDataSourceResponseBodyResult(const ListDataSourceResponseBodyResult &) = default ;
    ListDataSourceResponseBodyResult(ListDataSourceResponseBodyResult &&) = default ;
    ListDataSourceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceResponseBodyResult() = default ;
    ListDataSourceResponseBodyResult& operator=(const ListDataSourceResponseBodyResult &) = default ;
    ListDataSourceResponseBodyResult& operator=(ListDataSourceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && return this->creatorName_ == nullptr && return this->datasourceId_ == nullptr && return this->dsType_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->parentDsType_ == nullptr && return this->showName_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListDataSourceResponseBodyResult& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline ListDataSourceResponseBodyResult& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline string datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
    inline ListDataSourceResponseBodyResult& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string dsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline ListDataSourceResponseBodyResult& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListDataSourceResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListDataSourceResponseBodyResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // parentDsType Field Functions 
    bool hasParentDsType() const { return this->parentDsType_ != nullptr;};
    void deleteParentDsType() { this->parentDsType_ = nullptr;};
    inline string parentDsType() const { DARABONBA_PTR_GET_DEFAULT(parentDsType_, "") };
    inline ListDataSourceResponseBodyResult& setParentDsType(string parentDsType) { DARABONBA_PTR_SET_VALUE(parentDsType_, parentDsType) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListDataSourceResponseBodyResult& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


  protected:
    // Quick BI user ID of the creator.
    std::shared_ptr<string> creatorId_ = nullptr;
    // Owner\\"s nickname.
    std::shared_ptr<string> creatorName_ = nullptr;
    // Data source ID.
    std::shared_ptr<string> datasourceId_ = nullptr;
    // Data source type.
    std::shared_ptr<string> dsType_ = nullptr;
    // Creation time of the data source, in yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Primary data source type for multi-engine data sources.
    std::shared_ptr<string> parentDsType_ = nullptr;
    // Display name of the data source.
    std::shared_ptr<string> showName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
