// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICEREQUESTHARESOURCESPEC_HPP_
#define ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICEREQUESTHARESOURCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryModifyInstancePriceRequestHaResourceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryModifyInstancePriceRequestHaResourceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
    };
    friend void from_json(const Darabonba::Json& j, QueryModifyInstancePriceRequestHaResourceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
    };
    QueryModifyInstancePriceRequestHaResourceSpec() = default ;
    QueryModifyInstancePriceRequestHaResourceSpec(const QueryModifyInstancePriceRequestHaResourceSpec &) = default ;
    QueryModifyInstancePriceRequestHaResourceSpec(QueryModifyInstancePriceRequestHaResourceSpec &&) = default ;
    QueryModifyInstancePriceRequestHaResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryModifyInstancePriceRequestHaResourceSpec() = default ;
    QueryModifyInstancePriceRequestHaResourceSpec& operator=(const QueryModifyInstancePriceRequestHaResourceSpec &) = default ;
    QueryModifyInstancePriceRequestHaResourceSpec& operator=(QueryModifyInstancePriceRequestHaResourceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpu_ != nullptr
        && this->memoryGB_ != nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline QueryModifyInstancePriceRequestHaResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // memoryGB Field Functions 
    bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
    void deleteMemoryGB() { this->memoryGB_ = nullptr;};
    inline int32_t memoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
    inline QueryModifyInstancePriceRequestHaResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


  protected:
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<int32_t> memoryGB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
