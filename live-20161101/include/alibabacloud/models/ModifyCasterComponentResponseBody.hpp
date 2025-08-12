// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCASTERCOMPONENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCASTERCOMPONENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyCasterComponentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCasterComponentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCasterComponentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyCasterComponentResponseBody() = default ;
    ModifyCasterComponentResponseBody(const ModifyCasterComponentResponseBody &) = default ;
    ModifyCasterComponentResponseBody(ModifyCasterComponentResponseBody &&) = default ;
    ModifyCasterComponentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCasterComponentResponseBody() = default ;
    ModifyCasterComponentResponseBody& operator=(const ModifyCasterComponentResponseBody &) = default ;
    ModifyCasterComponentResponseBody& operator=(ModifyCasterComponentResponseBody &&) = default ;
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
    inline ModifyCasterComponentResponseBody& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCasterComponentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the component. You can use the ID as a request parameter in the API operation that is called to query components in a production studio.
    std::shared_ptr<string> componentId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
