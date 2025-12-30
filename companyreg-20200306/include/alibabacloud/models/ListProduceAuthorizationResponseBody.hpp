// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCEAUTHORIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCEAUTHORIZATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ListProduceAuthorizationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProduceAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListProduceAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    ListProduceAuthorizationResponseBody() = default ;
    ListProduceAuthorizationResponseBody(const ListProduceAuthorizationResponseBody &) = default ;
    ListProduceAuthorizationResponseBody(ListProduceAuthorizationResponseBody &&) = default ;
    ListProduceAuthorizationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProduceAuthorizationResponseBody() = default ;
    ListProduceAuthorizationResponseBody& operator=(const ListProduceAuthorizationResponseBody &) = default ;
    ListProduceAuthorizationResponseBody& operator=(ListProduceAuthorizationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
        DARABONBA_PTR_TO_JSON(AuthorizedUserName, authorizedUserName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
        DARABONBA_PTR_FROM_JSON(AuthorizedUserName, authorizedUserName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizedUserId_ == nullptr
        && this->authorizedUserName_ == nullptr; };
      // authorizedUserId Field Functions 
      bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
      void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
      inline string getAuthorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, "") };
      inline Data& setAuthorizedUserId(string authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


      // authorizedUserName Field Functions 
      bool hasAuthorizedUserName() const { return this->authorizedUserName_ != nullptr;};
      void deleteAuthorizedUserName() { this->authorizedUserName_ = nullptr;};
      inline string getAuthorizedUserName() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserName_, "") };
      inline Data& setAuthorizedUserName(string authorizedUserName) { DARABONBA_PTR_SET_VALUE(authorizedUserName_, authorizedUserName) };


    protected:
      shared_ptr<string> authorizedUserId_ {};
      shared_ptr<string> authorizedUserName_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalItemNum_ == nullptr
        && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline ListProduceAuthorizationResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListProduceAuthorizationResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListProduceAuthorizationResponseBody::Data>) };
    inline vector<ListProduceAuthorizationResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListProduceAuthorizationResponseBody::Data>) };
    inline ListProduceAuthorizationResponseBody& setData(const vector<ListProduceAuthorizationResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProduceAuthorizationResponseBody& setData(vector<ListProduceAuthorizationResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProduceAuthorizationResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProduceAuthorizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProduceAuthorizationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline ListProduceAuthorizationResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline ListProduceAuthorizationResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<vector<ListProduceAuthorizationResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
