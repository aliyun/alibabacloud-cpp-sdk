// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKRECORDSRESPONSEBODYRECORDLISTTARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKRECORDSRESPONSEBODYRECORDLISTTARGETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomBlockRecordsResponseBodyRecordListTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomBlockRecordsResponseBodyRecordListTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomBlockRecordsResponseBodyRecordListTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeCustomBlockRecordsResponseBodyRecordListTargetList() = default ;
    DescribeCustomBlockRecordsResponseBodyRecordListTargetList(const DescribeCustomBlockRecordsResponseBodyRecordListTargetList &) = default ;
    DescribeCustomBlockRecordsResponseBodyRecordListTargetList(DescribeCustomBlockRecordsResponseBodyRecordListTargetList &&) = default ;
    DescribeCustomBlockRecordsResponseBodyRecordListTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomBlockRecordsResponseBodyRecordListTargetList() = default ;
    DescribeCustomBlockRecordsResponseBodyRecordListTargetList& operator=(const DescribeCustomBlockRecordsResponseBodyRecordListTargetList &) = default ;
    DescribeCustomBlockRecordsResponseBodyRecordListTargetList& operator=(DescribeCustomBlockRecordsResponseBodyRecordListTargetList &&) = default ;
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
    inline DescribeCustomBlockRecordsResponseBodyRecordListTargetList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeCustomBlockRecordsResponseBodyRecordListTargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the destination asset.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the query. Valid values:
    // 
    // *   Set the value to **uuid**.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
