// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACECROSSCOMPAREINTLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_FACECROSSCOMPAREINTLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceCrossCompareIntlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceCrossCompareIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FaceComparisonScoreA2B, faceComparisonScoreA2B_);
      DARABONBA_PTR_TO_JSON(FaceComparisonScoreB2C, faceComparisonScoreB2C_);
      DARABONBA_PTR_TO_JSON(FaceComparisonScoreC2A, faceComparisonScoreC2A_);
      DARABONBA_PTR_TO_JSON(FacePassed, facePassed_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, FaceCrossCompareIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceComparisonScoreA2B, faceComparisonScoreA2B_);
      DARABONBA_PTR_FROM_JSON(FaceComparisonScoreB2C, faceComparisonScoreB2C_);
      DARABONBA_PTR_FROM_JSON(FaceComparisonScoreC2A, faceComparisonScoreC2A_);
      DARABONBA_PTR_FROM_JSON(FacePassed, facePassed_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    FaceCrossCompareIntlResponseBodyResult() = default ;
    FaceCrossCompareIntlResponseBodyResult(const FaceCrossCompareIntlResponseBodyResult &) = default ;
    FaceCrossCompareIntlResponseBodyResult(FaceCrossCompareIntlResponseBodyResult &&) = default ;
    FaceCrossCompareIntlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceCrossCompareIntlResponseBodyResult() = default ;
    FaceCrossCompareIntlResponseBodyResult& operator=(const FaceCrossCompareIntlResponseBodyResult &) = default ;
    FaceCrossCompareIntlResponseBodyResult& operator=(FaceCrossCompareIntlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faceComparisonScoreA2B_ != nullptr
        && this->faceComparisonScoreB2C_ != nullptr && this->faceComparisonScoreC2A_ != nullptr && this->facePassed_ != nullptr && this->transactionId_ != nullptr; };
    // faceComparisonScoreA2B Field Functions 
    bool hasFaceComparisonScoreA2B() const { return this->faceComparisonScoreA2B_ != nullptr;};
    void deleteFaceComparisonScoreA2B() { this->faceComparisonScoreA2B_ = nullptr;};
    inline double faceComparisonScoreA2B() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScoreA2B_, 0.0) };
    inline FaceCrossCompareIntlResponseBodyResult& setFaceComparisonScoreA2B(double faceComparisonScoreA2B) { DARABONBA_PTR_SET_VALUE(faceComparisonScoreA2B_, faceComparisonScoreA2B) };


    // faceComparisonScoreB2C Field Functions 
    bool hasFaceComparisonScoreB2C() const { return this->faceComparisonScoreB2C_ != nullptr;};
    void deleteFaceComparisonScoreB2C() { this->faceComparisonScoreB2C_ = nullptr;};
    inline double faceComparisonScoreB2C() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScoreB2C_, 0.0) };
    inline FaceCrossCompareIntlResponseBodyResult& setFaceComparisonScoreB2C(double faceComparisonScoreB2C) { DARABONBA_PTR_SET_VALUE(faceComparisonScoreB2C_, faceComparisonScoreB2C) };


    // faceComparisonScoreC2A Field Functions 
    bool hasFaceComparisonScoreC2A() const { return this->faceComparisonScoreC2A_ != nullptr;};
    void deleteFaceComparisonScoreC2A() { this->faceComparisonScoreC2A_ = nullptr;};
    inline double faceComparisonScoreC2A() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScoreC2A_, 0.0) };
    inline FaceCrossCompareIntlResponseBodyResult& setFaceComparisonScoreC2A(double faceComparisonScoreC2A) { DARABONBA_PTR_SET_VALUE(faceComparisonScoreC2A_, faceComparisonScoreC2A) };


    // facePassed Field Functions 
    bool hasFacePassed() const { return this->facePassed_ != nullptr;};
    void deleteFacePassed() { this->facePassed_ = nullptr;};
    inline string facePassed() const { DARABONBA_PTR_GET_DEFAULT(facePassed_, "") };
    inline FaceCrossCompareIntlResponseBodyResult& setFacePassed(string facePassed) { DARABONBA_PTR_SET_VALUE(facePassed_, facePassed) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline FaceCrossCompareIntlResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    std::shared_ptr<double> faceComparisonScoreA2B_ = nullptr;
    std::shared_ptr<double> faceComparisonScoreB2C_ = nullptr;
    std::shared_ptr<double> faceComparisonScoreC2A_ = nullptr;
    std::shared_ptr<string> facePassed_ = nullptr;
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
