// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPACKAGESRESPONSEBODYDATAINSTALLEDPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTPACKAGESRESPONSEBODYDATAINSTALLEDPACKAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListPackagesResponseBodyDataInstalledPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPackagesResponseBodyDataInstalledPackages& obj) { 
      DARABONBA_PTR_TO_JSON(installTime, installTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceProject, sourceProject_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListPackagesResponseBodyDataInstalledPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(installTime, installTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceProject, sourceProject_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListPackagesResponseBodyDataInstalledPackages() = default ;
    ListPackagesResponseBodyDataInstalledPackages(const ListPackagesResponseBodyDataInstalledPackages &) = default ;
    ListPackagesResponseBodyDataInstalledPackages(ListPackagesResponseBodyDataInstalledPackages &&) = default ;
    ListPackagesResponseBodyDataInstalledPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPackagesResponseBodyDataInstalledPackages() = default ;
    ListPackagesResponseBodyDataInstalledPackages& operator=(const ListPackagesResponseBodyDataInstalledPackages &) = default ;
    ListPackagesResponseBodyDataInstalledPackages& operator=(ListPackagesResponseBodyDataInstalledPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->installTime_ == nullptr
        && return this->name_ == nullptr && return this->sourceProject_ == nullptr && return this->status_ == nullptr; };
    // installTime Field Functions 
    bool hasInstallTime() const { return this->installTime_ != nullptr;};
    void deleteInstallTime() { this->installTime_ = nullptr;};
    inline int64_t installTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, 0L) };
    inline ListPackagesResponseBodyDataInstalledPackages& setInstallTime(int64_t installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPackagesResponseBodyDataInstalledPackages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceProject Field Functions 
    bool hasSourceProject() const { return this->sourceProject_ != nullptr;};
    void deleteSourceProject() { this->sourceProject_ = nullptr;};
    inline string sourceProject() const { DARABONBA_PTR_GET_DEFAULT(sourceProject_, "") };
    inline ListPackagesResponseBodyDataInstalledPackages& setSourceProject(string sourceProject) { DARABONBA_PTR_SET_VALUE(sourceProject_, sourceProject) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPackagesResponseBodyDataInstalledPackages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the package was installed.
    std::shared_ptr<int64_t> installTime_ = nullptr;
    // The name of the package.
    std::shared_ptr<string> name_ = nullptr;
    // The project to which the package belongs. This parameter is required if the package is installed in the MaxCompute project.
    std::shared_ptr<string> sourceProject_ = nullptr;
    // The status of the package.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
