// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceTypeResponseBodyResourceType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetResourceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    GetResourceTypeResponseBody() = default ;
    GetResourceTypeResponseBody(const GetResourceTypeResponseBody &) = default ;
    GetResourceTypeResponseBody(GetResourceTypeResponseBody &&) = default ;
    GetResourceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeResponseBody() = default ;
    GetResourceTypeResponseBody& operator=(const GetResourceTypeResponseBody &) = default ;
    GetResourceTypeResponseBody& operator=(GetResourceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline const GetResourceTypeResponseBodyResourceType & resourceType() const { DARABONBA_PTR_GET_CONST(resourceType_, GetResourceTypeResponseBodyResourceType) };
    inline GetResourceTypeResponseBodyResourceType resourceType() { DARABONBA_PTR_GET(resourceType_, GetResourceTypeResponseBodyResourceType) };
    inline GetResourceTypeResponseBody& setResourceType(const GetResourceTypeResponseBodyResourceType & resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };
    inline GetResourceTypeResponseBody& setResourceType(GetResourceTypeResponseBodyResourceType && resourceType) { DARABONBA_PTR_SET_RVALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetResourceTypeResponseBodyResourceType> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
