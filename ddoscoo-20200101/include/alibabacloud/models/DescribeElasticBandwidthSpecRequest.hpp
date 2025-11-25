// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICBANDWIDTHSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICBANDWIDTHSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeElasticBandwidthSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticBandwidthSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticBandwidthSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeElasticBandwidthSpecRequest() = default ;
    DescribeElasticBandwidthSpecRequest(const DescribeElasticBandwidthSpecRequest &) = default ;
    DescribeElasticBandwidthSpecRequest(DescribeElasticBandwidthSpecRequest &&) = default ;
    DescribeElasticBandwidthSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticBandwidthSpecRequest() = default ;
    DescribeElasticBandwidthSpecRequest& operator=(const DescribeElasticBandwidthSpecRequest &) = default ;
    DescribeElasticBandwidthSpecRequest& operator=(DescribeElasticBandwidthSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeElasticBandwidthSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
