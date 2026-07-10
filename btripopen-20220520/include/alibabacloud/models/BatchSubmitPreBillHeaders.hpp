// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSUBMITPREBILLHEADERS_HPP_
#define ALIBABACLOUD_MODELS_BATCHSUBMITPREBILLHEADERS_HPP_
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
  class BatchSubmitPreBillHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSubmitPreBillHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-acs-btrip-so-corp-token, xAcsBtripSoCorpToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSubmitPreBillHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-acs-btrip-so-corp-token, xAcsBtripSoCorpToken_);
    };
    BatchSubmitPreBillHeaders() = default ;
    BatchSubmitPreBillHeaders(const BatchSubmitPreBillHeaders &) = default ;
    BatchSubmitPreBillHeaders(BatchSubmitPreBillHeaders &&) = default ;
    BatchSubmitPreBillHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSubmitPreBillHeaders() = default ;
    BatchSubmitPreBillHeaders& operator=(const BatchSubmitPreBillHeaders &) = default ;
    BatchSubmitPreBillHeaders& operator=(BatchSubmitPreBillHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xAcsBtripSoCorpToken_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline BatchSubmitPreBillHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline BatchSubmitPreBillHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xAcsBtripSoCorpToken Field Functions 
    bool hasXAcsBtripSoCorpToken() const { return this->xAcsBtripSoCorpToken_ != nullptr;};
    void deleteXAcsBtripSoCorpToken() { this->xAcsBtripSoCorpToken_ = nullptr;};
    inline string getXAcsBtripSoCorpToken() const { DARABONBA_PTR_GET_DEFAULT(xAcsBtripSoCorpToken_, "") };
    inline BatchSubmitPreBillHeaders& setXAcsBtripSoCorpToken(string xAcsBtripSoCorpToken) { DARABONBA_PTR_SET_VALUE(xAcsBtripSoCorpToken_, xAcsBtripSoCorpToken) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // A header parameter obtained from the "enterprise access credential" operation (added in the header). In HTTP mode, you can use so_corp_token=value or dtb_corp_token=value in the URL as a substitute.
    shared_ptr<string> xAcsBtripSoCorpToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
