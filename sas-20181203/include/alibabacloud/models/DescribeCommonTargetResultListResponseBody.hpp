// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETRESULTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETRESULTLISTRESPONSEBODY_HPP_
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
  class DescribeCommonTargetResultListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonTargetResultListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetConfig, targetConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonTargetResultListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetConfig, targetConfig_);
    };
    DescribeCommonTargetResultListResponseBody() = default ;
    DescribeCommonTargetResultListResponseBody(const DescribeCommonTargetResultListResponseBody &) = default ;
    DescribeCommonTargetResultListResponseBody(DescribeCommonTargetResultListResponseBody &&) = default ;
    DescribeCommonTargetResultListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonTargetResultListResponseBody() = default ;
    DescribeCommonTargetResultListResponseBody& operator=(const DescribeCommonTargetResultListResponseBody &) = default ;
    DescribeCommonTargetResultListResponseBody& operator=(DescribeCommonTargetResultListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TargetConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Flag, flag_);
        DARABONBA_PTR_TO_JSON(TargetDefault, targetDefault_);
        DARABONBA_PTR_TO_JSON(TargetList, targetList_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, TargetConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Flag, flag_);
        DARABONBA_PTR_FROM_JSON(TargetDefault, targetDefault_);
        DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      TargetConfig() = default ;
      TargetConfig(const TargetConfig &) = default ;
      TargetConfig(TargetConfig &&) = default ;
      TargetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetConfig() = default ;
      TargetConfig& operator=(const TargetConfig &) = default ;
      TargetConfig& operator=(TargetConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flag_ == nullptr
        && this->targetDefault_ == nullptr && this->targetList_ == nullptr && this->targetType_ == nullptr && this->totalCount_ == nullptr && this->type_ == nullptr; };
      // flag Field Functions 
      bool hasFlag() const { return this->flag_ != nullptr;};
      void deleteFlag() { this->flag_ = nullptr;};
      inline string getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
      inline TargetConfig& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


      // targetDefault Field Functions 
      bool hasTargetDefault() const { return this->targetDefault_ != nullptr;};
      void deleteTargetDefault() { this->targetDefault_ = nullptr;};
      inline string getTargetDefault() const { DARABONBA_PTR_GET_DEFAULT(targetDefault_, "") };
      inline TargetConfig& setTargetDefault(string targetDefault) { DARABONBA_PTR_SET_VALUE(targetDefault_, targetDefault) };


      // targetList Field Functions 
      bool hasTargetList() const { return this->targetList_ != nullptr;};
      void deleteTargetList() { this->targetList_ = nullptr;};
      inline const vector<string> & getTargetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<string>) };
      inline vector<string> getTargetList() { DARABONBA_PTR_GET(targetList_, vector<string>) };
      inline TargetConfig& setTargetList(const vector<string> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
      inline TargetConfig& setTargetList(vector<string> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline TargetConfig& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline TargetConfig& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TargetConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The identifier that indicates whether the configuration item is applied to the server. Valid values:
      // 
      // *   **add**: applied
      // *   **del**: not applied
      shared_ptr<string> flag_ {};
      // The default identifier.
      shared_ptr<string> targetDefault_ {};
      // An array that consists of the IDs of the server groups or the UUIDs of the servers.
      // 
      // >  If **uuid** is returned for the **TargetType** parameter, **UUIDs** of the servers are returned. If **groupId** is returned for the **TargetType** parameter, IDs of the server groups are returned.
      shared_ptr<vector<string>> targetList_ {};
      // The type of the server to which the configuration item is applied. Valid values:
      // 
      // *   **uuid**: a server
      // *   **groupId**: a server group
      shared_ptr<string> targetType_ {};
      // The total number of entries returned.
      shared_ptr<string> totalCount_ {};
      // The type of the configuration item. Valid values:
      // 
      // *   **webshell_timescan**: webshell detection and removal
      // *   **aliscriptengine**: in-depth detection engine
      // *   **alidetect**: installation scope of local file detection
      // *   **alidetect-scan-enable**: detection scope of local file detection
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->targetConfig_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonTargetResultListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetConfig Field Functions 
    bool hasTargetConfig() const { return this->targetConfig_ != nullptr;};
    void deleteTargetConfig() { this->targetConfig_ = nullptr;};
    inline const DescribeCommonTargetResultListResponseBody::TargetConfig & getTargetConfig() const { DARABONBA_PTR_GET_CONST(targetConfig_, DescribeCommonTargetResultListResponseBody::TargetConfig) };
    inline DescribeCommonTargetResultListResponseBody::TargetConfig getTargetConfig() { DARABONBA_PTR_GET(targetConfig_, DescribeCommonTargetResultListResponseBody::TargetConfig) };
    inline DescribeCommonTargetResultListResponseBody& setTargetConfig(const DescribeCommonTargetResultListResponseBody::TargetConfig & targetConfig) { DARABONBA_PTR_SET_VALUE(targetConfig_, targetConfig) };
    inline DescribeCommonTargetResultListResponseBody& setTargetConfig(DescribeCommonTargetResultListResponseBody::TargetConfig && targetConfig) { DARABONBA_PTR_SET_RVALUE(targetConfig_, targetConfig) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The information about the configuration item.
    shared_ptr<DescribeCommonTargetResultListResponseBody::TargetConfig> targetConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
