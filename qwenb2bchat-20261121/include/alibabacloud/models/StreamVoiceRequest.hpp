// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STREAMVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STREAMVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261121
{
namespace Models
{
  class StreamVoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StreamVoiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, StreamVoiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    StreamVoiceRequest() = default ;
    StreamVoiceRequest(const StreamVoiceRequest &) = default ;
    StreamVoiceRequest(StreamVoiceRequest &&) = default ;
    StreamVoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StreamVoiceRequest() = default ;
    StreamVoiceRequest& operator=(const StreamVoiceRequest &) = default ;
    StreamVoiceRequest& operator=(StreamVoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
#endif
