// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKHEADERS_HPP_
#define ALIBABACLOUD_MODELS_BOOKHEADERS_HPP_
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
  class BookHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-acs-airticket-access-token, xAcsAirticketAccessToken_);
      DARABONBA_PTR_TO_JSON(x-acs-airticket-language, xAcsAirticketLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, BookHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-acs-airticket-access-token, xAcsAirticketAccessToken_);
      DARABONBA_PTR_FROM_JSON(x-acs-airticket-language, xAcsAirticketLanguage_);
    };
    BookHeaders() = default ;
    BookHeaders(const BookHeaders &) = default ;
    BookHeaders(BookHeaders &&) = default ;
    BookHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookHeaders() = default ;
    BookHeaders& operator=(const BookHeaders &) = default ;
    BookHeaders& operator=(BookHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xAcsAirticketAccessToken_ == nullptr && this->xAcsAirticketLanguage_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline BookHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline BookHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xAcsAirticketAccessToken Field Functions 
    bool hasXAcsAirticketAccessToken() const { return this->xAcsAirticketAccessToken_ != nullptr;};
    void deleteXAcsAirticketAccessToken() { this->xAcsAirticketAccessToken_ = nullptr;};
    inline string getXAcsAirticketAccessToken() const { DARABONBA_PTR_GET_DEFAULT(xAcsAirticketAccessToken_, "") };
    inline BookHeaders& setXAcsAirticketAccessToken(string xAcsAirticketAccessToken) { DARABONBA_PTR_SET_VALUE(xAcsAirticketAccessToken_, xAcsAirticketAccessToken) };


    // xAcsAirticketLanguage Field Functions 
    bool hasXAcsAirticketLanguage() const { return this->xAcsAirticketLanguage_ != nullptr;};
    void deleteXAcsAirticketLanguage() { this->xAcsAirticketLanguage_ = nullptr;};
    inline string getXAcsAirticketLanguage() const { DARABONBA_PTR_GET_DEFAULT(xAcsAirticketLanguage_, "") };
    inline BookHeaders& setXAcsAirticketLanguage(string xAcsAirticketLanguage) { DARABONBA_PTR_SET_VALUE(xAcsAirticketLanguage_, xAcsAirticketLanguage) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // access_token.
    // 
    // This parameter is required.
    shared_ptr<string> xAcsAirticketAccessToken_ {};
    // The language setting. Uses the buyer account configuration by default.
    shared_ptr<string> xAcsAirticketLanguage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
