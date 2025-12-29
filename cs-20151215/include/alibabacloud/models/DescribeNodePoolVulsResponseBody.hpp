// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEPOOLVULSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEPOOLVULSRESPONSEBODY_HPP_
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
  class DescribeNodePoolVulsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodePoolVulsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(vul_records, vulRecords_);
      DARABONBA_PTR_TO_JSON(vuls_fix_service_purchased, vulsFixServicePurchased_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodePoolVulsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(vul_records, vulRecords_);
      DARABONBA_PTR_FROM_JSON(vuls_fix_service_purchased, vulsFixServicePurchased_);
    };
    DescribeNodePoolVulsResponseBody() = default ;
    DescribeNodePoolVulsResponseBody(const DescribeNodePoolVulsResponseBody &) = default ;
    DescribeNodePoolVulsResponseBody(DescribeNodePoolVulsResponseBody &&) = default ;
    DescribeNodePoolVulsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodePoolVulsResponseBody() = default ;
    DescribeNodePoolVulsResponseBody& operator=(const DescribeNodePoolVulsResponseBody &) = default ;
    DescribeNodePoolVulsResponseBody& operator=(DescribeNodePoolVulsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulRecords& obj) { 
        DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
        DARABONBA_PTR_TO_JSON(node_name, nodeName_);
        DARABONBA_PTR_TO_JSON(vul_list, vulList_);
      };
      friend void from_json(const Darabonba::Json& j, VulRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
        DARABONBA_PTR_FROM_JSON(node_name, nodeName_);
        DARABONBA_PTR_FROM_JSON(vul_list, vulList_);
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
      class VulList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VulList& obj) { 
          DARABONBA_PTR_TO_JSON(alias_name, aliasName_);
          DARABONBA_PTR_TO_JSON(cve_list, cveList_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(necessity, necessity_);
          DARABONBA_PTR_TO_JSON(need_reboot, needReboot_);
          DARABONBA_PTR_TO_JSON(package_list, packageList_);
        };
        friend void from_json(const Darabonba::Json& j, VulList& obj) { 
          DARABONBA_PTR_FROM_JSON(alias_name, aliasName_);
          DARABONBA_PTR_FROM_JSON(cve_list, cveList_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(necessity, necessity_);
          DARABONBA_PTR_FROM_JSON(need_reboot, needReboot_);
          DARABONBA_PTR_FROM_JSON(package_list, packageList_);
        };
        VulList() = default ;
        VulList(const VulList &) = default ;
        VulList(VulList &&) = default ;
        VulList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VulList() = default ;
        VulList& operator=(const VulList &) = default ;
        VulList& operator=(VulList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PackageList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PackageList& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, PackageList& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          PackageList() = default ;
          PackageList(const PackageList &) = default ;
          PackageList(PackageList &&) = default ;
          PackageList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PackageList() = default ;
          PackageList& operator=(const PackageList &) = default ;
          PackageList& operator=(PackageList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline PackageList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->cveList_ == nullptr && this->name_ == nullptr && this->necessity_ == nullptr && this->needReboot_ == nullptr && this->packageList_ == nullptr; };
        // aliasName Field Functions 
        bool hasAliasName() const { return this->aliasName_ != nullptr;};
        void deleteAliasName() { this->aliasName_ = nullptr;};
        inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
        inline VulList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


        // cveList Field Functions 
        bool hasCveList() const { return this->cveList_ != nullptr;};
        void deleteCveList() { this->cveList_ = nullptr;};
        inline const vector<string> & getCveList() const { DARABONBA_PTR_GET_CONST(cveList_, vector<string>) };
        inline vector<string> getCveList() { DARABONBA_PTR_GET(cveList_, vector<string>) };
        inline VulList& setCveList(const vector<string> & cveList) { DARABONBA_PTR_SET_VALUE(cveList_, cveList) };
        inline VulList& setCveList(vector<string> && cveList) { DARABONBA_PTR_SET_RVALUE(cveList_, cveList) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VulList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // necessity Field Functions 
        bool hasNecessity() const { return this->necessity_ != nullptr;};
        void deleteNecessity() { this->necessity_ = nullptr;};
        inline string getNecessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
        inline VulList& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


        // needReboot Field Functions 
        bool hasNeedReboot() const { return this->needReboot_ != nullptr;};
        void deleteNeedReboot() { this->needReboot_ = nullptr;};
        inline bool getNeedReboot() const { DARABONBA_PTR_GET_DEFAULT(needReboot_, false) };
        inline VulList& setNeedReboot(bool needReboot) { DARABONBA_PTR_SET_VALUE(needReboot_, needReboot) };


        // packageList Field Functions 
        bool hasPackageList() const { return this->packageList_ != nullptr;};
        void deletePackageList() { this->packageList_ = nullptr;};
        inline const vector<VulList::PackageList> & getPackageList() const { DARABONBA_PTR_GET_CONST(packageList_, vector<VulList::PackageList>) };
        inline vector<VulList::PackageList> getPackageList() { DARABONBA_PTR_GET(packageList_, vector<VulList::PackageList>) };
        inline VulList& setPackageList(const vector<VulList::PackageList> & packageList) { DARABONBA_PTR_SET_VALUE(packageList_, packageList) };
        inline VulList& setPackageList(vector<VulList::PackageList> && packageList) { DARABONBA_PTR_SET_RVALUE(packageList_, packageList) };


      protected:
        // The alias of the vulnerability.
        shared_ptr<string> aliasName_ {};
        // A list of CVE names corresponding to the vulnerabilities.
        shared_ptr<vector<string>> cveList_ {};
        // The name of the vulnerability.
        shared_ptr<string> name_ {};
        // The severity level of the vulnerability.
        // 
        // Valid values:
        // 
        // *   nntf: You can ignore the vulnerability.
        // *   later: You can fix the vulnerability later.
        // *   asap: You need to fix the vulnerability at the earliest opportunity.
        shared_ptr<string> necessity_ {};
        // Indicates whether a restart is required.
        shared_ptr<bool> needReboot_ {};
        shared_ptr<vector<VulList::PackageList>> packageList_ {};
      };

      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeName_ == nullptr && this->vulList_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline VulRecords& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline VulRecords& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // vulList Field Functions 
      bool hasVulList() const { return this->vulList_ != nullptr;};
      void deleteVulList() { this->vulList_ = nullptr;};
      inline const vector<VulRecords::VulList> & getVulList() const { DARABONBA_PTR_GET_CONST(vulList_, vector<VulRecords::VulList>) };
      inline vector<VulRecords::VulList> getVulList() { DARABONBA_PTR_GET(vulList_, vector<VulRecords::VulList>) };
      inline VulRecords& setVulList(const vector<VulRecords::VulList> & vulList) { DARABONBA_PTR_SET_VALUE(vulList_, vulList) };
      inline VulRecords& setVulList(vector<VulRecords::VulList> && vulList) { DARABONBA_PTR_SET_RVALUE(vulList_, vulList) };


    protected:
      // The ID of the node.
      shared_ptr<string> instanceId_ {};
      // The node name. This name is the identifier of the node in the cluster.
      shared_ptr<string> nodeName_ {};
      // The list of vulnerabilities.
      shared_ptr<vector<VulRecords::VulList>> vulList_ {};
    };

    virtual bool empty() const override { return this->vulRecords_ == nullptr
        && this->vulsFixServicePurchased_ == nullptr; };
    // vulRecords Field Functions 
    bool hasVulRecords() const { return this->vulRecords_ != nullptr;};
    void deleteVulRecords() { this->vulRecords_ = nullptr;};
    inline const vector<DescribeNodePoolVulsResponseBody::VulRecords> & getVulRecords() const { DARABONBA_PTR_GET_CONST(vulRecords_, vector<DescribeNodePoolVulsResponseBody::VulRecords>) };
    inline vector<DescribeNodePoolVulsResponseBody::VulRecords> getVulRecords() { DARABONBA_PTR_GET(vulRecords_, vector<DescribeNodePoolVulsResponseBody::VulRecords>) };
    inline DescribeNodePoolVulsResponseBody& setVulRecords(const vector<DescribeNodePoolVulsResponseBody::VulRecords> & vulRecords) { DARABONBA_PTR_SET_VALUE(vulRecords_, vulRecords) };
    inline DescribeNodePoolVulsResponseBody& setVulRecords(vector<DescribeNodePoolVulsResponseBody::VulRecords> && vulRecords) { DARABONBA_PTR_SET_RVALUE(vulRecords_, vulRecords) };


    // vulsFixServicePurchased Field Functions 
    bool hasVulsFixServicePurchased() const { return this->vulsFixServicePurchased_ != nullptr;};
    void deleteVulsFixServicePurchased() { this->vulsFixServicePurchased_ = nullptr;};
    inline bool getVulsFixServicePurchased() const { DARABONBA_PTR_GET_DEFAULT(vulsFixServicePurchased_, false) };
    inline DescribeNodePoolVulsResponseBody& setVulsFixServicePurchased(bool vulsFixServicePurchased) { DARABONBA_PTR_SET_VALUE(vulsFixServicePurchased_, vulsFixServicePurchased) };


  protected:
    // The vulnerability list of all node pools.
    shared_ptr<vector<DescribeNodePoolVulsResponseBody::VulRecords>> vulRecords_ {};
    // Indicates whether the CVE vulnerability patching service provided by Security Center is purchased.
    // 
    // *   true: yes
    // *   false: no
    shared_ptr<bool> vulsFixServicePurchased_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
