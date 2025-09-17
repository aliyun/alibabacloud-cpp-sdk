// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSRESPONSEBODYWORKGROUPSWORKGROUPWARNINGSWARNING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSRESPONSEBODYWORKGROUPSWORKGROUPWARNINGSWARNING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning& obj) { 
      DARABONBA_PTR_TO_JSON(SourceIds, sourceIds_);
      DARABONBA_PTR_TO_JSON(WarningType, warningType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceIds, sourceIds_);
      DARABONBA_PTR_FROM_JSON(WarningType, warningType_);
    };
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning() = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning(const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning &) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning(DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning &&) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning() = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning& operator=(const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning &) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning& operator=(DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceIds_ != nullptr
        && this->warningType_ != nullptr; };
    // sourceIds Field Functions 
    bool hasSourceIds() const { return this->sourceIds_ != nullptr;};
    void deleteSourceIds() { this->sourceIds_ = nullptr;};
    inline const Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds & sourceIds() const { DARABONBA_PTR_GET_CONST(sourceIds_, Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds) };
    inline Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds sourceIds() { DARABONBA_PTR_GET(sourceIds_, Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds) };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning& setSourceIds(const Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds & sourceIds) { DARABONBA_PTR_SET_VALUE(sourceIds_, sourceIds) };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning& setSourceIds(Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds && sourceIds) { DARABONBA_PTR_SET_RVALUE(sourceIds_, sourceIds) };


    // warningType Field Functions 
    bool hasWarningType() const { return this->warningType_ != nullptr;};
    void deleteWarningType() { this->warningType_ = nullptr;};
    inline string warningType() const { DARABONBA_PTR_GET_DEFAULT(warningType_, "") };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning& setWarningType(string warningType) { DARABONBA_PTR_SET_VALUE(warningType_, warningType) };


  protected:
    // The migration sources for which alerts are generated.
    std::shared_ptr<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds> sourceIds_ = nullptr;
    // The type of the alert. Valid values:
    // 
    // *   InError: A migration job failed.
    // *   UnRelated: No migration job is created for a migration source.
    // *   NotPassed: A migration job failed to pass the migration test.
    std::shared_ptr<string> warningType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
