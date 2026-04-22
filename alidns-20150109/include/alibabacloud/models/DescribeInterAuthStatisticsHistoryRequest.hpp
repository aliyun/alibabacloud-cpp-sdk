// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInterAuthStatisticsHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInterAuthStatisticsHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(Rcode, rcode_);
      DARABONBA_PTR_TO_JSON(ServerRegion, serverRegion_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_TO_JSON(StatisticalType, statisticalType_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInterAuthStatisticsHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(Rcode, rcode_);
      DARABONBA_PTR_FROM_JSON(ServerRegion, serverRegion_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_FROM_JSON(StatisticalType, statisticalType_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribeInterAuthStatisticsHistoryRequest() = default ;
    DescribeInterAuthStatisticsHistoryRequest(const DescribeInterAuthStatisticsHistoryRequest &) = default ;
    DescribeInterAuthStatisticsHistoryRequest(DescribeInterAuthStatisticsHistoryRequest &&) = default ;
    DescribeInterAuthStatisticsHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInterAuthStatisticsHistoryRequest() = default ;
    DescribeInterAuthStatisticsHistoryRequest& operator=(const DescribeInterAuthStatisticsHistoryRequest &) = default ;
    DescribeInterAuthStatisticsHistoryRequest& operator=(DescribeInterAuthStatisticsHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTimestamp_ == nullptr && this->rcode_ == nullptr && this->serverRegion_ == nullptr && this->startTimestamp_ == nullptr && this->statisticalType_ == nullptr
        && this->zoneName_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeInterAuthStatisticsHistoryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline DescribeInterAuthStatisticsHistoryRequest& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // rcode Field Functions 
    bool hasRcode() const { return this->rcode_ != nullptr;};
    void deleteRcode() { this->rcode_ = nullptr;};
    inline string getRcode() const { DARABONBA_PTR_GET_DEFAULT(rcode_, "") };
    inline DescribeInterAuthStatisticsHistoryRequest& setRcode(string rcode) { DARABONBA_PTR_SET_VALUE(rcode_, rcode) };


    // serverRegion Field Functions 
    bool hasServerRegion() const { return this->serverRegion_ != nullptr;};
    void deleteServerRegion() { this->serverRegion_ = nullptr;};
    inline string getServerRegion() const { DARABONBA_PTR_GET_DEFAULT(serverRegion_, "") };
    inline DescribeInterAuthStatisticsHistoryRequest& setServerRegion(string serverRegion) { DARABONBA_PTR_SET_VALUE(serverRegion_, serverRegion) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline DescribeInterAuthStatisticsHistoryRequest& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    // statisticalType Field Functions 
    bool hasStatisticalType() const { return this->statisticalType_ != nullptr;};
    void deleteStatisticalType() { this->statisticalType_ = nullptr;};
    inline string getStatisticalType() const { DARABONBA_PTR_GET_DEFAULT(statisticalType_, "") };
    inline DescribeInterAuthStatisticsHistoryRequest& setStatisticalType(string statisticalType) { DARABONBA_PTR_SET_VALUE(statisticalType_, statisticalType) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeInterAuthStatisticsHistoryRequest& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> endTimestamp_ {};
    shared_ptr<string> rcode_ {};
    shared_ptr<string> serverRegion_ {};
    shared_ptr<int64_t> startTimestamp_ {};
    shared_ptr<string> statisticalType_ {};
    shared_ptr<string> zoneName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
