// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPADMINSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPADMINSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateResourceGroupAdminSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceGroupAdminSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorAsAdmin, creatorAsAdmin_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceGroupAdminSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorAsAdmin, creatorAsAdmin_);
    };
    UpdateResourceGroupAdminSettingRequest() = default ;
    UpdateResourceGroupAdminSettingRequest(const UpdateResourceGroupAdminSettingRequest &) = default ;
    UpdateResourceGroupAdminSettingRequest(UpdateResourceGroupAdminSettingRequest &&) = default ;
    UpdateResourceGroupAdminSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceGroupAdminSettingRequest() = default ;
    UpdateResourceGroupAdminSettingRequest& operator=(const UpdateResourceGroupAdminSettingRequest &) = default ;
    UpdateResourceGroupAdminSettingRequest& operator=(UpdateResourceGroupAdminSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorAsAdmin_ == nullptr; };
    // creatorAsAdmin Field Functions 
    bool hasCreatorAsAdmin() const { return this->creatorAsAdmin_ != nullptr;};
    void deleteCreatorAsAdmin() { this->creatorAsAdmin_ = nullptr;};
    inline bool creatorAsAdmin() const { DARABONBA_PTR_GET_DEFAULT(creatorAsAdmin_, false) };
    inline UpdateResourceGroupAdminSettingRequest& setCreatorAsAdmin(bool creatorAsAdmin) { DARABONBA_PTR_SET_VALUE(creatorAsAdmin_, creatorAsAdmin) };


  protected:
    // Specifies whether to enable the Use Creator as Administrator feature.
    // 
    // This parameter is required.
    std::shared_ptr<bool> creatorAsAdmin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
