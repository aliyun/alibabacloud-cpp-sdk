// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListProductsHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-acs-accept-language, xAcsAcceptLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-acs-accept-language, xAcsAcceptLanguage_);
    };
    ListProductsHeaders() = default ;
    ListProductsHeaders(const ListProductsHeaders &) = default ;
    ListProductsHeaders(ListProductsHeaders &&) = default ;
    ListProductsHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsHeaders() = default ;
    ListProductsHeaders& operator=(const ListProductsHeaders &) = default ;
    ListProductsHeaders& operator=(ListProductsHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonHeaders_ != nullptr
        && this->xAcsAcceptLanguage_ != nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline ListProductsHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline ListProductsHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xAcsAcceptLanguage Field Functions 
    bool hasXAcsAcceptLanguage() const { return this->xAcsAcceptLanguage_ != nullptr;};
    void deleteXAcsAcceptLanguage() { this->xAcsAcceptLanguage_ = nullptr;};
    inline string xAcsAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(xAcsAcceptLanguage_, "") };
    inline ListProductsHeaders& setXAcsAcceptLanguage(string xAcsAcceptLanguage) { DARABONBA_PTR_SET_VALUE(xAcsAcceptLanguage_, xAcsAcceptLanguage) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    // Select the language in which the response is returned.
    // 
    // zh_CH: Chinese (default).
    // 
    // en_US: English.
    std::shared_ptr<string> xAcsAcceptLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
