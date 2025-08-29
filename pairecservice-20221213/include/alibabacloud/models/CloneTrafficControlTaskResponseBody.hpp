// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONETRAFFICCONTROLTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONETRAFFICCONTROLTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CloneTrafficControlTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneTrafficControlTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskId, trafficControlTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneTrafficControlTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskId, trafficControlTaskId_);
    };
    CloneTrafficControlTaskResponseBody() = default ;
    CloneTrafficControlTaskResponseBody(const CloneTrafficControlTaskResponseBody &) = default ;
    CloneTrafficControlTaskResponseBody(CloneTrafficControlTaskResponseBody &&) = default ;
    CloneTrafficControlTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneTrafficControlTaskResponseBody() = default ;
    CloneTrafficControlTaskResponseBody& operator=(const CloneTrafficControlTaskResponseBody &) = default ;
    CloneTrafficControlTaskResponseBody& operator=(CloneTrafficControlTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->trafficControlTaskId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloneTrafficControlTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficControlTaskId Field Functions 
    bool hasTrafficControlTaskId() const { return this->trafficControlTaskId_ != nullptr;};
    void deleteTrafficControlTaskId() { this->trafficControlTaskId_ = nullptr;};
    inline string trafficControlTaskId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTaskId_, "") };
    inline CloneTrafficControlTaskResponseBody& setTrafficControlTaskId(string trafficControlTaskId) { DARABONBA_PTR_SET_VALUE(trafficControlTaskId_, trafficControlTaskId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> trafficControlTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
