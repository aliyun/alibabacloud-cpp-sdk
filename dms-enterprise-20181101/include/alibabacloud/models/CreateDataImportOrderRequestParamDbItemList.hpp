// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAIMPORTORDERREQUESTPARAMDBITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAIMPORTORDERREQUESTPARAMDBITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataImportOrderRequestParamDbItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataImportOrderRequestParamDbItemList& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataImportOrderRequestParamDbItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
    };
    CreateDataImportOrderRequestParamDbItemList() = default ;
    CreateDataImportOrderRequestParamDbItemList(const CreateDataImportOrderRequestParamDbItemList &) = default ;
    CreateDataImportOrderRequestParamDbItemList(CreateDataImportOrderRequestParamDbItemList &&) = default ;
    CreateDataImportOrderRequestParamDbItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataImportOrderRequestParamDbItemList() = default ;
    CreateDataImportOrderRequestParamDbItemList& operator=(const CreateDataImportOrderRequestParamDbItemList &) = default ;
    CreateDataImportOrderRequestParamDbItemList& operator=(CreateDataImportOrderRequestParamDbItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->logic_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline CreateDataImportOrderRequestParamDbItemList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CreateDataImportOrderRequestParamDbItemList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


  protected:
    // The ID of the database. The database can be a physical database or a logical database.
    // 
    // *   To obtain the ID of a physical database, call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    // *   To obtain the ID of a logical database, call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is a physical database.
    // 
    // >  If you set this parameter to **true**, the database that you specify must be a logical database.
    // 
    // This parameter is required.
    std::shared_ptr<bool> logic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
