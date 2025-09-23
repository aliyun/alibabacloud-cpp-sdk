// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXTENSIONSRESPONSEBODYINSTALLEDEXTENSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXTENSIONSRESPONSEBODYINSTALLEDEXTENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeExtensionsResponseBodyInstalledExtensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExtensionsResponseBodyInstalledExtensions& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_TO_JSON(InstalledVersion, installedVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Requires, requires_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExtensionsResponseBodyInstalledExtensions& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_FROM_JSON(InstalledVersion, installedVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Requires, requires_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    DescribeExtensionsResponseBodyInstalledExtensions() = default ;
    DescribeExtensionsResponseBodyInstalledExtensions(const DescribeExtensionsResponseBodyInstalledExtensions &) = default ;
    DescribeExtensionsResponseBodyInstalledExtensions(DescribeExtensionsResponseBodyInstalledExtensions &&) = default ;
    DescribeExtensionsResponseBodyInstalledExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExtensionsResponseBodyInstalledExtensions() = default ;
    DescribeExtensionsResponseBodyInstalledExtensions& operator=(const DescribeExtensionsResponseBodyInstalledExtensions &) = default ;
    DescribeExtensionsResponseBodyInstalledExtensions& operator=(DescribeExtensionsResponseBodyInstalledExtensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->comment_ != nullptr && this->defaultVersion_ != nullptr && this->installedVersion_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr
        && this->priority_ != nullptr && this->requires_ != nullptr && this->restart_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeExtensionsResponseBodyInstalledExtensions& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeExtensionsResponseBodyInstalledExtensions& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // defaultVersion Field Functions 
    bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
    void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
    inline string defaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
    inline DescribeExtensionsResponseBodyInstalledExtensions& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


    // installedVersion Field Functions 
    bool hasInstalledVersion() const { return this->installedVersion_ != nullptr;};
    void deleteInstalledVersion() { this->installedVersion_ = nullptr;};
    inline string installedVersion() const { DARABONBA_PTR_GET_DEFAULT(installedVersion_, "") };
    inline DescribeExtensionsResponseBodyInstalledExtensions& setInstalledVersion(string installedVersion) { DARABONBA_PTR_SET_VALUE(installedVersion_, installedVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeExtensionsResponseBodyInstalledExtensions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeExtensionsResponseBodyInstalledExtensions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline DescribeExtensionsResponseBodyInstalledExtensions& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requires Field Functions 
    bool hasRequires() const { return this->requires_ != nullptr;};
    void deleteRequires() { this->requires_ = nullptr;};
    inline string _requires() const { DARABONBA_PTR_GET_DEFAULT(requires_, "") };
    inline DescribeExtensionsResponseBodyInstalledExtensions& setRequires(string _requires) { DARABONBA_PTR_SET_VALUE(requires_, _requires) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline string restart() const { DARABONBA_PTR_GET_DEFAULT(restart_, "") };
    inline DescribeExtensionsResponseBodyInstalledExtensions& setRestart(string restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> defaultVersion_ = nullptr;
    std::shared_ptr<string> installedVersion_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<string> requires_ = nullptr;
    std::shared_ptr<string> restart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
