// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDCCLASSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDCCLASSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCdcClassListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdcClassListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdcClassListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdcClassListResponseBody() = default ;
    DescribeCdcClassListResponseBody(const DescribeCdcClassListResponseBody &) = default ;
    DescribeCdcClassListResponseBody(DescribeCdcClassListResponseBody &&) = default ;
    DescribeCdcClassListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdcClassListResponseBody() = default ;
    DescribeCdcClassListResponseBody& operator=(const DescribeCdcClassListResponseBody &) = default ;
    DescribeCdcClassListResponseBody& operator=(DescribeCdcClassListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CpuCore, cpuCore_);
          DARABONBA_PTR_TO_JSON(Mem, mem_);
        };
        friend void from_json(const Darabonba::Json& j, ClassCodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
          DARABONBA_PTR_FROM_JSON(CpuCore, cpuCore_);
          DARABONBA_PTR_FROM_JSON(Mem, mem_);
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
        && this->cpuCore_ == nullptr && this->mem_ == nullptr; };
        // classCode Field Functions 
        bool hasClassCode() const { return this->classCode_ != nullptr;};
        void deleteClassCode() { this->classCode_ = nullptr;};
        inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
        inline ClassCodeList& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


        // cpuCore Field Functions 
        bool hasCpuCore() const { return this->cpuCore_ != nullptr;};
        void deleteCpuCore() { this->cpuCore_ = nullptr;};
        inline string getCpuCore() const { DARABONBA_PTR_GET_DEFAULT(cpuCore_, "") };
        inline ClassCodeList& setCpuCore(string cpuCore) { DARABONBA_PTR_SET_VALUE(cpuCore_, cpuCore) };


        // mem Field Functions 
        bool hasMem() const { return this->mem_ != nullptr;};
        void deleteMem() { this->mem_ = nullptr;};
        inline string getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, "") };
        inline ClassCodeList& setMem(string mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


      protected:
        shared_ptr<string> classCode_ {};
        shared_ptr<string> cpuCore_ {};
        shared_ptr<string> mem_ {};
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
      // array
      shared_ptr<vector<Data::ClassCodeList>> classCodeList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCdcClassListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCdcClassListResponseBody::Data) };
    inline DescribeCdcClassListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCdcClassListResponseBody::Data) };
    inline DescribeCdcClassListResponseBody& setData(const DescribeCdcClassListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCdcClassListResponseBody& setData(DescribeCdcClassListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdcClassListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeCdcClassListResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
