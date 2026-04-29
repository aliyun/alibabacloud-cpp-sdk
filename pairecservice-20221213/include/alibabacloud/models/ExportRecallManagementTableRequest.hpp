// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTRECALLMANAGEMENTTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTRECALLMANAGEMENTTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ExportRecallManagementTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportRecallManagementTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxcomputeProjectName, maxcomputeProjectName_);
      DARABONBA_PTR_TO_JSON(MaxcomputeSchema, maxcomputeSchema_);
      DARABONBA_PTR_TO_JSON(MaxcomputeTableName, maxcomputeTableName_);
      DARABONBA_PTR_TO_JSON(Partitions, partitions_);
    };
    friend void from_json(const Darabonba::Json& j, ExportRecallManagementTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxcomputeProjectName, maxcomputeProjectName_);
      DARABONBA_PTR_FROM_JSON(MaxcomputeSchema, maxcomputeSchema_);
      DARABONBA_PTR_FROM_JSON(MaxcomputeTableName, maxcomputeTableName_);
      DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
    };
    ExportRecallManagementTableRequest() = default ;
    ExportRecallManagementTableRequest(const ExportRecallManagementTableRequest &) = default ;
    ExportRecallManagementTableRequest(ExportRecallManagementTableRequest &&) = default ;
    ExportRecallManagementTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportRecallManagementTableRequest() = default ;
    ExportRecallManagementTableRequest& operator=(const ExportRecallManagementTableRequest &) = default ;
    ExportRecallManagementTableRequest& operator=(ExportRecallManagementTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->maxcomputeProjectName_ == nullptr && this->maxcomputeSchema_ == nullptr && this->maxcomputeTableName_ == nullptr && this->partitions_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExportRecallManagementTableRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxcomputeProjectName Field Functions 
    bool hasMaxcomputeProjectName() const { return this->maxcomputeProjectName_ != nullptr;};
    void deleteMaxcomputeProjectName() { this->maxcomputeProjectName_ = nullptr;};
    inline string getMaxcomputeProjectName() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeProjectName_, "") };
    inline ExportRecallManagementTableRequest& setMaxcomputeProjectName(string maxcomputeProjectName) { DARABONBA_PTR_SET_VALUE(maxcomputeProjectName_, maxcomputeProjectName) };


    // maxcomputeSchema Field Functions 
    bool hasMaxcomputeSchema() const { return this->maxcomputeSchema_ != nullptr;};
    void deleteMaxcomputeSchema() { this->maxcomputeSchema_ = nullptr;};
    inline string getMaxcomputeSchema() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeSchema_, "") };
    inline ExportRecallManagementTableRequest& setMaxcomputeSchema(string maxcomputeSchema) { DARABONBA_PTR_SET_VALUE(maxcomputeSchema_, maxcomputeSchema) };


    // maxcomputeTableName Field Functions 
    bool hasMaxcomputeTableName() const { return this->maxcomputeTableName_ != nullptr;};
    void deleteMaxcomputeTableName() { this->maxcomputeTableName_ = nullptr;};
    inline string getMaxcomputeTableName() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeTableName_, "") };
    inline ExportRecallManagementTableRequest& setMaxcomputeTableName(string maxcomputeTableName) { DARABONBA_PTR_SET_VALUE(maxcomputeTableName_, maxcomputeTableName) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const map<string, string> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, string>) };
    inline map<string, string> getPartitions() { DARABONBA_PTR_GET(partitions_, map<string, string>) };
    inline ExportRecallManagementTableRequest& setPartitions(const map<string, string> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline ExportRecallManagementTableRequest& setPartitions(map<string, string> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> maxcomputeProjectName_ {};
    // maxcompute schema。
    shared_ptr<string> maxcomputeSchema_ {};
    shared_ptr<string> maxcomputeTableName_ {};
    shared_ptr<map<string, string>> partitions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
