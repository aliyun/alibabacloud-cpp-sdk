// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREGISTRYNAMESPACEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREGISTRYNAMESPACEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UpdateRegistryNamespaceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRegistryNamespaceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRegistryNamespaceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateRegistryNamespaceAttributeResponseBody() = default ;
    UpdateRegistryNamespaceAttributeResponseBody(const UpdateRegistryNamespaceAttributeResponseBody &) = default ;
    UpdateRegistryNamespaceAttributeResponseBody(UpdateRegistryNamespaceAttributeResponseBody &&) = default ;
    UpdateRegistryNamespaceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRegistryNamespaceAttributeResponseBody() = default ;
    UpdateRegistryNamespaceAttributeResponseBody& operator=(const UpdateRegistryNamespaceAttributeResponseBody &) = default ;
    UpdateRegistryNamespaceAttributeResponseBody& operator=(UpdateRegistryNamespaceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceName_ == nullptr
        && this->requestId_ == nullptr; };
    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline UpdateRegistryNamespaceAttributeResponseBody& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateRegistryNamespaceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> namespaceName_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
