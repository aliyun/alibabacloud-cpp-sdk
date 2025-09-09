// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSREQUESTSTATISTICSRESPONSEBODYDATATHREATINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSREQUESTSTATISTICSRESPONSEBODYDATATHREATINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsRequestStatisticsResponseBodyDataThreatInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsRequestStatisticsResponseBodyDataThreatInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_TO_JSON(ThreatType, threatType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsRequestStatisticsResponseBodyDataThreatInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_FROM_JSON(ThreatType, threatType_);
    };
    DescribePdnsRequestStatisticsResponseBodyDataThreatInfo() = default ;
    DescribePdnsRequestStatisticsResponseBodyDataThreatInfo(const DescribePdnsRequestStatisticsResponseBodyDataThreatInfo &) = default ;
    DescribePdnsRequestStatisticsResponseBodyDataThreatInfo(DescribePdnsRequestStatisticsResponseBodyDataThreatInfo &&) = default ;
    DescribePdnsRequestStatisticsResponseBodyDataThreatInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsRequestStatisticsResponseBodyDataThreatInfo() = default ;
    DescribePdnsRequestStatisticsResponseBodyDataThreatInfo& operator=(const DescribePdnsRequestStatisticsResponseBodyDataThreatInfo &) = default ;
    DescribePdnsRequestStatisticsResponseBodyDataThreatInfo& operator=(DescribePdnsRequestStatisticsResponseBodyDataThreatInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->threatLevel_ != nullptr
        && this->threatType_ != nullptr; };
    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline DescribePdnsRequestStatisticsResponseBodyDataThreatInfo& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


    // threatType Field Functions 
    bool hasThreatType() const { return this->threatType_ != nullptr;};
    void deleteThreatType() { this->threatType_ = nullptr;};
    inline string threatType() const { DARABONBA_PTR_GET_DEFAULT(threatType_, "") };
    inline DescribePdnsRequestStatisticsResponseBodyDataThreatInfo& setThreatType(string threatType) { DARABONBA_PTR_SET_VALUE(threatType_, threatType) };


  protected:
    // The current version does not support this parameter.
    std::shared_ptr<string> threatLevel_ = nullptr;
    // The current version does not support this parameter.
    std::shared_ptr<string> threatType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
