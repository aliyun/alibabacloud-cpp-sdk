// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEENTERPRISEACCELERATEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEENTERPRISEACCELERATEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DisableEnterpriseAcceleratePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableEnterpriseAcceleratePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EapId, eapId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableEnterpriseAcceleratePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EapId, eapId_);
    };
    DisableEnterpriseAcceleratePolicyRequest() = default ;
    DisableEnterpriseAcceleratePolicyRequest(const DisableEnterpriseAcceleratePolicyRequest &) = default ;
    DisableEnterpriseAcceleratePolicyRequest(DisableEnterpriseAcceleratePolicyRequest &&) = default ;
    DisableEnterpriseAcceleratePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableEnterpriseAcceleratePolicyRequest() = default ;
    DisableEnterpriseAcceleratePolicyRequest& operator=(const DisableEnterpriseAcceleratePolicyRequest &) = default ;
    DisableEnterpriseAcceleratePolicyRequest& operator=(DisableEnterpriseAcceleratePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eapId_ == nullptr; };
    // eapId Field Functions 
    bool hasEapId() const { return this->eapId_ != nullptr;};
    void deleteEapId() { this->eapId_ = nullptr;};
    inline string eapId() const { DARABONBA_PTR_GET_DEFAULT(eapId_, "") };
    inline DisableEnterpriseAcceleratePolicyRequest& setEapId(string eapId) { DARABONBA_PTR_SET_VALUE(eapId_, eapId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> eapId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
