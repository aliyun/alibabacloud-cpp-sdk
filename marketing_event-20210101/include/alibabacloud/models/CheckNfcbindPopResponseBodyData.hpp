// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKNFCBINDPOPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKNFCBINDPOPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class CheckNFCBindPopResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckNFCBindPopResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IsGlobal, isGlobal_);
      DARABONBA_PTR_TO_JSON(IsSign, isSign_);
    };
    friend void from_json(const Darabonba::Json& j, CheckNFCBindPopResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IsGlobal, isGlobal_);
      DARABONBA_PTR_FROM_JSON(IsSign, isSign_);
    };
    CheckNFCBindPopResponseBodyData() = default ;
    CheckNFCBindPopResponseBodyData(const CheckNFCBindPopResponseBodyData &) = default ;
    CheckNFCBindPopResponseBodyData(CheckNFCBindPopResponseBodyData &&) = default ;
    CheckNFCBindPopResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckNFCBindPopResponseBodyData() = default ;
    CheckNFCBindPopResponseBodyData& operator=(const CheckNFCBindPopResponseBodyData &) = default ;
    CheckNFCBindPopResponseBodyData& operator=(CheckNFCBindPopResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isGlobal_ != nullptr
        && this->isSign_ != nullptr; };
    // isGlobal Field Functions 
    bool hasIsGlobal() const { return this->isGlobal_ != nullptr;};
    void deleteIsGlobal() { this->isGlobal_ = nullptr;};
    inline int32_t isGlobal() const { DARABONBA_PTR_GET_DEFAULT(isGlobal_, 0) };
    inline CheckNFCBindPopResponseBodyData& setIsGlobal(int32_t isGlobal) { DARABONBA_PTR_SET_VALUE(isGlobal_, isGlobal) };


    // isSign Field Functions 
    bool hasIsSign() const { return this->isSign_ != nullptr;};
    void deleteIsSign() { this->isSign_ = nullptr;};
    inline bool isSign() const { DARABONBA_PTR_GET_DEFAULT(isSign_, false) };
    inline CheckNFCBindPopResponseBodyData& setIsSign(bool isSign) { DARABONBA_PTR_SET_VALUE(isSign_, isSign) };


  protected:
    std::shared_ptr<int32_t> isGlobal_ = nullptr;
    std::shared_ptr<bool> isSign_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
