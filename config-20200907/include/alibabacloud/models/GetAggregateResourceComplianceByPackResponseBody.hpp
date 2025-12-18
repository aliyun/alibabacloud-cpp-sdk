// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceByPackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceComplianceResult, resourceComplianceResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceComplianceResult, resourceComplianceResult_);
    };
    GetAggregateResourceComplianceByPackResponseBody() = default ;
    GetAggregateResourceComplianceByPackResponseBody(const GetAggregateResourceComplianceByPackResponseBody &) = default ;
    GetAggregateResourceComplianceByPackResponseBody(GetAggregateResourceComplianceByPackResponseBody &&) = default ;
    GetAggregateResourceComplianceByPackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceByPackResponseBody() = default ;
    GetAggregateResourceComplianceByPackResponseBody& operator=(const GetAggregateResourceComplianceByPackResponseBody &) = default ;
    GetAggregateResourceComplianceByPackResponseBody& operator=(GetAggregateResourceComplianceByPackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceComplianceResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceComplianceByPackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceComplianceResult Field Functions 
    bool hasResourceComplianceResult() const { return this->resourceComplianceResult_ != nullptr;};
    void deleteResourceComplianceResult() { this->resourceComplianceResult_ = nullptr;};
    inline const GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult & resourceComplianceResult() const { DARABONBA_PTR_GET_CONST(resourceComplianceResult_, GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult) };
    inline GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult resourceComplianceResult() { DARABONBA_PTR_GET(resourceComplianceResult_, GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult) };
    inline GetAggregateResourceComplianceByPackResponseBody& setResourceComplianceResult(const GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult & resourceComplianceResult) { DARABONBA_PTR_SET_VALUE(resourceComplianceResult_, resourceComplianceResult) };
    inline GetAggregateResourceComplianceByPackResponseBody& setResourceComplianceResult(GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult && resourceComplianceResult) { DARABONBA_PTR_SET_RVALUE(resourceComplianceResult_, resourceComplianceResult) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The compliance evaluation results returned.
    std::shared_ptr<GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult> resourceComplianceResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
