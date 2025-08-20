// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUNINSTALLAPPLICATIONSSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUNINSTALLAPPLICATIONSSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateUninstallApplicationsStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUninstallApplicationsStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUninstallApplicationsStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateUninstallApplicationsStatusRequest() = default ;
    UpdateUninstallApplicationsStatusRequest(const UpdateUninstallApplicationsStatusRequest &) = default ;
    UpdateUninstallApplicationsStatusRequest(UpdateUninstallApplicationsStatusRequest &&) = default ;
    UpdateUninstallApplicationsStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUninstallApplicationsStatusRequest() = default ;
    UpdateUninstallApplicationsStatusRequest& operator=(const UpdateUninstallApplicationsStatusRequest &) = default ;
    UpdateUninstallApplicationsStatusRequest& operator=(UpdateUninstallApplicationsStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationIds_ != nullptr
        && this->status_ != nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & applicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> applicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline UpdateUninstallApplicationsStatusRequest& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline UpdateUninstallApplicationsStatusRequest& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateUninstallApplicationsStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<string>> applicationIds_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
