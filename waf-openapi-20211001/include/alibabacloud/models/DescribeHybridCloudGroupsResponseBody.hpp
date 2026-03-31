// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudGroupsResponseBody() = default ;
    DescribeHybridCloudGroupsResponseBody(const DescribeHybridCloudGroupsResponseBody &) = default ;
    DescribeHybridCloudGroupsResponseBody(DescribeHybridCloudGroupsResponseBody &&) = default ;
    DescribeHybridCloudGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudGroupsResponseBody() = default ;
    DescribeHybridCloudGroupsResponseBody& operator=(const DescribeHybridCloudGroupsResponseBody &) = default ;
    DescribeHybridCloudGroupsResponseBody& operator=(DescribeHybridCloudGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(BackSourceMark, backSourceMark_);
        DARABONBA_PTR_TO_JSON(ContinentsValue, continentsValue_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(GroupType, groupType_);
        DARABONBA_PTR_TO_JSON(LoadBalanceIp, loadBalanceIp_);
        DARABONBA_PTR_TO_JSON(LocationId, locationId_);
        DARABONBA_PTR_TO_JSON(OperatorValue, operatorValue_);
        DARABONBA_PTR_TO_JSON(Ports, ports_);
        DARABONBA_PTR_TO_JSON(RegionCodeValue, regionCodeValue_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(BackSourceMark, backSourceMark_);
        DARABONBA_PTR_FROM_JSON(ContinentsValue, continentsValue_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
        DARABONBA_PTR_FROM_JSON(LoadBalanceIp, loadBalanceIp_);
        DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
        DARABONBA_PTR_FROM_JSON(OperatorValue, operatorValue_);
        DARABONBA_PTR_FROM_JSON(Ports, ports_);
        DARABONBA_PTR_FROM_JSON(RegionCodeValue, regionCodeValue_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backSourceMark_ == nullptr
        && this->continentsValue_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->loadBalanceIp_ == nullptr
        && this->locationId_ == nullptr && this->operatorValue_ == nullptr && this->ports_ == nullptr && this->regionCodeValue_ == nullptr && this->remark_ == nullptr; };
      // backSourceMark Field Functions 
      bool hasBackSourceMark() const { return this->backSourceMark_ != nullptr;};
      void deleteBackSourceMark() { this->backSourceMark_ = nullptr;};
      inline string getBackSourceMark() const { DARABONBA_PTR_GET_DEFAULT(backSourceMark_, "") };
      inline Groups& setBackSourceMark(string backSourceMark) { DARABONBA_PTR_SET_VALUE(backSourceMark_, backSourceMark) };


      // continentsValue Field Functions 
      bool hasContinentsValue() const { return this->continentsValue_ != nullptr;};
      void deleteContinentsValue() { this->continentsValue_ = nullptr;};
      inline int32_t getContinentsValue() const { DARABONBA_PTR_GET_DEFAULT(continentsValue_, 0) };
      inline Groups& setContinentsValue(int32_t continentsValue) { DARABONBA_PTR_SET_VALUE(continentsValue_, continentsValue) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
      inline Groups& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Groups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupType Field Functions 
      bool hasGroupType() const { return this->groupType_ != nullptr;};
      void deleteGroupType() { this->groupType_ = nullptr;};
      inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
      inline Groups& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


      // loadBalanceIp Field Functions 
      bool hasLoadBalanceIp() const { return this->loadBalanceIp_ != nullptr;};
      void deleteLoadBalanceIp() { this->loadBalanceIp_ = nullptr;};
      inline string getLoadBalanceIp() const { DARABONBA_PTR_GET_DEFAULT(loadBalanceIp_, "") };
      inline Groups& setLoadBalanceIp(string loadBalanceIp) { DARABONBA_PTR_SET_VALUE(loadBalanceIp_, loadBalanceIp) };


      // locationId Field Functions 
      bool hasLocationId() const { return this->locationId_ != nullptr;};
      void deleteLocationId() { this->locationId_ = nullptr;};
      inline int64_t getLocationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, 0L) };
      inline Groups& setLocationId(int64_t locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


      // operatorValue Field Functions 
      bool hasOperatorValue() const { return this->operatorValue_ != nullptr;};
      void deleteOperatorValue() { this->operatorValue_ = nullptr;};
      inline int32_t getOperatorValue() const { DARABONBA_PTR_GET_DEFAULT(operatorValue_, 0) };
      inline Groups& setOperatorValue(int32_t operatorValue) { DARABONBA_PTR_SET_VALUE(operatorValue_, operatorValue) };


      // ports Field Functions 
      bool hasPorts() const { return this->ports_ != nullptr;};
      void deletePorts() { this->ports_ = nullptr;};
      inline string getPorts() const { DARABONBA_PTR_GET_DEFAULT(ports_, "") };
      inline Groups& setPorts(string ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };


      // regionCodeValue Field Functions 
      bool hasRegionCodeValue() const { return this->regionCodeValue_ != nullptr;};
      void deleteRegionCodeValue() { this->regionCodeValue_ = nullptr;};
      inline int32_t getRegionCodeValue() const { DARABONBA_PTR_GET_DEFAULT(regionCodeValue_, 0) };
      inline Groups& setRegionCodeValue(int32_t regionCodeValue) { DARABONBA_PTR_SET_VALUE(regionCodeValue_, regionCodeValue) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Groups& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // The back-to-origin mark of the protected cluster. The value is in the {ISP name}-{Continent name}-{City name}-{Back-to-origin identifier} format. The back-to-origin identifier is optional.
      // 
      // >  For more information about ISP names, continent names, city names, and back-to-origin identifiers, see the following sections.
      shared_ptr<string> backSourceMark_ {};
      // The continent code of the protected cluster.
      // 
      // >  For more information about continent codes, see Continent codes in this topic.
      shared_ptr<int32_t> continentsValue_ {};
      // The ID of the node group.
      shared_ptr<int32_t> groupId_ {};
      // The name of the node group.
      shared_ptr<string> groupName_ {};
      // The type of the node group. Valid values:
      // 
      // *   **protect**
      // *   **control**
      // *   **storage**
      // *   **controlStorage**
      shared_ptr<string> groupType_ {};
      // The IP address of the server used for load balancing.
      shared_ptr<string> loadBalanceIp_ {};
      // The ID of the protection node.
      shared_ptr<int64_t> locationId_ {};
      // The ISP code of the protected cluster.
      // 
      // >  For more information about ISP codes, see ISP codes in this topic.
      shared_ptr<int32_t> operatorValue_ {};
      // The port that is used by the hybrid cloud cluster. The value of this parameter is a string. If multiple ports are returned, the value is in the **port1,port2,port3** format.
      shared_ptr<string> ports_ {};
      // The city code of the protected cluster.
      // 
      // >  For more information about city codes, see City codes in this topic.
      shared_ptr<int32_t> regionCodeValue_ {};
      // The description of the node group.
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeHybridCloudGroupsResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeHybridCloudGroupsResponseBody::Groups>) };
    inline vector<DescribeHybridCloudGroupsResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<DescribeHybridCloudGroupsResponseBody::Groups>) };
    inline DescribeHybridCloudGroupsResponseBody& setGroups(const vector<DescribeHybridCloudGroupsResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeHybridCloudGroupsResponseBody& setGroups(vector<DescribeHybridCloudGroupsResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHybridCloudGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The node groups.
    shared_ptr<vector<DescribeHybridCloudGroupsResponseBody::Groups>> groups_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
