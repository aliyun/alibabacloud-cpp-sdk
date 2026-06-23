// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_TRANSCRIPTIONEND_HPP_
#define ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_TRANSCRIPTIONEND_HPP_
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
  class TranscriptionEnd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranscriptionEnd& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, TranscriptionEnd& obj) { 
      (void)j; (void)obj; 
    };
    TranscriptionEnd() = default ;
    TranscriptionEnd(const TranscriptionEnd &) = default ;
    TranscriptionEnd(TranscriptionEnd &&) = default ;
    TranscriptionEnd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranscriptionEnd() = default ;
    TranscriptionEnd& operator=(const TranscriptionEnd &) = default ;
    TranscriptionEnd& operator=(TranscriptionEnd &&) = default ;
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
