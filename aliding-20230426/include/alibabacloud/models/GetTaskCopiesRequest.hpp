// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKCOPIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKCOPIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTaskCopiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskCopiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_TO_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProcessCodes, processCodes_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskCopiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProcessCodes, processCodes_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    GetTaskCopiesRequest() = default ;
    GetTaskCopiesRequest(const GetTaskCopiesRequest &) = default ;
    GetTaskCopiesRequest(GetTaskCopiesRequest &&) = default ;
    GetTaskCopiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskCopiesRequest() = default ;
    GetTaskCopiesRequest& operator=(const GetTaskCopiesRequest &) = default ;
    GetTaskCopiesRequest& operator=(GetTaskCopiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->createFromTimeGMT_ == nullptr && this->createToTimeGMT_ == nullptr && this->keyword_ == nullptr && this->language_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->processCodes_ == nullptr && this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetTaskCopiesRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createFromTimeGMT Field Functions 
    bool hasCreateFromTimeGMT() const { return this->createFromTimeGMT_ != nullptr;};
    void deleteCreateFromTimeGMT() { this->createFromTimeGMT_ = nullptr;};
    inline int64_t getCreateFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createFromTimeGMT_, 0L) };
    inline GetTaskCopiesRequest& setCreateFromTimeGMT(int64_t createFromTimeGMT) { DARABONBA_PTR_SET_VALUE(createFromTimeGMT_, createFromTimeGMT) };


    // createToTimeGMT Field Functions 
    bool hasCreateToTimeGMT() const { return this->createToTimeGMT_ != nullptr;};
    void deleteCreateToTimeGMT() { this->createToTimeGMT_ = nullptr;};
    inline int64_t getCreateToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createToTimeGMT_, 0L) };
    inline GetTaskCopiesRequest& setCreateToTimeGMT(int64_t createToTimeGMT) { DARABONBA_PTR_SET_VALUE(createToTimeGMT_, createToTimeGMT) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetTaskCopiesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetTaskCopiesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetTaskCopiesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTaskCopiesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processCodes Field Functions 
    bool hasProcessCodes() const { return this->processCodes_ != nullptr;};
    void deleteProcessCodes() { this->processCodes_ = nullptr;};
    inline string getProcessCodes() const { DARABONBA_PTR_GET_DEFAULT(processCodes_, "") };
    inline GetTaskCopiesRequest& setProcessCodes(string processCodes) { DARABONBA_PTR_SET_VALUE(processCodes_, processCodes) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline GetTaskCopiesRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    shared_ptr<string> appType_ {};
    shared_ptr<int64_t> createFromTimeGMT_ {};
    shared_ptr<int64_t> createToTimeGMT_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> language_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> processCodes_ {};
    // This parameter is required.
    shared_ptr<string> systemToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
