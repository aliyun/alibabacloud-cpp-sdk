// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNNETWORKCONTENTAUDITRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNNETWORKCONTENTAUDITRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunNetworkContentAuditResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunNetworkContentAuditResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunNetworkContentAuditResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunNetworkContentAuditResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunNetworkContentAuditResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunNetworkContentAuditResponseBodyPayload() = default ;
    RunNetworkContentAuditResponseBodyPayload(const RunNetworkContentAuditResponseBodyPayload &) = default ;
    RunNetworkContentAuditResponseBodyPayload(RunNetworkContentAuditResponseBodyPayload &&) = default ;
    RunNetworkContentAuditResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunNetworkContentAuditResponseBodyPayload() = default ;
    RunNetworkContentAuditResponseBodyPayload& operator=(const RunNetworkContentAuditResponseBodyPayload &) = default ;
    RunNetworkContentAuditResponseBodyPayload& operator=(RunNetworkContentAuditResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunNetworkContentAuditResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunNetworkContentAuditResponseBodyPayloadOutput) };
    inline Models::RunNetworkContentAuditResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunNetworkContentAuditResponseBodyPayloadOutput) };
    inline RunNetworkContentAuditResponseBodyPayload& setOutput(const Models::RunNetworkContentAuditResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunNetworkContentAuditResponseBodyPayload& setOutput(Models::RunNetworkContentAuditResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunNetworkContentAuditResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunNetworkContentAuditResponseBodyPayloadUsage) };
    inline Models::RunNetworkContentAuditResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunNetworkContentAuditResponseBodyPayloadUsage) };
    inline RunNetworkContentAuditResponseBodyPayload& setUsage(const Models::RunNetworkContentAuditResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunNetworkContentAuditResponseBodyPayload& setUsage(Models::RunNetworkContentAuditResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunNetworkContentAuditResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunNetworkContentAuditResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
