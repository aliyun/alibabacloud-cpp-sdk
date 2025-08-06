// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODESTEMPLATEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVODESTEMPLATEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVodEsTemplateInfoResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodEsTemplateInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodEsTemplateInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataItems, dataItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodEsTemplateInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataItems, dataItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVodEsTemplateInfoResponseBody() = default ;
    ListVodEsTemplateInfoResponseBody(const ListVodEsTemplateInfoResponseBody &) = default ;
    ListVodEsTemplateInfoResponseBody(ListVodEsTemplateInfoResponseBody &&) = default ;
    ListVodEsTemplateInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodEsTemplateInfoResponseBody() = default ;
    ListVodEsTemplateInfoResponseBody& operator=(const ListVodEsTemplateInfoResponseBody &) = default ;
    ListVodEsTemplateInfoResponseBody& operator=(ListVodEsTemplateInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataItems_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // dataItems Field Functions 
    bool hasDataItems() const { return this->dataItems_ != nullptr;};
    void deleteDataItems() { this->dataItems_ = nullptr;};
    inline const vector<ListVodEsTemplateInfoResponseBodyDataItems> & dataItems() const { DARABONBA_PTR_GET_CONST(dataItems_, vector<ListVodEsTemplateInfoResponseBodyDataItems>) };
    inline vector<ListVodEsTemplateInfoResponseBodyDataItems> dataItems() { DARABONBA_PTR_GET(dataItems_, vector<ListVodEsTemplateInfoResponseBodyDataItems>) };
    inline ListVodEsTemplateInfoResponseBody& setDataItems(const vector<ListVodEsTemplateInfoResponseBodyDataItems> & dataItems) { DARABONBA_PTR_SET_VALUE(dataItems_, dataItems) };
    inline ListVodEsTemplateInfoResponseBody& setDataItems(vector<ListVodEsTemplateInfoResponseBodyDataItems> && dataItems) { DARABONBA_PTR_SET_RVALUE(dataItems_, dataItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListVodEsTemplateInfoResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVodEsTemplateInfoResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVodEsTemplateInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVodEsTemplateInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListVodEsTemplateInfoResponseBodyDataItems>> dataItems_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
