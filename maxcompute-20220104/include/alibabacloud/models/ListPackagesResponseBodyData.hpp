// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPACKAGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPACKAGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPackagesResponseBodyDataCreatedPackages.hpp>
#include <alibabacloud/models/ListPackagesResponseBodyDataInstalledPackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListPackagesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPackagesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createdPackages, createdPackages_);
      DARABONBA_PTR_TO_JSON(installedPackages, installedPackages_);
    };
    friend void from_json(const Darabonba::Json& j, ListPackagesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createdPackages, createdPackages_);
      DARABONBA_PTR_FROM_JSON(installedPackages, installedPackages_);
    };
    ListPackagesResponseBodyData() = default ;
    ListPackagesResponseBodyData(const ListPackagesResponseBodyData &) = default ;
    ListPackagesResponseBodyData(ListPackagesResponseBodyData &&) = default ;
    ListPackagesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPackagesResponseBodyData() = default ;
    ListPackagesResponseBodyData& operator=(const ListPackagesResponseBodyData &) = default ;
    ListPackagesResponseBodyData& operator=(ListPackagesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdPackages_ == nullptr
        && return this->installedPackages_ == nullptr; };
    // createdPackages Field Functions 
    bool hasCreatedPackages() const { return this->createdPackages_ != nullptr;};
    void deleteCreatedPackages() { this->createdPackages_ = nullptr;};
    inline const vector<Models::ListPackagesResponseBodyDataCreatedPackages> & createdPackages() const { DARABONBA_PTR_GET_CONST(createdPackages_, vector<Models::ListPackagesResponseBodyDataCreatedPackages>) };
    inline vector<Models::ListPackagesResponseBodyDataCreatedPackages> createdPackages() { DARABONBA_PTR_GET(createdPackages_, vector<Models::ListPackagesResponseBodyDataCreatedPackages>) };
    inline ListPackagesResponseBodyData& setCreatedPackages(const vector<Models::ListPackagesResponseBodyDataCreatedPackages> & createdPackages) { DARABONBA_PTR_SET_VALUE(createdPackages_, createdPackages) };
    inline ListPackagesResponseBodyData& setCreatedPackages(vector<Models::ListPackagesResponseBodyDataCreatedPackages> && createdPackages) { DARABONBA_PTR_SET_RVALUE(createdPackages_, createdPackages) };


    // installedPackages Field Functions 
    bool hasInstalledPackages() const { return this->installedPackages_ != nullptr;};
    void deleteInstalledPackages() { this->installedPackages_ = nullptr;};
    inline const vector<Models::ListPackagesResponseBodyDataInstalledPackages> & installedPackages() const { DARABONBA_PTR_GET_CONST(installedPackages_, vector<Models::ListPackagesResponseBodyDataInstalledPackages>) };
    inline vector<Models::ListPackagesResponseBodyDataInstalledPackages> installedPackages() { DARABONBA_PTR_GET(installedPackages_, vector<Models::ListPackagesResponseBodyDataInstalledPackages>) };
    inline ListPackagesResponseBodyData& setInstalledPackages(const vector<Models::ListPackagesResponseBodyDataInstalledPackages> & installedPackages) { DARABONBA_PTR_SET_VALUE(installedPackages_, installedPackages) };
    inline ListPackagesResponseBodyData& setInstalledPackages(vector<Models::ListPackagesResponseBodyDataInstalledPackages> && installedPackages) { DARABONBA_PTR_SET_RVALUE(installedPackages_, installedPackages) };


  protected:
    // The packages that were created.
    std::shared_ptr<vector<Models::ListPackagesResponseBodyDataCreatedPackages>> createdPackages_ = nullptr;
    // The packages that were installed.
    std::shared_ptr<vector<Models::ListPackagesResponseBodyDataInstalledPackages>> installedPackages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
