// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERINFOLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERINFOLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterInfoListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterInfoListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterInfoListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeClusterInfoListRequest() = default ;
    DescribeClusterInfoListRequest(const DescribeClusterInfoListRequest &) = default ;
    DescribeClusterInfoListRequest(DescribeClusterInfoListRequest &&) = default ;
    DescribeClusterInfoListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterInfoListRequest() = default ;
    DescribeClusterInfoListRequest& operator=(const DescribeClusterInfoListRequest &) = default ;
    DescribeClusterInfoListRequest& operator=(DescribeClusterInfoListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->target_ == nullptr
        && this->targetType_ == nullptr && this->type_ == nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeClusterInfoListRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeClusterInfoListRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeClusterInfoListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The operation value. The value specifies the ID of the cluster.
    shared_ptr<string> target_ {};
    // The dimension based on which you want to configure the feature. Valid values:
    // 
    // *   **Cluster**: the ID of the cluster
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // The type of the feature. Valid values:
    // 
    // *   **containerNetwork**: container network
    // *   **interceptionSwitch**: cluster microsegmentation
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
