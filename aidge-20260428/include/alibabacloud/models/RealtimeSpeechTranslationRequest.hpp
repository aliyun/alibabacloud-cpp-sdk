// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMESPEECHTRANSLATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REALTIMESPEECHTRANSLATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class RealtimeSpeechTranslationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeSpeechTranslationRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, RealtimeSpeechTranslationRequest& obj) { 
      (void)j; (void)obj; 
    };
    RealtimeSpeechTranslationRequest() = default ;
    RealtimeSpeechTranslationRequest(const RealtimeSpeechTranslationRequest &) = default ;
    RealtimeSpeechTranslationRequest(RealtimeSpeechTranslationRequest &&) = default ;
    RealtimeSpeechTranslationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeSpeechTranslationRequest() = default ;
    RealtimeSpeechTranslationRequest& operator=(const RealtimeSpeechTranslationRequest &) = default ;
    RealtimeSpeechTranslationRequest& operator=(RealtimeSpeechTranslationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
