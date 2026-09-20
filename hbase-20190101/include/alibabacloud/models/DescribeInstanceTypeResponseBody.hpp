// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeInstanceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypeSpecList, instanceTypeSpecList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypeSpecList, instanceTypeSpecList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceTypeResponseBody() = default ;
    DescribeInstanceTypeResponseBody(const DescribeInstanceTypeResponseBody &) = default ;
    DescribeInstanceTypeResponseBody(DescribeInstanceTypeResponseBody &&) = default ;
    DescribeInstanceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypeResponseBody() = default ;
    DescribeInstanceTypeResponseBody& operator=(const DescribeInstanceTypeResponseBody &) = default ;
    DescribeInstanceTypeResponseBody& operator=(DescribeInstanceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceTypeSpecList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceTypeSpecList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceTypeSpec, instanceTypeSpec_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceTypeSpecList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceTypeSpec, instanceTypeSpec_);
      };
      InstanceTypeSpecList() = default ;
      InstanceTypeSpecList(const InstanceTypeSpecList &) = default ;
      InstanceTypeSpecList(InstanceTypeSpecList &&) = default ;
      InstanceTypeSpecList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceTypeSpecList() = default ;
      InstanceTypeSpecList& operator=(const InstanceTypeSpecList &) = default ;
      InstanceTypeSpecList& operator=(InstanceTypeSpecList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceTypeSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceTypeSpec& obj) { 
          DARABONBA_PTR_TO_JSON(CpuSize, cpuSize_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(MemSize, memSize_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceTypeSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(CpuSize, cpuSize_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(MemSize, memSize_);
        };
        InstanceTypeSpec() = default ;
        InstanceTypeSpec(const InstanceTypeSpec &) = default ;
        InstanceTypeSpec(InstanceTypeSpec &&) = default ;
        InstanceTypeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceTypeSpec() = default ;
        InstanceTypeSpec& operator=(const InstanceTypeSpec &) = default ;
        InstanceTypeSpec& operator=(InstanceTypeSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpuSize_ == nullptr
        && this->instanceType_ == nullptr && this->memSize_ == nullptr; };
        // cpuSize Field Functions 
        bool hasCpuSize() const { return this->cpuSize_ != nullptr;};
        void deleteCpuSize() { this->cpuSize_ = nullptr;};
        inline int64_t getCpuSize() const { DARABONBA_PTR_GET_DEFAULT(cpuSize_, 0L) };
        inline InstanceTypeSpec& setCpuSize(int64_t cpuSize) { DARABONBA_PTR_SET_VALUE(cpuSize_, cpuSize) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline InstanceTypeSpec& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // memSize Field Functions 
        bool hasMemSize() const { return this->memSize_ != nullptr;};
        void deleteMemSize() { this->memSize_ = nullptr;};
        inline int64_t getMemSize() const { DARABONBA_PTR_GET_DEFAULT(memSize_, 0L) };
        inline InstanceTypeSpec& setMemSize(int64_t memSize) { DARABONBA_PTR_SET_VALUE(memSize_, memSize) };


      protected:
        shared_ptr<int64_t> cpuSize_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<int64_t> memSize_ {};
      };

      virtual bool empty() const override { return this->instanceTypeSpec_ == nullptr; };
      // instanceTypeSpec Field Functions 
      bool hasInstanceTypeSpec() const { return this->instanceTypeSpec_ != nullptr;};
      void deleteInstanceTypeSpec() { this->instanceTypeSpec_ = nullptr;};
      inline const vector<InstanceTypeSpecList::InstanceTypeSpec> & getInstanceTypeSpec() const { DARABONBA_PTR_GET_CONST(instanceTypeSpec_, vector<InstanceTypeSpecList::InstanceTypeSpec>) };
      inline vector<InstanceTypeSpecList::InstanceTypeSpec> getInstanceTypeSpec() { DARABONBA_PTR_GET(instanceTypeSpec_, vector<InstanceTypeSpecList::InstanceTypeSpec>) };
      inline InstanceTypeSpecList& setInstanceTypeSpec(const vector<InstanceTypeSpecList::InstanceTypeSpec> & instanceTypeSpec) { DARABONBA_PTR_SET_VALUE(instanceTypeSpec_, instanceTypeSpec) };
      inline InstanceTypeSpecList& setInstanceTypeSpec(vector<InstanceTypeSpecList::InstanceTypeSpec> && instanceTypeSpec) { DARABONBA_PTR_SET_RVALUE(instanceTypeSpec_, instanceTypeSpec) };


    protected:
      shared_ptr<vector<InstanceTypeSpecList::InstanceTypeSpec>> instanceTypeSpec_ {};
    };

    virtual bool empty() const override { return this->instanceTypeSpecList_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceTypeSpecList Field Functions 
    bool hasInstanceTypeSpecList() const { return this->instanceTypeSpecList_ != nullptr;};
    void deleteInstanceTypeSpecList() { this->instanceTypeSpecList_ = nullptr;};
    inline const DescribeInstanceTypeResponseBody::InstanceTypeSpecList & getInstanceTypeSpecList() const { DARABONBA_PTR_GET_CONST(instanceTypeSpecList_, DescribeInstanceTypeResponseBody::InstanceTypeSpecList) };
    inline DescribeInstanceTypeResponseBody::InstanceTypeSpecList getInstanceTypeSpecList() { DARABONBA_PTR_GET(instanceTypeSpecList_, DescribeInstanceTypeResponseBody::InstanceTypeSpecList) };
    inline DescribeInstanceTypeResponseBody& setInstanceTypeSpecList(const DescribeInstanceTypeResponseBody::InstanceTypeSpecList & instanceTypeSpecList) { DARABONBA_PTR_SET_VALUE(instanceTypeSpecList_, instanceTypeSpecList) };
    inline DescribeInstanceTypeResponseBody& setInstanceTypeSpecList(DescribeInstanceTypeResponseBody::InstanceTypeSpecList && instanceTypeSpecList) { DARABONBA_PTR_SET_RVALUE(instanceTypeSpecList_, instanceTypeSpecList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeInstanceTypeResponseBody::InstanceTypeSpecList> instanceTypeSpecList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
