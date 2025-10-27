// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckItemResponseBodyCheckItems.hpp>
#include <alibabacloud/models/ListCheckItemResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItems, checkItems_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItems, checkItems_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckItemResponseBody() = default ;
    ListCheckItemResponseBody(const ListCheckItemResponseBody &) = default ;
    ListCheckItemResponseBody(ListCheckItemResponseBody &&) = default ;
    ListCheckItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemResponseBody() = default ;
    ListCheckItemResponseBody& operator=(const ListCheckItemResponseBody &) = default ;
    ListCheckItemResponseBody& operator=(ListCheckItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkItems_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // checkItems Field Functions 
    bool hasCheckItems() const { return this->checkItems_ != nullptr;};
    void deleteCheckItems() { this->checkItems_ = nullptr;};
    inline const vector<ListCheckItemResponseBodyCheckItems> & checkItems() const { DARABONBA_PTR_GET_CONST(checkItems_, vector<ListCheckItemResponseBodyCheckItems>) };
    inline vector<ListCheckItemResponseBodyCheckItems> checkItems() { DARABONBA_PTR_GET(checkItems_, vector<ListCheckItemResponseBodyCheckItems>) };
    inline ListCheckItemResponseBody& setCheckItems(const vector<ListCheckItemResponseBodyCheckItems> & checkItems) { DARABONBA_PTR_SET_VALUE(checkItems_, checkItems) };
    inline ListCheckItemResponseBody& setCheckItems(vector<ListCheckItemResponseBodyCheckItems> && checkItems) { DARABONBA_PTR_SET_RVALUE(checkItems_, checkItems) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckItemResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckItemResponseBodyPageInfo) };
    inline ListCheckItemResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckItemResponseBodyPageInfo) };
    inline ListCheckItemResponseBody& setPageInfo(const ListCheckItemResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckItemResponseBody& setPageInfo(ListCheckItemResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The check items.
    std::shared_ptr<vector<ListCheckItemResponseBodyCheckItems>> checkItems_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListCheckItemResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
