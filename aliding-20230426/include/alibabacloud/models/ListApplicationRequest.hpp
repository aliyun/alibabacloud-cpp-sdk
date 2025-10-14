// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppFilter, appFilter_);
      DARABONBA_PTR_TO_JSON(AppNameSearchKeyword, appNameSearchKeyword_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppFilter, appFilter_);
      DARABONBA_PTR_FROM_JSON(AppNameSearchKeyword, appNameSearchKeyword_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    ListApplicationRequest() = default ;
    ListApplicationRequest(const ListApplicationRequest &) = default ;
    ListApplicationRequest(ListApplicationRequest &&) = default ;
    ListApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationRequest() = default ;
    ListApplicationRequest& operator=(const ListApplicationRequest &) = default ;
    ListApplicationRequest& operator=(ListApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appFilter_ == nullptr
        && return this->appNameSearchKeyword_ == nullptr && return this->corpId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->token_ == nullptr; };
    // appFilter Field Functions 
    bool hasAppFilter() const { return this->appFilter_ != nullptr;};
    void deleteAppFilter() { this->appFilter_ = nullptr;};
    inline string appFilter() const { DARABONBA_PTR_GET_DEFAULT(appFilter_, "") };
    inline ListApplicationRequest& setAppFilter(string appFilter) { DARABONBA_PTR_SET_VALUE(appFilter_, appFilter) };


    // appNameSearchKeyword Field Functions 
    bool hasAppNameSearchKeyword() const { return this->appNameSearchKeyword_ != nullptr;};
    void deleteAppNameSearchKeyword() { this->appNameSearchKeyword_ = nullptr;};
    inline string appNameSearchKeyword() const { DARABONBA_PTR_GET_DEFAULT(appNameSearchKeyword_, "") };
    inline ListApplicationRequest& setAppNameSearchKeyword(string appNameSearchKeyword) { DARABONBA_PTR_SET_VALUE(appNameSearchKeyword_, appNameSearchKeyword) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline ListApplicationRequest& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApplicationRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ListApplicationRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> appFilter_ = nullptr;
    std::shared_ptr<string> appNameSearchKeyword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
