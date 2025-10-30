// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUNINSTALLAPPLICATIONSSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUNINSTALLAPPLICATIONSSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateUninstallApplicationsStatusResponseBodyApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateUninstallApplicationsStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUninstallApplicationsStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUninstallApplicationsStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateUninstallApplicationsStatusResponseBody() = default ;
    UpdateUninstallApplicationsStatusResponseBody(const UpdateUninstallApplicationsStatusResponseBody &) = default ;
    UpdateUninstallApplicationsStatusResponseBody(UpdateUninstallApplicationsStatusResponseBody &&) = default ;
    UpdateUninstallApplicationsStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUninstallApplicationsStatusResponseBody() = default ;
    UpdateUninstallApplicationsStatusResponseBody& operator=(const UpdateUninstallApplicationsStatusResponseBody &) = default ;
    UpdateUninstallApplicationsStatusResponseBody& operator=(UpdateUninstallApplicationsStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applications_ == nullptr
        && return this->requestId_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<UpdateUninstallApplicationsStatusResponseBodyApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<UpdateUninstallApplicationsStatusResponseBodyApplications>) };
    inline vector<UpdateUninstallApplicationsStatusResponseBodyApplications> applications() { DARABONBA_PTR_GET(applications_, vector<UpdateUninstallApplicationsStatusResponseBodyApplications>) };
    inline UpdateUninstallApplicationsStatusResponseBody& setApplications(const vector<UpdateUninstallApplicationsStatusResponseBodyApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline UpdateUninstallApplicationsStatusResponseBody& setApplications(vector<UpdateUninstallApplicationsStatusResponseBodyApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateUninstallApplicationsStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<UpdateUninstallApplicationsStatusResponseBodyApplications>> applications_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
