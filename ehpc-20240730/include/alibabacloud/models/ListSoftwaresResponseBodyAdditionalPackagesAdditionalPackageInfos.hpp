// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODYADDITIONALPACKAGESADDITIONALPACKAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODYADDITIONALPACKAGESADDITIONALPACKAGEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos() = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos(const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos &) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos(ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos &&) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos() = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& operator=(const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos &) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& operator=(ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->description_ == nullptr && return this->icon_ == nullptr && return this->name_ == nullptr && return this->versions_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions & versions() const { DARABONBA_PTR_GET_CONST(versions_, Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions) };
    inline Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions versions() { DARABONBA_PTR_GET(versions_, Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions) };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setVersions(const Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos& setVersions(Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The application category.
    std::shared_ptr<string> category_ = nullptr;
    // The software description.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the software icon.
    std::shared_ptr<string> icon_ = nullptr;
    // The software name.
    std::shared_ptr<string> name_ = nullptr;
    // The information about the software versions that can be installed in the cluster.
    std::shared_ptr<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
