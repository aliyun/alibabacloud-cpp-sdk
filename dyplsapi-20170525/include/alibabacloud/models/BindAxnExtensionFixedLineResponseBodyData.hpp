// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXNEXTENSIONFIXEDLINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BINDAXNEXTENSIONFIXEDLINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxnExtensionFixedLineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxnExtensionFixedLineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Subid, subid_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
      DARABONBA_PTR_TO_JSON(TelXext, telXext_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxnExtensionFixedLineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Subid, subid_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
      DARABONBA_PTR_FROM_JSON(TelXext, telXext_);
    };
    BindAxnExtensionFixedLineResponseBodyData() = default ;
    BindAxnExtensionFixedLineResponseBodyData(const BindAxnExtensionFixedLineResponseBodyData &) = default ;
    BindAxnExtensionFixedLineResponseBodyData(BindAxnExtensionFixedLineResponseBodyData &&) = default ;
    BindAxnExtensionFixedLineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxnExtensionFixedLineResponseBodyData() = default ;
    BindAxnExtensionFixedLineResponseBodyData& operator=(const BindAxnExtensionFixedLineResponseBodyData &) = default ;
    BindAxnExtensionFixedLineResponseBodyData& operator=(BindAxnExtensionFixedLineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subid_ == nullptr
        && return this->telX_ == nullptr && return this->telXext_ == nullptr; };
    // subid Field Functions 
    bool hasSubid() const { return this->subid_ != nullptr;};
    void deleteSubid() { this->subid_ = nullptr;};
    inline string subid() const { DARABONBA_PTR_GET_DEFAULT(subid_, "") };
    inline BindAxnExtensionFixedLineResponseBodyData& setSubid(string subid) { DARABONBA_PTR_SET_VALUE(subid_, subid) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string telX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline BindAxnExtensionFixedLineResponseBodyData& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


    // telXext Field Functions 
    bool hasTelXext() const { return this->telXext_ != nullptr;};
    void deleteTelXext() { this->telXext_ = nullptr;};
    inline string telXext() const { DARABONBA_PTR_GET_DEFAULT(telXext_, "") };
    inline BindAxnExtensionFixedLineResponseBodyData& setTelXext(string telXext) { DARABONBA_PTR_SET_VALUE(telXext_, telXext) };


  protected:
    // 绑定id
    std::shared_ptr<string> subid_ = nullptr;
    // 隐私号码
    std::shared_ptr<string> telX_ = nullptr;
    // 分机号，只有4位
    std::shared_ptr<string> telXext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
