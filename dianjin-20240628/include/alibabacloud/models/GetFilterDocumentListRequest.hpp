// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILTERDOCUMENTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILTERDOCUMENTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFilterDocumentListRequestAnd.hpp>
#include <alibabacloud/models/GetFilterDocumentListRequestOr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetFilterDocumentListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFilterDocumentListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(and, and_);
      DARABONBA_PTR_TO_JSON(docIdList, docIdList_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(or, or_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetFilterDocumentListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(and, and_);
      DARABONBA_PTR_FROM_JSON(docIdList, docIdList_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(or, or_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetFilterDocumentListRequest() = default ;
    GetFilterDocumentListRequest(const GetFilterDocumentListRequest &) = default ;
    GetFilterDocumentListRequest(GetFilterDocumentListRequest &&) = default ;
    GetFilterDocumentListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFilterDocumentListRequest() = default ;
    GetFilterDocumentListRequest& operator=(const GetFilterDocumentListRequest &) = default ;
    GetFilterDocumentListRequest& operator=(GetFilterDocumentListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->and_ == nullptr
        && return this->docIdList_ == nullptr && return this->libraryId_ == nullptr && return this->or_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr
        && return this->status_ == nullptr; };
    // and Field Functions 
    bool hasAnd() const { return this->and_ != nullptr;};
    void deleteAnd() { this->and_ = nullptr;};
    inline const vector<GetFilterDocumentListRequestAnd> & _and() const { DARABONBA_PTR_GET_CONST(and_, vector<GetFilterDocumentListRequestAnd>) };
    inline vector<GetFilterDocumentListRequestAnd> _and() { DARABONBA_PTR_GET(and_, vector<GetFilterDocumentListRequestAnd>) };
    inline GetFilterDocumentListRequest& setAnd(const vector<GetFilterDocumentListRequestAnd> & _and) { DARABONBA_PTR_SET_VALUE(and_, _and) };
    inline GetFilterDocumentListRequest& setAnd(vector<GetFilterDocumentListRequestAnd> && _and) { DARABONBA_PTR_SET_RVALUE(and_, _and) };


    // docIdList Field Functions 
    bool hasDocIdList() const { return this->docIdList_ != nullptr;};
    void deleteDocIdList() { this->docIdList_ = nullptr;};
    inline const vector<string> & docIdList() const { DARABONBA_PTR_GET_CONST(docIdList_, vector<string>) };
    inline vector<string> docIdList() { DARABONBA_PTR_GET(docIdList_, vector<string>) };
    inline GetFilterDocumentListRequest& setDocIdList(const vector<string> & docIdList) { DARABONBA_PTR_SET_VALUE(docIdList_, docIdList) };
    inline GetFilterDocumentListRequest& setDocIdList(vector<string> && docIdList) { DARABONBA_PTR_SET_RVALUE(docIdList_, docIdList) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline GetFilterDocumentListRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // or Field Functions 
    bool hasOr() const { return this->or_ != nullptr;};
    void deleteOr() { this->or_ = nullptr;};
    inline const vector<GetFilterDocumentListRequestOr> & _or() const { DARABONBA_PTR_GET_CONST(or_, vector<GetFilterDocumentListRequestOr>) };
    inline vector<GetFilterDocumentListRequestOr> _or() { DARABONBA_PTR_GET(or_, vector<GetFilterDocumentListRequestOr>) };
    inline GetFilterDocumentListRequest& setOr(const vector<GetFilterDocumentListRequestOr> & _or) { DARABONBA_PTR_SET_VALUE(or_, _or) };
    inline GetFilterDocumentListRequest& setOr(vector<GetFilterDocumentListRequestOr> && _or) { DARABONBA_PTR_SET_RVALUE(or_, _or) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetFilterDocumentListRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetFilterDocumentListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> status() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline GetFilterDocumentListRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline GetFilterDocumentListRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    std::shared_ptr<vector<GetFilterDocumentListRequestAnd>> and_ = nullptr;
    std::shared_ptr<vector<string>> docIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
    std::shared_ptr<vector<GetFilterDocumentListRequestOr>> or_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
