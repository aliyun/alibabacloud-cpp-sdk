// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNFULLDOMAINSBLOCKIPHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNFULLDOMAINSBLOCKIPHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnFullDomainsBlockIPHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnFullDomainsBlockIPHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IPList, IPList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnFullDomainsBlockIPHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IPList, IPList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnFullDomainsBlockIPHistoryRequest() = default ;
    DescribeDcdnFullDomainsBlockIPHistoryRequest(const DescribeDcdnFullDomainsBlockIPHistoryRequest &) = default ;
    DescribeDcdnFullDomainsBlockIPHistoryRequest(DescribeDcdnFullDomainsBlockIPHistoryRequest &&) = default ;
    DescribeDcdnFullDomainsBlockIPHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnFullDomainsBlockIPHistoryRequest() = default ;
    DescribeDcdnFullDomainsBlockIPHistoryRequest& operator=(const DescribeDcdnFullDomainsBlockIPHistoryRequest &) = default ;
    DescribeDcdnFullDomainsBlockIPHistoryRequest& operator=(DescribeDcdnFullDomainsBlockIPHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->IPList_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnFullDomainsBlockIPHistoryRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // IPList Field Functions 
    bool hasIPList() const { return this->IPList_ != nullptr;};
    void deleteIPList() { this->IPList_ = nullptr;};
    inline string getIPList() const { DARABONBA_PTR_GET_DEFAULT(IPList_, "") };
    inline DescribeDcdnFullDomainsBlockIPHistoryRequest& setIPList(string IPList) { DARABONBA_PTR_SET_VALUE(IPList_, IPList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnFullDomainsBlockIPHistoryRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The end time must be later than the start time.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The IP address or CIDR block to query.
    // 
    // This parameter is required.
    shared_ptr<string> IPList_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
