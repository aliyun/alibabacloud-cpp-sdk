// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHMODIFYENTITLEMENTRESPONSEBODYENTITLEMENTSASSIGNMODELS_HPP_
#define ALIBABACLOUD_MODELS_BATCHMODIFYENTITLEMENTRESPONSEBODYENTITLEMENTSASSIGNMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class BatchModifyEntitlementResponseBodyEntitlementsAssignModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchModifyEntitlementResponseBodyEntitlementsAssignModels& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(InnerStatus, innerStatus_);
    };
    friend void from_json(const Darabonba::Json& j, BatchModifyEntitlementResponseBodyEntitlementsAssignModels& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(InnerStatus, innerStatus_);
    };
    BatchModifyEntitlementResponseBodyEntitlementsAssignModels() = default ;
    BatchModifyEntitlementResponseBodyEntitlementsAssignModels(const BatchModifyEntitlementResponseBodyEntitlementsAssignModels &) = default ;
    BatchModifyEntitlementResponseBodyEntitlementsAssignModels(BatchModifyEntitlementResponseBodyEntitlementsAssignModels &&) = default ;
    BatchModifyEntitlementResponseBodyEntitlementsAssignModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchModifyEntitlementResponseBodyEntitlementsAssignModels() = default ;
    BatchModifyEntitlementResponseBodyEntitlementsAssignModels& operator=(const BatchModifyEntitlementResponseBodyEntitlementsAssignModels &) = default ;
    BatchModifyEntitlementResponseBodyEntitlementsAssignModels& operator=(BatchModifyEntitlementResponseBodyEntitlementsAssignModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->endUserIds_ == nullptr && return this->innerStatus_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline BatchModifyEntitlementResponseBodyEntitlementsAssignModels& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline BatchModifyEntitlementResponseBodyEntitlementsAssignModels& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline BatchModifyEntitlementResponseBodyEntitlementsAssignModels& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // innerStatus Field Functions 
    bool hasInnerStatus() const { return this->innerStatus_ != nullptr;};
    void deleteInnerStatus() { this->innerStatus_ = nullptr;};
    inline string innerStatus() const { DARABONBA_PTR_GET_DEFAULT(innerStatus_, "") };
    inline BatchModifyEntitlementResponseBodyEntitlementsAssignModels& setInnerStatus(string innerStatus) { DARABONBA_PTR_SET_VALUE(innerStatus_, innerStatus) };


  protected:
    // The cloud computer ID.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The authorized user IDs for the cloud computer.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // The assign result for each cloud computer.
    // 
    // Valid values:
    // 
    // *   FAILED
    // *   NOT_STARTED
    // *   STARTED
    // *   PROCESSING
    // *   FINISHED
    std::shared_ptr<string> innerStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
