// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ILLUSTRATIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_ILLUSTRATIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Illustration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class IllustrationResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IllustrationResult& obj) { 
      DARABONBA_PTR_TO_JSON(illustration, illustration_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, IllustrationResult& obj) { 
      DARABONBA_PTR_FROM_JSON(illustration, illustration_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    IllustrationResult() = default ;
    IllustrationResult(const IllustrationResult &) = default ;
    IllustrationResult(IllustrationResult &&) = default ;
    IllustrationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IllustrationResult() = default ;
    IllustrationResult& operator=(const IllustrationResult &) = default ;
    IllustrationResult& operator=(IllustrationResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->illustration_ == nullptr
        && this->requestId_ == nullptr; };
    // illustration Field Functions 
    bool hasIllustration() const { return this->illustration_ != nullptr;};
    void deleteIllustration() { this->illustration_ = nullptr;};
    inline const Illustration & getIllustration() const { DARABONBA_PTR_GET_CONST(illustration_, Illustration) };
    inline Illustration getIllustration() { DARABONBA_PTR_GET(illustration_, Illustration) };
    inline IllustrationResult& setIllustration(const Illustration & illustration) { DARABONBA_PTR_SET_VALUE(illustration_, illustration) };
    inline IllustrationResult& setIllustration(Illustration && illustration) { DARABONBA_PTR_SET_RVALUE(illustration_, illustration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IllustrationResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<Illustration> illustration_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
