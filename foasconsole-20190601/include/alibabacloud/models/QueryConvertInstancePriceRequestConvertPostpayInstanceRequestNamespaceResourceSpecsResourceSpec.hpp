// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUESTCONVERTPOSTPAYINSTANCEREQUESTNAMESPACERESOURCESPECSRESOURCESPEC_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUESTCONVERTPOSTPAYINSTANCEREQUESTNAMESPACERESOURCESPECSRESOURCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
    };
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec() = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec(const QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec &) = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec(QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec &&) = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec() = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec& operator=(const QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec &) = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec& operator=(QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->memoryGB_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // memoryGB Field Functions 
    bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
    void deleteMemoryGB() { this->memoryGB_ = nullptr;};
    inline int32_t memoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> memoryGB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
