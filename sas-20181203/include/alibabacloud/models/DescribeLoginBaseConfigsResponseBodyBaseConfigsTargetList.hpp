// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGINBASECONFIGSRESPONSEBODYBASECONFIGSTARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGINBASECONFIGSRESPONSEBODYBASECONFIGSTARGETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList() = default ;
    DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList(const DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList &) = default ;
    DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList(DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList &&) = default ;
    DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList() = default ;
    DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList& operator=(const DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList &) = default ;
    DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList& operator=(DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->target_ != nullptr
        && this->targetType_ != nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The UUID or group ID of the server.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the server to which the configuration is applied. Valid values:
    // 
    // *   **uuid**: a server
    // *   **groupId**: a server group
    // *   **global**: all servers
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
