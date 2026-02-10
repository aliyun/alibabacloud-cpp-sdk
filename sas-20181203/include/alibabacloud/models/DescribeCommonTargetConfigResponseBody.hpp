// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETCONFIGRESPONSEBODY_HPP_
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
  class DescribeCommonTargetConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonTargetConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonTargetConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
    };
    DescribeCommonTargetConfigResponseBody() = default ;
    DescribeCommonTargetConfigResponseBody(const DescribeCommonTargetConfigResponseBody &) = default ;
    DescribeCommonTargetConfigResponseBody(DescribeCommonTargetConfigResponseBody &&) = default ;
    DescribeCommonTargetConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonTargetConfigResponseBody() = default ;
    DescribeCommonTargetConfigResponseBody& operator=(const DescribeCommonTargetConfigResponseBody &) = default ;
    DescribeCommonTargetConfigResponseBody& operator=(DescribeCommonTargetConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TargetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetList& obj) { 
        DARABONBA_PTR_TO_JSON(Flag, flag_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, TargetList& obj) { 
        DARABONBA_PTR_FROM_JSON(Flag, flag_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      TargetList() = default ;
      TargetList(const TargetList &) = default ;
      TargetList(TargetList &&) = default ;
      TargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetList() = default ;
      TargetList& operator=(const TargetList &) = default ;
      TargetList& operator=(TargetList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flag_ == nullptr
        && this->target_ == nullptr && this->targetType_ == nullptr; };
      // flag Field Functions 
      bool hasFlag() const { return this->flag_ != nullptr;};
      void deleteFlag() { this->flag_ = nullptr;};
      inline string getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
      inline TargetList& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline TargetList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline TargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The mode in which the configuration takes effect. Valid values:
      // 
      // *   **add**: In this mode, the configuration takes effect on the assets.
      // *   **del**: In this mode, the configuration does not take effect on the assets.
      shared_ptr<string> flag_ {};
      // The ID of the asset on which the configuration takes effect.
      // 
      // > 
      // 
      // *   When you set the **TargetType** parameter to **uuid**, the value of this parameter indicates the UUID of an asset.
      // 
      // *   When you set the **TargetType** parameter to **Cluster**, the value of this parameter indicates the ID of a cluster.
      // 
      // *   When you set the **TargetType** parameter to **image_repo**, the value of this parameter indicates the ID of an image repository.
      shared_ptr<string> target_ {};
      // The dimension from on which the feature was configured. Valid values:
      // 
      // *   **uuid**: the UUID of the asset
      // *   **Cluster**: the ID of the cluster
      // *   **image_repo**: the ID of the image repository
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->targetList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonTargetConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<DescribeCommonTargetConfigResponseBody::TargetList> & getTargetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<DescribeCommonTargetConfigResponseBody::TargetList>) };
    inline vector<DescribeCommonTargetConfigResponseBody::TargetList> getTargetList() { DARABONBA_PTR_GET(targetList_, vector<DescribeCommonTargetConfigResponseBody::TargetList>) };
    inline DescribeCommonTargetConfigResponseBody& setTargetList(const vector<DescribeCommonTargetConfigResponseBody::TargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline DescribeCommonTargetConfigResponseBody& setTargetList(vector<DescribeCommonTargetConfigResponseBody::TargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the details of the configuration items.
    shared_ptr<vector<DescribeCommonTargetConfigResponseBody::TargetList>> targetList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
