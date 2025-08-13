// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKUBERNETESSOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETKUBERNETESSOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetKubernetesSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKubernetesSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetKubernetesSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetKubernetesSourceResponseBodyData() = default ;
    GetKubernetesSourceResponseBodyData(const GetKubernetesSourceResponseBodyData &) = default ;
    GetKubernetesSourceResponseBodyData(GetKubernetesSourceResponseBodyData &&) = default ;
    GetKubernetesSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKubernetesSourceResponseBodyData() = default ;
    GetKubernetesSourceResponseBodyData& operator=(const GetKubernetesSourceResponseBodyData &) = default ;
    GetKubernetesSourceResponseBodyData& operator=(GetKubernetesSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->name_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetKubernetesSourceResponseBodyData& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetKubernetesSourceResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the ACK cluster.
    std::shared_ptr<string> cluster_ = nullptr;
    // The name of the ACK cluster.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
