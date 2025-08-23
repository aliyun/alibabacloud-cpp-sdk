// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTCONTINUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTCONTINUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunScriptContinueResponseBodyHeader.hpp>
#include <alibabacloud/models/RunScriptContinueResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptContinueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptContinueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptContinueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
    };
    RunScriptContinueResponseBody() = default ;
    RunScriptContinueResponseBody(const RunScriptContinueResponseBody &) = default ;
    RunScriptContinueResponseBody(RunScriptContinueResponseBody &&) = default ;
    RunScriptContinueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptContinueResponseBody() = default ;
    RunScriptContinueResponseBody& operator=(const RunScriptContinueResponseBody &) = default ;
    RunScriptContinueResponseBody& operator=(RunScriptContinueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->end_ != nullptr
        && this->header_ != nullptr && this->payload_ != nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline bool end() const { DARABONBA_PTR_GET_DEFAULT(end_, false) };
    inline RunScriptContinueResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunScriptContinueResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunScriptContinueResponseBodyHeader) };
    inline RunScriptContinueResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunScriptContinueResponseBodyHeader) };
    inline RunScriptContinueResponseBody& setHeader(const RunScriptContinueResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunScriptContinueResponseBody& setHeader(RunScriptContinueResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunScriptContinueResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunScriptContinueResponseBodyPayload) };
    inline RunScriptContinueResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunScriptContinueResponseBodyPayload) };
    inline RunScriptContinueResponseBody& setPayload(const RunScriptContinueResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunScriptContinueResponseBody& setPayload(RunScriptContinueResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


  protected:
    std::shared_ptr<bool> end_ = nullptr;
    std::shared_ptr<RunScriptContinueResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunScriptContinueResponseBodyPayload> payload_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
