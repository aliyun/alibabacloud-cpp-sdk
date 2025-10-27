// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHoneypotEventsResponseBodyHoneypotEvents.hpp>
#include <alibabacloud/models/ListHoneypotEventsResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotEvents, honeypotEvents_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotEvents, honeypotEvents_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHoneypotEventsResponseBody() = default ;
    ListHoneypotEventsResponseBody(const ListHoneypotEventsResponseBody &) = default ;
    ListHoneypotEventsResponseBody(ListHoneypotEventsResponseBody &&) = default ;
    ListHoneypotEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotEventsResponseBody() = default ;
    ListHoneypotEventsResponseBody& operator=(const ListHoneypotEventsResponseBody &) = default ;
    ListHoneypotEventsResponseBody& operator=(ListHoneypotEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honeypotEvents_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // honeypotEvents Field Functions 
    bool hasHoneypotEvents() const { return this->honeypotEvents_ != nullptr;};
    void deleteHoneypotEvents() { this->honeypotEvents_ = nullptr;};
    inline const vector<ListHoneypotEventsResponseBodyHoneypotEvents> & honeypotEvents() const { DARABONBA_PTR_GET_CONST(honeypotEvents_, vector<ListHoneypotEventsResponseBodyHoneypotEvents>) };
    inline vector<ListHoneypotEventsResponseBodyHoneypotEvents> honeypotEvents() { DARABONBA_PTR_GET(honeypotEvents_, vector<ListHoneypotEventsResponseBodyHoneypotEvents>) };
    inline ListHoneypotEventsResponseBody& setHoneypotEvents(const vector<ListHoneypotEventsResponseBodyHoneypotEvents> & honeypotEvents) { DARABONBA_PTR_SET_VALUE(honeypotEvents_, honeypotEvents) };
    inline ListHoneypotEventsResponseBody& setHoneypotEvents(vector<ListHoneypotEventsResponseBodyHoneypotEvents> && honeypotEvents) { DARABONBA_PTR_SET_RVALUE(honeypotEvents_, honeypotEvents) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListHoneypotEventsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListHoneypotEventsResponseBodyPageInfo) };
    inline ListHoneypotEventsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListHoneypotEventsResponseBodyPageInfo) };
    inline ListHoneypotEventsResponseBody& setPageInfo(const ListHoneypotEventsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListHoneypotEventsResponseBody& setPageInfo(ListHoneypotEventsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHoneypotEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The intrusion events.
    std::shared_ptr<vector<ListHoneypotEventsResponseBodyHoneypotEvents>> honeypotEvents_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListHoneypotEventsResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
