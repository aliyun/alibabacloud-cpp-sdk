// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEADDONRELEASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEADDONRELEASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteAddonReleaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAddonReleaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addonName, addonName_);
      DARABONBA_PTR_TO_JSON(force, force_);
      DARABONBA_PTR_TO_JSON(releaseName, releaseName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAddonReleaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addonName, addonName_);
      DARABONBA_PTR_FROM_JSON(force, force_);
      DARABONBA_PTR_FROM_JSON(releaseName, releaseName_);
    };
    DeleteAddonReleaseRequest() = default ;
    DeleteAddonReleaseRequest(const DeleteAddonReleaseRequest &) = default ;
    DeleteAddonReleaseRequest(DeleteAddonReleaseRequest &&) = default ;
    DeleteAddonReleaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAddonReleaseRequest() = default ;
    DeleteAddonReleaseRequest& operator=(const DeleteAddonReleaseRequest &) = default ;
    DeleteAddonReleaseRequest& operator=(DeleteAddonReleaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonName_ != nullptr
        && this->force_ != nullptr && this->releaseName_ != nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline DeleteAddonReleaseRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteAddonReleaseRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // releaseName Field Functions 
    bool hasReleaseName() const { return this->releaseName_ != nullptr;};
    void deleteReleaseName() { this->releaseName_ = nullptr;};
    inline string releaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
    inline DeleteAddonReleaseRequest& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


  protected:
    std::shared_ptr<string> addonName_ = nullptr;
    std::shared_ptr<bool> force_ = nullptr;
    std::shared_ptr<string> releaseName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
