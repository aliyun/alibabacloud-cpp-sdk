// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeIdentityCardResponseBodyDataBackResult.hpp>
#include <alibabacloud/models/RecognizeIdentityCardResponseBodyDataFrontResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeIdentityCardResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIdentityCardResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BackResult, backResult_);
      DARABONBA_PTR_TO_JSON(FrontResult, frontResult_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIdentityCardResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BackResult, backResult_);
      DARABONBA_PTR_FROM_JSON(FrontResult, frontResult_);
    };
    RecognizeIdentityCardResponseBodyData() = default ;
    RecognizeIdentityCardResponseBodyData(const RecognizeIdentityCardResponseBodyData &) = default ;
    RecognizeIdentityCardResponseBodyData(RecognizeIdentityCardResponseBodyData &&) = default ;
    RecognizeIdentityCardResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIdentityCardResponseBodyData() = default ;
    RecognizeIdentityCardResponseBodyData& operator=(const RecognizeIdentityCardResponseBodyData &) = default ;
    RecognizeIdentityCardResponseBodyData& operator=(RecognizeIdentityCardResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backResult_ == nullptr
        && return this->frontResult_ == nullptr; };
    // backResult Field Functions 
    bool hasBackResult() const { return this->backResult_ != nullptr;};
    void deleteBackResult() { this->backResult_ = nullptr;};
    inline const Models::RecognizeIdentityCardResponseBodyDataBackResult & backResult() const { DARABONBA_PTR_GET_CONST(backResult_, Models::RecognizeIdentityCardResponseBodyDataBackResult) };
    inline Models::RecognizeIdentityCardResponseBodyDataBackResult backResult() { DARABONBA_PTR_GET(backResult_, Models::RecognizeIdentityCardResponseBodyDataBackResult) };
    inline RecognizeIdentityCardResponseBodyData& setBackResult(const Models::RecognizeIdentityCardResponseBodyDataBackResult & backResult) { DARABONBA_PTR_SET_VALUE(backResult_, backResult) };
    inline RecognizeIdentityCardResponseBodyData& setBackResult(Models::RecognizeIdentityCardResponseBodyDataBackResult && backResult) { DARABONBA_PTR_SET_RVALUE(backResult_, backResult) };


    // frontResult Field Functions 
    bool hasFrontResult() const { return this->frontResult_ != nullptr;};
    void deleteFrontResult() { this->frontResult_ = nullptr;};
    inline const Models::RecognizeIdentityCardResponseBodyDataFrontResult & frontResult() const { DARABONBA_PTR_GET_CONST(frontResult_, Models::RecognizeIdentityCardResponseBodyDataFrontResult) };
    inline Models::RecognizeIdentityCardResponseBodyDataFrontResult frontResult() { DARABONBA_PTR_GET(frontResult_, Models::RecognizeIdentityCardResponseBodyDataFrontResult) };
    inline RecognizeIdentityCardResponseBodyData& setFrontResult(const Models::RecognizeIdentityCardResponseBodyDataFrontResult & frontResult) { DARABONBA_PTR_SET_VALUE(frontResult_, frontResult) };
    inline RecognizeIdentityCardResponseBodyData& setFrontResult(Models::RecognizeIdentityCardResponseBodyDataFrontResult && frontResult) { DARABONBA_PTR_SET_RVALUE(frontResult_, frontResult) };


  protected:
    std::shared_ptr<Models::RecognizeIdentityCardResponseBodyDataBackResult> backResult_ = nullptr;
    std::shared_ptr<Models::RecognizeIdentityCardResponseBodyDataFrontResult> frontResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
