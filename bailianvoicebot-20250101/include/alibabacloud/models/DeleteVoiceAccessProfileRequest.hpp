// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVOICEACCESSPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVOICEACCESSPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class DeleteVoiceAccessProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVoiceAccessProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVoiceAccessProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
    };
    DeleteVoiceAccessProfileRequest() = default ;
    DeleteVoiceAccessProfileRequest(const DeleteVoiceAccessProfileRequest &) = default ;
    DeleteVoiceAccessProfileRequest(DeleteVoiceAccessProfileRequest &&) = default ;
    DeleteVoiceAccessProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVoiceAccessProfileRequest() = default ;
    DeleteVoiceAccessProfileRequest& operator=(const DeleteVoiceAccessProfileRequest &) = default ;
    DeleteVoiceAccessProfileRequest& operator=(DeleteVoiceAccessProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessProfileId_ == nullptr
        && this->businessUnitId_ == nullptr; };
    // accessProfileId Field Functions 
    bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
    void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
    inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
    inline DeleteVoiceAccessProfileRequest& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline DeleteVoiceAccessProfileRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


  protected:
    shared_ptr<string> accessProfileId_ {};
    shared_ptr<string> businessUnitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
