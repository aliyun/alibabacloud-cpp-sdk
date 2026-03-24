// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYTIMESTAMPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYTIMESTAMPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainBpsDataByTimeStampResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataByTimeStampResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataList, bpsDataList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataByTimeStampResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataList, bpsDataList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDomainBpsDataByTimeStampResponseBody() = default ;
    DescribeDomainBpsDataByTimeStampResponseBody(const DescribeDomainBpsDataByTimeStampResponseBody &) = default ;
    DescribeDomainBpsDataByTimeStampResponseBody(DescribeDomainBpsDataByTimeStampResponseBody &&) = default ;
    DescribeDomainBpsDataByTimeStampResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataByTimeStampResponseBody() = default ;
    DescribeDomainBpsDataByTimeStampResponseBody& operator=(const DescribeDomainBpsDataByTimeStampResponseBody &) = default ;
    DescribeDomainBpsDataByTimeStampResponseBody& operator=(DescribeDomainBpsDataByTimeStampResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BpsDataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BpsDataList& obj) { 
        DARABONBA_PTR_TO_JSON(BpsDataModel, bpsDataModel_);
      };
      friend void from_json(const Darabonba::Json& j, BpsDataList& obj) { 
        DARABONBA_PTR_FROM_JSON(BpsDataModel, bpsDataModel_);
      };
      BpsDataList() = default ;
      BpsDataList(const BpsDataList &) = default ;
      BpsDataList(BpsDataList &&) = default ;
      BpsDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BpsDataList() = default ;
      BpsDataList& operator=(const BpsDataList &) = default ;
      BpsDataList& operator=(BpsDataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BpsDataModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BpsDataModel& obj) { 
          DARABONBA_PTR_TO_JSON(Bps, bps_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
          DARABONBA_PTR_TO_JSON(LocationName, locationName_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, BpsDataModel& obj) { 
          DARABONBA_PTR_FROM_JSON(Bps, bps_);
          DARABONBA_PTR_FROM_JSON(IspName, ispName_);
          DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        BpsDataModel() = default ;
        BpsDataModel(const BpsDataModel &) = default ;
        BpsDataModel(BpsDataModel &&) = default ;
        BpsDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BpsDataModel() = default ;
        BpsDataModel& operator=(const BpsDataModel &) = default ;
        BpsDataModel& operator=(BpsDataModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bps_ == nullptr
        && this->ispName_ == nullptr && this->locationName_ == nullptr && this->timeStamp_ == nullptr; };
        // bps Field Functions 
        bool hasBps() const { return this->bps_ != nullptr;};
        void deleteBps() { this->bps_ = nullptr;};
        inline int64_t getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0L) };
        inline BpsDataModel& setBps(int64_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


        // ispName Field Functions 
        bool hasIspName() const { return this->ispName_ != nullptr;};
        void deleteIspName() { this->ispName_ = nullptr;};
        inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
        inline BpsDataModel& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


        // locationName Field Functions 
        bool hasLocationName() const { return this->locationName_ != nullptr;};
        void deleteLocationName() { this->locationName_ = nullptr;};
        inline string getLocationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
        inline BpsDataModel& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline BpsDataModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<int64_t> bps_ {};
        shared_ptr<string> ispName_ {};
        shared_ptr<string> locationName_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->bpsDataModel_ == nullptr; };
      // bpsDataModel Field Functions 
      bool hasBpsDataModel() const { return this->bpsDataModel_ != nullptr;};
      void deleteBpsDataModel() { this->bpsDataModel_ = nullptr;};
      inline const vector<BpsDataList::BpsDataModel> & getBpsDataModel() const { DARABONBA_PTR_GET_CONST(bpsDataModel_, vector<BpsDataList::BpsDataModel>) };
      inline vector<BpsDataList::BpsDataModel> getBpsDataModel() { DARABONBA_PTR_GET(bpsDataModel_, vector<BpsDataList::BpsDataModel>) };
      inline BpsDataList& setBpsDataModel(const vector<BpsDataList::BpsDataModel> & bpsDataModel) { DARABONBA_PTR_SET_VALUE(bpsDataModel_, bpsDataModel) };
      inline BpsDataList& setBpsDataModel(vector<BpsDataList::BpsDataModel> && bpsDataModel) { DARABONBA_PTR_SET_RVALUE(bpsDataModel_, bpsDataModel) };


    protected:
      shared_ptr<vector<BpsDataList::BpsDataModel>> bpsDataModel_ {};
    };

    virtual bool empty() const override { return this->bpsDataList_ == nullptr
        && this->domainName_ == nullptr && this->requestId_ == nullptr && this->timeStamp_ == nullptr; };
    // bpsDataList Field Functions 
    bool hasBpsDataList() const { return this->bpsDataList_ != nullptr;};
    void deleteBpsDataList() { this->bpsDataList_ = nullptr;};
    inline const DescribeDomainBpsDataByTimeStampResponseBody::BpsDataList & getBpsDataList() const { DARABONBA_PTR_GET_CONST(bpsDataList_, DescribeDomainBpsDataByTimeStampResponseBody::BpsDataList) };
    inline DescribeDomainBpsDataByTimeStampResponseBody::BpsDataList getBpsDataList() { DARABONBA_PTR_GET(bpsDataList_, DescribeDomainBpsDataByTimeStampResponseBody::BpsDataList) };
    inline DescribeDomainBpsDataByTimeStampResponseBody& setBpsDataList(const DescribeDomainBpsDataByTimeStampResponseBody::BpsDataList & bpsDataList) { DARABONBA_PTR_SET_VALUE(bpsDataList_, bpsDataList) };
    inline DescribeDomainBpsDataByTimeStampResponseBody& setBpsDataList(DescribeDomainBpsDataByTimeStampResponseBody::BpsDataList && bpsDataList) { DARABONBA_PTR_SET_RVALUE(bpsDataList_, bpsDataList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainBpsDataByTimeStampResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainBpsDataByTimeStampResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainBpsDataByTimeStampResponseBody& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    shared_ptr<DescribeDomainBpsDataByTimeStampResponseBody::BpsDataList> bpsDataList_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The point in time.
    shared_ptr<string> timeStamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
