// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class GetNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    GetNamespaceRequest() = default ;
    GetNamespaceRequest(const GetNamespaceRequest &) = default ;
    GetNamespaceRequest(GetNamespaceRequest &&) = default ;
    GetNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNamespaceRequest() = default ;
    GetNamespaceRequest& operator=(const GetNamespaceRequest &) = default ;
    GetNamespaceRequest& operator=(GetNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetNamespaceRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
