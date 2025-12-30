// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSCACHEDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSCACHEDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsCacheDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsCacheDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsCacheDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeDnsCacheDomainsRequest() = default ;
    DescribeDnsCacheDomainsRequest(const DescribeDnsCacheDomainsRequest &) = default ;
    DescribeDnsCacheDomainsRequest(DescribeDnsCacheDomainsRequest &&) = default ;
    DescribeDnsCacheDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsCacheDomainsRequest() = default ;
    DescribeDnsCacheDomainsRequest& operator=(const DescribeDnsCacheDomainsRequest &) = default ;
    DescribeDnsCacheDomainsRequest& operator=(DescribeDnsCacheDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->lang_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeDnsCacheDomainsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDnsCacheDomainsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDnsCacheDomainsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDnsCacheDomainsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The keyword for searches in "%KeyWord%" mode. The value is not case-sensitive.
    shared_ptr<string> keyword_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Maximum value: **100**. Default value: **20**.
    shared_ptr<int64_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
