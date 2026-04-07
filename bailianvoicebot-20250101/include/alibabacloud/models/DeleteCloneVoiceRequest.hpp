// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLONEVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLONEVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class DeleteCloneVoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloneVoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(CloneVoiceId, cloneVoiceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloneVoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(CloneVoiceId, cloneVoiceId_);
    };
    DeleteCloneVoiceRequest() = default ;
    DeleteCloneVoiceRequest(const DeleteCloneVoiceRequest &) = default ;
    DeleteCloneVoiceRequest(DeleteCloneVoiceRequest &&) = default ;
    DeleteCloneVoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloneVoiceRequest() = default ;
    DeleteCloneVoiceRequest& operator=(const DeleteCloneVoiceRequest &) = default ;
    DeleteCloneVoiceRequest& operator=(DeleteCloneVoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessUnitId_ == nullptr
        && this->cloneVoiceId_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline DeleteCloneVoiceRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // cloneVoiceId Field Functions 
    bool hasCloneVoiceId() const { return this->cloneVoiceId_ != nullptr;};
    void deleteCloneVoiceId() { this->cloneVoiceId_ = nullptr;};
    inline string getCloneVoiceId() const { DARABONBA_PTR_GET_DEFAULT(cloneVoiceId_, "") };
    inline DeleteCloneVoiceRequest& setCloneVoiceId(string cloneVoiceId) { DARABONBA_PTR_SET_VALUE(cloneVoiceId_, cloneVoiceId) };


  protected:
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> cloneVoiceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
