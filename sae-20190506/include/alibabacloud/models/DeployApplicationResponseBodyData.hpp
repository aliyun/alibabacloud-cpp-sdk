// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYAPPLICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYAPPLICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DeployApplicationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(IsNeedApproval, isNeedApproval_);
    };
    friend void from_json(const Darabonba::Json& j, DeployApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(IsNeedApproval, isNeedApproval_);
    };
    DeployApplicationResponseBodyData() = default ;
    DeployApplicationResponseBodyData(const DeployApplicationResponseBodyData &) = default ;
    DeployApplicationResponseBodyData(DeployApplicationResponseBodyData &&) = default ;
    DeployApplicationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployApplicationResponseBodyData() = default ;
    DeployApplicationResponseBodyData& operator=(const DeployApplicationResponseBodyData &) = default ;
    DeployApplicationResponseBodyData& operator=(DeployApplicationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->changeOrderId_ != nullptr && this->isNeedApproval_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeployApplicationResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline DeployApplicationResponseBodyData& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // isNeedApproval Field Functions 
    bool hasIsNeedApproval() const { return this->isNeedApproval_ != nullptr;};
    void deleteIsNeedApproval() { this->isNeedApproval_ = nullptr;};
    inline bool isNeedApproval() const { DARABONBA_PTR_GET_DEFAULT(isNeedApproval_, false) };
    inline DeployApplicationResponseBodyData& setIsNeedApproval(bool isNeedApproval) { DARABONBA_PTR_SET_VALUE(isNeedApproval_, isNeedApproval) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the change order. It can be used to query the task status.
    std::shared_ptr<string> changeOrderId_ = nullptr;
    // Specifies whether approval is required when a RAM user performs release. Take note of the following rules:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isNeedApproval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
