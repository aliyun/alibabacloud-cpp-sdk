// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUCCESSINSTANCEAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUCCESSINSTANCEAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSuccessInstanceAmountResponseBodyInstanceStatusTrend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListSuccessInstanceAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSuccessInstanceAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatusTrend, instanceStatusTrend_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSuccessInstanceAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatusTrend, instanceStatusTrend_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSuccessInstanceAmountResponseBody() = default ;
    ListSuccessInstanceAmountResponseBody(const ListSuccessInstanceAmountResponseBody &) = default ;
    ListSuccessInstanceAmountResponseBody(ListSuccessInstanceAmountResponseBody &&) = default ;
    ListSuccessInstanceAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSuccessInstanceAmountResponseBody() = default ;
    ListSuccessInstanceAmountResponseBody& operator=(const ListSuccessInstanceAmountResponseBody &) = default ;
    ListSuccessInstanceAmountResponseBody& operator=(ListSuccessInstanceAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceStatusTrend_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceStatusTrend Field Functions 
    bool hasInstanceStatusTrend() const { return this->instanceStatusTrend_ != nullptr;};
    void deleteInstanceStatusTrend() { this->instanceStatusTrend_ = nullptr;};
    inline const ListSuccessInstanceAmountResponseBodyInstanceStatusTrend & instanceStatusTrend() const { DARABONBA_PTR_GET_CONST(instanceStatusTrend_, ListSuccessInstanceAmountResponseBodyInstanceStatusTrend) };
    inline ListSuccessInstanceAmountResponseBodyInstanceStatusTrend instanceStatusTrend() { DARABONBA_PTR_GET(instanceStatusTrend_, ListSuccessInstanceAmountResponseBodyInstanceStatusTrend) };
    inline ListSuccessInstanceAmountResponseBody& setInstanceStatusTrend(const ListSuccessInstanceAmountResponseBodyInstanceStatusTrend & instanceStatusTrend) { DARABONBA_PTR_SET_VALUE(instanceStatusTrend_, instanceStatusTrend) };
    inline ListSuccessInstanceAmountResponseBody& setInstanceStatusTrend(ListSuccessInstanceAmountResponseBodyInstanceStatusTrend && instanceStatusTrend) { DARABONBA_PTR_SET_RVALUE(instanceStatusTrend_, instanceStatusTrend) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSuccessInstanceAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates the trend of the number of auto triggered node instances that are successfully run every hour on the hour of the current day.
    std::shared_ptr<ListSuccessInstanceAmountResponseBodyInstanceStatusTrend> instanceStatusTrend_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
