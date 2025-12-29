// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSRESPONSEBODY_HPP_
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
  class DescribeClusterVulsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterVulsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(vul_records, vulRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterVulsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(vul_records, vulRecords_);
    };
    DescribeClusterVulsResponseBody() = default ;
    DescribeClusterVulsResponseBody(const DescribeClusterVulsResponseBody &) = default ;
    DescribeClusterVulsResponseBody(DescribeClusterVulsResponseBody &&) = default ;
    DescribeClusterVulsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterVulsResponseBody() = default ;
    DescribeClusterVulsResponseBody& operator=(const DescribeClusterVulsResponseBody &) = default ;
    DescribeClusterVulsResponseBody& operator=(DescribeClusterVulsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulRecords& obj) { 
        DARABONBA_PTR_TO_JSON(cve_list, cveList_);
        DARABONBA_PTR_TO_JSON(necessity, necessity_);
        DARABONBA_PTR_TO_JSON(node_count, nodeCount_);
        DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
        DARABONBA_PTR_TO_JSON(nodepool_name, nodepoolName_);
        DARABONBA_PTR_TO_JSON(vul_alias_name, vulAliasName_);
        DARABONBA_PTR_TO_JSON(vul_name, vulName_);
        DARABONBA_PTR_TO_JSON(vul_type, vulType_);
      };
      friend void from_json(const Darabonba::Json& j, VulRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(cve_list, cveList_);
        DARABONBA_PTR_FROM_JSON(necessity, necessity_);
        DARABONBA_PTR_FROM_JSON(node_count, nodeCount_);
        DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
        DARABONBA_PTR_FROM_JSON(nodepool_name, nodepoolName_);
        DARABONBA_PTR_FROM_JSON(vul_alias_name, vulAliasName_);
        DARABONBA_PTR_FROM_JSON(vul_name, vulName_);
        DARABONBA_PTR_FROM_JSON(vul_type, vulType_);
      };
      VulRecords() = default ;
      VulRecords(const VulRecords &) = default ;
      VulRecords(VulRecords &&) = default ;
      VulRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulRecords() = default ;
      VulRecords& operator=(const VulRecords &) = default ;
      VulRecords& operator=(VulRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cveList_ == nullptr
        && this->necessity_ == nullptr && this->nodeCount_ == nullptr && this->nodepoolId_ == nullptr && this->nodepoolName_ == nullptr && this->vulAliasName_ == nullptr
        && this->vulName_ == nullptr && this->vulType_ == nullptr; };
      // cveList Field Functions 
      bool hasCveList() const { return this->cveList_ != nullptr;};
      void deleteCveList() { this->cveList_ = nullptr;};
      inline const vector<string> & getCveList() const { DARABONBA_PTR_GET_CONST(cveList_, vector<string>) };
      inline vector<string> getCveList() { DARABONBA_PTR_GET(cveList_, vector<string>) };
      inline VulRecords& setCveList(const vector<string> & cveList) { DARABONBA_PTR_SET_VALUE(cveList_, cveList) };
      inline VulRecords& setCveList(vector<string> && cveList) { DARABONBA_PTR_SET_RVALUE(cveList_, cveList) };


      // necessity Field Functions 
      bool hasNecessity() const { return this->necessity_ != nullptr;};
      void deleteNecessity() { this->necessity_ = nullptr;};
      inline string getNecessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
      inline VulRecords& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


      // nodeCount Field Functions 
      bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
      void deleteNodeCount() { this->nodeCount_ = nullptr;};
      inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
      inline VulRecords& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


      // nodepoolId Field Functions 
      bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
      void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
      inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
      inline VulRecords& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


      // nodepoolName Field Functions 
      bool hasNodepoolName() const { return this->nodepoolName_ != nullptr;};
      void deleteNodepoolName() { this->nodepoolName_ = nullptr;};
      inline string getNodepoolName() const { DARABONBA_PTR_GET_DEFAULT(nodepoolName_, "") };
      inline VulRecords& setNodepoolName(string nodepoolName) { DARABONBA_PTR_SET_VALUE(nodepoolName_, nodepoolName) };


      // vulAliasName Field Functions 
      bool hasVulAliasName() const { return this->vulAliasName_ != nullptr;};
      void deleteVulAliasName() { this->vulAliasName_ = nullptr;};
      inline string getVulAliasName() const { DARABONBA_PTR_GET_DEFAULT(vulAliasName_, "") };
      inline VulRecords& setVulAliasName(string vulAliasName) { DARABONBA_PTR_SET_VALUE(vulAliasName_, vulAliasName) };


      // vulName Field Functions 
      bool hasVulName() const { return this->vulName_ != nullptr;};
      void deleteVulName() { this->vulName_ = nullptr;};
      inline string getVulName() const { DARABONBA_PTR_GET_DEFAULT(vulName_, "") };
      inline VulRecords& setVulName(string vulName) { DARABONBA_PTR_SET_VALUE(vulName_, vulName) };


      // vulType Field Functions 
      bool hasVulType() const { return this->vulType_ != nullptr;};
      void deleteVulType() { this->vulType_ = nullptr;};
      inline string getVulType() const { DARABONBA_PTR_GET_DEFAULT(vulType_, "") };
      inline VulRecords& setVulType(string vulType) { DARABONBA_PTR_SET_VALUE(vulType_, vulType) };


    protected:
      // The CVE list.
      shared_ptr<vector<string>> cveList_ {};
      // The severity level of the vulnerability.
      // 
      // Valid values:
      // 
      // *   nntf: low
      // *   later: medium     
      // *   asap: high
      shared_ptr<string> necessity_ {};
      // The number of nodes that have the vulnerability.
      shared_ptr<int32_t> nodeCount_ {};
      // The node pool ID.
      shared_ptr<string> nodepoolId_ {};
      // The name of the node pool.
      shared_ptr<string> nodepoolName_ {};
      // The alias of the vulnerability.
      shared_ptr<string> vulAliasName_ {};
      // The name of the vulnerability.
      shared_ptr<string> vulName_ {};
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
      shared_ptr<string> vulType_ {};
    };

    virtual bool empty() const override { return this->vulRecords_ == nullptr; };
    // vulRecords Field Functions 
    bool hasVulRecords() const { return this->vulRecords_ != nullptr;};
    void deleteVulRecords() { this->vulRecords_ = nullptr;};
    inline const vector<DescribeClusterVulsResponseBody::VulRecords> & getVulRecords() const { DARABONBA_PTR_GET_CONST(vulRecords_, vector<DescribeClusterVulsResponseBody::VulRecords>) };
    inline vector<DescribeClusterVulsResponseBody::VulRecords> getVulRecords() { DARABONBA_PTR_GET(vulRecords_, vector<DescribeClusterVulsResponseBody::VulRecords>) };
    inline DescribeClusterVulsResponseBody& setVulRecords(const vector<DescribeClusterVulsResponseBody::VulRecords> & vulRecords) { DARABONBA_PTR_SET_VALUE(vulRecords_, vulRecords) };
    inline DescribeClusterVulsResponseBody& setVulRecords(vector<DescribeClusterVulsResponseBody::VulRecords> && vulRecords) { DARABONBA_PTR_SET_RVALUE(vulRecords_, vulRecords) };


  protected:
    // The list of vulnerabilities.
    shared_ptr<vector<DescribeClusterVulsResponseBody::VulRecords>> vulRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
