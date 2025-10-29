// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYNAMESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYNAMESPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRegistryNamespaceResponseBodyNamespace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetRegistryNamespaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryNamespaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryNamespaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRegistryNamespaceResponseBody() = default ;
    GetRegistryNamespaceResponseBody(const GetRegistryNamespaceResponseBody &) = default ;
    GetRegistryNamespaceResponseBody(GetRegistryNamespaceResponseBody &&) = default ;
    GetRegistryNamespaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryNamespaceResponseBody() = default ;
    GetRegistryNamespaceResponseBody& operator=(const GetRegistryNamespaceResponseBody &) = default ;
    GetRegistryNamespaceResponseBody& operator=(GetRegistryNamespaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && return this->requestId_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline const GetRegistryNamespaceResponseBodyNamespace & _namespace() const { DARABONBA_PTR_GET_CONST(namespace_, GetRegistryNamespaceResponseBodyNamespace) };
    inline GetRegistryNamespaceResponseBodyNamespace _namespace() { DARABONBA_PTR_GET(namespace_, GetRegistryNamespaceResponseBodyNamespace) };
    inline GetRegistryNamespaceResponseBody& setNamespace(const GetRegistryNamespaceResponseBodyNamespace & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
    inline GetRegistryNamespaceResponseBody& setNamespace(GetRegistryNamespaceResponseBodyNamespace && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegistryNamespaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetRegistryNamespaceResponseBodyNamespace> namespace_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
