// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEKUBERNETESCLUSTERRESPONSEBODYDATANAMESPACES_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEKUBERNETESCLUSTERRESPONSEBODYDATANAMESPACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGovernanceKubernetesClusterResponseBodyDataNamespaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceKubernetesClusterResponseBodyDataNamespaces& obj) { 
      DARABONBA_PTR_TO_JSON(MseNamespace, mseNamespace_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceKubernetesClusterResponseBodyDataNamespaces& obj) { 
      DARABONBA_PTR_FROM_JSON(MseNamespace, mseNamespace_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetGovernanceKubernetesClusterResponseBodyDataNamespaces() = default ;
    GetGovernanceKubernetesClusterResponseBodyDataNamespaces(const GetGovernanceKubernetesClusterResponseBodyDataNamespaces &) = default ;
    GetGovernanceKubernetesClusterResponseBodyDataNamespaces(GetGovernanceKubernetesClusterResponseBodyDataNamespaces &&) = default ;
    GetGovernanceKubernetesClusterResponseBodyDataNamespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceKubernetesClusterResponseBodyDataNamespaces() = default ;
    GetGovernanceKubernetesClusterResponseBodyDataNamespaces& operator=(const GetGovernanceKubernetesClusterResponseBodyDataNamespaces &) = default ;
    GetGovernanceKubernetesClusterResponseBodyDataNamespaces& operator=(GetGovernanceKubernetesClusterResponseBodyDataNamespaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mseNamespace_ == nullptr
        && return this->name_ == nullptr; };
    // mseNamespace Field Functions 
    bool hasMseNamespace() const { return this->mseNamespace_ != nullptr;};
    void deleteMseNamespace() { this->mseNamespace_ = nullptr;};
    inline string mseNamespace() const { DARABONBA_PTR_GET_DEFAULT(mseNamespace_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyDataNamespaces& setMseNamespace(string mseNamespace) { DARABONBA_PTR_SET_VALUE(mseNamespace_, mseNamespace) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyDataNamespaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the MSE namespace that you want to access.
    std::shared_ptr<string> mseNamespace_ = nullptr;
    // The name of the namespace in the ACK cluster.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
