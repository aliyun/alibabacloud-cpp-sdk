// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESNAPSHOTSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESNAPSHOTSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateSnapshotSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSnapshotSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(quartzRegex, quartzRegex_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSnapshotSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(quartzRegex, quartzRegex_);
    };
    UpdateSnapshotSettingRequest() = default ;
    UpdateSnapshotSettingRequest(const UpdateSnapshotSettingRequest &) = default ;
    UpdateSnapshotSettingRequest(UpdateSnapshotSettingRequest &&) = default ;
    UpdateSnapshotSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSnapshotSettingRequest() = default ;
    UpdateSnapshotSettingRequest& operator=(const UpdateSnapshotSettingRequest &) = default ;
    UpdateSnapshotSettingRequest& operator=(UpdateSnapshotSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->quartzRegex_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateSnapshotSettingRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // quartzRegex Field Functions 
    bool hasQuartzRegex() const { return this->quartzRegex_ != nullptr;};
    void deleteQuartzRegex() { this->quartzRegex_ = nullptr;};
    inline string quartzRegex() const { DARABONBA_PTR_GET_DEFAULT(quartzRegex_, "") };
    inline UpdateSnapshotSettingRequest& setQuartzRegex(string quartzRegex) { DARABONBA_PTR_SET_VALUE(quartzRegex_, quartzRegex) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> enable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> quartzRegex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
