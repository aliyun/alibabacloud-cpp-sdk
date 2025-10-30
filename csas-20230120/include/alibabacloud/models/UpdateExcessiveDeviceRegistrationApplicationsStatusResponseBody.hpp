// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXCESSIVEDEVICEREGISTRATIONAPPLICATIONSSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXCESSIVEDEVICEREGISTRATIONAPPLICATIONSSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody() = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody(const UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody &) = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody(UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody &&) = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody() = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& operator=(const UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody &) = default ;
    UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& operator=(UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applications_ == nullptr
        && return this->requestId_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications>) };
    inline vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications> applications() { DARABONBA_PTR_GET(applications_, vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications>) };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& setApplications(const vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& setApplications(vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications>> applications_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
