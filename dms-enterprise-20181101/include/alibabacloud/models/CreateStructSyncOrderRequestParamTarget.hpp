// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTRUCTSYNCORDERREQUESTPARAMTARGET_HPP_
#define ALIBABACLOUD_MODELS_CREATESTRUCTSYNCORDERREQUESTPARAMTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateStructSyncOrderRequestParamTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStructSyncOrderRequestParamTarget& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbSearchName, dbSearchName_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStructSyncOrderRequestParamTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbSearchName, dbSearchName_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreateStructSyncOrderRequestParamTarget() = default ;
    CreateStructSyncOrderRequestParamTarget(const CreateStructSyncOrderRequestParamTarget &) = default ;
    CreateStructSyncOrderRequestParamTarget(CreateStructSyncOrderRequestParamTarget &&) = default ;
    CreateStructSyncOrderRequestParamTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStructSyncOrderRequestParamTarget() = default ;
    CreateStructSyncOrderRequestParamTarget& operator=(const CreateStructSyncOrderRequestParamTarget &) = default ;
    CreateStructSyncOrderRequestParamTarget& operator=(CreateStructSyncOrderRequestParamTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->dbSearchName_ == nullptr && return this->logic_ == nullptr && return this->versionId_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline CreateStructSyncOrderRequestParamTarget& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbSearchName Field Functions 
    bool hasDbSearchName() const { return this->dbSearchName_ != nullptr;};
    void deleteDbSearchName() { this->dbSearchName_ = nullptr;};
    inline string dbSearchName() const { DARABONBA_PTR_GET_DEFAULT(dbSearchName_, "") };
    inline CreateStructSyncOrderRequestParamTarget& setDbSearchName(string dbSearchName) { DARABONBA_PTR_SET_VALUE(dbSearchName_, dbSearchName) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CreateStructSyncOrderRequestParamTarget& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateStructSyncOrderRequestParamTarget& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The ID of the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the ID of the database.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The name that is used to search for the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbSearchName_ = nullptr;
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is not a logical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The version number. By default, this parameter is left empty.
    // 
    // >  If you specify the schema version number of the destination database, Data Management (DMS) only compares the schemas of the two databases.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
