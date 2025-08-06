// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSFULLSTATUSRESPONSEBODYDISKFULLSTATUSSETDISKFULLSTATUSTYPESTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSFULLSTATUSRESPONSEBODYDISKFULLSTATUSSETDISKFULLSTATUSTYPESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus() = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus(const DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus &) = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus(DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus &&) = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus() = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus& operator=(const DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus &) = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus& operator=(DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The code of the lifecycle status of the EBS device.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The name of the lifecycle status of the EBS device.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
