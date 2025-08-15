// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(seriesCodes, seriesCodesShrink_);
      DARABONBA_PTR_TO_JSON(storageSecretKey, storageSecretKey_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(seriesCodes, seriesCodesShrink_);
      DARABONBA_PTR_FROM_JSON(storageSecretKey, storageSecretKey_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    ListInstancesShrinkRequest() = default ;
    ListInstancesShrinkRequest(const ListInstancesShrinkRequest &) = default ;
    ListInstancesShrinkRequest(ListInstancesShrinkRequest &&) = default ;
    ListInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesShrinkRequest() = default ;
    ListInstancesShrinkRequest& operator=(const ListInstancesShrinkRequest &) = default ;
    ListInstancesShrinkRequest& operator=(ListInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceGroupId_ != nullptr && this->seriesCodesShrink_ != nullptr && this->storageSecretKey_ != nullptr
        && this->tags_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListInstancesShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstancesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstancesShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // seriesCodesShrink Field Functions 
    bool hasSeriesCodesShrink() const { return this->seriesCodesShrink_ != nullptr;};
    void deleteSeriesCodesShrink() { this->seriesCodesShrink_ = nullptr;};
    inline string seriesCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(seriesCodesShrink_, "") };
    inline ListInstancesShrinkRequest& setSeriesCodesShrink(string seriesCodesShrink) { DARABONBA_PTR_SET_VALUE(seriesCodesShrink_, seriesCodesShrink) };


    // storageSecretKey Field Functions 
    bool hasStorageSecretKey() const { return this->storageSecretKey_ != nullptr;};
    void deleteStorageSecretKey() { this->storageSecretKey_ = nullptr;};
    inline string storageSecretKey() const { DARABONBA_PTR_GET_DEFAULT(storageSecretKey_, "") };
    inline ListInstancesShrinkRequest& setStorageSecretKey(string storageSecretKey) { DARABONBA_PTR_SET_VALUE(storageSecretKey_, storageSecretKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListInstancesShrinkRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The filter condition that is used to query instances. If you do not configure this parameter, all instances are queried.
    std::shared_ptr<string> filter_ = nullptr;
    // The page number.
    // 
    // Valid values: 1 to 100000000.
    // 
    // If you set this parameter to a value smaller than 1, the system uses 1 as the value. If you set this parameter to a value greater than 100000000, the system uses 100000000 as the value.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // Value values: 10 to 200.
    // 
    // If you set this parameter to a value smaller than 10, the system uses 10 as the value. If you set this parameter to a value greater than 200, the system uses 200 as the value.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The primary edition of the instance.
    // 
    // Valid values:
    // 
    // *   standard: Standard Edition
    // *   ultimate: Enterprise Platinum Edition
    // *   professional: Professional Edition
    std::shared_ptr<string> seriesCodesShrink_ = nullptr;
    // The storage encryption key.
    std::shared_ptr<string> storageSecretKey_ = nullptr;
    // The tags that are used to filter instances.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
