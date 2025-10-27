// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFileProtectEventResponseBodyEventList.hpp>
#include <alibabacloud/models/ListFileProtectEventResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListFileProtectEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFileProtectEventResponseBody() = default ;
    ListFileProtectEventResponseBody(const ListFileProtectEventResponseBody &) = default ;
    ListFileProtectEventResponseBody(ListFileProtectEventResponseBody &&) = default ;
    ListFileProtectEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectEventResponseBody() = default ;
    ListFileProtectEventResponseBody& operator=(const ListFileProtectEventResponseBody &) = default ;
    ListFileProtectEventResponseBody& operator=(ListFileProtectEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline const vector<ListFileProtectEventResponseBodyEventList> & eventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<ListFileProtectEventResponseBodyEventList>) };
    inline vector<ListFileProtectEventResponseBodyEventList> eventList() { DARABONBA_PTR_GET(eventList_, vector<ListFileProtectEventResponseBodyEventList>) };
    inline ListFileProtectEventResponseBody& setEventList(const vector<ListFileProtectEventResponseBodyEventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
    inline ListFileProtectEventResponseBody& setEventList(vector<ListFileProtectEventResponseBodyEventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListFileProtectEventResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListFileProtectEventResponseBodyPageInfo) };
    inline ListFileProtectEventResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListFileProtectEventResponseBodyPageInfo) };
    inline ListFileProtectEventResponseBody& setPageInfo(const ListFileProtectEventResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListFileProtectEventResponseBody& setPageInfo(ListFileProtectEventResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileProtectEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The events.
    std::shared_ptr<vector<ListFileProtectEventResponseBodyEventList>> eventList_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListFileProtectEventResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
