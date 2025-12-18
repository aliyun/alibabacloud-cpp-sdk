// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDiscoveredResourceResponseBodyDiscoveredResourceDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetDiscoveredResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDiscoveredResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceDetail, discoveredResourceDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDiscoveredResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceDetail, discoveredResourceDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDiscoveredResourceResponseBody() = default ;
    GetDiscoveredResourceResponseBody(const GetDiscoveredResourceResponseBody &) = default ;
    GetDiscoveredResourceResponseBody(GetDiscoveredResourceResponseBody &&) = default ;
    GetDiscoveredResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDiscoveredResourceResponseBody() = default ;
    GetDiscoveredResourceResponseBody& operator=(const GetDiscoveredResourceResponseBody &) = default ;
    GetDiscoveredResourceResponseBody& operator=(GetDiscoveredResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discoveredResourceDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // discoveredResourceDetail Field Functions 
    bool hasDiscoveredResourceDetail() const { return this->discoveredResourceDetail_ != nullptr;};
    void deleteDiscoveredResourceDetail() { this->discoveredResourceDetail_ = nullptr;};
    inline const GetDiscoveredResourceResponseBodyDiscoveredResourceDetail & discoveredResourceDetail() const { DARABONBA_PTR_GET_CONST(discoveredResourceDetail_, GetDiscoveredResourceResponseBodyDiscoveredResourceDetail) };
    inline GetDiscoveredResourceResponseBodyDiscoveredResourceDetail discoveredResourceDetail() { DARABONBA_PTR_GET(discoveredResourceDetail_, GetDiscoveredResourceResponseBodyDiscoveredResourceDetail) };
    inline GetDiscoveredResourceResponseBody& setDiscoveredResourceDetail(const GetDiscoveredResourceResponseBodyDiscoveredResourceDetail & discoveredResourceDetail) { DARABONBA_PTR_SET_VALUE(discoveredResourceDetail_, discoveredResourceDetail) };
    inline GetDiscoveredResourceResponseBody& setDiscoveredResourceDetail(GetDiscoveredResourceResponseBodyDiscoveredResourceDetail && discoveredResourceDetail) { DARABONBA_PTR_SET_RVALUE(discoveredResourceDetail_, discoveredResourceDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDiscoveredResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the resource.
    std::shared_ptr<GetDiscoveredResourceResponseBodyDiscoveredResourceDetail> discoveredResourceDetail_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
