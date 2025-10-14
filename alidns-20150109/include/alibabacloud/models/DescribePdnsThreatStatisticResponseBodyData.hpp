// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATSTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATSTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsThreatStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsThreatStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DohTotalCount, dohTotalCount_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_TO_JSON(ThreatType, threatType_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UdpTotalCount, udpTotalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsThreatStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DohTotalCount, dohTotalCount_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_FROM_JSON(ThreatType, threatType_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UdpTotalCount, udpTotalCount_);
    };
    DescribePdnsThreatStatisticResponseBodyData() = default ;
    DescribePdnsThreatStatisticResponseBodyData(const DescribePdnsThreatStatisticResponseBodyData &) = default ;
    DescribePdnsThreatStatisticResponseBodyData(DescribePdnsThreatStatisticResponseBodyData &&) = default ;
    DescribePdnsThreatStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsThreatStatisticResponseBodyData() = default ;
    DescribePdnsThreatStatisticResponseBodyData& operator=(const DescribePdnsThreatStatisticResponseBodyData &) = default ;
    DescribePdnsThreatStatisticResponseBodyData& operator=(DescribePdnsThreatStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dohTotalCount_ == nullptr
        && return this->threatLevel_ == nullptr && return this->threatType_ == nullptr && return this->timestamp_ == nullptr && return this->totalCount_ == nullptr && return this->udpTotalCount_ == nullptr; };
    // dohTotalCount Field Functions 
    bool hasDohTotalCount() const { return this->dohTotalCount_ != nullptr;};
    void deleteDohTotalCount() { this->dohTotalCount_ = nullptr;};
    inline int64_t dohTotalCount() const { DARABONBA_PTR_GET_DEFAULT(dohTotalCount_, 0L) };
    inline DescribePdnsThreatStatisticResponseBodyData& setDohTotalCount(int64_t dohTotalCount) { DARABONBA_PTR_SET_VALUE(dohTotalCount_, dohTotalCount) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline DescribePdnsThreatStatisticResponseBodyData& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


    // threatType Field Functions 
    bool hasThreatType() const { return this->threatType_ != nullptr;};
    void deleteThreatType() { this->threatType_ = nullptr;};
    inline string threatType() const { DARABONBA_PTR_GET_DEFAULT(threatType_, "") };
    inline DescribePdnsThreatStatisticResponseBodyData& setThreatType(string threatType) { DARABONBA_PTR_SET_VALUE(threatType_, threatType) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribePdnsThreatStatisticResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePdnsThreatStatisticResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // udpTotalCount Field Functions 
    bool hasUdpTotalCount() const { return this->udpTotalCount_ != nullptr;};
    void deleteUdpTotalCount() { this->udpTotalCount_ = nullptr;};
    inline int64_t udpTotalCount() const { DARABONBA_PTR_GET_DEFAULT(udpTotalCount_, 0L) };
    inline DescribePdnsThreatStatisticResponseBodyData& setUdpTotalCount(int64_t udpTotalCount) { DARABONBA_PTR_SET_VALUE(udpTotalCount_, udpTotalCount) };


  protected:
    std::shared_ptr<int64_t> dohTotalCount_ = nullptr;
    std::shared_ptr<string> threatLevel_ = nullptr;
    std::shared_ptr<string> threatType_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> udpTotalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
