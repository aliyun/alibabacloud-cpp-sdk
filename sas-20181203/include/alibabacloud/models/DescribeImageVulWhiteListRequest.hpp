// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageVulWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageVulWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageVulWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeImageVulWhiteListRequest() = default ;
    DescribeImageVulWhiteListRequest(const DescribeImageVulWhiteListRequest &) = default ;
    DescribeImageVulWhiteListRequest(DescribeImageVulWhiteListRequest &&) = default ;
    DescribeImageVulWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageVulWhiteListRequest() = default ;
    DescribeImageVulWhiteListRequest& operator=(const DescribeImageVulWhiteListRequest &) = default ;
    DescribeImageVulWhiteListRequest& operator=(DescribeImageVulWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->source_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeImageVulWhiteListRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageVulWhiteListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageVulWhiteListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageVulWhiteListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeImageVulWhiteListRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The alias of the vulnerability that you want to query.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The source of the whitelist. Valid values:
    // - **image**
    // - **agentless**
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
