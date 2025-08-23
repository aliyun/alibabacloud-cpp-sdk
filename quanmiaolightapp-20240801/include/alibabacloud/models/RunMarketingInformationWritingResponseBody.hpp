// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONWRITINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONWRITINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunMarketingInformationWritingResponseBodyHeader.hpp>
#include <alibabacloud/models/RunMarketingInformationWritingResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunMarketingInformationWritingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMarketingInformationWritingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, RunMarketingInformationWritingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
    };
    RunMarketingInformationWritingResponseBody() = default ;
    RunMarketingInformationWritingResponseBody(const RunMarketingInformationWritingResponseBody &) = default ;
    RunMarketingInformationWritingResponseBody(RunMarketingInformationWritingResponseBody &&) = default ;
    RunMarketingInformationWritingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMarketingInformationWritingResponseBody() = default ;
    RunMarketingInformationWritingResponseBody& operator=(const RunMarketingInformationWritingResponseBody &) = default ;
    RunMarketingInformationWritingResponseBody& operator=(RunMarketingInformationWritingResponseBody &&) = default ;
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
    inline RunMarketingInformationWritingResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunMarketingInformationWritingResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunMarketingInformationWritingResponseBodyHeader) };
    inline RunMarketingInformationWritingResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunMarketingInformationWritingResponseBodyHeader) };
    inline RunMarketingInformationWritingResponseBody& setHeader(const RunMarketingInformationWritingResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunMarketingInformationWritingResponseBody& setHeader(RunMarketingInformationWritingResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunMarketingInformationWritingResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunMarketingInformationWritingResponseBodyPayload) };
    inline RunMarketingInformationWritingResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunMarketingInformationWritingResponseBodyPayload) };
    inline RunMarketingInformationWritingResponseBody& setPayload(const RunMarketingInformationWritingResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunMarketingInformationWritingResponseBody& setPayload(RunMarketingInformationWritingResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


  protected:
    std::shared_ptr<bool> end_ = nullptr;
    std::shared_ptr<RunMarketingInformationWritingResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunMarketingInformationWritingResponseBodyPayload> payload_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
