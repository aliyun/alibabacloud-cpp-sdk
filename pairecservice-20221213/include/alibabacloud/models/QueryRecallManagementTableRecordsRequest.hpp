// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECALLMANAGEMENTTABLERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECALLMANAGEMENTTABLERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryRecallManagementTableRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecallManagementTableRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_TO_JSON(PrimaryKeys, primaryKeys_);
      DARABONBA_PTR_TO_JSON(RecallManagementTableVersionId, recallManagementTableVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecallManagementTableRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_FROM_JSON(PrimaryKeys, primaryKeys_);
      DARABONBA_PTR_FROM_JSON(RecallManagementTableVersionId, recallManagementTableVersionId_);
    };
    QueryRecallManagementTableRecordsRequest() = default ;
    QueryRecallManagementTableRecordsRequest(const QueryRecallManagementTableRecordsRequest &) = default ;
    QueryRecallManagementTableRecordsRequest(QueryRecallManagementTableRecordsRequest &&) = default ;
    QueryRecallManagementTableRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecallManagementTableRecordsRequest() = default ;
    QueryRecallManagementTableRecordsRequest& operator=(const QueryRecallManagementTableRecordsRequest &) = default ;
    QueryRecallManagementTableRecordsRequest& operator=(QueryRecallManagementTableRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->primaryKeys_.empty() && this->recallManagementTableVersionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryRecallManagementTableRecordsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // primaryKeys Field Functions 
    bool hasPrimaryKeys() const { return !this->primaryKeys_.empty();};
    void deletePrimaryKeys() { this->primaryKeys_.clear();};
    inline Darabonba::Bytes getPrimaryKeys() const { DARABONBA_GET(primaryKeys_) };
    inline QueryRecallManagementTableRecordsRequest& setPrimaryKeys(Darabonba::Bytes primaryKeys) { DARABONBA_SET_VALUE(primaryKeys_, primaryKeys) };


    // recallManagementTableVersionId Field Functions 
    bool hasRecallManagementTableVersionId() const { return this->recallManagementTableVersionId_ != nullptr;};
    void deleteRecallManagementTableVersionId() { this->recallManagementTableVersionId_ = nullptr;};
    inline string getRecallManagementTableVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementTableVersionId_, "") };
    inline QueryRecallManagementTableRecordsRequest& setRecallManagementTableVersionId(string recallManagementTableVersionId) { DARABONBA_PTR_SET_VALUE(recallManagementTableVersionId_, recallManagementTableVersionId) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The primary keys of the records to retrieve.
    Darabonba::Bytes primaryKeys_ {};
    // The recall management table version ID. If you omit this parameter, the API uses the currently published version.
    shared_ptr<string> recallManagementTableVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
