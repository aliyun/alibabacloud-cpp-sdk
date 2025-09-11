// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHistoryEventsStatResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeHistoryEventsStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryEventsStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryEventsStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHistoryEventsStatResponseBody() = default ;
    DescribeHistoryEventsStatResponseBody(const DescribeHistoryEventsStatResponseBody &) = default ;
    DescribeHistoryEventsStatResponseBody(DescribeHistoryEventsStatResponseBody &&) = default ;
    DescribeHistoryEventsStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryEventsStatResponseBody() = default ;
    DescribeHistoryEventsStatResponseBody& operator=(const DescribeHistoryEventsStatResponseBody &) = default ;
    DescribeHistoryEventsStatResponseBody& operator=(DescribeHistoryEventsStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->requestId_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeHistoryEventsStatResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeHistoryEventsStatResponseBodyItems>) };
    inline vector<DescribeHistoryEventsStatResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeHistoryEventsStatResponseBodyItems>) };
    inline DescribeHistoryEventsStatResponseBody& setItems(const vector<DescribeHistoryEventsStatResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeHistoryEventsStatResponseBody& setItems(vector<DescribeHistoryEventsStatResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHistoryEventsStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried events.
    std::shared_ptr<vector<DescribeHistoryEventsStatResponseBodyItems>> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
