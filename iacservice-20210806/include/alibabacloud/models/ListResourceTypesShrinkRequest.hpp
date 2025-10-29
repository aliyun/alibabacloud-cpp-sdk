// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourceTypesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subcategory, subcategory_);
      DARABONBA_PTR_TO_JSON(supportTerraformer, supportTerraformer_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_TO_JSON(terraformResourceTypes, terraformResourceTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subcategory, subcategory_);
      DARABONBA_PTR_FROM_JSON(supportTerraformer, supportTerraformer_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_FROM_JSON(terraformResourceTypes, terraformResourceTypesShrink_);
    };
    ListResourceTypesShrinkRequest() = default ;
    ListResourceTypesShrinkRequest(const ListResourceTypesShrinkRequest &) = default ;
    ListResourceTypesShrinkRequest(ListResourceTypesShrinkRequest &&) = default ;
    ListResourceTypesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesShrinkRequest() = default ;
    ListResourceTypesShrinkRequest& operator=(const ListResourceTypesShrinkRequest &) = default ;
    ListResourceTypesShrinkRequest& operator=(ListResourceTypesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->keyword_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->product_ == nullptr && return this->sort_ == nullptr
        && return this->status_ == nullptr && return this->subcategory_ == nullptr && return this->supportTerraformer_ == nullptr && return this->terraformProviderVersion_ == nullptr && return this->terraformResourceTypesShrink_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListResourceTypesShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListResourceTypesShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceTypesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceTypesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListResourceTypesShrinkRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListResourceTypesShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceTypesShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subcategory Field Functions 
    bool hasSubcategory() const { return this->subcategory_ != nullptr;};
    void deleteSubcategory() { this->subcategory_ = nullptr;};
    inline string subcategory() const { DARABONBA_PTR_GET_DEFAULT(subcategory_, "") };
    inline ListResourceTypesShrinkRequest& setSubcategory(string subcategory) { DARABONBA_PTR_SET_VALUE(subcategory_, subcategory) };


    // supportTerraformer Field Functions 
    bool hasSupportTerraformer() const { return this->supportTerraformer_ != nullptr;};
    void deleteSupportTerraformer() { this->supportTerraformer_ = nullptr;};
    inline bool supportTerraformer() const { DARABONBA_PTR_GET_DEFAULT(supportTerraformer_, false) };
    inline ListResourceTypesShrinkRequest& setSupportTerraformer(bool supportTerraformer) { DARABONBA_PTR_SET_VALUE(supportTerraformer_, supportTerraformer) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline ListResourceTypesShrinkRequest& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // terraformResourceTypesShrink Field Functions 
    bool hasTerraformResourceTypesShrink() const { return this->terraformResourceTypesShrink_ != nullptr;};
    void deleteTerraformResourceTypesShrink() { this->terraformResourceTypesShrink_ = nullptr;};
    inline string terraformResourceTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(terraformResourceTypesShrink_, "") };
    inline ListResourceTypesShrinkRequest& setTerraformResourceTypesShrink(string terraformResourceTypesShrink) { DARABONBA_PTR_SET_VALUE(terraformResourceTypesShrink_, terraformResourceTypesShrink) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subcategory_ = nullptr;
    std::shared_ptr<bool> supportTerraformer_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
    std::shared_ptr<string> terraformResourceTypesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
