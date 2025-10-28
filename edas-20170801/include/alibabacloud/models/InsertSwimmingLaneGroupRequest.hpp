// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTSWIMMINGLANEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTSWIMMINGLANEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertSwimmingLaneGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertSwimmingLaneGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(EntryApp, entryApp_);
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, InsertSwimmingLaneGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(EntryApp, entryApp_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    InsertSwimmingLaneGroupRequest() = default ;
    InsertSwimmingLaneGroupRequest(const InsertSwimmingLaneGroupRequest &) = default ;
    InsertSwimmingLaneGroupRequest(InsertSwimmingLaneGroupRequest &&) = default ;
    InsertSwimmingLaneGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertSwimmingLaneGroupRequest() = default ;
    InsertSwimmingLaneGroupRequest& operator=(const InsertSwimmingLaneGroupRequest &) = default ;
    InsertSwimmingLaneGroupRequest& operator=(InsertSwimmingLaneGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && return this->entryApp_ == nullptr && return this->logicalRegionId_ == nullptr && return this->name_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string appIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline InsertSwimmingLaneGroupRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // entryApp Field Functions 
    bool hasEntryApp() const { return this->entryApp_ != nullptr;};
    void deleteEntryApp() { this->entryApp_ = nullptr;};
    inline string entryApp() const { DARABONBA_PTR_GET_DEFAULT(entryApp_, "") };
    inline InsertSwimmingLaneGroupRequest& setEntryApp(string entryApp) { DARABONBA_PTR_SET_VALUE(entryApp_, entryApp) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string logicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline InsertSwimmingLaneGroupRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InsertSwimmingLaneGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // IDs of all applications that are related to the lane group. Separate multiple applications with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> appIds_ = nullptr;
    // The ingress application. The application is in the EDAS:{application ID} format.
    // 
    // This parameter is required.
    std::shared_ptr<string> entryApp_ = nullptr;
    // The ID of the custom namespace. The ID is in the physical region ID:custom namespace identifier format. Example: cn-hangzhou:test.
    // 
    // This parameter is required.
    std::shared_ptr<string> logicalRegionId_ = nullptr;
    // The name of the lane group.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
