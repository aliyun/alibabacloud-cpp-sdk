// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICCONTROLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICCONTROLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateTrafficControlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficControlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficControlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
    };
    CreateTrafficControlResponseBody() = default ;
    CreateTrafficControlResponseBody(const CreateTrafficControlResponseBody &) = default ;
    CreateTrafficControlResponseBody(CreateTrafficControlResponseBody &&) = default ;
    CreateTrafficControlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficControlResponseBody() = default ;
    CreateTrafficControlResponseBody& operator=(const CreateTrafficControlResponseBody &) = default ;
    CreateTrafficControlResponseBody& operator=(CreateTrafficControlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficControlId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrafficControlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string getTrafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline CreateTrafficControlResponseBody& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the throttling policy.
    shared_ptr<string> trafficControlId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
