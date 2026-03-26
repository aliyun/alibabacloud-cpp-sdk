// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAEVENTSELECTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAEVENTSELECTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class ListDataEventSelectorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataEventSelectorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataEventSelectorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataEventSelectorsResponseBody() = default ;
    ListDataEventSelectorsResponseBody(const ListDataEventSelectorsResponseBody &) = default ;
    ListDataEventSelectorsResponseBody(ListDataEventSelectorsResponseBody &&) = default ;
    ListDataEventSelectorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataEventSelectorsResponseBody() = default ;
    ListDataEventSelectorsResponseBody& operator=(const ListDataEventSelectorsResponseBody &) = default ;
    ListDataEventSelectorsResponseBody& operator=(ListDataEventSelectorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataEventSelectorInfos, dataEventSelectorInfos_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataEventSelectorInfos, dataEventSelectorInfos_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataEventSelectorInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataEventSelectorInfos& obj) { 
          DARABONBA_PTR_TO_JSON(EventSelectors, eventSelectors_);
          DARABONBA_PTR_TO_JSON(IsTrailAllRegion, isTrailAllRegion_);
          DARABONBA_PTR_TO_JSON(SlsDeliveryConfigs, slsDeliveryConfigs_);
          DARABONBA_PTR_TO_JSON(TrailArn, trailArn_);
          DARABONBA_PTR_TO_JSON(TrailName, trailName_);
        };
        friend void from_json(const Darabonba::Json& j, DataEventSelectorInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(EventSelectors, eventSelectors_);
          DARABONBA_PTR_FROM_JSON(IsTrailAllRegion, isTrailAllRegion_);
          DARABONBA_PTR_FROM_JSON(SlsDeliveryConfigs, slsDeliveryConfigs_);
          DARABONBA_PTR_FROM_JSON(TrailArn, trailArn_);
          DARABONBA_PTR_FROM_JSON(TrailName, trailName_);
        };
        DataEventSelectorInfos() = default ;
        DataEventSelectorInfos(const DataEventSelectorInfos &) = default ;
        DataEventSelectorInfos(DataEventSelectorInfos &&) = default ;
        DataEventSelectorInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataEventSelectorInfos() = default ;
        DataEventSelectorInfos& operator=(const DataEventSelectorInfos &) = default ;
        DataEventSelectorInfos& operator=(DataEventSelectorInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SlsDeliveryConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SlsDeliveryConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(RegionSlsProjectArn, regionSlsProjectArn_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TrailRegion, trailRegion_);
          };
          friend void from_json(const Darabonba::Json& j, SlsDeliveryConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(RegionSlsProjectArn, regionSlsProjectArn_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TrailRegion, trailRegion_);
          };
          SlsDeliveryConfigs() = default ;
          SlsDeliveryConfigs(const SlsDeliveryConfigs &) = default ;
          SlsDeliveryConfigs(SlsDeliveryConfigs &&) = default ;
          SlsDeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SlsDeliveryConfigs() = default ;
          SlsDeliveryConfigs& operator=(const SlsDeliveryConfigs &) = default ;
          SlsDeliveryConfigs& operator=(SlsDeliveryConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->createTime_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->regionSlsProjectArn_ == nullptr && this->status_ == nullptr && this->trailRegion_ == nullptr; };
          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline SlsDeliveryConfigs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline SlsDeliveryConfigs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline SlsDeliveryConfigs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // regionSlsProjectArn Field Functions 
          bool hasRegionSlsProjectArn() const { return this->regionSlsProjectArn_ != nullptr;};
          void deleteRegionSlsProjectArn() { this->regionSlsProjectArn_ = nullptr;};
          inline string getRegionSlsProjectArn() const { DARABONBA_PTR_GET_DEFAULT(regionSlsProjectArn_, "") };
          inline SlsDeliveryConfigs& setRegionSlsProjectArn(string regionSlsProjectArn) { DARABONBA_PTR_SET_VALUE(regionSlsProjectArn_, regionSlsProjectArn) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline SlsDeliveryConfigs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // trailRegion Field Functions 
          bool hasTrailRegion() const { return this->trailRegion_ != nullptr;};
          void deleteTrailRegion() { this->trailRegion_ = nullptr;};
          inline string getTrailRegion() const { DARABONBA_PTR_GET_DEFAULT(trailRegion_, "") };
          inline SlsDeliveryConfigs& setTrailRegion(string trailRegion) { DARABONBA_PTR_SET_VALUE(trailRegion_, trailRegion) };


        protected:
          shared_ptr<string> createTime_ {};
          shared_ptr<string> errorCode_ {};
          shared_ptr<string> errorMessage_ {};
          shared_ptr<string> regionSlsProjectArn_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> trailRegion_ {};
        };

        virtual bool empty() const override { return this->eventSelectors_ == nullptr
        && this->isTrailAllRegion_ == nullptr && this->slsDeliveryConfigs_ == nullptr && this->trailArn_ == nullptr && this->trailName_ == nullptr; };
        // eventSelectors Field Functions 
        bool hasEventSelectors() const { return this->eventSelectors_ != nullptr;};
        void deleteEventSelectors() { this->eventSelectors_ = nullptr;};
        inline string getEventSelectors() const { DARABONBA_PTR_GET_DEFAULT(eventSelectors_, "") };
        inline DataEventSelectorInfos& setEventSelectors(string eventSelectors) { DARABONBA_PTR_SET_VALUE(eventSelectors_, eventSelectors) };


        // isTrailAllRegion Field Functions 
        bool hasIsTrailAllRegion() const { return this->isTrailAllRegion_ != nullptr;};
        void deleteIsTrailAllRegion() { this->isTrailAllRegion_ = nullptr;};
        inline bool getIsTrailAllRegion() const { DARABONBA_PTR_GET_DEFAULT(isTrailAllRegion_, false) };
        inline DataEventSelectorInfos& setIsTrailAllRegion(bool isTrailAllRegion) { DARABONBA_PTR_SET_VALUE(isTrailAllRegion_, isTrailAllRegion) };


        // slsDeliveryConfigs Field Functions 
        bool hasSlsDeliveryConfigs() const { return this->slsDeliveryConfigs_ != nullptr;};
        void deleteSlsDeliveryConfigs() { this->slsDeliveryConfigs_ = nullptr;};
        inline const vector<DataEventSelectorInfos::SlsDeliveryConfigs> & getSlsDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(slsDeliveryConfigs_, vector<DataEventSelectorInfos::SlsDeliveryConfigs>) };
        inline vector<DataEventSelectorInfos::SlsDeliveryConfigs> getSlsDeliveryConfigs() { DARABONBA_PTR_GET(slsDeliveryConfigs_, vector<DataEventSelectorInfos::SlsDeliveryConfigs>) };
        inline DataEventSelectorInfos& setSlsDeliveryConfigs(const vector<DataEventSelectorInfos::SlsDeliveryConfigs> & slsDeliveryConfigs) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };
        inline DataEventSelectorInfos& setSlsDeliveryConfigs(vector<DataEventSelectorInfos::SlsDeliveryConfigs> && slsDeliveryConfigs) { DARABONBA_PTR_SET_RVALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };


        // trailArn Field Functions 
        bool hasTrailArn() const { return this->trailArn_ != nullptr;};
        void deleteTrailArn() { this->trailArn_ = nullptr;};
        inline string getTrailArn() const { DARABONBA_PTR_GET_DEFAULT(trailArn_, "") };
        inline DataEventSelectorInfos& setTrailArn(string trailArn) { DARABONBA_PTR_SET_VALUE(trailArn_, trailArn) };


        // trailName Field Functions 
        bool hasTrailName() const { return this->trailName_ != nullptr;};
        void deleteTrailName() { this->trailName_ = nullptr;};
        inline string getTrailName() const { DARABONBA_PTR_GET_DEFAULT(trailName_, "") };
        inline DataEventSelectorInfos& setTrailName(string trailName) { DARABONBA_PTR_SET_VALUE(trailName_, trailName) };


      protected:
        shared_ptr<string> eventSelectors_ {};
        shared_ptr<bool> isTrailAllRegion_ {};
        shared_ptr<vector<DataEventSelectorInfos::SlsDeliveryConfigs>> slsDeliveryConfigs_ {};
        shared_ptr<string> trailArn_ {};
        shared_ptr<string> trailName_ {};
      };

      virtual bool empty() const override { return this->dataEventSelectorInfos_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // dataEventSelectorInfos Field Functions 
      bool hasDataEventSelectorInfos() const { return this->dataEventSelectorInfos_ != nullptr;};
      void deleteDataEventSelectorInfos() { this->dataEventSelectorInfos_ = nullptr;};
      inline const vector<Data::DataEventSelectorInfos> & getDataEventSelectorInfos() const { DARABONBA_PTR_GET_CONST(dataEventSelectorInfos_, vector<Data::DataEventSelectorInfos>) };
      inline vector<Data::DataEventSelectorInfos> getDataEventSelectorInfos() { DARABONBA_PTR_GET(dataEventSelectorInfos_, vector<Data::DataEventSelectorInfos>) };
      inline Data& setDataEventSelectorInfos(const vector<Data::DataEventSelectorInfos> & dataEventSelectorInfos) { DARABONBA_PTR_SET_VALUE(dataEventSelectorInfos_, dataEventSelectorInfos) };
      inline Data& setDataEventSelectorInfos(vector<Data::DataEventSelectorInfos> && dataEventSelectorInfos) { DARABONBA_PTR_SET_RVALUE(dataEventSelectorInfos_, dataEventSelectorInfos) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      shared_ptr<vector<Data::DataEventSelectorInfos>> dataEventSelectorInfos_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataEventSelectorsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataEventSelectorsResponseBody::Data) };
    inline ListDataEventSelectorsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataEventSelectorsResponseBody::Data) };
    inline ListDataEventSelectorsResponseBody& setData(const ListDataEventSelectorsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataEventSelectorsResponseBody& setData(ListDataEventSelectorsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataEventSelectorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListDataEventSelectorsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
