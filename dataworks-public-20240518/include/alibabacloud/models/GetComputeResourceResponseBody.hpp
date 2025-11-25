// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetComputeResourceResponseBodyComputeResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetComputeResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetComputeResourceResponseBody() = default ;
    GetComputeResourceResponseBody(const GetComputeResourceResponseBody &) = default ;
    GetComputeResourceResponseBody(GetComputeResourceResponseBody &&) = default ;
    GetComputeResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeResourceResponseBody() = default ;
    GetComputeResourceResponseBody& operator=(const GetComputeResourceResponseBody &) = default ;
    GetComputeResourceResponseBody& operator=(GetComputeResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResource_ == nullptr
        && return this->requestId_ == nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const GetComputeResourceResponseBodyComputeResource & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, GetComputeResourceResponseBodyComputeResource) };
    inline GetComputeResourceResponseBodyComputeResource computeResource() { DARABONBA_PTR_GET(computeResource_, GetComputeResourceResponseBodyComputeResource) };
    inline GetComputeResourceResponseBody& setComputeResource(const GetComputeResourceResponseBodyComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline GetComputeResourceResponseBody& setComputeResource(GetComputeResourceResponseBodyComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComputeResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetComputeResourceResponseBodyComputeResource> computeResource_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
