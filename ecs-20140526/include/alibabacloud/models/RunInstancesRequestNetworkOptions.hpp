// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTNETWORKOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTNETWORKOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunInstancesRequestNetworkOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequestNetworkOptions& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthWeighting, bandwidthWeighting_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequestNetworkOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthWeighting, bandwidthWeighting_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
    };
    RunInstancesRequestNetworkOptions() = default ;
    RunInstancesRequestNetworkOptions(const RunInstancesRequestNetworkOptions &) = default ;
    RunInstancesRequestNetworkOptions(RunInstancesRequestNetworkOptions &&) = default ;
    RunInstancesRequestNetworkOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequestNetworkOptions() = default ;
    RunInstancesRequestNetworkOptions& operator=(const RunInstancesRequestNetworkOptions &) = default ;
    RunInstancesRequestNetworkOptions& operator=(RunInstancesRequestNetworkOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthWeighting_ == nullptr
        && return this->enableJumboFrame_ == nullptr && return this->enableNetworkEncryption_ == nullptr; };
    // bandwidthWeighting Field Functions 
    bool hasBandwidthWeighting() const { return this->bandwidthWeighting_ != nullptr;};
    void deleteBandwidthWeighting() { this->bandwidthWeighting_ = nullptr;};
    inline string bandwidthWeighting() const { DARABONBA_PTR_GET_DEFAULT(bandwidthWeighting_, "") };
    inline RunInstancesRequestNetworkOptions& setBandwidthWeighting(string bandwidthWeighting) { DARABONBA_PTR_SET_VALUE(bandwidthWeighting_, bandwidthWeighting) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool enableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline RunInstancesRequestNetworkOptions& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // enableNetworkEncryption Field Functions 
    bool hasEnableNetworkEncryption() const { return this->enableNetworkEncryption_ != nullptr;};
    void deleteEnableNetworkEncryption() { this->enableNetworkEncryption_ = nullptr;};
    inline bool enableNetworkEncryption() const { DARABONBA_PTR_GET_DEFAULT(enableNetworkEncryption_, false) };
    inline RunInstancesRequestNetworkOptions& setEnableNetworkEncryption(bool enableNetworkEncryption) { DARABONBA_PTR_SET_VALUE(enableNetworkEncryption_, enableNetworkEncryption) };


  protected:
    std::shared_ptr<string> bandwidthWeighting_ = nullptr;
    // Specifies whether to enable the Jumbo Frames feature for the instance. Valid values:
    // 
    // *   false: does not enable the Jumbo Frames feature for the instance. The maximum transmission unit (MTU) value of all ENIs on the instance is set to 1500.
    // *   true: enables the Jumbo Frames feature for the instance. The MTU value of all ENIs on the instance is set to 8500.
    // 
    // Default value: true.
    // 
    // >  The Jumbo Frames feature is supported by only 8th-generation or later instance types. For more information, see [Jumbo Frames](https://help.aliyun.com/document_detail/200512.html).
    std::shared_ptr<bool> enableJumboFrame_ = nullptr;
    std::shared_ptr<bool> enableNetworkEncryption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
