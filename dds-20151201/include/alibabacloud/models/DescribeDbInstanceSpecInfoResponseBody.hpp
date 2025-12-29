// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESPECINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESPECINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeDBInstanceSpecInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceSpecInfoResponseBody() = default ;
    DescribeDBInstanceSpecInfoResponseBody(const DescribeDBInstanceSpecInfoResponseBody &) = default ;
    DescribeDBInstanceSpecInfoResponseBody(DescribeDBInstanceSpecInfoResponseBody &&) = default ;
    DescribeDBInstanceSpecInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSpecInfoResponseBody() = default ;
    DescribeDBInstanceSpecInfoResponseBody& operator=(const DescribeDBInstanceSpecInfoResponseBody &) = default ;
    DescribeDBInstanceSpecInfoResponseBody& operator=(DescribeDBInstanceSpecInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && this->description_ == nullptr && this->memory_ == nullptr && this->requestId_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline DescribeDBInstanceSpecInfoResponseBody& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstanceSpecInfoResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline DescribeDBInstanceSpecInfoResponseBody& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceSpecInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> CPU_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> memory_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
