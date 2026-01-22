// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLDPSNAMESPACEDQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLDPSNAMESPACEDQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLdpsNamespacedQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLdpsNamespacedQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NamespacedQuotas, namespacedQuotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLdpsNamespacedQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespacedQuotas, namespacedQuotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLdpsNamespacedQuotaResponseBody() = default ;
    GetLdpsNamespacedQuotaResponseBody(const GetLdpsNamespacedQuotaResponseBody &) = default ;
    GetLdpsNamespacedQuotaResponseBody(GetLdpsNamespacedQuotaResponseBody &&) = default ;
    GetLdpsNamespacedQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLdpsNamespacedQuotaResponseBody() = default ;
    GetLdpsNamespacedQuotaResponseBody& operator=(const GetLdpsNamespacedQuotaResponseBody &) = default ;
    GetLdpsNamespacedQuotaResponseBody& operator=(GetLdpsNamespacedQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NamespacedQuotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NamespacedQuotas& obj) { 
        DARABONBA_PTR_TO_JSON(CpuAmount, cpuAmount_);
        DARABONBA_PTR_TO_JSON(MemoryAmount, memoryAmount_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UsedCpu, usedCpu_);
        DARABONBA_PTR_TO_JSON(UsedMemory, usedMemory_);
      };
      friend void from_json(const Darabonba::Json& j, NamespacedQuotas& obj) { 
        DARABONBA_PTR_FROM_JSON(CpuAmount, cpuAmount_);
        DARABONBA_PTR_FROM_JSON(MemoryAmount, memoryAmount_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UsedCpu, usedCpu_);
        DARABONBA_PTR_FROM_JSON(UsedMemory, usedMemory_);
      };
      NamespacedQuotas() = default ;
      NamespacedQuotas(const NamespacedQuotas &) = default ;
      NamespacedQuotas(NamespacedQuotas &&) = default ;
      NamespacedQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NamespacedQuotas() = default ;
      NamespacedQuotas& operator=(const NamespacedQuotas &) = default ;
      NamespacedQuotas& operator=(NamespacedQuotas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpuAmount_ == nullptr
        && this->memoryAmount_ == nullptr && this->name_ == nullptr && this->usedCpu_ == nullptr && this->usedMemory_ == nullptr; };
      // cpuAmount Field Functions 
      bool hasCpuAmount() const { return this->cpuAmount_ != nullptr;};
      void deleteCpuAmount() { this->cpuAmount_ = nullptr;};
      inline string getCpuAmount() const { DARABONBA_PTR_GET_DEFAULT(cpuAmount_, "") };
      inline NamespacedQuotas& setCpuAmount(string cpuAmount) { DARABONBA_PTR_SET_VALUE(cpuAmount_, cpuAmount) };


      // memoryAmount Field Functions 
      bool hasMemoryAmount() const { return this->memoryAmount_ != nullptr;};
      void deleteMemoryAmount() { this->memoryAmount_ = nullptr;};
      inline string getMemoryAmount() const { DARABONBA_PTR_GET_DEFAULT(memoryAmount_, "") };
      inline NamespacedQuotas& setMemoryAmount(string memoryAmount) { DARABONBA_PTR_SET_VALUE(memoryAmount_, memoryAmount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NamespacedQuotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // usedCpu Field Functions 
      bool hasUsedCpu() const { return this->usedCpu_ != nullptr;};
      void deleteUsedCpu() { this->usedCpu_ = nullptr;};
      inline string getUsedCpu() const { DARABONBA_PTR_GET_DEFAULT(usedCpu_, "") };
      inline NamespacedQuotas& setUsedCpu(string usedCpu) { DARABONBA_PTR_SET_VALUE(usedCpu_, usedCpu) };


      // usedMemory Field Functions 
      bool hasUsedMemory() const { return this->usedMemory_ != nullptr;};
      void deleteUsedMemory() { this->usedMemory_ = nullptr;};
      inline string getUsedMemory() const { DARABONBA_PTR_GET_DEFAULT(usedMemory_, "") };
      inline NamespacedQuotas& setUsedMemory(string usedMemory) { DARABONBA_PTR_SET_VALUE(usedMemory_, usedMemory) };


    protected:
      shared_ptr<string> cpuAmount_ {};
      shared_ptr<string> memoryAmount_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> usedCpu_ {};
      shared_ptr<string> usedMemory_ {};
    };

    virtual bool empty() const override { return this->namespacedQuotas_ == nullptr
        && this->requestId_ == nullptr; };
    // namespacedQuotas Field Functions 
    bool hasNamespacedQuotas() const { return this->namespacedQuotas_ != nullptr;};
    void deleteNamespacedQuotas() { this->namespacedQuotas_ = nullptr;};
    inline const vector<GetLdpsNamespacedQuotaResponseBody::NamespacedQuotas> & getNamespacedQuotas() const { DARABONBA_PTR_GET_CONST(namespacedQuotas_, vector<GetLdpsNamespacedQuotaResponseBody::NamespacedQuotas>) };
    inline vector<GetLdpsNamespacedQuotaResponseBody::NamespacedQuotas> getNamespacedQuotas() { DARABONBA_PTR_GET(namespacedQuotas_, vector<GetLdpsNamespacedQuotaResponseBody::NamespacedQuotas>) };
    inline GetLdpsNamespacedQuotaResponseBody& setNamespacedQuotas(const vector<GetLdpsNamespacedQuotaResponseBody::NamespacedQuotas> & namespacedQuotas) { DARABONBA_PTR_SET_VALUE(namespacedQuotas_, namespacedQuotas) };
    inline GetLdpsNamespacedQuotaResponseBody& setNamespacedQuotas(vector<GetLdpsNamespacedQuotaResponseBody::NamespacedQuotas> && namespacedQuotas) { DARABONBA_PTR_SET_RVALUE(namespacedQuotas_, namespacedQuotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLdpsNamespacedQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetLdpsNamespacedQuotaResponseBody::NamespacedQuotas>> namespacedQuotas_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
