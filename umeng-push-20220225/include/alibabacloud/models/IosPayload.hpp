// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IOSPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_IOSPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Aps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class IosPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IosPayload& obj) { 
      DARABONBA_PTR_TO_JSON(aps, aps_);
      DARABONBA_ANY_TO_JSON(extra, extra_);
    };
    friend void from_json(const Darabonba::Json& j, IosPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(aps, aps_);
      DARABONBA_ANY_FROM_JSON(extra, extra_);
    };
    IosPayload() = default ;
    IosPayload(const IosPayload &) = default ;
    IosPayload(IosPayload &&) = default ;
    IosPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IosPayload() = default ;
    IosPayload& operator=(const IosPayload &) = default ;
    IosPayload& operator=(IosPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aps_ == nullptr
        && return this->extra_ == nullptr; };
    // aps Field Functions 
    bool hasAps() const { return this->aps_ != nullptr;};
    void deleteAps() { this->aps_ = nullptr;};
    inline const Aps & aps() const { DARABONBA_PTR_GET_CONST(aps_, Aps) };
    inline Aps aps() { DARABONBA_PTR_GET(aps_, Aps) };
    inline IosPayload& setAps(const Aps & aps) { DARABONBA_PTR_SET_VALUE(aps_, aps) };
    inline IosPayload& setAps(Aps && aps) { DARABONBA_PTR_SET_RVALUE(aps_, aps) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & extra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & extra() { DARABONBA_GET(extra_) };
    inline IosPayload& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline IosPayload& setExtra(Darabonba::Json & extra) { DARABONBA_SET_RVALUE(extra_, extra) };


  protected:
    std::shared_ptr<Aps> aps_ = nullptr;
    Darabonba::Json extra_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
