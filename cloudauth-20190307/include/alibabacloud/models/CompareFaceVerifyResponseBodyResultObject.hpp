// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CompareFaceVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFaceVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(VerifyScore, verifyScore_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFaceVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(VerifyScore, verifyScore_);
    };
    CompareFaceVerifyResponseBodyResultObject() = default ;
    CompareFaceVerifyResponseBodyResultObject(const CompareFaceVerifyResponseBodyResultObject &) = default ;
    CompareFaceVerifyResponseBodyResultObject(CompareFaceVerifyResponseBodyResultObject &&) = default ;
    CompareFaceVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFaceVerifyResponseBodyResultObject() = default ;
    CompareFaceVerifyResponseBodyResultObject& operator=(const CompareFaceVerifyResponseBodyResultObject &) = default ;
    CompareFaceVerifyResponseBodyResultObject& operator=(CompareFaceVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certifyId_ != nullptr
        && this->passed_ != nullptr && this->verifyScore_ != nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline CompareFaceVerifyResponseBodyResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline CompareFaceVerifyResponseBodyResultObject& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // verifyScore Field Functions 
    bool hasVerifyScore() const { return this->verifyScore_ != nullptr;};
    void deleteVerifyScore() { this->verifyScore_ = nullptr;};
    inline float verifyScore() const { DARABONBA_PTR_GET_DEFAULT(verifyScore_, 0.0) };
    inline CompareFaceVerifyResponseBodyResultObject& setVerifyScore(float verifyScore) { DARABONBA_PTR_SET_VALUE(verifyScore_, verifyScore) };


  protected:
    // Unique identifier for the real-person authentication request.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Whether the verification passed, T for pass, F for fail.
    std::shared_ptr<string> passed_ = nullptr;
    // Face comparison score.
    std::shared_ptr<float> verifyScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
