// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKAPPLICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKAPPLICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class RollbackApplicationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(IsNeedApproval, isNeedApproval_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(IsNeedApproval, isNeedApproval_);
    };
    RollbackApplicationResponseBodyData() = default ;
    RollbackApplicationResponseBodyData(const RollbackApplicationResponseBodyData &) = default ;
    RollbackApplicationResponseBodyData(RollbackApplicationResponseBodyData &&) = default ;
    RollbackApplicationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackApplicationResponseBodyData() = default ;
    RollbackApplicationResponseBodyData& operator=(const RollbackApplicationResponseBodyData &) = default ;
    RollbackApplicationResponseBodyData& operator=(RollbackApplicationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderId_ == nullptr
        && return this->isNeedApproval_ == nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline RollbackApplicationResponseBodyData& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // isNeedApproval Field Functions 
    bool hasIsNeedApproval() const { return this->isNeedApproval_ != nullptr;};
    void deleteIsNeedApproval() { this->isNeedApproval_ = nullptr;};
    inline bool isNeedApproval() const { DARABONBA_PTR_GET_DEFAULT(isNeedApproval_, false) };
    inline RollbackApplicationResponseBodyData& setIsNeedApproval(bool isNeedApproval) { DARABONBA_PTR_SET_VALUE(isNeedApproval_, isNeedApproval) };


  protected:
    // The ID of the change process.
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
