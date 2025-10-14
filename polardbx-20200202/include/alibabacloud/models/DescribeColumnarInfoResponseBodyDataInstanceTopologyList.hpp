// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNARINFORESPONSEBODYDATAINSTANCETOPOLOGYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNARINFORESPONSEBODYDATAINSTANCETOPOLOGYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColumnarInfoResponseBodyDataInstanceTopologyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnarInfoResponseBodyDataInstanceTopologyList& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PhysicalNodes, physicalNodes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnarInfoResponseBodyDataInstanceTopologyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PhysicalNodes, physicalNodes_);
    };
    DescribeColumnarInfoResponseBodyDataInstanceTopologyList() = default ;
    DescribeColumnarInfoResponseBodyDataInstanceTopologyList(const DescribeColumnarInfoResponseBodyDataInstanceTopologyList &) = default ;
    DescribeColumnarInfoResponseBodyDataInstanceTopologyList(DescribeColumnarInfoResponseBodyDataInstanceTopologyList &&) = default ;
    DescribeColumnarInfoResponseBodyDataInstanceTopologyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnarInfoResponseBodyDataInstanceTopologyList() = default ;
    DescribeColumnarInfoResponseBodyDataInstanceTopologyList& operator=(const DescribeColumnarInfoResponseBodyDataInstanceTopologyList &) = default ;
    DescribeColumnarInfoResponseBodyDataInstanceTopologyList& operator=(DescribeColumnarInfoResponseBodyDataInstanceTopologyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->instanceName_ == nullptr && return this->physicalNodes_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeColumnarInfoResponseBodyDataInstanceTopologyList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeColumnarInfoResponseBodyDataInstanceTopologyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // physicalNodes Field Functions 
    bool hasPhysicalNodes() const { return this->physicalNodes_ != nullptr;};
    void deletePhysicalNodes() { this->physicalNodes_ = nullptr;};
    inline const vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes> & physicalNodes() const { DARABONBA_PTR_GET_CONST(physicalNodes_, vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes>) };
    inline vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes> physicalNodes() { DARABONBA_PTR_GET(physicalNodes_, vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes>) };
    inline DescribeColumnarInfoResponseBodyDataInstanceTopologyList& setPhysicalNodes(const vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes> & physicalNodes) { DARABONBA_PTR_SET_VALUE(physicalNodes_, physicalNodes) };
    inline DescribeColumnarInfoResponseBodyDataInstanceTopologyList& setPhysicalNodes(vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes> && physicalNodes) { DARABONBA_PTR_SET_RVALUE(physicalNodes_, physicalNodes) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes>> physicalNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
