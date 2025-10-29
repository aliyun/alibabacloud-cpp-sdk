// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPONENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPONENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetComponentResponseBodyComponent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetComponentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComponentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Component, component_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetComponentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Component, component_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetComponentResponseBody() = default ;
    GetComponentResponseBody(const GetComponentResponseBody &) = default ;
    GetComponentResponseBody(GetComponentResponseBody &&) = default ;
    GetComponentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComponentResponseBody() = default ;
    GetComponentResponseBody& operator=(const GetComponentResponseBody &) = default ;
    GetComponentResponseBody& operator=(GetComponentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->component_ == nullptr
        && return this->requestId_ == nullptr; };
    // component Field Functions 
    bool hasComponent() const { return this->component_ != nullptr;};
    void deleteComponent() { this->component_ = nullptr;};
    inline const GetComponentResponseBodyComponent & component() const { DARABONBA_PTR_GET_CONST(component_, GetComponentResponseBodyComponent) };
    inline GetComponentResponseBodyComponent component() { DARABONBA_PTR_GET(component_, GetComponentResponseBodyComponent) };
    inline GetComponentResponseBody& setComponent(const GetComponentResponseBodyComponent & component) { DARABONBA_PTR_SET_VALUE(component_, component) };
    inline GetComponentResponseBody& setComponent(GetComponentResponseBodyComponent && component) { DARABONBA_PTR_SET_RVALUE(component_, component) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComponentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // JSON serialization of the component module.
    std::shared_ptr<GetComponentResponseBodyComponent> component_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
