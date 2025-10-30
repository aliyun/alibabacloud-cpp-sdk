// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXBFIXEDLINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BINDAXBFIXEDLINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxbFixedLineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxbFixedLineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Subid, subid_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxbFixedLineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Subid, subid_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
    };
    BindAxbFixedLineResponseBodyData() = default ;
    BindAxbFixedLineResponseBodyData(const BindAxbFixedLineResponseBodyData &) = default ;
    BindAxbFixedLineResponseBodyData(BindAxbFixedLineResponseBodyData &&) = default ;
    BindAxbFixedLineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxbFixedLineResponseBodyData() = default ;
    BindAxbFixedLineResponseBodyData& operator=(const BindAxbFixedLineResponseBodyData &) = default ;
    BindAxbFixedLineResponseBodyData& operator=(BindAxbFixedLineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subid_ == nullptr
        && return this->telX_ == nullptr; };
    // subid Field Functions 
    bool hasSubid() const { return this->subid_ != nullptr;};
    void deleteSubid() { this->subid_ = nullptr;};
    inline string subid() const { DARABONBA_PTR_GET_DEFAULT(subid_, "") };
    inline BindAxbFixedLineResponseBodyData& setSubid(string subid) { DARABONBA_PTR_SET_VALUE(subid_, subid) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string telX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline BindAxbFixedLineResponseBodyData& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


  protected:
    // 绑定id
    std::shared_ptr<string> subid_ = nullptr;
    // X号码
    std::shared_ptr<string> telX_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
