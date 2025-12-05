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
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->secretName_ == nullptr; };
    // includeDeprecated Field Functions 
    bool hasIncludeDeprecated() const { return this->includeDeprecated_ != nullptr;};
    void deleteIncludeDeprecated() { this->includeDeprecated_ = nullptr;};
    inline string includeDeprecated() const { DARABONBA_PTR_GET_DEFAULT(includeDeprecated_, "") };
    inline ListSecretVersionIdsRequest& setIncludeDeprecated(string includeDeprecated) { DARABONBA_PTR_SET_VALUE(includeDeprecated_, includeDeprecated) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSecretVersionIdsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSecretVersionIdsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline ListSecretVersionIdsRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    // Specifies whether to return deprecated secret versions.
    // 
    // Valid values:
    // 
    // *   false: no
    // *   true: yes
    // 
    // Default value: false.
    std::shared_ptr<string> includeDeprecated_ = nullptr;
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
