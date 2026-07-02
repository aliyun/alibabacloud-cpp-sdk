// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETVERSIONIDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETVERSIONIDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListSecretVersionIdsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretVersionIdsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeDeprecated, includeDeprecated_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretVersionIdsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeDeprecated, includeDeprecated_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
    };
    ListSecretVersionIdsRequest() = default ;
    ListSecretVersionIdsRequest(const ListSecretVersionIdsRequest &) = default ;
    ListSecretVersionIdsRequest(ListSecretVersionIdsRequest &&) = default ;
    ListSecretVersionIdsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretVersionIdsRequest() = default ;
    ListSecretVersionIdsRequest& operator=(const ListSecretVersionIdsRequest &) = default ;
    ListSecretVersionIdsRequest& operator=(ListSecretVersionIdsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeDeprecated_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->secretName_ == nullptr; };
    // includeDeprecated Field Functions 
    bool hasIncludeDeprecated() const { return this->includeDeprecated_ != nullptr;};
    void deleteIncludeDeprecated() { this->includeDeprecated_ = nullptr;};
    inline string getIncludeDeprecated() const { DARABONBA_PTR_GET_DEFAULT(includeDeprecated_, "") };
    inline ListSecretVersionIdsRequest& setIncludeDeprecated(string includeDeprecated) { DARABONBA_PTR_SET_VALUE(includeDeprecated_, includeDeprecated) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSecretVersionIdsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSecretVersionIdsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline ListSecretVersionIdsRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    // Specifies whether to include credential versions that have no version stages in the response.
    // 
    // Valid values:
    // 
    // - false (default): No
    // 
    // - true: Yes
    shared_ptr<string> includeDeprecated_ {};
    // The number of the page to return for a paged query. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page for a paged query. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The name or Alibaba Cloud Resource Name (ARN) of the credential.
    // 
    // > When you access a credential that belongs to another Alibaba Cloud account, you must specify the ARN of the credential. The ARN of a credential is in the format of `acs:kms:${region}:${account}:secret/${secret-name}`.
    // 
    // This parameter is required.
    shared_ptr<string> secretName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
