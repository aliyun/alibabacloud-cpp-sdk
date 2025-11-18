// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPLYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPLYHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundApplyHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundApplyHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-acs-airticket-access-token, xAcsAirticketAccessToken_);
      DARABONBA_PTR_TO_JSON(x-acs-airticket-language, xAcsAirticketLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, RefundApplyHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-acs-airticket-access-token, xAcsAirticketAccessToken_);
      DARABONBA_PTR_FROM_JSON(x-acs-airticket-language, xAcsAirticketLanguage_);
    };
    RefundApplyHeaders() = default ;
    RefundApplyHeaders(const RefundApplyHeaders &) = default ;
    RefundApplyHeaders(RefundApplyHeaders &&) = default ;
    RefundApplyHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundApplyHeaders() = default ;
    RefundApplyHeaders& operator=(const RefundApplyHeaders &) = default ;
    RefundApplyHeaders& operator=(RefundApplyHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && return this->xAcsAirticketAccessToken_ == nullptr && return this->xAcsAirticketLanguage_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline RefundApplyHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline RefundApplyHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xAcsAirticketAccessToken Field Functions 
    bool hasXAcsAirticketAccessToken() const { return this->xAcsAirticketAccessToken_ != nullptr;};
    void deleteXAcsAirticketAccessToken() { this->xAcsAirticketAccessToken_ = nullptr;};
    inline string xAcsAirticketAccessToken() const { DARABONBA_PTR_GET_DEFAULT(xAcsAirticketAccessToken_, "") };
    inline RefundApplyHeaders& setXAcsAirticketAccessToken(string xAcsAirticketAccessToken) { DARABONBA_PTR_SET_VALUE(xAcsAirticketAccessToken_, xAcsAirticketAccessToken) };


    // xAcsAirticketLanguage Field Functions 
    bool hasXAcsAirticketLanguage() const { return this->xAcsAirticketLanguage_ != nullptr;};
    void deleteXAcsAirticketLanguage() { this->xAcsAirticketLanguage_ = nullptr;};
    inline string xAcsAirticketLanguage() const { DARABONBA_PTR_GET_DEFAULT(xAcsAirticketLanguage_, "") };
    inline RefundApplyHeaders& setXAcsAirticketLanguage(string xAcsAirticketLanguage) { DARABONBA_PTR_SET_VALUE(xAcsAirticketLanguage_, xAcsAirticketLanguage) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    // Access token
    // 
    // This parameter is required.
    std::shared_ptr<string> xAcsAirticketAccessToken_ = nullptr;
    // Multi-language, default to buyer account configuration
    std::shared_ptr<string> xAcsAirticketLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
