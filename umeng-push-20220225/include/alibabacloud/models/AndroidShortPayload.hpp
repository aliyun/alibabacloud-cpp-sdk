// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANDROIDSHORTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_ANDROIDSHORTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AndroidShortPayloadBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class AndroidShortPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AndroidShortPayload& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_ANY_TO_JSON(extra, extra_);
    };
    friend void from_json(const Darabonba::Json& j, AndroidShortPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_ANY_FROM_JSON(extra, extra_);
    };
    AndroidShortPayload() = default ;
    AndroidShortPayload(const AndroidShortPayload &) = default ;
    AndroidShortPayload(AndroidShortPayload &&) = default ;
    AndroidShortPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AndroidShortPayload() = default ;
    AndroidShortPayload& operator=(const AndroidShortPayload &) = default ;
    AndroidShortPayload& operator=(AndroidShortPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->extra_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AndroidShortPayloadBody & body() const { DARABONBA_PTR_GET_CONST(body_, AndroidShortPayloadBody) };
    inline AndroidShortPayloadBody body() { DARABONBA_PTR_GET(body_, AndroidShortPayloadBody) };
    inline AndroidShortPayload& setBody(const AndroidShortPayloadBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AndroidShortPayload& setBody(AndroidShortPayloadBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & extra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & extra() { DARABONBA_GET(extra_) };
    inline AndroidShortPayload& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline AndroidShortPayload& setExtra(Darabonba::Json & extra) { DARABONBA_SET_RVALUE(extra_, extra) };


  protected:
    std::shared_ptr<AndroidShortPayloadBody> body_ = nullptr;
    Darabonba::Json extra_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
