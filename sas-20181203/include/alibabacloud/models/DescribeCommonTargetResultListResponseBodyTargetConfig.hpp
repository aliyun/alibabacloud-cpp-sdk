// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETRESULTLISTRESPONSEBODYTARGETCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETRESULTLISTRESPONSEBODYTARGETCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCommonTargetResultListResponseBodyTargetConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonTargetResultListResponseBodyTargetConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(TargetDefault, targetDefault_);
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonTargetResultListResponseBodyTargetConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(TargetDefault, targetDefault_);
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCommonTargetResultListResponseBodyTargetConfig() = default ;
    DescribeCommonTargetResultListResponseBodyTargetConfig(const DescribeCommonTargetResultListResponseBodyTargetConfig &) = default ;
    DescribeCommonTargetResultListResponseBodyTargetConfig(DescribeCommonTargetResultListResponseBodyTargetConfig &&) = default ;
    DescribeCommonTargetResultListResponseBodyTargetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonTargetResultListResponseBodyTargetConfig() = default ;
    DescribeCommonTargetResultListResponseBodyTargetConfig& operator=(const DescribeCommonTargetResultListResponseBodyTargetConfig &) = default ;
    DescribeCommonTargetResultListResponseBodyTargetConfig& operator=(DescribeCommonTargetResultListResponseBodyTargetConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flag_ != nullptr
        && this->targetDefault_ != nullptr && this->targetList_ != nullptr && this->targetType_ != nullptr && this->totalCount_ != nullptr && this->type_ != nullptr; };
    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline string flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
    inline DescribeCommonTargetResultListResponseBodyTargetConfig& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // targetDefault Field Functions 
    bool hasTargetDefault() const { return this->targetDefault_ != nullptr;};
    void deleteTargetDefault() { this->targetDefault_ = nullptr;};
    inline string targetDefault() const { DARABONBA_PTR_GET_DEFAULT(targetDefault_, "") };
    inline DescribeCommonTargetResultListResponseBodyTargetConfig& setTargetDefault(string targetDefault) { DARABONBA_PTR_SET_VALUE(targetDefault_, targetDefault) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<string> & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<string>) };
    inline vector<string> targetList() { DARABONBA_PTR_GET(targetList_, vector<string>) };
    inline DescribeCommonTargetResultListResponseBodyTargetConfig& setTargetList(const vector<string> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline DescribeCommonTargetResultListResponseBodyTargetConfig& setTargetList(vector<string> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeCommonTargetResultListResponseBodyTargetConfig& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeCommonTargetResultListResponseBodyTargetConfig& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCommonTargetResultListResponseBodyTargetConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The identifier that indicates whether the configuration item is applied to the server. Valid values:
    // 
    // *   **add**: applied
    // *   **del**: not applied
    std::shared_ptr<string> flag_ = nullptr;
    // The default identifier.
    std::shared_ptr<string> targetDefault_ = nullptr;
    // An array that consists of the IDs of the server groups or the UUIDs of the servers.
    // 
    // >  If **uuid** is returned for the **TargetType** parameter, **UUIDs** of the servers are returned. If **groupId** is returned for the **TargetType** parameter, IDs of the server groups are returned.
    std::shared_ptr<vector<string>> targetList_ = nullptr;
    // The type of the server to which the configuration item is applied. Valid values:
    // 
    // *   **uuid**: a server
    // *   **groupId**: a server group
    std::shared_ptr<string> targetType_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
    // The type of the configuration item. Valid values:
    // 
    // *   **webshell_timescan**: webshell detection and removal
    // *   **aliscriptengine**: in-depth detection engine
    // *   **alidetect**: installation scope of local file detection
    // *   **alidetect-scan-enable**: detection scope of local file detection
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
