// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNARCLASSLISTRESPONSEBODYDATACLASSCODELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNARCLASSLISTRESPONSEBODYDATACLASSCODELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColumnarClassListResponseBodyDataClassCodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnarClassListResponseBodyDataClassCodeList& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(CpuCore, cpuCore_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnarClassListResponseBodyDataClassCodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(CpuCore, cpuCore_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
    };
    DescribeColumnarClassListResponseBodyDataClassCodeList() = default ;
    DescribeColumnarClassListResponseBodyDataClassCodeList(const DescribeColumnarClassListResponseBodyDataClassCodeList &) = default ;
    DescribeColumnarClassListResponseBodyDataClassCodeList(DescribeColumnarClassListResponseBodyDataClassCodeList &&) = default ;
    DescribeColumnarClassListResponseBodyDataClassCodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnarClassListResponseBodyDataClassCodeList() = default ;
    DescribeColumnarClassListResponseBodyDataClassCodeList& operator=(const DescribeColumnarClassListResponseBodyDataClassCodeList &) = default ;
    DescribeColumnarClassListResponseBodyDataClassCodeList& operator=(DescribeColumnarClassListResponseBodyDataClassCodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCode_ == nullptr
        && return this->cpuCore_ == nullptr && return this->mem_ == nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline DescribeColumnarClassListResponseBodyDataClassCodeList& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // cpuCore Field Functions 
    bool hasCpuCore() const { return this->cpuCore_ != nullptr;};
    void deleteCpuCore() { this->cpuCore_ = nullptr;};
    inline string cpuCore() const { DARABONBA_PTR_GET_DEFAULT(cpuCore_, "") };
    inline DescribeColumnarClassListResponseBodyDataClassCodeList& setCpuCore(string cpuCore) { DARABONBA_PTR_SET_VALUE(cpuCore_, cpuCore) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline string mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, "") };
    inline DescribeColumnarClassListResponseBodyDataClassCodeList& setMem(string mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


  protected:
    std::shared_ptr<string> classCode_ = nullptr;
    std::shared_ptr<string> cpuCore_ = nullptr;
    std::shared_ptr<string> mem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
