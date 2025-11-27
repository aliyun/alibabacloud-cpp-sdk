// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMOBILESCARDSUPPORTRESPONSEBODYDATAQUERYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CHECKMOBILESCARDSUPPORTRESPONSEBODYDATAQUERYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CheckMobilesCardSupportResponseBodyDataQueryResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckMobilesCardSupportResponseBodyDataQueryResult& obj) { 
      DARABONBA_PTR_TO_JSON(mobile, mobile_);
      DARABONBA_PTR_TO_JSON(support, support_);
    };
    friend void from_json(const Darabonba::Json& j, CheckMobilesCardSupportResponseBodyDataQueryResult& obj) { 
      DARABONBA_PTR_FROM_JSON(mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(support, support_);
    };
    CheckMobilesCardSupportResponseBodyDataQueryResult() = default ;
    CheckMobilesCardSupportResponseBodyDataQueryResult(const CheckMobilesCardSupportResponseBodyDataQueryResult &) = default ;
    CheckMobilesCardSupportResponseBodyDataQueryResult(CheckMobilesCardSupportResponseBodyDataQueryResult &&) = default ;
    CheckMobilesCardSupportResponseBodyDataQueryResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckMobilesCardSupportResponseBodyDataQueryResult() = default ;
    CheckMobilesCardSupportResponseBodyDataQueryResult& operator=(const CheckMobilesCardSupportResponseBodyDataQueryResult &) = default ;
    CheckMobilesCardSupportResponseBodyDataQueryResult& operator=(CheckMobilesCardSupportResponseBodyDataQueryResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobile_ == nullptr
        && return this->support_ == nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline CheckMobilesCardSupportResponseBodyDataQueryResult& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // support Field Functions 
    bool hasSupport() const { return this->support_ != nullptr;};
    void deleteSupport() { this->support_ = nullptr;};
    inline bool support() const { DARABONBA_PTR_GET_DEFAULT(support_, false) };
    inline CheckMobilesCardSupportResponseBodyDataQueryResult& setSupport(bool support) { DARABONBA_PTR_SET_VALUE(support_, support) };


  protected:
    // The mobile phone number.
    std::shared_ptr<string> mobile_ = nullptr;
    // Indicates whether the mobile phone number supports card messages.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> support_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
