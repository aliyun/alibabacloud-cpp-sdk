// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBPATHRESPONSEBODYCONFIGLISTTARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBPATHRESPONSEBODYCONFIGLISTTARGETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebPathResponseBodyConfigListTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebPathResponseBodyConfigListTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebPathResponseBodyConfigListTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeWebPathResponseBodyConfigListTargetList() = default ;
    DescribeWebPathResponseBodyConfigListTargetList(const DescribeWebPathResponseBodyConfigListTargetList &) = default ;
    DescribeWebPathResponseBodyConfigListTargetList(DescribeWebPathResponseBodyConfigListTargetList &&) = default ;
    DescribeWebPathResponseBodyConfigListTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebPathResponseBodyConfigListTargetList() = default ;
    DescribeWebPathResponseBodyConfigListTargetList& operator=(const DescribeWebPathResponseBodyConfigListTargetList &) = default ;
    DescribeWebPathResponseBodyConfigListTargetList& operator=(DescribeWebPathResponseBodyConfigListTargetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->target_ == nullptr
        && return this->targetType_ == nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeWebPathResponseBodyConfigListTargetList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeWebPathResponseBodyConfigListTargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The object.
    std::shared_ptr<string> target_ = nullptr;
    // The object type. Valid values:
    // 
    // *   **uuid**
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
