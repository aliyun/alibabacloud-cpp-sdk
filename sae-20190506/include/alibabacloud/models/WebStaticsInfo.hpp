// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBSTATICSINFO_HPP_
#define ALIBABACLOUD_MODELS_WEBSTATICSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebStaticsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebStaticsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_TO_JSON(InternetTrafficOut, internetTrafficOut_);
      DARABONBA_PTR_TO_JSON(Invocations, invocations_);
      DARABONBA_PTR_TO_JSON(MemoryUsage, memoryUsage_);
    };
    friend void from_json(const Darabonba::Json& j, WebStaticsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_FROM_JSON(InternetTrafficOut, internetTrafficOut_);
      DARABONBA_PTR_FROM_JSON(Invocations, invocations_);
      DARABONBA_PTR_FROM_JSON(MemoryUsage, memoryUsage_);
    };
    WebStaticsInfo() = default ;
    WebStaticsInfo(const WebStaticsInfo &) = default ;
    WebStaticsInfo(WebStaticsInfo &&) = default ;
    WebStaticsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebStaticsInfo() = default ;
    WebStaticsInfo& operator=(const WebStaticsInfo &) = default ;
    WebStaticsInfo& operator=(WebStaticsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuUsage_ == nullptr
        && return this->internetTrafficOut_ == nullptr && return this->invocations_ == nullptr && return this->memoryUsage_ == nullptr; };
    // cpuUsage Field Functions 
    bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
    void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
    inline int64_t cpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, 0L) };
    inline WebStaticsInfo& setCpuUsage(int64_t cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


    // internetTrafficOut Field Functions 
    bool hasInternetTrafficOut() const { return this->internetTrafficOut_ != nullptr;};
    void deleteInternetTrafficOut() { this->internetTrafficOut_ = nullptr;};
    inline int64_t internetTrafficOut() const { DARABONBA_PTR_GET_DEFAULT(internetTrafficOut_, 0L) };
    inline WebStaticsInfo& setInternetTrafficOut(int64_t internetTrafficOut) { DARABONBA_PTR_SET_VALUE(internetTrafficOut_, internetTrafficOut) };


    // invocations Field Functions 
    bool hasInvocations() const { return this->invocations_ != nullptr;};
    void deleteInvocations() { this->invocations_ = nullptr;};
    inline int64_t invocations() const { DARABONBA_PTR_GET_DEFAULT(invocations_, 0L) };
    inline WebStaticsInfo& setInvocations(int64_t invocations) { DARABONBA_PTR_SET_VALUE(invocations_, invocations) };


    // memoryUsage Field Functions 
    bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
    void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
    inline int64_t memoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0L) };
    inline WebStaticsInfo& setMemoryUsage(int64_t memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


  protected:
    std::shared_ptr<int64_t> cpuUsage_ = nullptr;
    std::shared_ptr<int64_t> internetTrafficOut_ = nullptr;
    std::shared_ptr<int64_t> invocations_ = nullptr;
    std::shared_ptr<int64_t> memoryUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
