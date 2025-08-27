// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GROUPCORPTOKENHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GROUPCORPTOKENHEADERS_HPP_
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
  class GroupCorpTokenHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GroupCorpTokenHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-acs-btrip-access-token, xAcsBtripAccessToken_);
    };
    friend void from_json(const Darabonba::Json& j, GroupCorpTokenHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-acs-btrip-access-token, xAcsBtripAccessToken_);
    };
    GroupCorpTokenHeaders() = default ;
    GroupCorpTokenHeaders(const GroupCorpTokenHeaders &) = default ;
    GroupCorpTokenHeaders(GroupCorpTokenHeaders &&) = default ;
    GroupCorpTokenHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GroupCorpTokenHeaders() = default ;
    GroupCorpTokenHeaders& operator=(const GroupCorpTokenHeaders &) = default ;
    GroupCorpTokenHeaders& operator=(GroupCorpTokenHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonHeaders_ != nullptr
        && this->xAcsBtripAccessToken_ != nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline GroupCorpTokenHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GroupCorpTokenHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xAcsBtripAccessToken Field Functions 
    bool hasXAcsBtripAccessToken() const { return this->xAcsBtripAccessToken_ != nullptr;};
    void deleteXAcsBtripAccessToken() { this->xAcsBtripAccessToken_ = nullptr;};
    inline string xAcsBtripAccessToken() const { DARABONBA_PTR_GET_DEFAULT(xAcsBtripAccessToken_, "") };
    inline GroupCorpTokenHeaders& setXAcsBtripAccessToken(string xAcsBtripAccessToken) { DARABONBA_PTR_SET_VALUE(xAcsBtripAccessToken_, xAcsBtripAccessToken) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<string> xAcsBtripAccessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
