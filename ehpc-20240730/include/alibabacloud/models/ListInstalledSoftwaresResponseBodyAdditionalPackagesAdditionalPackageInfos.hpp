// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTALLEDSOFTWARESRESPONSEBODYADDITIONALPACKAGESADDITIONALPACKAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTALLEDSOFTWARESRESPONSEBODYADDITIONALPACKAGESADDITIONALPACKAGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos() = default ;
    ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos(const ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos &) = default ;
    ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos(ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos &&) = default ;
    ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos() = default ;
    ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& operator=(const ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos &) = default ;
    ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& operator=(ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->icon_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr
        && return this->version_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The category into which the software falls.
    std::shared_ptr<string> category_ = nullptr;
    // The time when the software was installed.
    std::shared_ptr<string> createTime_ = nullptr;
    // The software description.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the software icon.
    std::shared_ptr<string> icon_ = nullptr;
    // The software name.
    std::shared_ptr<string> name_ = nullptr;
    // The installation status of the software.
    // 
    // Valid values:
    // 
    // *   Installed
    // *   Uninstalled
    // *   Installing
    // *   Exception
    std::shared_ptr<string> status_ = nullptr;
    // The software version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
