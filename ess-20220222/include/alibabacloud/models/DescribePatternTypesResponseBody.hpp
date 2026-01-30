// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPATTERNTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPATTERNTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribePatternTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePatternTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PatternTypes, patternTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePatternTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PatternTypes, patternTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePatternTypesResponseBody() = default ;
    DescribePatternTypesResponseBody(const DescribePatternTypesResponseBody &) = default ;
    DescribePatternTypesResponseBody(DescribePatternTypesResponseBody &&) = default ;
    DescribePatternTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePatternTypesResponseBody() = default ;
    DescribePatternTypesResponseBody& operator=(const DescribePatternTypesResponseBody &) = default ;
    DescribePatternTypesResponseBody& operator=(DescribePatternTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PatternTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PatternTypes& obj) { 
        DARABONBA_PTR_TO_JSON(Cores, cores_);
        DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
      };
      friend void from_json(const Darabonba::Json& j, PatternTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(Cores, cores_);
        DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
      };
      PatternTypes() = default ;
      PatternTypes(const PatternTypes &) = default ;
      PatternTypes(PatternTypes &&) = default ;
      PatternTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PatternTypes() = default ;
      PatternTypes& operator=(const PatternTypes &) = default ;
      PatternTypes& operator=(PatternTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cores_ == nullptr
        && this->instanceFamilyLevel_ == nullptr && this->instanceType_ == nullptr && this->instanceTypeFamily_ == nullptr && this->memory_ == nullptr; };
      // cores Field Functions 
      bool hasCores() const { return this->cores_ != nullptr;};
      void deleteCores() { this->cores_ = nullptr;};
      inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
      inline PatternTypes& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


      // instanceFamilyLevel Field Functions 
      bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
      void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
      inline string getInstanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
      inline PatternTypes& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline PatternTypes& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // instanceTypeFamily Field Functions 
      bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
      void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
      inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
      inline PatternTypes& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
      inline PatternTypes& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    protected:
      // The number of vCPUs that are assigned to the instance type.
      shared_ptr<int32_t> cores_ {};
      // The level of the instance family.
      // 
      // *   EntryLevel: entry level (shared instance types) Instance types of this level are the most cost-effective but may not provide stable computing performance. Instance types of this level are suitable for business scenarios in which the CPU utilization is low. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
      // *   EnterpriseLevel: enterprise level. Instance types of this level provide stable performance and dedicated resources and are suitable for scenarios that require high stability. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
      // *   CreditEntryLevel: credit-based entry level (burstable instance types). CPU credits are used to ensure computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low but may fluctuate in specific cases. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
      shared_ptr<string> instanceFamilyLevel_ {};
      // The name of the instance type.
      shared_ptr<string> instanceType_ {};
      // The instance family.
      shared_ptr<string> instanceTypeFamily_ {};
      // The memory size that are assigned to the instance type. Unit: GiB.
      shared_ptr<float> memory_ {};
    };

    virtual bool empty() const override { return this->patternTypes_ == nullptr
        && this->requestId_ == nullptr; };
    // patternTypes Field Functions 
    bool hasPatternTypes() const { return this->patternTypes_ != nullptr;};
    void deletePatternTypes() { this->patternTypes_ = nullptr;};
    inline const vector<DescribePatternTypesResponseBody::PatternTypes> & getPatternTypes() const { DARABONBA_PTR_GET_CONST(patternTypes_, vector<DescribePatternTypesResponseBody::PatternTypes>) };
    inline vector<DescribePatternTypesResponseBody::PatternTypes> getPatternTypes() { DARABONBA_PTR_GET(patternTypes_, vector<DescribePatternTypesResponseBody::PatternTypes>) };
    inline DescribePatternTypesResponseBody& setPatternTypes(const vector<DescribePatternTypesResponseBody::PatternTypes> & patternTypes) { DARABONBA_PTR_SET_VALUE(patternTypes_, patternTypes) };
    inline DescribePatternTypesResponseBody& setPatternTypes(vector<DescribePatternTypesResponseBody::PatternTypes> && patternTypes) { DARABONBA_PTR_SET_RVALUE(patternTypes_, patternTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePatternTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance types that meet the specified requirements.
    shared_ptr<vector<DescribePatternTypesResponseBody::PatternTypes>> patternTypes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
