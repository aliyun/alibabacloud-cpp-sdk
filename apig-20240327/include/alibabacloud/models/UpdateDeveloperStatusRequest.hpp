// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEVELOPERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEVELOPERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateDeveloperStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeveloperStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(portalId, portalId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeveloperStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(portalId, portalId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    UpdateDeveloperStatusRequest() = default ;
    UpdateDeveloperStatusRequest(const UpdateDeveloperStatusRequest &) = default ;
    UpdateDeveloperStatusRequest(UpdateDeveloperStatusRequest &&) = default ;
    UpdateDeveloperStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeveloperStatusRequest() = default ;
    UpdateDeveloperStatusRequest& operator=(const UpdateDeveloperStatusRequest &) = default ;
    UpdateDeveloperStatusRequest& operator=(UpdateDeveloperStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->portalId_ == nullptr
        && this->status_ == nullptr; };
    // portalId Field Functions 
    bool hasPortalId() const { return this->portalId_ != nullptr;};
    void deletePortalId() { this->portalId_ = nullptr;};
    inline string getPortalId() const { DARABONBA_PTR_GET_DEFAULT(portalId_, "") };
    inline UpdateDeveloperStatusRequest& setPortalId(string portalId) { DARABONBA_PTR_SET_VALUE(portalId_, portalId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateDeveloperStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the portal to which the developer belongs, which is the primary ID of the portal resource. You can obtain this ID from the portalId field in the CreatePortal response or from the portalId field of an item in the ListPortals response.
    shared_ptr<string> portalId_ {};
    // The target status of the developer. Valid values: PENDING, APPROVED, and REJECTED.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
