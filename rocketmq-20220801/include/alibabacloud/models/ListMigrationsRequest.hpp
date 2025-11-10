// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListMigrationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(migrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(migrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
    };
    ListMigrationsRequest() = default ;
    ListMigrationsRequest(const ListMigrationsRequest &) = default ;
    ListMigrationsRequest(ListMigrationsRequest &&) = default ;
    ListMigrationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationsRequest() = default ;
    ListMigrationsRequest& operator=(const ListMigrationsRequest &) = default ;
    ListMigrationsRequest& operator=(ListMigrationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->migrationType_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListMigrationsRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string migrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline ListMigrationsRequest& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMigrationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMigrationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListMigrationsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    std::shared_ptr<string> filter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> migrationType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
