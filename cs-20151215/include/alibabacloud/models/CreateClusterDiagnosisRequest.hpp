// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERDIAGNOSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERDIAGNOSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterDiagnosisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterDiagnosisRequest& obj) { 
      DARABONBA_ANY_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterDiagnosisRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateClusterDiagnosisRequest() = default ;
    CreateClusterDiagnosisRequest(const CreateClusterDiagnosisRequest &) = default ;
    CreateClusterDiagnosisRequest(CreateClusterDiagnosisRequest &&) = default ;
    CreateClusterDiagnosisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterDiagnosisRequest() = default ;
    CreateClusterDiagnosisRequest& operator=(const CreateClusterDiagnosisRequest &) = default ;
    CreateClusterDiagnosisRequest& operator=(CreateClusterDiagnosisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->target_ == nullptr
        && return this->type_ == nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline     const Darabonba::Json & target() const { DARABONBA_GET(target_) };
    Darabonba::Json & target() { DARABONBA_GET(target_) };
    inline CreateClusterDiagnosisRequest& setTarget(const Darabonba::Json & target) { DARABONBA_SET_VALUE(target_, target) };
    inline CreateClusterDiagnosisRequest& setTarget(Darabonba::Json & target) { DARABONBA_SET_RVALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateClusterDiagnosisRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The parameter used to specify the diagnostic object. Examples of parameters for different types of diagnostic objects:
    // 
    // node:
    // 
    //     {"name": "cn-shanghai.10.10.10.107"}
    // 
    // pod
    // 
    //     {"namespace": "kube-system", "name": "csi-plugin-2cg9f"}
    // 
    // network
    // 
    //     {"src": "10.10.10.108", "dst": "10.11.247.16", "dport": "80"}
    // 
    // ingress
    // 
    //     {"url": "https://example.com"}
    // 
    // memory
    // 
    //     {"node":"cn-hangzhou.172.16.9.240"}
    // 
    // service
    // 
    //     {"namespace": "kube-system", "name": "nginx-ingress-lb"}
    Darabonba::Json target_ = nullptr;
    // The type of the diagnostic.
    // 
    // Valid values:
    // 
    // *   node
    // *   ingress
    // *   cluster
    // *   memory
    // *   pod
    // *   service
    // *   network
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
