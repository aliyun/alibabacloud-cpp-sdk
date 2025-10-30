// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAXBBINDFIXEDLINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYAXBBINDFIXEDLINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAxbBindFixedLineResponseBodyDataExtra.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QueryAxbBindFixedLineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAxbBindFixedLineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Anucode, anucode_);
      DARABONBA_PTR_TO_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_TO_JSON(Areacode, areacode_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Subid, subid_);
      DARABONBA_PTR_TO_JSON(Subts, subts_);
      DARABONBA_PTR_TO_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_TO_JSON(TelA, telA_);
      DARABONBA_PTR_TO_JSON(TelB, telB_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAxbBindFixedLineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Anucode, anucode_);
      DARABONBA_PTR_FROM_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_FROM_JSON(Areacode, areacode_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Subid, subid_);
      DARABONBA_PTR_FROM_JSON(Subts, subts_);
      DARABONBA_PTR_FROM_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_FROM_JSON(TelA, telA_);
      DARABONBA_PTR_FROM_JSON(TelB, telB_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
    };
    QueryAxbBindFixedLineResponseBodyData() = default ;
    QueryAxbBindFixedLineResponseBodyData(const QueryAxbBindFixedLineResponseBodyData &) = default ;
    QueryAxbBindFixedLineResponseBodyData(QueryAxbBindFixedLineResponseBodyData &&) = default ;
    QueryAxbBindFixedLineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAxbBindFixedLineResponseBodyData() = default ;
    QueryAxbBindFixedLineResponseBodyData& operator=(const QueryAxbBindFixedLineResponseBodyData &) = default ;
    QueryAxbBindFixedLineResponseBodyData& operator=(QueryAxbBindFixedLineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anucode_ == nullptr
        && return this->anucodecalled_ == nullptr && return this->areacode_ == nullptr && return this->expiration_ == nullptr && return this->extra_ == nullptr && return this->remark_ == nullptr
        && return this->subid_ == nullptr && return this->subts_ == nullptr && return this->TAnucodeConnect_ == nullptr && return this->telA_ == nullptr && return this->telB_ == nullptr
        && return this->telX_ == nullptr; };
    // anucode Field Functions 
    bool hasAnucode() const { return this->anucode_ != nullptr;};
    void deleteAnucode() { this->anucode_ = nullptr;};
    inline string anucode() const { DARABONBA_PTR_GET_DEFAULT(anucode_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setAnucode(string anucode) { DARABONBA_PTR_SET_VALUE(anucode_, anucode) };


    // anucodecalled Field Functions 
    bool hasAnucodecalled() const { return this->anucodecalled_ != nullptr;};
    void deleteAnucodecalled() { this->anucodecalled_ = nullptr;};
    inline string anucodecalled() const { DARABONBA_PTR_GET_DEFAULT(anucodecalled_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setAnucodecalled(string anucodecalled) { DARABONBA_PTR_SET_VALUE(anucodecalled_, anucodecalled) };


    // areacode Field Functions 
    bool hasAreacode() const { return this->areacode_ != nullptr;};
    void deleteAreacode() { this->areacode_ = nullptr;};
    inline string areacode() const { DARABONBA_PTR_GET_DEFAULT(areacode_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setAreacode(string areacode) { DARABONBA_PTR_SET_VALUE(areacode_, areacode) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const Models::QueryAxbBindFixedLineResponseBodyDataExtra & extra() const { DARABONBA_PTR_GET_CONST(extra_, Models::QueryAxbBindFixedLineResponseBodyDataExtra) };
    inline Models::QueryAxbBindFixedLineResponseBodyDataExtra extra() { DARABONBA_PTR_GET(extra_, Models::QueryAxbBindFixedLineResponseBodyDataExtra) };
    inline QueryAxbBindFixedLineResponseBodyData& setExtra(const Models::QueryAxbBindFixedLineResponseBodyDataExtra & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline QueryAxbBindFixedLineResponseBodyData& setExtra(Models::QueryAxbBindFixedLineResponseBodyDataExtra && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // subid Field Functions 
    bool hasSubid() const { return this->subid_ != nullptr;};
    void deleteSubid() { this->subid_ = nullptr;};
    inline string subid() const { DARABONBA_PTR_GET_DEFAULT(subid_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setSubid(string subid) { DARABONBA_PTR_SET_VALUE(subid_, subid) };


    // subts Field Functions 
    bool hasSubts() const { return this->subts_ != nullptr;};
    void deleteSubts() { this->subts_ = nullptr;};
    inline string subts() const { DARABONBA_PTR_GET_DEFAULT(subts_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setSubts(string subts) { DARABONBA_PTR_SET_VALUE(subts_, subts) };


    // TAnucodeConnect Field Functions 
    bool hasTAnucodeConnect() const { return this->TAnucodeConnect_ != nullptr;};
    void deleteTAnucodeConnect() { this->TAnucodeConnect_ = nullptr;};
    inline string TAnucodeConnect() const { DARABONBA_PTR_GET_DEFAULT(TAnucodeConnect_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setTAnucodeConnect(string TAnucodeConnect) { DARABONBA_PTR_SET_VALUE(TAnucodeConnect_, TAnucodeConnect) };


    // telA Field Functions 
    bool hasTelA() const { return this->telA_ != nullptr;};
    void deleteTelA() { this->telA_ = nullptr;};
    inline string telA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


    // telB Field Functions 
    bool hasTelB() const { return this->telB_ != nullptr;};
    void deleteTelB() { this->telB_ = nullptr;};
    inline string telB() const { DARABONBA_PTR_GET_DEFAULT(telB_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setTelB(string telB) { DARABONBA_PTR_SET_VALUE(telB_, telB) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string telX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline QueryAxbBindFixedLineResponseBodyData& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


  protected:
    // 接通前放音编码，放音编码必须包含3个场景的编码。按照“B->X,A->X,其他号码->X”的顺序填写编码，编码之间以逗号分隔。  比如：“1,2,3”表示B->X放音编号为1，A->X放音编号为2， 其他号码->X放音编号为3
    std::shared_ptr<string> anucode_ = nullptr;
    // 接通后被叫侧放音编码
    std::shared_ptr<string> anucodecalled_ = nullptr;
    // 隐私号码区号
    std::shared_ptr<string> areacode_ = nullptr;
    // 绑定过期时间
    std::shared_ptr<string> expiration_ = nullptr;
    // 额外字段
    std::shared_ptr<Models::QueryAxbBindFixedLineResponseBodyDataExtra> extra_ = nullptr;
    // 接入商自有字段，最大250字符长度
    std::shared_ptr<string> remark_ = nullptr;
    // 绑定id
    std::shared_ptr<string> subid_ = nullptr;
    // 绑定时间，格式为yyyyMMddHHmmss。时间采用北京时间，24小时制。
    std::shared_ptr<string> subts_ = nullptr;
    // 接通后主叫侧放音编码
    std::shared_ptr<string> TAnucodeConnect_ = nullptr;
    // A号码
    std::shared_ptr<string> telA_ = nullptr;
    // B号码
    std::shared_ptr<string> telB_ = nullptr;
    // 小号号码
    std::shared_ptr<string> telX_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
