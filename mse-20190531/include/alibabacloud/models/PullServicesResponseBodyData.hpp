// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLSERVICESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PULLSERVICESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PullServicesResponseBodyDataServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class PullServicesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullServicesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceShowName, namespaceShowName_);
      DARABONBA_PTR_TO_JSON(Services, services_);
    };
    friend void from_json(const Darabonba::Json& j, PullServicesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceShowName, namespaceShowName_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
    };
    PullServicesResponseBodyData() = default ;
    PullServicesResponseBodyData(const PullServicesResponseBodyData &) = default ;
    PullServicesResponseBodyData(PullServicesResponseBodyData &&) = default ;
    PullServicesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullServicesResponseBodyData() = default ;
    PullServicesResponseBodyData& operator=(const PullServicesResponseBodyData &) = default ;
    PullServicesResponseBodyData& operator=(PullServicesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->namespace_ != nullptr && this->namespaceShowName_ != nullptr && this->services_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline PullServicesResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PullServicesResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceShowName Field Functions 
    bool hasNamespaceShowName() const { return this->namespaceShowName_ != nullptr;};
    void deleteNamespaceShowName() { this->namespaceShowName_ = nullptr;};
    inline string namespaceShowName() const { DARABONBA_PTR_GET_DEFAULT(namespaceShowName_, "") };
    inline PullServicesResponseBodyData& setNamespaceShowName(string namespaceShowName) { DARABONBA_PTR_SET_VALUE(namespaceShowName_, namespaceShowName) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<Models::PullServicesResponseBodyDataServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<Models::PullServicesResponseBodyDataServices>) };
    inline vector<Models::PullServicesResponseBodyDataServices> services() { DARABONBA_PTR_GET(services_, vector<Models::PullServicesResponseBodyDataServices>) };
    inline PullServicesResponseBodyData& setServices(const vector<Models::PullServicesResponseBodyDataServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline PullServicesResponseBodyData& setServices(vector<Models::PullServicesResponseBodyDataServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // The name of the group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The alias of the namespace.
    std::shared_ptr<string> namespaceShowName_ = nullptr;
    // The information about services.
    std::shared_ptr<vector<Models::PullServicesResponseBodyDataServices>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
