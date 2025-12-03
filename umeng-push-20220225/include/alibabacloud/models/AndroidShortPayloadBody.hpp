// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANDROIDSHORTPAYLOADBODY_HPP_
#define ALIBABACLOUD_MODELS_ANDROIDSHORTPAYLOADBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class AndroidShortPayloadBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AndroidShortPayloadBody& obj) { 
      DARABONBA_PTR_TO_JSON(custom, custom_);
    };
    friend void from_json(const Darabonba::Json& j, AndroidShortPayloadBody& obj) { 
      DARABONBA_PTR_FROM_JSON(custom, custom_);
    };
    AndroidShortPayloadBody() = default ;
    AndroidShortPayloadBody(const AndroidShortPayloadBody &) = default ;
    AndroidShortPayloadBody(AndroidShortPayloadBody &&) = default ;
    AndroidShortPayloadBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AndroidShortPayloadBody() = default ;
    AndroidShortPayloadBody& operator=(const AndroidShortPayloadBody &) = default ;
    AndroidShortPayloadBody& operator=(AndroidShortPayloadBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custom_ == nullptr; };
    // custom Field Functions 
    bool hasCustom() const { return this->custom_ != nullptr;};
    void deleteCustom() { this->custom_ = nullptr;};
    inline string custom() const { DARABONBA_PTR_GET_DEFAULT(custom_, "") };
    inline AndroidShortPayloadBody& setCustom(string custom) { DARABONBA_PTR_SET_VALUE(custom_, custom) };


  protected:
    std::shared_ptr<string> custom_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
