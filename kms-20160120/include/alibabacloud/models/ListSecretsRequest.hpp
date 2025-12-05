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
        && return this->filters_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // fetchTags Field Functions 
    bool hasFetchTags() const { return this->fetchTags_ != nullptr;};
    void deleteFetchTags() { this->fetchTags_ = nullptr;};
    inline string fetchTags() const { DARABONBA_PTR_GET_DEFAULT(fetchTags_, "") };
    inline ListSecretsRequest& setFetchTags(string fetchTags) { DARABONBA_PTR_SET_VALUE(fetchTags_, fetchTags) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline string filters() const { DARABONBA_PTR_GET_DEFAULT(filters_, "") };
    inline ListSecretsRequest& setFilters(string filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSecretsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSecretsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    std::shared_ptr<string> fetchTags_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<string> filters_ = nullptr;
    // The secret filter. The filter consists of one or more key-value pairs. You can specify one key-value pair or leave this parameter empty. If you use one tag key or tag value to filter resources, up to 4,000 resources can be queried. If you want to query more than 4,000 resources, call the [ListResourceTags](https://help.aliyun.com/document_detail/120090.html) operation.
    // 
    // *   Key
    // 
    //     *   Description: the property that you want to filter.
    // 
    //     *   Type: string.
    // 
    //     *   Valid values:
    // 
    //         *   SecretName: the secret name.
    //         *   Description: the description of the secret.
    //         *   TagKey: the tag key.
    //         *   TagValue: the tag value.
    // 
    // *   Values
    // 
    //     *   Description: the value to be included after filtering.
    // 
    //     *   Type: string.
    // 
    //     *   Length: 0 to 10.
    // 
    //     *   Valid values:
    // 
    //         *   If the Key field is set to SecretName, the value must be 1 to 192 characters in length and can contain letters, digits, and special characters `_ / + = . @ -`.
    //         *   If the Key field is set to Description, the value must be 1 to 256 characters in length.
    //         *   If the Key field is set to TagKey, the value must be 1 to 256 characters in length and can contain letters, digits, and special characters `/ _ - . + = @ :`.
    //         *   If the Key field is set to TagValue, the value must be 1 to 256 characters in length and can contain letters, numbers, and special characters `/ _ - . + = @ :`.
    // 
    // The logical relationship between values of the Values field in a key-value pair is OR. Example: `[ {"Key":"SecretName", "Values":["sec1","sec2"]}]`. In this example, the semantics are `SecretName=sec 1 OR SecretName=sec 2`.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
