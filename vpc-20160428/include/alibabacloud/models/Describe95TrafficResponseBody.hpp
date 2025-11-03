// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBE95TRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBE95TRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Describe95TrafficResponseBodyTraffic95Summary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class Describe95TrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Describe95TrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Traffic95Summary, traffic95Summary_);
    };
    friend void from_json(const Darabonba::Json& j, Describe95TrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Traffic95Summary, traffic95Summary_);
    };
    Describe95TrafficResponseBody() = default ;
    Describe95TrafficResponseBody(const Describe95TrafficResponseBody &) = default ;
    Describe95TrafficResponseBody(Describe95TrafficResponseBody &&) = default ;
    Describe95TrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Describe95TrafficResponseBody() = default ;
    Describe95TrafficResponseBody& operator=(const Describe95TrafficResponseBody &) = default ;
    Describe95TrafficResponseBody& operator=(Describe95TrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->traffic95Summary_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Describe95TrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traffic95Summary Field Functions 
    bool hasTraffic95Summary() const { return this->traffic95Summary_ != nullptr;};
    void deleteTraffic95Summary() { this->traffic95Summary_ = nullptr;};
    inline const Describe95TrafficResponseBodyTraffic95Summary & traffic95Summary() const { DARABONBA_PTR_GET_CONST(traffic95Summary_, Describe95TrafficResponseBodyTraffic95Summary) };
    inline Describe95TrafficResponseBodyTraffic95Summary traffic95Summary() { DARABONBA_PTR_GET(traffic95Summary_, Describe95TrafficResponseBodyTraffic95Summary) };
    inline Describe95TrafficResponseBody& setTraffic95Summary(const Describe95TrafficResponseBodyTraffic95Summary & traffic95Summary) { DARABONBA_PTR_SET_VALUE(traffic95Summary_, traffic95Summary) };
    inline Describe95TrafficResponseBody& setTraffic95Summary(Describe95TrafficResponseBodyTraffic95Summary && traffic95Summary) { DARABONBA_PTR_SET_RVALUE(traffic95Summary_, traffic95Summary) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information returned.
    std::shared_ptr<Describe95TrafficResponseBodyTraffic95Summary> traffic95Summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
