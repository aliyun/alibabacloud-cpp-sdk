// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceAutoRenewAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAutoRenewAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAutoRenewAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DescribeInstanceAutoRenewAttributeRequest() = default ;
    DescribeInstanceAutoRenewAttributeRequest(const DescribeInstanceAutoRenewAttributeRequest &) = default ;
    DescribeInstanceAutoRenewAttributeRequest(DescribeInstanceAutoRenewAttributeRequest &&) = default ;
    DescribeInstanceAutoRenewAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAutoRenewAttributeRequest() = default ;
    DescribeInstanceAutoRenewAttributeRequest& operator=(const DescribeInstanceAutoRenewAttributeRequest &) = default ;
    DescribeInstanceAutoRenewAttributeRequest& operator=(DescribeInstanceAutoRenewAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->ownerId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeInstanceAutoRenewAttributeRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeInstanceAutoRenewAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The ID of an instance. Separate multiple IDs with semicolons (;).
    // 
    // This parameter is required.
    shared_ptr<string> instanceIds_ {};
    shared_ptr<int64_t> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
