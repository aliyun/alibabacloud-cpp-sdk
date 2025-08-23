// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTAGMININGANALYSISTASKRESPONSEBODYDATARESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETTAGMININGANALYSISTASKRESPONSEBODYDATARESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTagMiningAnalysisTaskResponseBodyDataResultsHeader.hpp>
#include <alibabacloud/models/GetTagMiningAnalysisTaskResponseBodyDataResultsPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetTagMiningAnalysisTaskResponseBodyDataResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTagMiningAnalysisTaskResponseBodyDataResults& obj) { 
      DARABONBA_PTR_TO_JSON(customId, customId_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, GetTagMiningAnalysisTaskResponseBodyDataResults& obj) { 
      DARABONBA_PTR_FROM_JSON(customId, customId_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
    };
    GetTagMiningAnalysisTaskResponseBodyDataResults() = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResults(const GetTagMiningAnalysisTaskResponseBodyDataResults &) = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResults(GetTagMiningAnalysisTaskResponseBodyDataResults &&) = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTagMiningAnalysisTaskResponseBodyDataResults() = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResults& operator=(const GetTagMiningAnalysisTaskResponseBodyDataResults &) = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResults& operator=(GetTagMiningAnalysisTaskResponseBodyDataResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customId_ != nullptr
        && this->header_ != nullptr && this->payload_ != nullptr; };
    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline GetTagMiningAnalysisTaskResponseBodyDataResults& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const Models::GetTagMiningAnalysisTaskResponseBodyDataResultsHeader & header() const { DARABONBA_PTR_GET_CONST(header_, Models::GetTagMiningAnalysisTaskResponseBodyDataResultsHeader) };
    inline Models::GetTagMiningAnalysisTaskResponseBodyDataResultsHeader header() { DARABONBA_PTR_GET(header_, Models::GetTagMiningAnalysisTaskResponseBodyDataResultsHeader) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResults& setHeader(const Models::GetTagMiningAnalysisTaskResponseBodyDataResultsHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResults& setHeader(Models::GetTagMiningAnalysisTaskResponseBodyDataResultsHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayload) };
    inline Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayload payload() { DARABONBA_PTR_GET(payload_, Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayload) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResults& setPayload(const Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResults& setPayload(Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


  protected:
    std::shared_ptr<string> customId_ = nullptr;
    std::shared_ptr<Models::GetTagMiningAnalysisTaskResponseBodyDataResultsHeader> header_ = nullptr;
    std::shared_ptr<Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayload> payload_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
