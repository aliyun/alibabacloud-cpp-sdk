// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDYNAMICROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDYNAMICROUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateDynamicRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDynamicRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRouteId, dynamicRouteId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDynamicRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRouteId, dynamicRouteId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDynamicRouteResponseBody() = default ;
    CreateDynamicRouteResponseBody(const CreateDynamicRouteResponseBody &) = default ;
    CreateDynamicRouteResponseBody(CreateDynamicRouteResponseBody &&) = default ;
    CreateDynamicRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDynamicRouteResponseBody() = default ;
    CreateDynamicRouteResponseBody& operator=(const CreateDynamicRouteResponseBody &) = default ;
    CreateDynamicRouteResponseBody& operator=(CreateDynamicRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicRouteId_ == nullptr
        && return this->requestId_ == nullptr; };
    // dynamicRouteId Field Functions 
    bool hasDynamicRouteId() const { return this->dynamicRouteId_ != nullptr;};
    void deleteDynamicRouteId() { this->dynamicRouteId_ = nullptr;};
    inline string dynamicRouteId() const { DARABONBA_PTR_GET_DEFAULT(dynamicRouteId_, "") };
    inline CreateDynamicRouteResponseBody& setDynamicRouteId(string dynamicRouteId) { DARABONBA_PTR_SET_VALUE(dynamicRouteId_, dynamicRouteId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDynamicRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> dynamicRouteId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
