// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEPOOLVULSRESPONSEBODYVULRECORDSVULLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEPOOLVULSRESPONSEBODYVULRECORDSVULLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNodePoolVulsResponseBodyVulRecordsVulListPackageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeNodePoolVulsResponseBodyVulRecordsVulList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodePoolVulsResponseBodyVulRecordsVulList& obj) { 
      DARABONBA_PTR_TO_JSON(alias_name, aliasName_);
      DARABONBA_PTR_TO_JSON(cve_list, cveList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(necessity, necessity_);
      DARABONBA_PTR_TO_JSON(need_reboot, needReboot_);
      DARABONBA_PTR_TO_JSON(package_list, packageList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodePoolVulsResponseBodyVulRecordsVulList& obj) { 
      DARABONBA_PTR_FROM_JSON(alias_name, aliasName_);
      DARABONBA_PTR_FROM_JSON(cve_list, cveList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(need_reboot, needReboot_);
      DARABONBA_PTR_FROM_JSON(package_list, packageList_);
    };
    DescribeNodePoolVulsResponseBodyVulRecordsVulList() = default ;
    DescribeNodePoolVulsResponseBodyVulRecordsVulList(const DescribeNodePoolVulsResponseBodyVulRecordsVulList &) = default ;
    DescribeNodePoolVulsResponseBodyVulRecordsVulList(DescribeNodePoolVulsResponseBodyVulRecordsVulList &&) = default ;
    DescribeNodePoolVulsResponseBodyVulRecordsVulList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodePoolVulsResponseBodyVulRecordsVulList() = default ;
    DescribeNodePoolVulsResponseBodyVulRecordsVulList& operator=(const DescribeNodePoolVulsResponseBodyVulRecordsVulList &) = default ;
    DescribeNodePoolVulsResponseBodyVulRecordsVulList& operator=(DescribeNodePoolVulsResponseBodyVulRecordsVulList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->cveList_ == nullptr && return this->name_ == nullptr && return this->necessity_ == nullptr && return this->needReboot_ == nullptr && return this->packageList_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeNodePoolVulsResponseBodyVulRecordsVulList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // cveList Field Functions 
    bool hasCveList() const { return this->cveList_ != nullptr;};
    void deleteCveList() { this->cveList_ = nullptr;};
    inline const vector<string> & cveList() const { DARABONBA_PTR_GET_CONST(cveList_, vector<string>) };
    inline vector<string> cveList() { DARABONBA_PTR_GET(cveList_, vector<string>) };
    inline DescribeNodePoolVulsResponseBodyVulRecordsVulList& setCveList(const vector<string> & cveList) { DARABONBA_PTR_SET_VALUE(cveList_, cveList) };
    inline DescribeNodePoolVulsResponseBodyVulRecordsVulList& setCveList(vector<string> && cveList) { DARABONBA_PTR_SET_RVALUE(cveList_, cveList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNodePoolVulsResponseBodyVulRecordsVulList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeNodePoolVulsResponseBodyVulRecordsVulList& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // needReboot Field Functions 
    bool hasNeedReboot() const { return this->needReboot_ != nullptr;};
    void deleteNeedReboot() { this->needReboot_ = nullptr;};
    inline bool needReboot() const { DARABONBA_PTR_GET_DEFAULT(needReboot_, false) };
    inline DescribeNodePoolVulsResponseBodyVulRecordsVulList& setNeedReboot(bool needReboot) { DARABONBA_PTR_SET_VALUE(needReboot_, needReboot) };


    // packageList Field Functions 
    bool hasPackageList() const { return this->packageList_ != nullptr;};
    void deletePackageList() { this->packageList_ = nullptr;};
    inline const vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulListPackageList> & packageList() const { DARABONBA_PTR_GET_CONST(packageList_, vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulListPackageList>) };
    inline vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulListPackageList> packageList() { DARABONBA_PTR_GET(packageList_, vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulListPackageList>) };
    inline DescribeNodePoolVulsResponseBodyVulRecordsVulList& setPackageList(const vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulListPackageList> & packageList) { DARABONBA_PTR_SET_VALUE(packageList_, packageList) };
    inline DescribeNodePoolVulsResponseBodyVulRecordsVulList& setPackageList(vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulListPackageList> && packageList) { DARABONBA_PTR_SET_RVALUE(packageList_, packageList) };


  protected:
    // The alias of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // A list of CVE names corresponding to the vulnerabilities.
    std::shared_ptr<vector<string>> cveList_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The severity level of the vulnerability.
    // 
    // Valid values:
    // 
    // *   nntf: You can ignore the vulnerability.
    // *   later: You can fix the vulnerability later.
    // *   asap: You need to fix the vulnerability at the earliest opportunity.
    std::shared_ptr<string> necessity_ = nullptr;
    // Indicates whether a restart is required.
    std::shared_ptr<bool> needReboot_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulListPackageList>> packageList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
