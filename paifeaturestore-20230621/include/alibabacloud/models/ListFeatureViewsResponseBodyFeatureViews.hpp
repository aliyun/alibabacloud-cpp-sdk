// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWSRESPONSEBODYFEATUREVIEWS_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWSRESPONSEBODYFEATUREVIEWS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureViewsResponseBodyFeatureViews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewsResponseBodyFeatureViews& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureEntityName, featureEntityName_);
      DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RegisterDatasourceId, registerDatasourceId_);
      DARABONBA_PTR_TO_JSON(RegisterDatasourceName, registerDatasourceName_);
      DARABONBA_PTR_TO_JSON(RegisterTable, registerTable_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WriteToFeatureDB, writeToFeatureDB_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewsResponseBodyFeatureViews& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureEntityName, featureEntityName_);
      DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RegisterDatasourceId, registerDatasourceId_);
      DARABONBA_PTR_FROM_JSON(RegisterDatasourceName, registerDatasourceName_);
      DARABONBA_PTR_FROM_JSON(RegisterTable, registerTable_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WriteToFeatureDB, writeToFeatureDB_);
    };
    ListFeatureViewsResponseBodyFeatureViews() = default ;
    ListFeatureViewsResponseBodyFeatureViews(const ListFeatureViewsResponseBodyFeatureViews &) = default ;
    ListFeatureViewsResponseBodyFeatureViews(ListFeatureViewsResponseBodyFeatureViews &&) = default ;
    ListFeatureViewsResponseBodyFeatureViews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewsResponseBodyFeatureViews() = default ;
    ListFeatureViewsResponseBodyFeatureViews& operator=(const ListFeatureViewsResponseBodyFeatureViews &) = default ;
    ListFeatureViewsResponseBodyFeatureViews& operator=(ListFeatureViewsResponseBodyFeatureViews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureEntityName_ == nullptr
        && return this->featureViewId_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr
        && return this->projectId_ == nullptr && return this->projectName_ == nullptr && return this->registerDatasourceId_ == nullptr && return this->registerDatasourceName_ == nullptr && return this->registerTable_ == nullptr
        && return this->TTL_ == nullptr && return this->type_ == nullptr && return this->writeToFeatureDB_ == nullptr; };
    // featureEntityName Field Functions 
    bool hasFeatureEntityName() const { return this->featureEntityName_ != nullptr;};
    void deleteFeatureEntityName() { this->featureEntityName_ = nullptr;};
    inline string featureEntityName() const { DARABONBA_PTR_GET_DEFAULT(featureEntityName_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setFeatureEntityName(string featureEntityName) { DARABONBA_PTR_SET_VALUE(featureEntityName_, featureEntityName) };


    // featureViewId Field Functions 
    bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
    void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
    inline string featureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // registerDatasourceId Field Functions 
    bool hasRegisterDatasourceId() const { return this->registerDatasourceId_ != nullptr;};
    void deleteRegisterDatasourceId() { this->registerDatasourceId_ = nullptr;};
    inline string registerDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(registerDatasourceId_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setRegisterDatasourceId(string registerDatasourceId) { DARABONBA_PTR_SET_VALUE(registerDatasourceId_, registerDatasourceId) };


    // registerDatasourceName Field Functions 
    bool hasRegisterDatasourceName() const { return this->registerDatasourceName_ != nullptr;};
    void deleteRegisterDatasourceName() { this->registerDatasourceName_ = nullptr;};
    inline string registerDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(registerDatasourceName_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setRegisterDatasourceName(string registerDatasourceName) { DARABONBA_PTR_SET_VALUE(registerDatasourceName_, registerDatasourceName) };


    // registerTable Field Functions 
    bool hasRegisterTable() const { return this->registerTable_ != nullptr;};
    void deleteRegisterTable() { this->registerTable_ = nullptr;};
    inline string registerTable() const { DARABONBA_PTR_GET_DEFAULT(registerTable_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setRegisterTable(string registerTable) { DARABONBA_PTR_SET_VALUE(registerTable_, registerTable) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int32_t TTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0) };
    inline ListFeatureViewsResponseBodyFeatureViews& setTTL(int32_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListFeatureViewsResponseBodyFeatureViews& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // writeToFeatureDB Field Functions 
    bool hasWriteToFeatureDB() const { return this->writeToFeatureDB_ != nullptr;};
    void deleteWriteToFeatureDB() { this->writeToFeatureDB_ = nullptr;};
    inline bool writeToFeatureDB() const { DARABONBA_PTR_GET_DEFAULT(writeToFeatureDB_, false) };
    inline ListFeatureViewsResponseBodyFeatureViews& setWriteToFeatureDB(bool writeToFeatureDB) { DARABONBA_PTR_SET_VALUE(writeToFeatureDB_, writeToFeatureDB) };


  protected:
    std::shared_ptr<string> featureEntityName_ = nullptr;
    std::shared_ptr<string> featureViewId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> registerDatasourceId_ = nullptr;
    std::shared_ptr<string> registerDatasourceName_ = nullptr;
    std::shared_ptr<string> registerTable_ = nullptr;
    std::shared_ptr<int32_t> TTL_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<bool> writeToFeatureDB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
