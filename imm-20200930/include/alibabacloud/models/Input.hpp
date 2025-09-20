// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INPUT_HPP_
#define ALIBABACLOUD_MODELS_INPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InputOSS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Input : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Input& obj) { 
      DARABONBA_PTR_TO_JSON(OSS, OSS_);
    };
    friend void from_json(const Darabonba::Json& j, Input& obj) { 
      DARABONBA_PTR_FROM_JSON(OSS, OSS_);
    };
    Input() = default ;
    Input(const Input &) = default ;
    Input(Input &&) = default ;
    Input(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Input() = default ;
    Input& operator=(const Input &) = default ;
    Input& operator=(Input &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->OSS_ != nullptr; };
    // OSS Field Functions 
    bool hasOSS() const { return this->OSS_ != nullptr;};
    void deleteOSS() { this->OSS_ = nullptr;};
    inline const InputOSS & OSS() const { DARABONBA_PTR_GET_CONST(OSS_, InputOSS) };
    inline InputOSS OSS() { DARABONBA_PTR_GET(OSS_, InputOSS) };
    inline Input& setOSS(const InputOSS & OSS) { DARABONBA_PTR_SET_VALUE(OSS_, OSS) };
    inline Input& setOSS(InputOSS && OSS) { DARABONBA_PTR_SET_RVALUE(OSS_, OSS) };


  protected:
    std::shared_ptr<InputOSS> OSS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
