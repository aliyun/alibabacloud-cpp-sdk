// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVirusScanTaskResponseBodyList.hpp>
#include <alibabacloud/models/ListVirusScanTaskResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVirusScanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVirusScanTaskResponseBody() = default ;
    ListVirusScanTaskResponseBody(const ListVirusScanTaskResponseBody &) = default ;
    ListVirusScanTaskResponseBody(ListVirusScanTaskResponseBody &&) = default ;
    ListVirusScanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanTaskResponseBody() = default ;
    ListVirusScanTaskResponseBody& operator=(const ListVirusScanTaskResponseBody &) = default ;
    ListVirusScanTaskResponseBody& operator=(ListVirusScanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListVirusScanTaskResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<ListVirusScanTaskResponseBodyList>) };
    inline vector<ListVirusScanTaskResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<ListVirusScanTaskResponseBodyList>) };
    inline ListVirusScanTaskResponseBody& setList(const vector<ListVirusScanTaskResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListVirusScanTaskResponseBody& setList(vector<ListVirusScanTaskResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListVirusScanTaskResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListVirusScanTaskResponseBodyPageInfo) };
    inline ListVirusScanTaskResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListVirusScanTaskResponseBodyPageInfo) };
    inline ListVirusScanTaskResponseBody& setPageInfo(const ListVirusScanTaskResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListVirusScanTaskResponseBody& setPageInfo(ListVirusScanTaskResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirusScanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned virus scan tasks.
    std::shared_ptr<vector<ListVirusScanTaskResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListVirusScanTaskResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
