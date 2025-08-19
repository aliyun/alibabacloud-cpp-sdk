// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEPOOLVULSRESPONSEBODYVULRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEPOOLVULSRESPONSEBODYVULRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNodePoolVulsResponseBodyVulRecordsVulList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeNodePoolVulsResponseBodyVulRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodePoolVulsResponseBodyVulRecords& obj) { 
      DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
      DARABONBA_PTR_TO_JSON(node_name, nodeName_);
      DARABONBA_PTR_TO_JSON(vul_list, vulList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodePoolVulsResponseBodyVulRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
      DARABONBA_PTR_FROM_JSON(node_name, nodeName_);
      DARABONBA_PTR_FROM_JSON(vul_list, vulList_);
    };
    DescribeNodePoolVulsResponseBodyVulRecords() = default ;
    DescribeNodePoolVulsResponseBodyVulRecords(const DescribeNodePoolVulsResponseBodyVulRecords &) = default ;
    DescribeNodePoolVulsResponseBodyVulRecords(DescribeNodePoolVulsResponseBodyVulRecords &&) = default ;
    DescribeNodePoolVulsResponseBodyVulRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodePoolVulsResponseBodyVulRecords() = default ;
    DescribeNodePoolVulsResponseBodyVulRecords& operator=(const DescribeNodePoolVulsResponseBodyVulRecords &) = default ;
    DescribeNodePoolVulsResponseBodyVulRecords& operator=(DescribeNodePoolVulsResponseBodyVulRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->nodeName_ != nullptr && this->vulList_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNodePoolVulsResponseBodyVulRecords& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeNodePoolVulsResponseBodyVulRecords& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // vulList Field Functions 
    bool hasVulList() const { return this->vulList_ != nullptr;};
    void deleteVulList() { this->vulList_ = nullptr;};
    inline const vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulList> & vulList() const { DARABONBA_PTR_GET_CONST(vulList_, vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulList>) };
    inline vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulList> vulList() { DARABONBA_PTR_GET(vulList_, vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulList>) };
    inline DescribeNodePoolVulsResponseBodyVulRecords& setVulList(const vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulList> & vulList) { DARABONBA_PTR_SET_VALUE(vulList_, vulList) };
    inline DescribeNodePoolVulsResponseBodyVulRecords& setVulList(vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulList> && vulList) { DARABONBA_PTR_SET_RVALUE(vulList_, vulList) };


  protected:
    // The ID of the node.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The node name. This name is the identifier of the node in the cluster.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The list of vulnerabilities.
    std::shared_ptr<vector<Models::DescribeNodePoolVulsResponseBodyVulRecordsVulList>> vulList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
