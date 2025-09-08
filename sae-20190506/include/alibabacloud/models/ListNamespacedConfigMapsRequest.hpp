// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListNamespacedConfigMapsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacedConfigMapsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacedConfigMapsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    ListNamespacedConfigMapsRequest() = default ;
    ListNamespacedConfigMapsRequest(const ListNamespacedConfigMapsRequest &) = default ;
    ListNamespacedConfigMapsRequest(ListNamespacedConfigMapsRequest &&) = default ;
    ListNamespacedConfigMapsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacedConfigMapsRequest() = default ;
    ListNamespacedConfigMapsRequest& operator=(const ListNamespacedConfigMapsRequest &) = default ;
    ListNamespacedConfigMapsRequest& operator=(ListNamespacedConfigMapsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespaceId_ != nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListNamespacedConfigMapsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // cn-hangzhou
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
