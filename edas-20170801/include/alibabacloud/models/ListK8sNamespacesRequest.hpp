// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SNAMESPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SNAMESPACESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sNamespacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sNamespacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sNamespacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    ListK8sNamespacesRequest() = default ;
    ListK8sNamespacesRequest(const ListK8sNamespacesRequest &) = default ;
    ListK8sNamespacesRequest(ListK8sNamespacesRequest &&) = default ;
    ListK8sNamespacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sNamespacesRequest() = default ;
    ListK8sNamespacesRequest& operator=(const ListK8sNamespacesRequest &) = default ;
    ListK8sNamespacesRequest& operator=(ListK8sNamespacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListK8sNamespacesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The ID of the cluster in Enterprise Distributed Application Service (EDAS).
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
