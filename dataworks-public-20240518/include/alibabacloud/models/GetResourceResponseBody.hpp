// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceResponseBodyResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    GetResourceResponseBody() = default ;
    GetResourceResponseBody(const GetResourceResponseBody &) = default ;
    GetResourceResponseBody(GetResourceResponseBody &&) = default ;
    GetResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceResponseBody() = default ;
    GetResourceResponseBody& operator=(const GetResourceResponseBody &) = default ;
    GetResourceResponseBody& operator=(GetResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resource_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const GetResourceResponseBodyResource & resource() const { DARABONBA_PTR_GET_CONST(resource_, GetResourceResponseBodyResource) };
    inline GetResourceResponseBodyResource resource() { DARABONBA_PTR_GET(resource_, GetResourceResponseBodyResource) };
    inline GetResourceResponseBody& setResource(const GetResourceResponseBodyResource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline GetResourceResponseBody& setResource(GetResourceResponseBodyResource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the file resource.
    std::shared_ptr<GetResourceResponseBodyResource> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
