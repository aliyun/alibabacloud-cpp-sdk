// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEADDITIONALINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEADDITIONALINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EnableHighDensityMode, enableHighDensityMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableHighDensityMode, enableHighDensityMode_);
    };
    DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo(const DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo(DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo& operator=(const DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo& operator=(DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableHighDensityMode_ != nullptr; };
    // enableHighDensityMode Field Functions 
    bool hasEnableHighDensityMode() const { return this->enableHighDensityMode_ != nullptr;};
    void deleteEnableHighDensityMode() { this->enableHighDensityMode_ = nullptr;};
    inline bool enableHighDensityMode() const { DARABONBA_PTR_GET_DEFAULT(enableHighDensityMode_, false) };
    inline DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo& setEnableHighDensityMode(bool enableHighDensityMode) { DARABONBA_PTR_SET_VALUE(enableHighDensityMode_, enableHighDensityMode) };


  protected:
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<bool> enableHighDensityMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
