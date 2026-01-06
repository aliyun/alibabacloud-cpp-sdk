// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDBINSTANCECLASSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDBINSTANCECLASSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeAllDBInstanceClassResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDBInstanceClassResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCodeList, classCodeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDBInstanceClassResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCodeList, classCodeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllDBInstanceClassResponseBody() = default ;
    DescribeAllDBInstanceClassResponseBody(const DescribeAllDBInstanceClassResponseBody &) = default ;
    DescribeAllDBInstanceClassResponseBody(DescribeAllDBInstanceClassResponseBody &&) = default ;
    DescribeAllDBInstanceClassResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDBInstanceClassResponseBody() = default ;
    DescribeAllDBInstanceClassResponseBody& operator=(const DescribeAllDBInstanceClassResponseBody &) = default ;
    DescribeAllDBInstanceClassResponseBody& operator=(DescribeAllDBInstanceClassResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClassCodeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClassCodeList& obj) { 
        DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
        DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
        DARABONBA_PTR_TO_JSON(DefaultStorageInGB, defaultStorageInGB_);
        DARABONBA_PTR_TO_JSON(MaxStorageInGB, maxStorageInGB_);
        DARABONBA_PTR_TO_JSON(MemoryInGB, memoryInGB_);
        DARABONBA_PTR_TO_JSON(MinStorageInGB, minStorageInGB_);
        DARABONBA_PTR_TO_JSON(StepStorageInGB, stepStorageInGB_);
      };
      friend void from_json(const Darabonba::Json& j, ClassCodeList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
        DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
        DARABONBA_PTR_FROM_JSON(DefaultStorageInGB, defaultStorageInGB_);
        DARABONBA_PTR_FROM_JSON(MaxStorageInGB, maxStorageInGB_);
        DARABONBA_PTR_FROM_JSON(MemoryInGB, memoryInGB_);
        DARABONBA_PTR_FROM_JSON(MinStorageInGB, minStorageInGB_);
        DARABONBA_PTR_FROM_JSON(StepStorageInGB, stepStorageInGB_);
      };
      ClassCodeList() = default ;
      ClassCodeList(const ClassCodeList &) = default ;
      ClassCodeList(ClassCodeList &&) = default ;
      ClassCodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClassCodeList() = default ;
      ClassCodeList& operator=(const ClassCodeList &) = default ;
      ClassCodeList& operator=(ClassCodeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->classCode_ == nullptr
        && this->cpuCores_ == nullptr && this->defaultStorageInGB_ == nullptr && this->maxStorageInGB_ == nullptr && this->memoryInGB_ == nullptr && this->minStorageInGB_ == nullptr
        && this->stepStorageInGB_ == nullptr; };
      // classCode Field Functions 
      bool hasClassCode() const { return this->classCode_ != nullptr;};
      void deleteClassCode() { this->classCode_ = nullptr;};
      inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
      inline ClassCodeList& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


      // cpuCores Field Functions 
      bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
      void deleteCpuCores() { this->cpuCores_ = nullptr;};
      inline int64_t getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0L) };
      inline ClassCodeList& setCpuCores(int64_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


      // defaultStorageInGB Field Functions 
      bool hasDefaultStorageInGB() const { return this->defaultStorageInGB_ != nullptr;};
      void deleteDefaultStorageInGB() { this->defaultStorageInGB_ = nullptr;};
      inline int64_t getDefaultStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(defaultStorageInGB_, 0L) };
      inline ClassCodeList& setDefaultStorageInGB(int64_t defaultStorageInGB) { DARABONBA_PTR_SET_VALUE(defaultStorageInGB_, defaultStorageInGB) };


      // maxStorageInGB Field Functions 
      bool hasMaxStorageInGB() const { return this->maxStorageInGB_ != nullptr;};
      void deleteMaxStorageInGB() { this->maxStorageInGB_ = nullptr;};
      inline int64_t getMaxStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(maxStorageInGB_, 0L) };
      inline ClassCodeList& setMaxStorageInGB(int64_t maxStorageInGB) { DARABONBA_PTR_SET_VALUE(maxStorageInGB_, maxStorageInGB) };


      // memoryInGB Field Functions 
      bool hasMemoryInGB() const { return this->memoryInGB_ != nullptr;};
      void deleteMemoryInGB() { this->memoryInGB_ = nullptr;};
      inline int64_t getMemoryInGB() const { DARABONBA_PTR_GET_DEFAULT(memoryInGB_, 0L) };
      inline ClassCodeList& setMemoryInGB(int64_t memoryInGB) { DARABONBA_PTR_SET_VALUE(memoryInGB_, memoryInGB) };


      // minStorageInGB Field Functions 
      bool hasMinStorageInGB() const { return this->minStorageInGB_ != nullptr;};
      void deleteMinStorageInGB() { this->minStorageInGB_ = nullptr;};
      inline int64_t getMinStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(minStorageInGB_, 0L) };
      inline ClassCodeList& setMinStorageInGB(int64_t minStorageInGB) { DARABONBA_PTR_SET_VALUE(minStorageInGB_, minStorageInGB) };


      // stepStorageInGB Field Functions 
      bool hasStepStorageInGB() const { return this->stepStorageInGB_ != nullptr;};
      void deleteStepStorageInGB() { this->stepStorageInGB_ = nullptr;};
      inline int64_t getStepStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(stepStorageInGB_, 0L) };
      inline ClassCodeList& setStepStorageInGB(int64_t stepStorageInGB) { DARABONBA_PTR_SET_VALUE(stepStorageInGB_, stepStorageInGB) };


    protected:
      shared_ptr<string> classCode_ {};
      shared_ptr<int64_t> cpuCores_ {};
      shared_ptr<int64_t> defaultStorageInGB_ {};
      shared_ptr<int64_t> maxStorageInGB_ {};
      // The memory size.
      shared_ptr<int64_t> memoryInGB_ {};
      shared_ptr<int64_t> minStorageInGB_ {};
      shared_ptr<int64_t> stepStorageInGB_ {};
    };

    virtual bool empty() const override { return this->classCodeList_ == nullptr
        && this->requestId_ == nullptr; };
    // classCodeList Field Functions 
    bool hasClassCodeList() const { return this->classCodeList_ != nullptr;};
    void deleteClassCodeList() { this->classCodeList_ = nullptr;};
    inline const vector<DescribeAllDBInstanceClassResponseBody::ClassCodeList> & getClassCodeList() const { DARABONBA_PTR_GET_CONST(classCodeList_, vector<DescribeAllDBInstanceClassResponseBody::ClassCodeList>) };
    inline vector<DescribeAllDBInstanceClassResponseBody::ClassCodeList> getClassCodeList() { DARABONBA_PTR_GET(classCodeList_, vector<DescribeAllDBInstanceClassResponseBody::ClassCodeList>) };
    inline DescribeAllDBInstanceClassResponseBody& setClassCodeList(const vector<DescribeAllDBInstanceClassResponseBody::ClassCodeList> & classCodeList) { DARABONBA_PTR_SET_VALUE(classCodeList_, classCodeList) };
    inline DescribeAllDBInstanceClassResponseBody& setClassCodeList(vector<DescribeAllDBInstanceClassResponseBody::ClassCodeList> && classCodeList) { DARABONBA_PTR_SET_RVALUE(classCodeList_, classCodeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllDBInstanceClassResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance specifications.
    shared_ptr<vector<DescribeAllDBInstanceClassResponseBody::ClassCodeList>> classCodeList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
