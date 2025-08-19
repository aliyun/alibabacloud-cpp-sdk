// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSRESPONSEBODYVULRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSRESPONSEBODYVULRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterVulsResponseBodyVulRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterVulsResponseBodyVulRecords& obj) { 
      DARABONBA_PTR_TO_JSON(cve_list, cveList_);
      DARABONBA_PTR_TO_JSON(necessity, necessity_);
      DARABONBA_PTR_TO_JSON(node_count, nodeCount_);
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(nodepool_name, nodepoolName_);
      DARABONBA_PTR_TO_JSON(vul_alias_name, vulAliasName_);
      DARABONBA_PTR_TO_JSON(vul_name, vulName_);
      DARABONBA_PTR_TO_JSON(vul_type, vulType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterVulsResponseBodyVulRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(cve_list, cveList_);
      DARABONBA_PTR_FROM_JSON(necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(node_count, nodeCount_);
      DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_FROM_JSON(nodepool_name, nodepoolName_);
      DARABONBA_PTR_FROM_JSON(vul_alias_name, vulAliasName_);
      DARABONBA_PTR_FROM_JSON(vul_name, vulName_);
      DARABONBA_PTR_FROM_JSON(vul_type, vulType_);
    };
    DescribeClusterVulsResponseBodyVulRecords() = default ;
    DescribeClusterVulsResponseBodyVulRecords(const DescribeClusterVulsResponseBodyVulRecords &) = default ;
    DescribeClusterVulsResponseBodyVulRecords(DescribeClusterVulsResponseBodyVulRecords &&) = default ;
    DescribeClusterVulsResponseBodyVulRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterVulsResponseBodyVulRecords() = default ;
    DescribeClusterVulsResponseBodyVulRecords& operator=(const DescribeClusterVulsResponseBodyVulRecords &) = default ;
    DescribeClusterVulsResponseBodyVulRecords& operator=(DescribeClusterVulsResponseBodyVulRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cveList_ != nullptr
        && this->necessity_ != nullptr && this->nodeCount_ != nullptr && this->nodepoolId_ != nullptr && this->nodepoolName_ != nullptr && this->vulAliasName_ != nullptr
        && this->vulName_ != nullptr && this->vulType_ != nullptr; };
    // cveList Field Functions 
    bool hasCveList() const { return this->cveList_ != nullptr;};
    void deleteCveList() { this->cveList_ = nullptr;};
    inline const vector<string> & cveList() const { DARABONBA_PTR_GET_CONST(cveList_, vector<string>) };
    inline vector<string> cveList() { DARABONBA_PTR_GET(cveList_, vector<string>) };
    inline DescribeClusterVulsResponseBodyVulRecords& setCveList(const vector<string> & cveList) { DARABONBA_PTR_SET_VALUE(cveList_, cveList) };
    inline DescribeClusterVulsResponseBodyVulRecords& setCveList(vector<string> && cveList) { DARABONBA_PTR_SET_RVALUE(cveList_, cveList) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeClusterVulsResponseBodyVulRecords& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline DescribeClusterVulsResponseBodyVulRecords& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string nodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline DescribeClusterVulsResponseBodyVulRecords& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // nodepoolName Field Functions 
    bool hasNodepoolName() const { return this->nodepoolName_ != nullptr;};
    void deleteNodepoolName() { this->nodepoolName_ = nullptr;};
    inline string nodepoolName() const { DARABONBA_PTR_GET_DEFAULT(nodepoolName_, "") };
    inline DescribeClusterVulsResponseBodyVulRecords& setNodepoolName(string nodepoolName) { DARABONBA_PTR_SET_VALUE(nodepoolName_, nodepoolName) };


    // vulAliasName Field Functions 
    bool hasVulAliasName() const { return this->vulAliasName_ != nullptr;};
    void deleteVulAliasName() { this->vulAliasName_ = nullptr;};
    inline string vulAliasName() const { DARABONBA_PTR_GET_DEFAULT(vulAliasName_, "") };
    inline DescribeClusterVulsResponseBodyVulRecords& setVulAliasName(string vulAliasName) { DARABONBA_PTR_SET_VALUE(vulAliasName_, vulAliasName) };


    // vulName Field Functions 
    bool hasVulName() const { return this->vulName_ != nullptr;};
    void deleteVulName() { this->vulName_ = nullptr;};
    inline string vulName() const { DARABONBA_PTR_GET_DEFAULT(vulName_, "") };
    inline DescribeClusterVulsResponseBodyVulRecords& setVulName(string vulName) { DARABONBA_PTR_SET_VALUE(vulName_, vulName) };


    // vulType Field Functions 
    bool hasVulType() const { return this->vulType_ != nullptr;};
    void deleteVulType() { this->vulType_ = nullptr;};
    inline string vulType() const { DARABONBA_PTR_GET_DEFAULT(vulType_, "") };
    inline DescribeClusterVulsResponseBodyVulRecords& setVulType(string vulType) { DARABONBA_PTR_SET_VALUE(vulType_, vulType) };


  protected:
    // The CVE list.
    std::shared_ptr<vector<string>> cveList_ = nullptr;
    // The severity level of the vulnerability.
    // 
    // Valid values:
    // 
    // *   nntf: low
    // *   later: medium     
    // *   asap: high
    std::shared_ptr<string> necessity_ = nullptr;
    // The number of nodes that have the vulnerability.
    std::shared_ptr<int32_t> nodeCount_ = nullptr;
    // The node pool ID.
    std::shared_ptr<string> nodepoolId_ = nullptr;
    // The name of the node pool.
    std::shared_ptr<string> nodepoolName_ = nullptr;
    // The alias of the vulnerability.
    std::shared_ptr<string> vulAliasName_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> vulName_ = nullptr;
    // The type of vulnerability.
    // 
    // Valid values:
    // 
    // *   app: application vulnerabilities
    // *   sca: application vulnerabilities (software component analysis)
    // *   cve: Linux vulnerabilities
    // *   cms: Web-CMS vulnerabilities
    // *   sys: Windows vulnerabilities
    // *   emg:  emergency vulnerabilities
    std::shared_ptr<string> vulType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
