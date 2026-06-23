// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_SENTENCEINTERRUPTED_HPP_
#define ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_SENTENCEINTERRUPTED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace EndToEndRealTimeDialog
{
namespace Models
{
  class SentenceInterrupted : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SentenceInterrupted& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, SentenceInterrupted& obj) { 
      (void)j; (void)obj; 
    };
    SentenceInterrupted() = default ;
    SentenceInterrupted(const SentenceInterrupted &) = default ;
    SentenceInterrupted(SentenceInterrupted &&) = default ;
    SentenceInterrupted(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SentenceInterrupted() = default ;
    SentenceInterrupted& operator=(const SentenceInterrupted &) = default ;
    SentenceInterrupted& operator=(SentenceInterrupted &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
} // namespace EndToEndRealTimeDialog
#endif
