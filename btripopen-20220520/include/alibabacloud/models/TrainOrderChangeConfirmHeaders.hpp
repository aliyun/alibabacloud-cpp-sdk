// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCHANGECONFIRMHEADERS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCHANGECONFIRMHEADERS_HPP_
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
  class TrainOrderChangeConfirmHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderChangeConfirmHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-acs-btrip-corp-token, xAcsBtripCorpToken_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderChangeConfirmHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-acs-btrip-corp-token, xAcsBtripCorpToken_);
    };
    TrainOrderChangeConfirmHeaders() = default ;
    TrainOrderChangeConfirmHeaders(const TrainOrderChangeConfirmHeaders &) = default ;
    TrainOrderChangeConfirmHeaders(TrainOrderChangeConfirmHeaders &&) = default ;
    TrainOrderChangeConfirmHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderChangeConfirmHeaders() = default ;
    TrainOrderChangeConfirmHeaders& operator=(const TrainOrderChangeConfirmHeaders &) = default ;
    TrainOrderChangeConfirmHeaders& operator=(TrainOrderChangeConfirmHeaders &&) = default ;
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
    inline TrainOrderChangeConfirmHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline TrainOrderChangeConfirmHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xAcsBtripCorpToken Field Functions 
    bool hasXAcsBtripCorpToken() const { return this->xAcsBtripCorpToken_ != nullptr;};
    void deleteXAcsBtripCorpToken() { this->xAcsBtripCorpToken_ = nullptr;};
    inline string xAcsBtripCorpToken() const { DARABONBA_PTR_GET_DEFAULT(xAcsBtripCorpToken_, "") };
    inline TrainOrderChangeConfirmHeaders& setXAcsBtripCorpToken(string xAcsBtripCorpToken) { DARABONBA_PTR_SET_VALUE(xAcsBtripCorpToken_, xAcsBtripCorpToken) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<string> xAcsBtripCorpToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
