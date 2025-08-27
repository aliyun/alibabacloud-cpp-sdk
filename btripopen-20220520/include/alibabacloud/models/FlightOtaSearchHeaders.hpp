// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHHEADERS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHHEADERS_HPP_
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
  class FlightOtaSearchHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-acs-btrip-corp-token, xAcsBtripCorpToken_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-acs-btrip-corp-token, xAcsBtripCorpToken_);
    };
    FlightOtaSearchHeaders() = default ;
    FlightOtaSearchHeaders(const FlightOtaSearchHeaders &) = default ;
    FlightOtaSearchHeaders(FlightOtaSearchHeaders &&) = default ;
    FlightOtaSearchHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchHeaders() = default ;
    FlightOtaSearchHeaders& operator=(const FlightOtaSearchHeaders &) = default ;
    FlightOtaSearchHeaders& operator=(FlightOtaSearchHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonHeaders_ != nullptr
        && this->xAcsBtripCorpToken_ != nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline FlightOtaSearchHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline FlightOtaSearchHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xAcsBtripCorpToken Field Functions 
    bool hasXAcsBtripCorpToken() const { return this->xAcsBtripCorpToken_ != nullptr;};
    void deleteXAcsBtripCorpToken() { this->xAcsBtripCorpToken_ = nullptr;};
    inline string xAcsBtripCorpToken() const { DARABONBA_PTR_GET_DEFAULT(xAcsBtripCorpToken_, "") };
    inline FlightOtaSearchHeaders& setXAcsBtripCorpToken(string xAcsBtripCorpToken) { DARABONBA_PTR_SET_VALUE(xAcsBtripCorpToken_, xAcsBtripCorpToken) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<string> xAcsBtripCorpToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
