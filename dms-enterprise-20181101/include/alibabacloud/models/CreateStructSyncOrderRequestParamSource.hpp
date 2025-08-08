// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTRUCTSYNCORDERREQUESTPARAMSOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATESTRUCTSYNCORDERREQUESTPARAMSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateStructSyncOrderRequestParamSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStructSyncOrderRequestParamSource& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbSearchName, dbSearchName_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStructSyncOrderRequestParamSource& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbSearchName, dbSearchName_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreateStructSyncOrderRequestParamSource() = default ;
    CreateStructSyncOrderRequestParamSource(const CreateStructSyncOrderRequestParamSource &) = default ;
    CreateStructSyncOrderRequestParamSource(CreateStructSyncOrderRequestParamSource &&) = default ;
    CreateStructSyncOrderRequestParamSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStructSyncOrderRequestParamSource() = default ;
    CreateStructSyncOrderRequestParamSource& operator=(const CreateStructSyncOrderRequestParamSource &) = default ;
    CreateStructSyncOrderRequestParamSource& operator=(CreateStructSyncOrderRequestParamSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->dbSearchName_ != nullptr && this->logic_ != nullptr && this->versionId_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline CreateStructSyncOrderRequestParamSource& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbSearchName Field Functions 
    bool hasDbSearchName() const { return this->dbSearchName_ != nullptr;};
    void deleteDbSearchName() { this->dbSearchName_ = nullptr;};
    inline string dbSearchName() const { DARABONBA_PTR_GET_DEFAULT(dbSearchName_, "") };
    inline CreateStructSyncOrderRequestParamSource& setDbSearchName(string dbSearchName) { DARABONBA_PTR_SET_VALUE(dbSearchName_, dbSearchName) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CreateStructSyncOrderRequestParamSource& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateStructSyncOrderRequestParamSource& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


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
    // The version number of the schema. The default value is the latest schema version number. For more information, see [Manage schema versions](https://help.aliyun.com/document_detail/202275.html).
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
