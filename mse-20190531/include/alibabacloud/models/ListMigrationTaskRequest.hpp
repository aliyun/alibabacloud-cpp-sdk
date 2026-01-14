// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListMigrationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(OriginInstanceName, originInstanceName_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(OriginInstanceName, originInstanceName_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
    };
    ListMigrationTaskRequest() = default ;
    ListMigrationTaskRequest(const ListMigrationTaskRequest &) = default ;
    ListMigrationTaskRequest(ListMigrationTaskRequest &&) = default ;
    ListMigrationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationTaskRequest() = default ;
    ListMigrationTaskRequest& operator=(const ListMigrationTaskRequest &) = default ;
    ListMigrationTaskRequest& operator=(ListMigrationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->originInstanceName_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestPars_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListMigrationTaskRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // originInstanceName Field Functions 
    bool hasOriginInstanceName() const { return this->originInstanceName_ != nullptr;};
    void deleteOriginInstanceName() { this->originInstanceName_ = nullptr;};
    inline string getOriginInstanceName() const { DARABONBA_PTR_GET_DEFAULT(originInstanceName_, "") };
    inline ListMigrationTaskRequest& setOriginInstanceName(string originInstanceName) { DARABONBA_PTR_SET_VALUE(originInstanceName_, originInstanceName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline ListMigrationTaskRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListMigrationTaskRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string getRequestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline ListMigrationTaskRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The name of the source instance.
    shared_ptr<string> originInstanceName_ {};
    // The number of the page to return.
    shared_ptr<int64_t> pageNum_ {};
    // The number of entries to return on each page.
    shared_ptr<int64_t> pageSize_ {};
    // The extended request parameters in the JSON format.
    shared_ptr<string> requestPars_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
