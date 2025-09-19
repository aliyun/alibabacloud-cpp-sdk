// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBaselineCheckWhiteRecordResponseBodyList.hpp>
#include <alibabacloud/models/ListBaselineCheckWhiteRecordResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListBaselineCheckWhiteRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineCheckWhiteRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineCheckWhiteRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBaselineCheckWhiteRecordResponseBody() = default ;
    ListBaselineCheckWhiteRecordResponseBody(const ListBaselineCheckWhiteRecordResponseBody &) = default ;
    ListBaselineCheckWhiteRecordResponseBody(ListBaselineCheckWhiteRecordResponseBody &&) = default ;
    ListBaselineCheckWhiteRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineCheckWhiteRecordResponseBody() = default ;
    ListBaselineCheckWhiteRecordResponseBody& operator=(const ListBaselineCheckWhiteRecordResponseBody &) = default ;
    ListBaselineCheckWhiteRecordResponseBody& operator=(ListBaselineCheckWhiteRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListBaselineCheckWhiteRecordResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<ListBaselineCheckWhiteRecordResponseBodyList>) };
    inline vector<ListBaselineCheckWhiteRecordResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<ListBaselineCheckWhiteRecordResponseBodyList>) };
    inline ListBaselineCheckWhiteRecordResponseBody& setList(const vector<ListBaselineCheckWhiteRecordResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListBaselineCheckWhiteRecordResponseBody& setList(vector<ListBaselineCheckWhiteRecordResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListBaselineCheckWhiteRecordResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListBaselineCheckWhiteRecordResponseBodyPageInfo) };
    inline ListBaselineCheckWhiteRecordResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListBaselineCheckWhiteRecordResponseBodyPageInfo) };
    inline ListBaselineCheckWhiteRecordResponseBody& setPageInfo(const ListBaselineCheckWhiteRecordResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListBaselineCheckWhiteRecordResponseBody& setPageInfo(ListBaselineCheckWhiteRecordResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBaselineCheckWhiteRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The whitelist rules.
    std::shared_ptr<vector<ListBaselineCheckWhiteRecordResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListBaselineCheckWhiteRecordResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
