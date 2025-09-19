// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACECOMPARERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_FACECOMPARERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceCompareResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceCompareResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FaceComparisonScore, faceComparisonScore_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, FaceCompareResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceComparisonScore, faceComparisonScore_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    FaceCompareResponseBodyResult() = default ;
    FaceCompareResponseBodyResult(const FaceCompareResponseBodyResult &) = default ;
    FaceCompareResponseBodyResult(FaceCompareResponseBodyResult &&) = default ;
    FaceCompareResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceCompareResponseBodyResult() = default ;
    FaceCompareResponseBodyResult& operator=(const FaceCompareResponseBodyResult &) = default ;
    FaceCompareResponseBodyResult& operator=(FaceCompareResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faceComparisonScore_ != nullptr
        && this->passed_ != nullptr && this->transactionId_ != nullptr; };
    // faceComparisonScore Field Functions 
    bool hasFaceComparisonScore() const { return this->faceComparisonScore_ != nullptr;};
    void deleteFaceComparisonScore() { this->faceComparisonScore_ = nullptr;};
    inline double faceComparisonScore() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScore_, 0.0) };
    inline FaceCompareResponseBodyResult& setFaceComparisonScore(double faceComparisonScore) { DARABONBA_PTR_SET_VALUE(faceComparisonScore_, faceComparisonScore) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline FaceCompareResponseBodyResult& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline FaceCompareResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // The face comparison score. The value ranges from 0 to 100.
    std::shared_ptr<double> faceComparisonScore_ = nullptr;
    // The final authentication result. Valid values:
    // 
    // - **Y**: The authentication is passed.
    // 
    // - **N**: The authentication failed.
    std::shared_ptr<string> passed_ = nullptr;
    // The transaction ID.
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
