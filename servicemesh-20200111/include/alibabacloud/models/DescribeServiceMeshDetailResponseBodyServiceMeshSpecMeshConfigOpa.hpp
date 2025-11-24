// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGOPA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGOPA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_TO_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_FROM_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->limitCPU_ == nullptr && return this->limitMemory_ == nullptr && return this->logLevel_ == nullptr && return this->requestCPU_ == nullptr && return this->requestMemory_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // limitCPU Field Functions 
    bool hasLimitCPU() const { return this->limitCPU_ != nullptr;};
    void deleteLimitCPU() { this->limitCPU_ = nullptr;};
    inline string limitCPU() const { DARABONBA_PTR_GET_DEFAULT(limitCPU_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA& setLimitCPU(string limitCPU) { DARABONBA_PTR_SET_VALUE(limitCPU_, limitCPU) };


    // limitMemory Field Functions 
    bool hasLimitMemory() const { return this->limitMemory_ != nullptr;};
    void deleteLimitMemory() { this->limitMemory_ = nullptr;};
    inline string limitMemory() const { DARABONBA_PTR_GET_DEFAULT(limitMemory_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA& setLimitMemory(string limitMemory) { DARABONBA_PTR_SET_VALUE(limitMemory_, limitMemory) };


    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline string requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA& setRequestCPU(string requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline string requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA& setRequestMemory(string requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


  protected:
    // Indicates whether the OPA plug-in is installed. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enabled_ = nullptr;
    // The maximum number of CPU cores that are available to the OPA proxy container.
    std::shared_ptr<string> limitCPU_ = nullptr;
    // The maximum size of the memory that is available to the OPA proxy container.
    std::shared_ptr<string> limitMemory_ = nullptr;
    // The level of the logs to be generated for OPA.
    std::shared_ptr<string> logLevel_ = nullptr;
    // The number of CPU cores that are requested by the OPA proxy container.
    std::shared_ptr<string> requestCPU_ = nullptr;
    // The size of the memory that is requested by OPA.
    std::shared_ptr<string> requestMemory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
