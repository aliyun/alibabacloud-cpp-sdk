// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMMAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMmAppResponseBodyAppInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListMmAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMmAppResponseBody() = default ;
    ListMmAppResponseBody(const ListMmAppResponseBody &) = default ;
    ListMmAppResponseBody(ListMmAppResponseBody &&) = default ;
    ListMmAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmAppResponseBody() = default ;
    ListMmAppResponseBody& operator=(const ListMmAppResponseBody &) = default ;
    ListMmAppResponseBody& operator=(ListMmAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInfoList_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // appInfoList Field Functions 
    bool hasAppInfoList() const { return this->appInfoList_ != nullptr;};
    void deleteAppInfoList() { this->appInfoList_ = nullptr;};
    inline const vector<ListMmAppResponseBodyAppInfoList> & appInfoList() const { DARABONBA_PTR_GET_CONST(appInfoList_, vector<ListMmAppResponseBodyAppInfoList>) };
    inline vector<ListMmAppResponseBodyAppInfoList> appInfoList() { DARABONBA_PTR_GET(appInfoList_, vector<ListMmAppResponseBodyAppInfoList>) };
    inline ListMmAppResponseBody& setAppInfoList(const vector<ListMmAppResponseBodyAppInfoList> & appInfoList) { DARABONBA_PTR_SET_VALUE(appInfoList_, appInfoList) };
    inline ListMmAppResponseBody& setAppInfoList(vector<ListMmAppResponseBodyAppInfoList> && appInfoList) { DARABONBA_PTR_SET_RVALUE(appInfoList_, appInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMmAppResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmAppResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMmAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMmAppResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListMmAppResponseBodyAppInfoList>> appInfoList_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
