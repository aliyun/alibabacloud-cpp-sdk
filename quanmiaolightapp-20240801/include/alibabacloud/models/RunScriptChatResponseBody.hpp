// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTCHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTCHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunScriptChatResponseBodyHeader.hpp>
#include <alibabacloud/models/RunScriptChatResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
    };
    RunScriptChatResponseBody() = default ;
    RunScriptChatResponseBody(const RunScriptChatResponseBody &) = default ;
    RunScriptChatResponseBody(RunScriptChatResponseBody &&) = default ;
    RunScriptChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptChatResponseBody() = default ;
    RunScriptChatResponseBody& operator=(const RunScriptChatResponseBody &) = default ;
    RunScriptChatResponseBody& operator=(RunScriptChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->header_ == nullptr && return this->payload_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline bool end() const { DARABONBA_PTR_GET_DEFAULT(end_, false) };
    inline RunScriptChatResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunScriptChatResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunScriptChatResponseBodyHeader) };
    inline RunScriptChatResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunScriptChatResponseBodyHeader) };
    inline RunScriptChatResponseBody& setHeader(const RunScriptChatResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunScriptChatResponseBody& setHeader(RunScriptChatResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunScriptChatResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunScriptChatResponseBodyPayload) };
    inline RunScriptChatResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunScriptChatResponseBodyPayload) };
    inline RunScriptChatResponseBody& setPayload(const RunScriptChatResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunScriptChatResponseBody& setPayload(RunScriptChatResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


  protected:
    std::shared_ptr<bool> end_ = nullptr;
    std::shared_ptr<RunScriptChatResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunScriptChatResponseBodyPayload> payload_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
