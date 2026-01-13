// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICCONTROLTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICCONTROLTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateTrafficControlTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficControlTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargetId, trafficControlTargetId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficControlTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargetId, trafficControlTargetId_);
    };
    CreateTrafficControlTargetResponseBody() = default ;
    CreateTrafficControlTargetResponseBody(const CreateTrafficControlTargetResponseBody &) = default ;
    CreateTrafficControlTargetResponseBody(CreateTrafficControlTargetResponseBody &&) = default ;
    CreateTrafficControlTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficControlTargetResponseBody() = default ;
    CreateTrafficControlTargetResponseBody& operator=(const CreateTrafficControlTargetResponseBody &) = default ;
    CreateTrafficControlTargetResponseBody& operator=(CreateTrafficControlTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficControlTargetId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrafficControlTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficControlTargetId Field Functions 
    bool hasTrafficControlTargetId() const { return this->trafficControlTargetId_ != nullptr;};
    void deleteTrafficControlTargetId() { this->trafficControlTargetId_ = nullptr;};
    inline string getTrafficControlTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetId_, "") };
    inline CreateTrafficControlTargetResponseBody& setTrafficControlTargetId(string trafficControlTargetId) { DARABONBA_PTR_SET_VALUE(trafficControlTargetId_, trafficControlTargetId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> trafficControlTargetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
