// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEMESHVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEMESHVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpgradeMeshVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeMeshVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheck, preCheck_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeMeshVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheck, preCheck_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    UpgradeMeshVersionRequest() = default ;
    UpgradeMeshVersionRequest(const UpgradeMeshVersionRequest &) = default ;
    UpgradeMeshVersionRequest(UpgradeMeshVersionRequest &&) = default ;
    UpgradeMeshVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeMeshVersionRequest() = default ;
    UpgradeMeshVersionRequest& operator=(const UpgradeMeshVersionRequest &) = default ;
    UpgradeMeshVersionRequest& operator=(UpgradeMeshVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preCheck_ == nullptr
        && return this->serviceMeshId_ == nullptr; };
    // preCheck Field Functions 
    bool hasPreCheck() const { return this->preCheck_ != nullptr;};
    void deletePreCheck() { this->preCheck_ = nullptr;};
    inline bool preCheck() const { DARABONBA_PTR_GET_DEFAULT(preCheck_, false) };
    inline UpgradeMeshVersionRequest& setPreCheck(bool preCheck) { DARABONBA_PTR_SET_VALUE(preCheck_, preCheck) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpgradeMeshVersionRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // Specifies whether to perform a precheck. Default value: false. If this parameter is set to true, this call only checks whether the current ASM instance meets the upgrade conditions and does not actually perform an upgrade.
    std::shared_ptr<bool> preCheck_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
