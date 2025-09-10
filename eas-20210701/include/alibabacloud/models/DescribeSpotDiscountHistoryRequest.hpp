// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTDISCOUNTHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTDISCOUNTHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeSpotDiscountHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotDiscountHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IsProtect, isProtect_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotDiscountHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IsProtect, isProtect_);
    };
    DescribeSpotDiscountHistoryRequest() = default ;
    DescribeSpotDiscountHistoryRequest(const DescribeSpotDiscountHistoryRequest &) = default ;
    DescribeSpotDiscountHistoryRequest(DescribeSpotDiscountHistoryRequest &&) = default ;
    DescribeSpotDiscountHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotDiscountHistoryRequest() = default ;
    DescribeSpotDiscountHistoryRequest& operator=(const DescribeSpotDiscountHistoryRequest &) = default ;
    DescribeSpotDiscountHistoryRequest& operator=(DescribeSpotDiscountHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->isProtect_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeSpotDiscountHistoryRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isProtect Field Functions 
    bool hasIsProtect() const { return this->isProtect_ != nullptr;};
    void deleteIsProtect() { this->isProtect_ = nullptr;};
    inline bool isProtect() const { DARABONBA_PTR_GET_DEFAULT(isProtect_, false) };
    inline DescribeSpotDiscountHistoryRequest& setIsProtect(bool isProtect) { DARABONBA_PTR_SET_VALUE(isProtect_, isProtect) };


  protected:
    // The type of the Elastic Algorithm Service (EAS) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Specifies whether the preemptible instance has a protection period. During the 1-hour protection period of the preemptible instance, the preemptible instance will not be released.
    std::shared_ptr<bool> isProtect_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
