// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONOPERATIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONOPERATIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListMigrationOperationsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationOperationsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(businessStatus, businessStatusShrink_);
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(operationStatus, operationStatusShrink_);
      DARABONBA_PTR_TO_JSON(operationType, operationType_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationOperationsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(businessStatus, businessStatusShrink_);
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(operationStatus, operationStatusShrink_);
      DARABONBA_PTR_FROM_JSON(operationType, operationType_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListMigrationOperationsShrinkRequest() = default ;
    ListMigrationOperationsShrinkRequest(const ListMigrationOperationsShrinkRequest &) = default ;
    ListMigrationOperationsShrinkRequest(ListMigrationOperationsShrinkRequest &&) = default ;
    ListMigrationOperationsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationOperationsShrinkRequest() = default ;
    ListMigrationOperationsShrinkRequest& operator=(const ListMigrationOperationsShrinkRequest &) = default ;
    ListMigrationOperationsShrinkRequest& operator=(ListMigrationOperationsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessStatusShrink_ == nullptr
        && this->filter_ == nullptr && this->instanceId_ == nullptr && this->operationStatusShrink_ == nullptr && this->operationType_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
    // businessStatusShrink Field Functions 
    bool hasBusinessStatusShrink() const { return this->businessStatusShrink_ != nullptr;};
    void deleteBusinessStatusShrink() { this->businessStatusShrink_ = nullptr;};
    inline string getBusinessStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(businessStatusShrink_, "") };
    inline ListMigrationOperationsShrinkRequest& setBusinessStatusShrink(string businessStatusShrink) { DARABONBA_PTR_SET_VALUE(businessStatusShrink_, businessStatusShrink) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListMigrationOperationsShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListMigrationOperationsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operationStatusShrink Field Functions 
    bool hasOperationStatusShrink() const { return this->operationStatusShrink_ != nullptr;};
    void deleteOperationStatusShrink() { this->operationStatusShrink_ = nullptr;};
    inline string getOperationStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(operationStatusShrink_, "") };
    inline ListMigrationOperationsShrinkRequest& setOperationStatusShrink(string operationStatusShrink) { DARABONBA_PTR_SET_VALUE(operationStatusShrink_, operationStatusShrink) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ListMigrationOperationsShrinkRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMigrationOperationsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMigrationOperationsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> businessStatusShrink_ {};
    shared_ptr<string> filter_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> operationStatusShrink_ {};
    // This parameter is required.
    shared_ptr<string> operationType_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
