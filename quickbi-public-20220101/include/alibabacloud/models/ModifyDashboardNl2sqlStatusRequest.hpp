// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDASHBOARDNL2SQLSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDASHBOARDNL2SQLSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ModifyDashboardNl2sqlStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDashboardNl2sqlStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DashboardIds, dashboardIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDashboardNl2sqlStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DashboardIds, dashboardIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyDashboardNl2sqlStatusRequest() = default ;
    ModifyDashboardNl2sqlStatusRequest(const ModifyDashboardNl2sqlStatusRequest &) = default ;
    ModifyDashboardNl2sqlStatusRequest(ModifyDashboardNl2sqlStatusRequest &&) = default ;
    ModifyDashboardNl2sqlStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDashboardNl2sqlStatusRequest() = default ;
    ModifyDashboardNl2sqlStatusRequest& operator=(const ModifyDashboardNl2sqlStatusRequest &) = default ;
    ModifyDashboardNl2sqlStatusRequest& operator=(ModifyDashboardNl2sqlStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dashboardIds_ == nullptr
        && this->status_ == nullptr; };
    // dashboardIds Field Functions 
    bool hasDashboardIds() const { return this->dashboardIds_ != nullptr;};
    void deleteDashboardIds() { this->dashboardIds_ = nullptr;};
    inline string getDashboardIds() const { DARABONBA_PTR_GET_DEFAULT(dashboardIds_, "") };
    inline ModifyDashboardNl2sqlStatusRequest& setDashboardIds(string dashboardIds) { DARABONBA_PTR_SET_VALUE(dashboardIds_, dashboardIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyDashboardNl2sqlStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    shared_ptr<string> dashboardIds_ {};
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
