// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCORPACCOMPLISHMENTTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCORPACCOMPLISHMENTTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetCorpAccomplishmentTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCorpAccomplishmentTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppTypes, appTypes_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_TO_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProcessCodes, processCodes_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetCorpAccomplishmentTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppTypes, appTypes_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProcessCodes, processCodes_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetCorpAccomplishmentTasksRequest() = default ;
    GetCorpAccomplishmentTasksRequest(const GetCorpAccomplishmentTasksRequest &) = default ;
    GetCorpAccomplishmentTasksRequest(GetCorpAccomplishmentTasksRequest &&) = default ;
    GetCorpAccomplishmentTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCorpAccomplishmentTasksRequest() = default ;
    GetCorpAccomplishmentTasksRequest& operator=(const GetCorpAccomplishmentTasksRequest &) = default ;
    GetCorpAccomplishmentTasksRequest& operator=(GetCorpAccomplishmentTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appTypes_ == nullptr
        && return this->corpId_ == nullptr && return this->createFromTimeGMT_ == nullptr && return this->createToTimeGMT_ == nullptr && return this->keyword_ == nullptr && return this->language_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->processCodes_ == nullptr && return this->token_ == nullptr; };
    // appTypes Field Functions 
    bool hasAppTypes() const { return this->appTypes_ != nullptr;};
    void deleteAppTypes() { this->appTypes_ = nullptr;};
    inline string appTypes() const { DARABONBA_PTR_GET_DEFAULT(appTypes_, "") };
    inline GetCorpAccomplishmentTasksRequest& setAppTypes(string appTypes) { DARABONBA_PTR_SET_VALUE(appTypes_, appTypes) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline GetCorpAccomplishmentTasksRequest& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // createFromTimeGMT Field Functions 
    bool hasCreateFromTimeGMT() const { return this->createFromTimeGMT_ != nullptr;};
    void deleteCreateFromTimeGMT() { this->createFromTimeGMT_ = nullptr;};
    inline int64_t createFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createFromTimeGMT_, 0L) };
    inline GetCorpAccomplishmentTasksRequest& setCreateFromTimeGMT(int64_t createFromTimeGMT) { DARABONBA_PTR_SET_VALUE(createFromTimeGMT_, createFromTimeGMT) };


    // createToTimeGMT Field Functions 
    bool hasCreateToTimeGMT() const { return this->createToTimeGMT_ != nullptr;};
    void deleteCreateToTimeGMT() { this->createToTimeGMT_ = nullptr;};
    inline int64_t createToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createToTimeGMT_, 0L) };
    inline GetCorpAccomplishmentTasksRequest& setCreateToTimeGMT(int64_t createToTimeGMT) { DARABONBA_PTR_SET_VALUE(createToTimeGMT_, createToTimeGMT) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetCorpAccomplishmentTasksRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetCorpAccomplishmentTasksRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetCorpAccomplishmentTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetCorpAccomplishmentTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processCodes Field Functions 
    bool hasProcessCodes() const { return this->processCodes_ != nullptr;};
    void deleteProcessCodes() { this->processCodes_ = nullptr;};
    inline string processCodes() const { DARABONBA_PTR_GET_DEFAULT(processCodes_, "") };
    inline GetCorpAccomplishmentTasksRequest& setProcessCodes(string processCodes) { DARABONBA_PTR_SET_VALUE(processCodes_, processCodes) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetCorpAccomplishmentTasksRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> appTypes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<int64_t> createFromTimeGMT_ = nullptr;
    std::shared_ptr<int64_t> createToTimeGMT_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> processCodes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
