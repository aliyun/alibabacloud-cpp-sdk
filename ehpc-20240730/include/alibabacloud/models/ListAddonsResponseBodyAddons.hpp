// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODYADDONS_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODYADDONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAddonsResponseBodyAddons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsResponseBodyAddons& obj) { 
      DARABONBA_PTR_TO_JSON(AddonId, addonId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstallTime, installTime_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsResponseBodyAddons& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonId, addonId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstallTime, installTime_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListAddonsResponseBodyAddons() = default ;
    ListAddonsResponseBodyAddons(const ListAddonsResponseBodyAddons &) = default ;
    ListAddonsResponseBodyAddons(ListAddonsResponseBodyAddons &&) = default ;
    ListAddonsResponseBodyAddons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonsResponseBodyAddons() = default ;
    ListAddonsResponseBodyAddons& operator=(const ListAddonsResponseBodyAddons &) = default ;
    ListAddonsResponseBodyAddons& operator=(ListAddonsResponseBodyAddons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonId_ == nullptr
        && return this->description_ == nullptr && return this->installTime_ == nullptr && return this->label_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr
        && return this->version_ == nullptr; };
    // addonId Field Functions 
    bool hasAddonId() const { return this->addonId_ != nullptr;};
    void deleteAddonId() { this->addonId_ = nullptr;};
    inline string addonId() const { DARABONBA_PTR_GET_DEFAULT(addonId_, "") };
    inline ListAddonsResponseBodyAddons& setAddonId(string addonId) { DARABONBA_PTR_SET_VALUE(addonId_, addonId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAddonsResponseBodyAddons& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // installTime Field Functions 
    bool hasInstallTime() const { return this->installTime_ != nullptr;};
    void deleteInstallTime() { this->installTime_ = nullptr;};
    inline string installTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, "") };
    inline ListAddonsResponseBodyAddons& setInstallTime(string installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListAddonsResponseBodyAddons& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAddonsResponseBodyAddons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAddonsResponseBodyAddons& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAddonsResponseBodyAddons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The addon ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> addonId_ = nullptr;
    // The addon description.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the addon was installed.
    std::shared_ptr<string> installTime_ = nullptr;
    // The addon label.
    std::shared_ptr<string> label_ = nullptr;
    // The addon name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The addon state.
    std::shared_ptr<string> status_ = nullptr;
    // The addon version.
    // 
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
