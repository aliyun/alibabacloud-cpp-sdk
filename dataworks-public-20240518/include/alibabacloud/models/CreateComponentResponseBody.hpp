// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPONENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPONENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateComponentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComponentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComponentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateComponentResponseBody() = default ;
    CreateComponentResponseBody(const CreateComponentResponseBody &) = default ;
    CreateComponentResponseBody(CreateComponentResponseBody &&) = default ;
    CreateComponentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComponentResponseBody() = default ;
    CreateComponentResponseBody& operator=(const CreateComponentResponseBody &) = default ;
    CreateComponentResponseBody& operator=(CreateComponentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentId_ != nullptr
        && this->requestId_ != nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline CreateComponentResponseBody& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateComponentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> componentId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
