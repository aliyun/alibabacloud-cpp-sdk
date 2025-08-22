// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchEventsResponseBodyPageBean.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTrigger, isTrigger_);
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTrigger, isTrigger_);
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchEventsResponseBody() = default ;
    SearchEventsResponseBody(const SearchEventsResponseBody &) = default ;
    SearchEventsResponseBody(SearchEventsResponseBody &&) = default ;
    SearchEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEventsResponseBody() = default ;
    SearchEventsResponseBody& operator=(const SearchEventsResponseBody &) = default ;
    SearchEventsResponseBody& operator=(SearchEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isTrigger_ != nullptr
        && this->pageBean_ != nullptr && this->requestId_ != nullptr; };
    // isTrigger Field Functions 
    bool hasIsTrigger() const { return this->isTrigger_ != nullptr;};
    void deleteIsTrigger() { this->isTrigger_ = nullptr;};
    inline int32_t isTrigger() const { DARABONBA_PTR_GET_DEFAULT(isTrigger_, 0) };
    inline SearchEventsResponseBody& setIsTrigger(int32_t isTrigger) { DARABONBA_PTR_SET_VALUE(isTrigger_, isTrigger) };


    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const SearchEventsResponseBodyPageBean & pageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, SearchEventsResponseBodyPageBean) };
    inline SearchEventsResponseBodyPageBean pageBean() { DARABONBA_PTR_GET(pageBean_, SearchEventsResponseBodyPageBean) };
    inline SearchEventsResponseBody& setPageBean(const SearchEventsResponseBodyPageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline SearchEventsResponseBody& setPageBean(SearchEventsResponseBodyPageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Specifies whether the alert event is triggered. If you do not set this parameter, all alert events are queried. Valid values:
    // 
    // *   `1`: The event is triggered.
    // *   `0`: The event is not triggered.
    std::shared_ptr<int32_t> isTrigger_ = nullptr;
    // The struct returned.
    std::shared_ptr<SearchEventsResponseBodyPageBean> pageBean_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
