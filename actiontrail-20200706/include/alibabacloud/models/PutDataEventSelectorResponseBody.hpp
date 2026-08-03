// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTDATAEVENTSELECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTDATAEVENTSELECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class PutDataEventSelectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutDataEventSelectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataEventSelectors, dataEventSelectors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrailArn, trailArn_);
    };
    friend void from_json(const Darabonba::Json& j, PutDataEventSelectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataEventSelectors, dataEventSelectors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrailArn, trailArn_);
    };
    PutDataEventSelectorResponseBody() = default ;
    PutDataEventSelectorResponseBody(const PutDataEventSelectorResponseBody &) = default ;
    PutDataEventSelectorResponseBody(PutDataEventSelectorResponseBody &&) = default ;
    PutDataEventSelectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutDataEventSelectorResponseBody() = default ;
    PutDataEventSelectorResponseBody& operator=(const PutDataEventSelectorResponseBody &) = default ;
    PutDataEventSelectorResponseBody& operator=(PutDataEventSelectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataEventSelectors_ == nullptr
        && this->requestId_ == nullptr && this->trailArn_ == nullptr; };
    // dataEventSelectors Field Functions 
    bool hasDataEventSelectors() const { return this->dataEventSelectors_ != nullptr;};
    void deleteDataEventSelectors() { this->dataEventSelectors_ = nullptr;};
    inline string getDataEventSelectors() const { DARABONBA_PTR_GET_DEFAULT(dataEventSelectors_, "") };
    inline PutDataEventSelectorResponseBody& setDataEventSelectors(string dataEventSelectors) { DARABONBA_PTR_SET_VALUE(dataEventSelectors_, dataEventSelectors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutDataEventSelectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trailArn Field Functions 
    bool hasTrailArn() const { return this->trailArn_ != nullptr;};
    void deleteTrailArn() { this->trailArn_ = nullptr;};
    inline string getTrailArn() const { DARABONBA_PTR_GET_DEFAULT(trailArn_, "") };
    inline PutDataEventSelectorResponseBody& setTrailArn(string trailArn) { DARABONBA_PTR_SET_VALUE(trailArn_, trailArn) };


  protected:
    // The configuration of the data event selector. This parameter is a JSON array that can contain a maximum of 20 elements.
    // 
    // Each element in the JSON array includes the following fields:
    // 
    // - `ServiceName`: The name of the Alibaba Cloud service that supports data events.
    // 
    // - `ReadWriteType`: The type of data event. Valid values: Read, Write, and All.
    // 
    // - `EventName`: This field contains the `Equals` and `NotEquals` subfields.
    // 
    //   For example, the following configuration specifies that only `GetObject`, `CopyObject`, and `AppendObject` events are delivered:
    // 
    //   `{"EventName":{"Equals":["GetObject","CopyObject","AppendObject"]}}`
    // 
    //   If you specify `NotEquals`, events other than `GetObject`, `CopyObject`, and `AppendObject` are delivered.
    // 
    // - `ResourceArn`: This field also contains the `Equals` and `NotEquals` subfields, similar to `EventName`. For example:
    // 
    //   `{"ResourceArn":{"Equals":[arn1,...,arnx]}}`
    shared_ptr<string> dataEventSelectors_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The Alibaba Cloud Resource Name (ARN) of the trail.
    shared_ptr<string> trailArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
