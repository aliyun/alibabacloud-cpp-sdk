// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERCOMPONENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERCOMPONENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterComponentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterComponentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterComponentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddCasterComponentResponseBody() = default ;
    AddCasterComponentResponseBody(const AddCasterComponentResponseBody &) = default ;
    AddCasterComponentResponseBody(AddCasterComponentResponseBody &&) = default ;
    AddCasterComponentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterComponentResponseBody() = default ;
    AddCasterComponentResponseBody& operator=(const AddCasterComponentResponseBody &) = default ;
    AddCasterComponentResponseBody& operator=(AddCasterComponentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentId_ == nullptr
        && this->requestId_ == nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline AddCasterComponentResponseBody& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCasterComponentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The component ID. The value can be used as the value of a request parameter to query, modify, or delete a production studio.
    shared_ptr<string> componentId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
