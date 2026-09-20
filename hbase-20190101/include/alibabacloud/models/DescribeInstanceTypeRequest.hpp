// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeInstanceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    DescribeInstanceTypeRequest() = default ;
    DescribeInstanceTypeRequest(const DescribeInstanceTypeRequest &) = default ;
    DescribeInstanceTypeRequest(DescribeInstanceTypeRequest &&) = default ;
    DescribeInstanceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypeRequest() = default ;
    DescribeInstanceTypeRequest& operator=(const DescribeInstanceTypeRequest &) = default ;
    DescribeInstanceTypeRequest& operator=(DescribeInstanceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstanceTypeRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The instance specification name. For more information, see [Instance node specifications](https://help.aliyun.com/document_detail/194870.html).
    // > If InstanceType is left empty, all instance specifications are returned.
    shared_ptr<string> instanceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
