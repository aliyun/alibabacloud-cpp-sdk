// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTVIDEORESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTVIDEORESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult.hpp>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResult.hpp>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLogoResult.hpp>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultVideoResultPornResult.hpp>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultVideoResultTerrorismResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultResponseBodyMediaAuditResultVideoResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& obj) { 
      DARABONBA_PTR_TO_JSON(AdResult, adResult_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(LiveResult, liveResult_);
      DARABONBA_PTR_TO_JSON(LogoResult, logoResult_);
      DARABONBA_PTR_TO_JSON(PornResult, pornResult_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TerrorismResult, terrorismResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AdResult, adResult_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(LiveResult, liveResult_);
      DARABONBA_PTR_FROM_JSON(LogoResult, logoResult_);
      DARABONBA_PTR_FROM_JSON(PornResult, pornResult_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TerrorismResult, terrorismResult_);
    };
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResult(const GetMediaAuditResultResponseBodyMediaAuditResultVideoResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResult(GetMediaAuditResultResponseBodyMediaAuditResultVideoResult &&) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultResponseBodyMediaAuditResultVideoResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& operator=(const GetMediaAuditResultResponseBodyMediaAuditResultVideoResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& operator=(GetMediaAuditResultResponseBodyMediaAuditResultVideoResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adResult_ != nullptr
        && this->label_ != nullptr && this->liveResult_ != nullptr && this->logoResult_ != nullptr && this->pornResult_ != nullptr && this->suggestion_ != nullptr
        && this->terrorismResult_ != nullptr; };
    // adResult Field Functions 
    bool hasAdResult() const { return this->adResult_ != nullptr;};
    void deleteAdResult() { this->adResult_ = nullptr;};
    inline const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult & adResult() const { DARABONBA_PTR_GET_CONST(adResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult) };
    inline Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult adResult() { DARABONBA_PTR_GET(adResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setAdResult(const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult & adResult) { DARABONBA_PTR_SET_VALUE(adResult_, adResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setAdResult(Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult && adResult) { DARABONBA_PTR_SET_RVALUE(adResult_, adResult) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // liveResult Field Functions 
    bool hasLiveResult() const { return this->liveResult_ != nullptr;};
    void deleteLiveResult() { this->liveResult_ = nullptr;};
    inline const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResult & liveResult() const { DARABONBA_PTR_GET_CONST(liveResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResult) };
    inline Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResult liveResult() { DARABONBA_PTR_GET(liveResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setLiveResult(const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResult & liveResult) { DARABONBA_PTR_SET_VALUE(liveResult_, liveResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setLiveResult(Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResult && liveResult) { DARABONBA_PTR_SET_RVALUE(liveResult_, liveResult) };


    // logoResult Field Functions 
    bool hasLogoResult() const { return this->logoResult_ != nullptr;};
    void deleteLogoResult() { this->logoResult_ = nullptr;};
    inline const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLogoResult & logoResult() const { DARABONBA_PTR_GET_CONST(logoResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLogoResult) };
    inline Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLogoResult logoResult() { DARABONBA_PTR_GET(logoResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLogoResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setLogoResult(const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLogoResult & logoResult) { DARABONBA_PTR_SET_VALUE(logoResult_, logoResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setLogoResult(Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLogoResult && logoResult) { DARABONBA_PTR_SET_RVALUE(logoResult_, logoResult) };


    // pornResult Field Functions 
    bool hasPornResult() const { return this->pornResult_ != nullptr;};
    void deletePornResult() { this->pornResult_ = nullptr;};
    inline const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultPornResult & pornResult() const { DARABONBA_PTR_GET_CONST(pornResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultPornResult) };
    inline Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultPornResult pornResult() { DARABONBA_PTR_GET(pornResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultPornResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setPornResult(const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultPornResult & pornResult) { DARABONBA_PTR_SET_VALUE(pornResult_, pornResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setPornResult(Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultPornResult && pornResult) { DARABONBA_PTR_SET_RVALUE(pornResult_, pornResult) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // terrorismResult Field Functions 
    bool hasTerrorismResult() const { return this->terrorismResult_ != nullptr;};
    void deleteTerrorismResult() { this->terrorismResult_ = nullptr;};
    inline const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultTerrorismResult & terrorismResult() const { DARABONBA_PTR_GET_CONST(terrorismResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultTerrorismResult) };
    inline Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultTerrorismResult terrorismResult() { DARABONBA_PTR_GET(terrorismResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultTerrorismResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setTerrorismResult(const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultTerrorismResult & terrorismResult) { DARABONBA_PTR_SET_VALUE(terrorismResult_, terrorismResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResult& setTerrorismResult(Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultTerrorismResult && terrorismResult) { DARABONBA_PTR_SET_RVALUE(terrorismResult_, terrorismResult) };


  protected:
    // The results of ad review.
    std::shared_ptr<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult> adResult_ = nullptr;
    // The category of the review result. Separate multiple values with commas (,). Valid values: 
    // 
    // - **porn**
    // - **terrorism**
    // - **normal**
    std::shared_ptr<string> label_ = nullptr;
    // The results of undesired content review.
    std::shared_ptr<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLiveResult> liveResult_ = nullptr;
    // The results of logo review.
    std::shared_ptr<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultLogoResult> logoResult_ = nullptr;
    // The results of pornographic content review.
    std::shared_ptr<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultPornResult> pornResult_ = nullptr;
    // The recommendation for review results. Valid values:
    // 
    // - **block**
    // - **review**
    // - **pass**
    std::shared_ptr<string> suggestion_ = nullptr;
    // The results of terrorist content review.
    std::shared_ptr<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultTerrorismResult> terrorismResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
