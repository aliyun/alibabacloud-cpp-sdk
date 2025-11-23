// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATACORRECTORDERREQUESTPARAMDBITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATACORRECTORDERREQUESTPARAMDBITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataCorrectOrderRequestParamDbItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataCorrectOrderRequestParamDbItemList& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataCorrectOrderRequestParamDbItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
    };
    CreateDataCorrectOrderRequestParamDbItemList() = default ;
    CreateDataCorrectOrderRequestParamDbItemList(const CreateDataCorrectOrderRequestParamDbItemList &) = default ;
    CreateDataCorrectOrderRequestParamDbItemList(CreateDataCorrectOrderRequestParamDbItemList &&) = default ;
    CreateDataCorrectOrderRequestParamDbItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataCorrectOrderRequestParamDbItemList() = default ;
    CreateDataCorrectOrderRequestParamDbItemList& operator=(const CreateDataCorrectOrderRequestParamDbItemList &) = default ;
    CreateDataCorrectOrderRequestParamDbItemList& operator=(CreateDataCorrectOrderRequestParamDbItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->instanceId_ == nullptr && return this->logic_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline CreateDataCorrectOrderRequestParamDbItemList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline CreateDataCorrectOrderRequestParamDbItemList& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CreateDataCorrectOrderRequestParamDbItemList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


  protected:
    // The database ID. The database can be a physical database or a logical database.
    // 
    // *   To query the ID of a physical database, call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    // *   To query the ID of a logical database, call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The instance ID. You can call the ListInstances or GetInstance operation to query the instance ID.
    // 
    // > 
    // > The instance change feature is supported only by ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and AnalyticDB for MySQL clusters.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is a physical database.
    std::shared_ptr<bool> logic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
