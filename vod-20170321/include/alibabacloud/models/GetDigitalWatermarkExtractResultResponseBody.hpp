// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALWATERMARKEXTRACTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALWATERMARKEXTRACTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDigitalWatermarkExtractResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalWatermarkExtractResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AiExtractResultList, aiExtractResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalWatermarkExtractResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AiExtractResultList, aiExtractResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDigitalWatermarkExtractResultResponseBody() = default ;
    GetDigitalWatermarkExtractResultResponseBody(const GetDigitalWatermarkExtractResultResponseBody &) = default ;
    GetDigitalWatermarkExtractResultResponseBody(GetDigitalWatermarkExtractResultResponseBody &&) = default ;
    GetDigitalWatermarkExtractResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalWatermarkExtractResultResponseBody() = default ;
    GetDigitalWatermarkExtractResultResponseBody& operator=(const GetDigitalWatermarkExtractResultResponseBody &) = default ;
    GetDigitalWatermarkExtractResultResponseBody& operator=(GetDigitalWatermarkExtractResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiExtractResultList_ == nullptr
        && return this->requestId_ == nullptr; };
    // aiExtractResultList Field Functions 
    bool hasAiExtractResultList() const { return this->aiExtractResultList_ != nullptr;};
    void deleteAiExtractResultList() { this->aiExtractResultList_ = nullptr;};
    inline const vector<GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList> & aiExtractResultList() const { DARABONBA_PTR_GET_CONST(aiExtractResultList_, vector<GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList>) };
    inline vector<GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList> aiExtractResultList() { DARABONBA_PTR_GET(aiExtractResultList_, vector<GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList>) };
    inline GetDigitalWatermarkExtractResultResponseBody& setAiExtractResultList(const vector<GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList> & aiExtractResultList) { DARABONBA_PTR_SET_VALUE(aiExtractResultList_, aiExtractResultList) };
    inline GetDigitalWatermarkExtractResultResponseBody& setAiExtractResultList(vector<GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList> && aiExtractResultList) { DARABONBA_PTR_SET_RVALUE(aiExtractResultList_, aiExtractResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDigitalWatermarkExtractResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the watermark extraction job.
    std::shared_ptr<vector<GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList>> aiExtractResultList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
