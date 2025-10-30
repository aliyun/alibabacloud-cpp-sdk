// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAXNEXTENSIONBINDFIXEDLINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYAXNEXTENSIONBINDFIXEDLINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAxnExtensionBindFixedLineResponseBodyDataExtraaxx.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QueryAxnExtensionBindFixedLineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAxnExtensionBindFixedLineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Anucode, anucode_);
      DARABONBA_PTR_TO_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_TO_JSON(Areacode, areacode_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Extraaxx, extraaxx_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Subid, subid_);
      DARABONBA_PTR_TO_JSON(Subts, subts_);
      DARABONBA_PTR_TO_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_TO_JSON(TelA, telA_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
      DARABONBA_PTR_TO_JSON(TelXext, telXext_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAxnExtensionBindFixedLineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Anucode, anucode_);
      DARABONBA_PTR_FROM_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_FROM_JSON(Areacode, areacode_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Extraaxx, extraaxx_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Subid, subid_);
      DARABONBA_PTR_FROM_JSON(Subts, subts_);
      DARABONBA_PTR_FROM_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_FROM_JSON(TelA, telA_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
      DARABONBA_PTR_FROM_JSON(TelXext, telXext_);
    };
    QueryAxnExtensionBindFixedLineResponseBodyData() = default ;
    QueryAxnExtensionBindFixedLineResponseBodyData(const QueryAxnExtensionBindFixedLineResponseBodyData &) = default ;
    QueryAxnExtensionBindFixedLineResponseBodyData(QueryAxnExtensionBindFixedLineResponseBodyData &&) = default ;
    QueryAxnExtensionBindFixedLineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAxnExtensionBindFixedLineResponseBodyData() = default ;
    QueryAxnExtensionBindFixedLineResponseBodyData& operator=(const QueryAxnExtensionBindFixedLineResponseBodyData &) = default ;
    QueryAxnExtensionBindFixedLineResponseBodyData& operator=(QueryAxnExtensionBindFixedLineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anucode_ == nullptr
        && return this->anucodecalled_ == nullptr && return this->areacode_ == nullptr && return this->expiration_ == nullptr && return this->extraaxx_ == nullptr && return this->remark_ == nullptr
        && return this->subid_ == nullptr && return this->subts_ == nullptr && return this->TAnucodeConnect_ == nullptr && return this->telA_ == nullptr && return this->telX_ == nullptr
        && return this->telXext_ == nullptr; };
    // anucode Field Functions 
    bool hasAnucode() const { return this->anucode_ != nullptr;};
    void deleteAnucode() { this->anucode_ = nullptr;};
    inline string anucode() const { DARABONBA_PTR_GET_DEFAULT(anucode_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setAnucode(string anucode) { DARABONBA_PTR_SET_VALUE(anucode_, anucode) };


    // anucodecalled Field Functions 
    bool hasAnucodecalled() const { return this->anucodecalled_ != nullptr;};
    void deleteAnucodecalled() { this->anucodecalled_ = nullptr;};
    inline string anucodecalled() const { DARABONBA_PTR_GET_DEFAULT(anucodecalled_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setAnucodecalled(string anucodecalled) { DARABONBA_PTR_SET_VALUE(anucodecalled_, anucodecalled) };


    // areacode Field Functions 
    bool hasAreacode() const { return this->areacode_ != nullptr;};
    void deleteAreacode() { this->areacode_ = nullptr;};
    inline string areacode() const { DARABONBA_PTR_GET_DEFAULT(areacode_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setAreacode(string areacode) { DARABONBA_PTR_SET_VALUE(areacode_, areacode) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // extraaxx Field Functions 
    bool hasExtraaxx() const { return this->extraaxx_ != nullptr;};
    void deleteExtraaxx() { this->extraaxx_ = nullptr;};
    inline const Models::QueryAxnExtensionBindFixedLineResponseBodyDataExtraaxx & extraaxx() const { DARABONBA_PTR_GET_CONST(extraaxx_, Models::QueryAxnExtensionBindFixedLineResponseBodyDataExtraaxx) };
    inline Models::QueryAxnExtensionBindFixedLineResponseBodyDataExtraaxx extraaxx() { DARABONBA_PTR_GET(extraaxx_, Models::QueryAxnExtensionBindFixedLineResponseBodyDataExtraaxx) };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setExtraaxx(const Models::QueryAxnExtensionBindFixedLineResponseBodyDataExtraaxx & extraaxx) { DARABONBA_PTR_SET_VALUE(extraaxx_, extraaxx) };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setExtraaxx(Models::QueryAxnExtensionBindFixedLineResponseBodyDataExtraaxx && extraaxx) { DARABONBA_PTR_SET_RVALUE(extraaxx_, extraaxx) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // subid Field Functions 
    bool hasSubid() const { return this->subid_ != nullptr;};
    void deleteSubid() { this->subid_ = nullptr;};
    inline string subid() const { DARABONBA_PTR_GET_DEFAULT(subid_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setSubid(string subid) { DARABONBA_PTR_SET_VALUE(subid_, subid) };


    // subts Field Functions 
    bool hasSubts() const { return this->subts_ != nullptr;};
    void deleteSubts() { this->subts_ = nullptr;};
    inline string subts() const { DARABONBA_PTR_GET_DEFAULT(subts_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setSubts(string subts) { DARABONBA_PTR_SET_VALUE(subts_, subts) };


    // TAnucodeConnect Field Functions 
    bool hasTAnucodeConnect() const { return this->TAnucodeConnect_ != nullptr;};
    void deleteTAnucodeConnect() { this->TAnucodeConnect_ = nullptr;};
    inline string TAnucodeConnect() const { DARABONBA_PTR_GET_DEFAULT(TAnucodeConnect_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setTAnucodeConnect(string TAnucodeConnect) { DARABONBA_PTR_SET_VALUE(TAnucodeConnect_, TAnucodeConnect) };


    // telA Field Functions 
    bool hasTelA() const { return this->telA_ != nullptr;};
    void deleteTelA() { this->telA_ = nullptr;};
    inline string telA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string telX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


    // telXext Field Functions 
    bool hasTelXext() const { return this->telXext_ != nullptr;};
    void deleteTelXext() { this->telXext_ = nullptr;};
    inline string telXext() const { DARABONBA_PTR_GET_DEFAULT(telXext_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBodyData& setTelXext(string telXext) { DARABONBA_PTR_SET_VALUE(telXext_, telXext) };


  protected:
    // 放音编码
    std::shared_ptr<string> anucode_ = nullptr;
    // 被叫侧放音
    std::shared_ptr<string> anucodecalled_ = nullptr;
    // 隐私号码区号
    std::shared_ptr<string> areacode_ = nullptr;
    // 过期时间
    std::shared_ptr<string> expiration_ = nullptr;
    // 额外字段
    std::shared_ptr<Models::QueryAxnExtensionBindFixedLineResponseBodyDataExtraaxx> extraaxx_ = nullptr;
    // 接入商自有字段，最大250字符长度
    std::shared_ptr<string> remark_ = nullptr;
    // 绑定ID
    std::shared_ptr<string> subid_ = nullptr;
    // 绑定时间
    std::shared_ptr<string> subts_ = nullptr;
    // 接通后主叫侧放音编码
    std::shared_ptr<string> TAnucodeConnect_ = nullptr;
    // A号码
    std::shared_ptr<string> telA_ = nullptr;
    // 小号号码
    std::shared_ptr<string> telX_ = nullptr;
    // 分机号
    std::shared_ptr<string> telXext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
