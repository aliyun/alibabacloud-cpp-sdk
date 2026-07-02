// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListSecretsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FetchTags, fetchTags_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FetchTags, fetchTags_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListSecretsRequest() = default ;
    ListSecretsRequest(const ListSecretsRequest &) = default ;
    ListSecretsRequest(ListSecretsRequest &&) = default ;
    ListSecretsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretsRequest() = default ;
    ListSecretsRequest& operator=(const ListSecretsRequest &) = default ;
    ListSecretsRequest& operator=(ListSecretsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fetchTags_ == nullptr
        && this->filters_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // fetchTags Field Functions 
    bool hasFetchTags() const { return this->fetchTags_ != nullptr;};
    void deleteFetchTags() { this->fetchTags_ = nullptr;};
    inline string getFetchTags() const { DARABONBA_PTR_GET_DEFAULT(fetchTags_, "") };
    inline ListSecretsRequest& setFetchTags(string fetchTags) { DARABONBA_PTR_SET_VALUE(fetchTags_, fetchTags) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline string getFilters() const { DARABONBA_PTR_GET_DEFAULT(filters_, "") };
    inline ListSecretsRequest& setFilters(string filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSecretsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSecretsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Specifies whether to return resource tags for each secret. Valid values:
    // 
    // - `true`: Resource tags are returned.
    // 
    // - `false` (default): Resource tags are not returned.
    shared_ptr<string> fetchTags_ {};
    // Filters secrets based on specified conditions. The value is a list of up to 10 key-value pairs. When you filter by tag, the query returns a maximum of 4,000 resources. If more than 4,000 resources match the filter, call the [ListResourceTags](https://help.aliyun.com/document_detail/120090.html) operation.
    // 
    // - Key
    // 
    //   - Description: The filter property.
    // 
    //   - Type: String.
    // 
    // - Values
    // 
    //   - Description: The filter value.
    // 
    //   - Type: String.
    // 
    //   - You can specify up to 10 items.
    // 
    // Valid values for Key:
    // 
    // - Set `Key` to **SecretName** to filter by secret name.
    // 
    // - Set `Key` to **Description** to filter by secret description.
    // 
    // - Set `Key` to **TagKey** to filter by tag key.
    // 
    // - Set `Key` to **TagValue** to filter by tag value.
    // 
    // - Set `Key` to **DKMSInstanceId** to filter by KMS instance ID.
    // 
    // - Set Key to **SecretType** to filter by secret type. `Values` can be `Generic`, `RDS`, `Redis`, `RAMCredentials`, `ECS`, or `PolarDB`.
    // 
    // - Set `Key` to **Creator** to filter by the creator of the secret.
    // 
    // If you specify multiple values for a key, the filter applies a logical OR. For example, if you enter `[ {"Key":"SecretName", "Values":["sec1","sec2"]} ]`, this means: `(SecretName=sec1 OR SecretName=sec2)`.
    shared_ptr<string> filters_ {};
    // The page number.<br>
    // The value must be greater than 0.<br>
    // Default: 1.<br><br>
    shared_ptr<int32_t> pageNumber_ {};
    // The page size.<br>
    // The value must be between 1 and 100.<br>
    // Default: 10.<br><br>
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
