// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDDOSSPECINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDDOSSPECINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDdosSpecInfoResponseBodySpecInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDdosSpecInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDdosSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(IsSpecialPort, isSpecialPort_);
      DARABONBA_PTR_TO_JSON(ProtectedArea, protectedArea_);
      DARABONBA_PTR_TO_JSON(QpsLimit, qpsLimit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpecInfos, specInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDdosSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(IsSpecialPort, isSpecialPort_);
      DARABONBA_PTR_FROM_JSON(ProtectedArea, protectedArea_);
      DARABONBA_PTR_FROM_JSON(QpsLimit, qpsLimit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpecInfos, specInfos_);
    };
    DescribeDcdnDdosSpecInfoResponseBody() = default ;
    DescribeDcdnDdosSpecInfoResponseBody(const DescribeDcdnDdosSpecInfoResponseBody &) = default ;
    DescribeDcdnDdosSpecInfoResponseBody(DescribeDcdnDdosSpecInfoResponseBody &&) = default ;
    DescribeDcdnDdosSpecInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDdosSpecInfoResponseBody() = default ;
    DescribeDcdnDdosSpecInfoResponseBody& operator=(const DescribeDcdnDdosSpecInfoResponseBody &) = default ;
    DescribeDcdnDdosSpecInfoResponseBody& operator=(DescribeDcdnDdosSpecInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthLimit_ != nullptr
        && this->edition_ != nullptr && this->enable_ != nullptr && this->isSpecialPort_ != nullptr && this->protectedArea_ != nullptr && this->qpsLimit_ != nullptr
        && this->requestId_ != nullptr && this->specInfos_ != nullptr; };
    // bandwidthLimit Field Functions 
    bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
    void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
    inline string bandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setBandwidthLimit(string bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isSpecialPort Field Functions 
    bool hasIsSpecialPort() const { return this->isSpecialPort_ != nullptr;};
    void deleteIsSpecialPort() { this->isSpecialPort_ = nullptr;};
    inline string isSpecialPort() const { DARABONBA_PTR_GET_DEFAULT(isSpecialPort_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setIsSpecialPort(string isSpecialPort) { DARABONBA_PTR_SET_VALUE(isSpecialPort_, isSpecialPort) };


    // protectedArea Field Functions 
    bool hasProtectedArea() const { return this->protectedArea_ != nullptr;};
    void deleteProtectedArea() { this->protectedArea_ = nullptr;};
    inline string protectedArea() const { DARABONBA_PTR_GET_DEFAULT(protectedArea_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setProtectedArea(string protectedArea) { DARABONBA_PTR_SET_VALUE(protectedArea_, protectedArea) };


    // qpsLimit Field Functions 
    bool hasQpsLimit() const { return this->qpsLimit_ != nullptr;};
    void deleteQpsLimit() { this->qpsLimit_ = nullptr;};
    inline string qpsLimit() const { DARABONBA_PTR_GET_DEFAULT(qpsLimit_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setQpsLimit(string qpsLimit) { DARABONBA_PTR_SET_VALUE(qpsLimit_, qpsLimit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specInfos Field Functions 
    bool hasSpecInfos() const { return this->specInfos_ != nullptr;};
    void deleteSpecInfos() { this->specInfos_ = nullptr;};
    inline const vector<DescribeDcdnDdosSpecInfoResponseBodySpecInfos> & specInfos() const { DARABONBA_PTR_GET_CONST(specInfos_, vector<DescribeDcdnDdosSpecInfoResponseBodySpecInfos>) };
    inline vector<DescribeDcdnDdosSpecInfoResponseBodySpecInfos> specInfos() { DARABONBA_PTR_GET(specInfos_, vector<DescribeDcdnDdosSpecInfoResponseBodySpecInfos>) };
    inline DescribeDcdnDdosSpecInfoResponseBody& setSpecInfos(const vector<DescribeDcdnDdosSpecInfoResponseBodySpecInfos> & specInfos) { DARABONBA_PTR_SET_VALUE(specInfos_, specInfos) };
    inline DescribeDcdnDdosSpecInfoResponseBody& setSpecInfos(vector<DescribeDcdnDdosSpecInfoResponseBodySpecInfos> && specInfos) { DARABONBA_PTR_SET_RVALUE(specInfos_, specInfos) };


  protected:
    // The bandwidth limit of a single instance.
    std::shared_ptr<string> bandwidthLimit_ = nullptr;
    // The version. Valid values:
    // 
    // * **poc**: POC Edition
    // * **basic**: Basic Edition
    // * **insurance**: Insurance Edition
    // * **unlimited**: Unlimited Edition
    // * **port_enhancement**: Special Port Enhanced Edition
    std::shared_ptr<string> edition_ = nullptr;
    // Specifies whether to enable DDoS mitigation. Valid values:
    // 
    // *   **on:**
    // *   **off**.
    std::shared_ptr<string> enable_ = nullptr;
    // Specifies whether custom ports are supported. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> isSpecialPort_ = nullptr;
    // Protected region. Valid values:
    // 
    // * **global**: global
    // * **chinese_mainland**: Chinese mainland
    // * **global_excluding_the_chinese_mainland**: outside the Chinese mainland
    std::shared_ptr<string> protectedArea_ = nullptr;
    // The QPS limit.
    std::shared_ptr<string> qpsLimit_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The code and configurations of the security rules.
    std::shared_ptr<vector<DescribeDcdnDdosSpecInfoResponseBodySpecInfos>> specInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
