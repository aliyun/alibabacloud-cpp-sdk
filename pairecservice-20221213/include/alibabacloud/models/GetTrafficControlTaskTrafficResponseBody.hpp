// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKTRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKTRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetTrafficControlTaskTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTaskTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskTrafficInfo, trafficControlTaskTrafficInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTaskTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskTrafficInfo, trafficControlTaskTrafficInfo_);
    };
    GetTrafficControlTaskTrafficResponseBody() = default ;
    GetTrafficControlTaskTrafficResponseBody(const GetTrafficControlTaskTrafficResponseBody &) = default ;
    GetTrafficControlTaskTrafficResponseBody(GetTrafficControlTaskTrafficResponseBody &&) = default ;
    GetTrafficControlTaskTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTaskTrafficResponseBody() = default ;
    GetTrafficControlTaskTrafficResponseBody& operator=(const GetTrafficControlTaskTrafficResponseBody &) = default ;
    GetTrafficControlTaskTrafficResponseBody& operator=(GetTrafficControlTaskTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->trafficControlTaskTrafficInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrafficControlTaskTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficControlTaskTrafficInfo Field Functions 
    bool hasTrafficControlTaskTrafficInfo() const { return this->trafficControlTaskTrafficInfo_ != nullptr;};
    void deleteTrafficControlTaskTrafficInfo() { this->trafficControlTaskTrafficInfo_ = nullptr;};
    inline const GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo & trafficControlTaskTrafficInfo() const { DARABONBA_PTR_GET_CONST(trafficControlTaskTrafficInfo_, GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo) };
    inline GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo trafficControlTaskTrafficInfo() { DARABONBA_PTR_GET(trafficControlTaskTrafficInfo_, GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo) };
    inline GetTrafficControlTaskTrafficResponseBody& setTrafficControlTaskTrafficInfo(const GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo & trafficControlTaskTrafficInfo) { DARABONBA_PTR_SET_VALUE(trafficControlTaskTrafficInfo_, trafficControlTaskTrafficInfo) };
    inline GetTrafficControlTaskTrafficResponseBody& setTrafficControlTaskTrafficInfo(GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo && trafficControlTaskTrafficInfo) { DARABONBA_PTR_SET_RVALUE(trafficControlTaskTrafficInfo_, trafficControlTaskTrafficInfo) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo> trafficControlTaskTrafficInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
