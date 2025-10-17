// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODYSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODYSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint() = default ;
    DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint(const DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint &) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint(DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint &&) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint() = default ;
    DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint& operator=(const DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint &) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint& operator=(DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceID_ == nullptr
        && return this->instanceType_ == nullptr; };
    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The ID of the instance that hosts the source database.
    std::shared_ptr<string> instanceID_ = nullptr;
    // The instance type of the source database.
    // 
    // >  This parameter is returned only for change tracking instances of the new version.
    std::shared_ptr<string> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
