// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUDITTASKRESPONSEBODYDATARESPONSEPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUDITTASKRESPONSEBODYDATARESPONSEPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAuditTaskResponseBodyDataResponsePayloadOutput.hpp>
#include <alibabacloud/models/QueryAuditTaskResponseBodyDataResponsePayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class QueryAuditTaskResponseBodyDataResponsePayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuditTaskResponseBodyDataResponsePayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuditTaskResponseBodyDataResponsePayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    QueryAuditTaskResponseBodyDataResponsePayload() = default ;
    QueryAuditTaskResponseBodyDataResponsePayload(const QueryAuditTaskResponseBodyDataResponsePayload &) = default ;
    QueryAuditTaskResponseBodyDataResponsePayload(QueryAuditTaskResponseBodyDataResponsePayload &&) = default ;
    QueryAuditTaskResponseBodyDataResponsePayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuditTaskResponseBodyDataResponsePayload() = default ;
    QueryAuditTaskResponseBodyDataResponsePayload& operator=(const QueryAuditTaskResponseBodyDataResponsePayload &) = default ;
    QueryAuditTaskResponseBodyDataResponsePayload& operator=(QueryAuditTaskResponseBodyDataResponsePayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::QueryAuditTaskResponseBodyDataResponsePayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::QueryAuditTaskResponseBodyDataResponsePayloadOutput) };
    inline Models::QueryAuditTaskResponseBodyDataResponsePayloadOutput output() { DARABONBA_PTR_GET(output_, Models::QueryAuditTaskResponseBodyDataResponsePayloadOutput) };
    inline QueryAuditTaskResponseBodyDataResponsePayload& setOutput(const Models::QueryAuditTaskResponseBodyDataResponsePayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline QueryAuditTaskResponseBodyDataResponsePayload& setOutput(Models::QueryAuditTaskResponseBodyDataResponsePayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::QueryAuditTaskResponseBodyDataResponsePayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::QueryAuditTaskResponseBodyDataResponsePayloadUsage) };
    inline Models::QueryAuditTaskResponseBodyDataResponsePayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::QueryAuditTaskResponseBodyDataResponsePayloadUsage) };
    inline QueryAuditTaskResponseBodyDataResponsePayload& setUsage(const Models::QueryAuditTaskResponseBodyDataResponsePayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline QueryAuditTaskResponseBodyDataResponsePayload& setUsage(Models::QueryAuditTaskResponseBodyDataResponsePayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::QueryAuditTaskResponseBodyDataResponsePayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::QueryAuditTaskResponseBodyDataResponsePayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
