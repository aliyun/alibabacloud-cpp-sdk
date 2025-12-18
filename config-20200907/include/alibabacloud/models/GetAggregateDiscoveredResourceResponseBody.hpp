// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATEDISCOVEREDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATEDISCOVEREDRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateDiscoveredResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateDiscoveredResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceDetail, discoveredResourceDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateDiscoveredResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceDetail, discoveredResourceDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateDiscoveredResourceResponseBody() = default ;
    GetAggregateDiscoveredResourceResponseBody(const GetAggregateDiscoveredResourceResponseBody &) = default ;
    GetAggregateDiscoveredResourceResponseBody(GetAggregateDiscoveredResourceResponseBody &&) = default ;
    GetAggregateDiscoveredResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateDiscoveredResourceResponseBody() = default ;
    GetAggregateDiscoveredResourceResponseBody& operator=(const GetAggregateDiscoveredResourceResponseBody &) = default ;
    GetAggregateDiscoveredResourceResponseBody& operator=(GetAggregateDiscoveredResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discoveredResourceDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // discoveredResourceDetail Field Functions 
    bool hasDiscoveredResourceDetail() const { return this->discoveredResourceDetail_ != nullptr;};
    void deleteDiscoveredResourceDetail() { this->discoveredResourceDetail_ = nullptr;};
    inline const GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail & discoveredResourceDetail() const { DARABONBA_PTR_GET_CONST(discoveredResourceDetail_, GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail) };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail discoveredResourceDetail() { DARABONBA_PTR_GET(discoveredResourceDetail_, GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail) };
    inline GetAggregateDiscoveredResourceResponseBody& setDiscoveredResourceDetail(const GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail & discoveredResourceDetail) { DARABONBA_PTR_SET_VALUE(discoveredResourceDetail_, discoveredResourceDetail) };
    inline GetAggregateDiscoveredResourceResponseBody& setDiscoveredResourceDetail(GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail && discoveredResourceDetail) { DARABONBA_PTR_SET_RVALUE(discoveredResourceDetail_, discoveredResourceDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateDiscoveredResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the resource.
    std::shared_ptr<GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail> discoveredResourceDetail_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
