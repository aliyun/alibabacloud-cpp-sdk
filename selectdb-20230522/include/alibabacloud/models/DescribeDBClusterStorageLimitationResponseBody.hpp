// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSTORAGELIMITATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSTORAGELIMITATIONRESPONSEBODY_HPP_
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
  class DescribeDBClusterStorageLimitationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterStorageLimitationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterStorageLimitationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterStorageLimitationResponseBody() = default ;
    DescribeDBClusterStorageLimitationResponseBody(const DescribeDBClusterStorageLimitationResponseBody &) = default ;
    DescribeDBClusterStorageLimitationResponseBody(DescribeDBClusterStorageLimitationResponseBody &&) = default ;
    DescribeDBClusterStorageLimitationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterStorageLimitationResponseBody() = default ;
    DescribeDBClusterStorageLimitationResponseBody& operator=(const DescribeDBClusterStorageLimitationResponseBody &) = default ;
    DescribeDBClusterStorageLimitationResponseBody& operator=(DescribeDBClusterStorageLimitationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClassCodeList, classCodeList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClassCodeList, classCodeList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
        inline int32_t getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0) };
        inline ClassCodeList& setCpuCores(int32_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


        // defaultStorageInGB Field Functions 
        bool hasDefaultStorageInGB() const { return this->defaultStorageInGB_ != nullptr;};
        void deleteDefaultStorageInGB() { this->defaultStorageInGB_ = nullptr;};
        inline int32_t getDefaultStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(defaultStorageInGB_, 0) };
        inline ClassCodeList& setDefaultStorageInGB(int32_t defaultStorageInGB) { DARABONBA_PTR_SET_VALUE(defaultStorageInGB_, defaultStorageInGB) };


        // maxStorageInGB Field Functions 
        bool hasMaxStorageInGB() const { return this->maxStorageInGB_ != nullptr;};
        void deleteMaxStorageInGB() { this->maxStorageInGB_ = nullptr;};
        inline int32_t getMaxStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(maxStorageInGB_, 0) };
        inline ClassCodeList& setMaxStorageInGB(int32_t maxStorageInGB) { DARABONBA_PTR_SET_VALUE(maxStorageInGB_, maxStorageInGB) };


        // memoryInGB Field Functions 
        bool hasMemoryInGB() const { return this->memoryInGB_ != nullptr;};
        void deleteMemoryInGB() { this->memoryInGB_ = nullptr;};
        inline int32_t getMemoryInGB() const { DARABONBA_PTR_GET_DEFAULT(memoryInGB_, 0) };
        inline ClassCodeList& setMemoryInGB(int32_t memoryInGB) { DARABONBA_PTR_SET_VALUE(memoryInGB_, memoryInGB) };


        // minStorageInGB Field Functions 
        bool hasMinStorageInGB() const { return this->minStorageInGB_ != nullptr;};
        void deleteMinStorageInGB() { this->minStorageInGB_ = nullptr;};
        inline int32_t getMinStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(minStorageInGB_, 0) };
        inline ClassCodeList& setMinStorageInGB(int32_t minStorageInGB) { DARABONBA_PTR_SET_VALUE(minStorageInGB_, minStorageInGB) };


        // stepStorageInGB Field Functions 
        bool hasStepStorageInGB() const { return this->stepStorageInGB_ != nullptr;};
        void deleteStepStorageInGB() { this->stepStorageInGB_ = nullptr;};
        inline int32_t getStepStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(stepStorageInGB_, 0) };
        inline ClassCodeList& setStepStorageInGB(int32_t stepStorageInGB) { DARABONBA_PTR_SET_VALUE(stepStorageInGB_, stepStorageInGB) };


      protected:
        shared_ptr<string> classCode_ {};
        shared_ptr<int32_t> cpuCores_ {};
        shared_ptr<int32_t> defaultStorageInGB_ {};
        shared_ptr<int32_t> maxStorageInGB_ {};
        shared_ptr<int32_t> memoryInGB_ {};
        shared_ptr<int32_t> minStorageInGB_ {};
        shared_ptr<int32_t> stepStorageInGB_ {};
      };

      virtual bool empty() const override { return this->classCodeList_ == nullptr; };
      // classCodeList Field Functions 
      bool hasClassCodeList() const { return this->classCodeList_ != nullptr;};
      void deleteClassCodeList() { this->classCodeList_ = nullptr;};
      inline const vector<Data::ClassCodeList> & getClassCodeList() const { DARABONBA_PTR_GET_CONST(classCodeList_, vector<Data::ClassCodeList>) };
      inline vector<Data::ClassCodeList> getClassCodeList() { DARABONBA_PTR_GET(classCodeList_, vector<Data::ClassCodeList>) };
      inline Data& setClassCodeList(const vector<Data::ClassCodeList> & classCodeList) { DARABONBA_PTR_SET_VALUE(classCodeList_, classCodeList) };
      inline Data& setClassCodeList(vector<Data::ClassCodeList> && classCodeList) { DARABONBA_PTR_SET_RVALUE(classCodeList_, classCodeList) };


    protected:
      shared_ptr<vector<Data::ClassCodeList>> classCodeList_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeDBClusterStorageLimitationResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBClusterStorageLimitationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBClusterStorageLimitationResponseBody::Data) };
    inline DescribeDBClusterStorageLimitationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBClusterStorageLimitationResponseBody::Data) };
    inline DescribeDBClusterStorageLimitationResponseBody& setData(const DescribeDBClusterStorageLimitationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBClusterStorageLimitationResponseBody& setData(DescribeDBClusterStorageLimitationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeDBClusterStorageLimitationResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDBClusterStorageLimitationResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterStorageLimitationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<DescribeDBClusterStorageLimitationResponseBody::Data> data_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
