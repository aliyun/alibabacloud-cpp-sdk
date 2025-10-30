// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KUBELETCONFIGRESERVEDMEMORY_HPP_
#define ALIBABACLOUD_MODELS_KUBELETCONFIGRESERVEDMEMORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class KubeletConfigReservedMemory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KubeletConfigReservedMemory& obj) { 
      DARABONBA_ANY_TO_JSON(limits, limits_);
      DARABONBA_PTR_TO_JSON(numaNode, numaNode_);
    };
    friend void from_json(const Darabonba::Json& j, KubeletConfigReservedMemory& obj) { 
      DARABONBA_ANY_FROM_JSON(limits, limits_);
      DARABONBA_PTR_FROM_JSON(numaNode, numaNode_);
    };
    KubeletConfigReservedMemory() = default ;
    KubeletConfigReservedMemory(const KubeletConfigReservedMemory &) = default ;
    KubeletConfigReservedMemory(KubeletConfigReservedMemory &&) = default ;
    KubeletConfigReservedMemory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KubeletConfigReservedMemory() = default ;
    KubeletConfigReservedMemory& operator=(const KubeletConfigReservedMemory &) = default ;
    KubeletConfigReservedMemory& operator=(KubeletConfigReservedMemory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limits_ == nullptr
        && return this->numaNode_ == nullptr; };
    // limits Field Functions 
    bool hasLimits() const { return this->limits_ != nullptr;};
    void deleteLimits() { this->limits_ = nullptr;};
    inline     const Darabonba::Json & limits() const { DARABONBA_GET(limits_) };
    Darabonba::Json & limits() { DARABONBA_GET(limits_) };
    inline KubeletConfigReservedMemory& setLimits(const Darabonba::Json & limits) { DARABONBA_SET_VALUE(limits_, limits) };
    inline KubeletConfigReservedMemory& setLimits(Darabonba::Json & limits) { DARABONBA_SET_RVALUE(limits_, limits) };


    // numaNode Field Functions 
    bool hasNumaNode() const { return this->numaNode_ != nullptr;};
    void deleteNumaNode() { this->numaNode_ = nullptr;};
    inline int32_t numaNode() const { DARABONBA_PTR_GET_DEFAULT(numaNode_, 0) };
    inline KubeletConfigReservedMemory& setNumaNode(int32_t numaNode) { DARABONBA_PTR_SET_VALUE(numaNode_, numaNode) };


  protected:
    Darabonba::Json limits_ = nullptr;
    std::shared_ptr<int32_t> numaNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
