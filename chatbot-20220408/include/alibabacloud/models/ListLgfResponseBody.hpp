// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLGFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLGFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLgfResponseBodyLgfs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListLgfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLgfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Lgfs, lgfs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLgfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Lgfs, lgfs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLgfResponseBody() = default ;
    ListLgfResponseBody(const ListLgfResponseBody &) = default ;
    ListLgfResponseBody(ListLgfResponseBody &&) = default ;
    ListLgfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLgfResponseBody() = default ;
    ListLgfResponseBody& operator=(const ListLgfResponseBody &) = default ;
    ListLgfResponseBody& operator=(ListLgfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lgfs_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // lgfs Field Functions 
    bool hasLgfs() const { return this->lgfs_ != nullptr;};
    void deleteLgfs() { this->lgfs_ = nullptr;};
    inline const vector<ListLgfResponseBodyLgfs> & lgfs() const { DARABONBA_PTR_GET_CONST(lgfs_, vector<ListLgfResponseBodyLgfs>) };
    inline vector<ListLgfResponseBodyLgfs> lgfs() { DARABONBA_PTR_GET(lgfs_, vector<ListLgfResponseBodyLgfs>) };
    inline ListLgfResponseBody& setLgfs(const vector<ListLgfResponseBodyLgfs> & lgfs) { DARABONBA_PTR_SET_VALUE(lgfs_, lgfs) };
    inline ListLgfResponseBody& setLgfs(vector<ListLgfResponseBodyLgfs> && lgfs) { DARABONBA_PTR_SET_RVALUE(lgfs_, lgfs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLgfResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLgfResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLgfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLgfResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListLgfResponseBodyLgfs>> lgfs_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
