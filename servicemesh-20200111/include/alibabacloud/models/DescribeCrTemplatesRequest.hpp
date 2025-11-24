// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECRTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECRTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeCrTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IstioVersion, istioVersion_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IstioVersion, istioVersion_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
    };
    DescribeCrTemplatesRequest() = default ;
    DescribeCrTemplatesRequest(const DescribeCrTemplatesRequest &) = default ;
    DescribeCrTemplatesRequest(DescribeCrTemplatesRequest &&) = default ;
    DescribeCrTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrTemplatesRequest() = default ;
    DescribeCrTemplatesRequest& operator=(const DescribeCrTemplatesRequest &) = default ;
    DescribeCrTemplatesRequest& operator=(DescribeCrTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->istioVersion_ == nullptr
        && return this->kind_ == nullptr; };
    // istioVersion Field Functions 
    bool hasIstioVersion() const { return this->istioVersion_ != nullptr;};
    void deleteIstioVersion() { this->istioVersion_ = nullptr;};
    inline string istioVersion() const { DARABONBA_PTR_GET_DEFAULT(istioVersion_, "") };
    inline DescribeCrTemplatesRequest& setIstioVersion(string istioVersion) { DARABONBA_PTR_SET_VALUE(istioVersion_, istioVersion) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline DescribeCrTemplatesRequest& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


  protected:
    // The version of Istio used by the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> istioVersion_ = nullptr;
    // The type of Istio resource whose common YAML templates you want to query. Valid values:
    // 
    // *   AuthorizationPolicy
    // *   RequestAuthentication
    // *   PeerAuthentication
    // *   WorkloadGroup
    // *   WorkloadEntry
    // *   Sidecar
    // *   EnvoyFilter
    // *   ServiceEntry
    // *   Gateway
    // *   DestinationRule
    // *   VirtualService
    // 
    // This parameter is required.
    std::shared_ptr<string> kind_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
