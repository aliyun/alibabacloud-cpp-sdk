// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYLISTQUERYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_APPLYLISTQUERYHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyListQueryHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyListQueryHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-acs-btrip-so-corp-token, xAcsBtripSoCorpToken_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyListQueryHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-acs-btrip-so-corp-token, xAcsBtripSoCorpToken_);
    };
    ApplyListQueryHeaders() = default ;
    ApplyListQueryHeaders(const ApplyListQueryHeaders &) = default ;
    ApplyListQueryHeaders(ApplyListQueryHeaders &&) = default ;
    ApplyListQueryHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyListQueryHeaders() = default ;
    ApplyListQueryHeaders& operator=(const ApplyListQueryHeaders &) = default ;
    ApplyListQueryHeaders& operator=(ApplyListQueryHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonHeaders_ != nullptr
        && this->xAcsBtripSoCorpToken_ != nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline ApplyListQueryHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline ApplyListQueryHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xAcsBtripSoCorpToken Field Functions 
    bool hasXAcsBtripSoCorpToken() const { return this->xAcsBtripSoCorpToken_ != nullptr;};
    void deleteXAcsBtripSoCorpToken() { this->xAcsBtripSoCorpToken_ = nullptr;};
    inline string xAcsBtripSoCorpToken() const { DARABONBA_PTR_GET_DEFAULT(xAcsBtripSoCorpToken_, "") };
    inline ApplyListQueryHeaders& setXAcsBtripSoCorpToken(string xAcsBtripSoCorpToken) { DARABONBA_PTR_SET_VALUE(xAcsBtripSoCorpToken_, xAcsBtripSoCorpToken) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<string> xAcsBtripSoCorpToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
