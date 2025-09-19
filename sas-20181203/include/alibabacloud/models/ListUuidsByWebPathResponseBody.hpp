// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUUIDSBYWEBPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUUIDSBYWEBPATHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUuidsByWebPathResponseBodyList.hpp>
#include <alibabacloud/models/ListUuidsByWebPathResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUuidsByWebPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUuidsByWebPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUuidsByWebPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUuidsByWebPathResponseBody() = default ;
    ListUuidsByWebPathResponseBody(const ListUuidsByWebPathResponseBody &) = default ;
    ListUuidsByWebPathResponseBody(ListUuidsByWebPathResponseBody &&) = default ;
    ListUuidsByWebPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUuidsByWebPathResponseBody() = default ;
    ListUuidsByWebPathResponseBody& operator=(const ListUuidsByWebPathResponseBody &) = default ;
    ListUuidsByWebPathResponseBody& operator=(ListUuidsByWebPathResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListUuidsByWebPathResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<ListUuidsByWebPathResponseBodyList>) };
    inline vector<ListUuidsByWebPathResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<ListUuidsByWebPathResponseBodyList>) };
    inline ListUuidsByWebPathResponseBody& setList(const vector<ListUuidsByWebPathResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListUuidsByWebPathResponseBody& setList(vector<ListUuidsByWebPathResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListUuidsByWebPathResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListUuidsByWebPathResponseBodyPageInfo) };
    inline ListUuidsByWebPathResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListUuidsByWebPathResponseBodyPageInfo) };
    inline ListUuidsByWebPathResponseBody& setPageInfo(const ListUuidsByWebPathResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListUuidsByWebPathResponseBody& setPageInfo(ListUuidsByWebPathResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUuidsByWebPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the protected assets.
    std::shared_ptr<vector<ListUuidsByWebPathResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListUuidsByWebPathResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
