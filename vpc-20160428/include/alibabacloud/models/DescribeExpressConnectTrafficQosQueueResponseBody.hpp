// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSQUEUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSQUEUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExpressConnectTrafficQosQueueResponseBodyQueueList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeExpressConnectTrafficQosQueueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosQueueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueueList, queueList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosQueueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueueList, queueList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExpressConnectTrafficQosQueueResponseBody() = default ;
    DescribeExpressConnectTrafficQosQueueResponseBody(const DescribeExpressConnectTrafficQosQueueResponseBody &) = default ;
    DescribeExpressConnectTrafficQosQueueResponseBody(DescribeExpressConnectTrafficQosQueueResponseBody &&) = default ;
    DescribeExpressConnectTrafficQosQueueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosQueueResponseBody() = default ;
    DescribeExpressConnectTrafficQosQueueResponseBody& operator=(const DescribeExpressConnectTrafficQosQueueResponseBody &) = default ;
    DescribeExpressConnectTrafficQosQueueResponseBody& operator=(DescribeExpressConnectTrafficQosQueueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queueList_ == nullptr
        && return this->requestId_ == nullptr; };
    // queueList Field Functions 
    bool hasQueueList() const { return this->queueList_ != nullptr;};
    void deleteQueueList() { this->queueList_ = nullptr;};
    inline const vector<DescribeExpressConnectTrafficQosQueueResponseBodyQueueList> & queueList() const { DARABONBA_PTR_GET_CONST(queueList_, vector<DescribeExpressConnectTrafficQosQueueResponseBodyQueueList>) };
    inline vector<DescribeExpressConnectTrafficQosQueueResponseBodyQueueList> queueList() { DARABONBA_PTR_GET(queueList_, vector<DescribeExpressConnectTrafficQosQueueResponseBodyQueueList>) };
    inline DescribeExpressConnectTrafficQosQueueResponseBody& setQueueList(const vector<DescribeExpressConnectTrafficQosQueueResponseBodyQueueList> & queueList) { DARABONBA_PTR_SET_VALUE(queueList_, queueList) };
    inline DescribeExpressConnectTrafficQosQueueResponseBody& setQueueList(vector<DescribeExpressConnectTrafficQosQueueResponseBodyQueueList> && queueList) { DARABONBA_PTR_SET_RVALUE(queueList_, queueList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressConnectTrafficQosQueueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the QoS queues.
    std::shared_ptr<vector<DescribeExpressConnectTrafficQosQueueResponseBodyQueueList>> queueList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
