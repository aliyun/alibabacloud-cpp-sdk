// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETENANTBINDNUMBERRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETENANTBINDNUMBERRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeTenantBindNumberResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTenantBindNumberResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsBinding, isBinding_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTenantBindNumberResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsBinding, isBinding_);
    };
    DescribeTenantBindNumberResponseBodyDataList() = default ;
    DescribeTenantBindNumberResponseBodyDataList(const DescribeTenantBindNumberResponseBodyDataList &) = default ;
    DescribeTenantBindNumberResponseBodyDataList(DescribeTenantBindNumberResponseBodyDataList &&) = default ;
    DescribeTenantBindNumberResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTenantBindNumberResponseBodyDataList() = default ;
    DescribeTenantBindNumberResponseBodyDataList& operator=(const DescribeTenantBindNumberResponseBodyDataList &) = default ;
    DescribeTenantBindNumberResponseBodyDataList& operator=(DescribeTenantBindNumberResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->isBinding_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTenantBindNumberResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeTenantBindNumberResponseBodyDataList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isBinding Field Functions 
    bool hasIsBinding() const { return this->isBinding_ != nullptr;};
    void deleteIsBinding() { this->isBinding_ = nullptr;};
    inline bool isBinding() const { DARABONBA_PTR_GET_DEFAULT(isBinding_, false) };
    inline DescribeTenantBindNumberResponseBodyDataList& setIsBinding(bool isBinding) { DARABONBA_PTR_SET_VALUE(isBinding_, isBinding) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<bool> isBinding_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
