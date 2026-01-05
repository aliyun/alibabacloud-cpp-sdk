// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDataNetworkListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDataNetworkListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDataNetworkListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeGlobalDataNetworkListResponseBody() = default ;
    DescribeGlobalDataNetworkListResponseBody(const DescribeGlobalDataNetworkListResponseBody &) = default ;
    DescribeGlobalDataNetworkListResponseBody(DescribeGlobalDataNetworkListResponseBody &&) = default ;
    DescribeGlobalDataNetworkListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDataNetworkListResponseBody() = default ;
    DescribeGlobalDataNetworkListResponseBody& operator=(const DescribeGlobalDataNetworkListResponseBody &) = default ;
    DescribeGlobalDataNetworkListResponseBody& operator=(DescribeGlobalDataNetworkListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Networks, networks_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Networks, networks_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Networks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Networks& obj) { 
          DARABONBA_PTR_TO_JSON(Channels, channels_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(NetworkDescription, networkDescription_);
          DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
          DARABONBA_PTR_TO_JSON(NetworkStatus, networkStatus_);
          DARABONBA_PTR_TO_JSON(NetworkTopology, networkTopology_);
        };
        friend void from_json(const Darabonba::Json& j, Networks& obj) { 
          DARABONBA_PTR_FROM_JSON(Channels, channels_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(NetworkDescription, networkDescription_);
          DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
          DARABONBA_PTR_FROM_JSON(NetworkStatus, networkStatus_);
          DARABONBA_PTR_FROM_JSON(NetworkTopology, networkTopology_);
        };
        Networks() = default ;
        Networks(const Networks &) = default ;
        Networks(Networks &&) = default ;
        Networks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Networks() = default ;
        Networks& operator=(const Networks &) = default ;
        Networks& operator=(Networks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NetworkTopology : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkTopology& obj) { 
            DARABONBA_PTR_TO_JSON(Destinations, destinations_);
            DARABONBA_PTR_TO_JSON(Sources, sources_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkTopology& obj) { 
            DARABONBA_PTR_FROM_JSON(Destinations, destinations_);
            DARABONBA_PTR_FROM_JSON(Sources, sources_);
          };
          NetworkTopology() = default ;
          NetworkTopology(const NetworkTopology &) = default ;
          NetworkTopology(NetworkTopology &&) = default ;
          NetworkTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkTopology() = default ;
          NetworkTopology& operator=(const NetworkTopology &) = default ;
          NetworkTopology& operator=(NetworkTopology &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Sources : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Sources& obj) { 
              DARABONBA_PTR_TO_JSON(SourceFileSystemPath, sourceFileSystemPath_);
              DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
              DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
              DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
            };
            friend void from_json(const Darabonba::Json& j, Sources& obj) { 
              DARABONBA_PTR_FROM_JSON(SourceFileSystemPath, sourceFileSystemPath_);
              DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
              DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
              DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
            };
            Sources() = default ;
            Sources(const Sources &) = default ;
            Sources(Sources &&) = default ;
            Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Sources() = default ;
            Sources& operator=(const Sources &) = default ;
            Sources& operator=(Sources &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->sourceFileSystemPath_ == nullptr
        && this->sourceId_ == nullptr && this->sourceRegion_ == nullptr && this->sourceType_ == nullptr; };
            // sourceFileSystemPath Field Functions 
            bool hasSourceFileSystemPath() const { return this->sourceFileSystemPath_ != nullptr;};
            void deleteSourceFileSystemPath() { this->sourceFileSystemPath_ = nullptr;};
            inline string getSourceFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemPath_, "") };
            inline Sources& setSourceFileSystemPath(string sourceFileSystemPath) { DARABONBA_PTR_SET_VALUE(sourceFileSystemPath_, sourceFileSystemPath) };


            // sourceId Field Functions 
            bool hasSourceId() const { return this->sourceId_ != nullptr;};
            void deleteSourceId() { this->sourceId_ = nullptr;};
            inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
            inline Sources& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


            // sourceRegion Field Functions 
            bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
            void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
            inline string getSourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
            inline Sources& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


            // sourceType Field Functions 
            bool hasSourceType() const { return this->sourceType_ != nullptr;};
            void deleteSourceType() { this->sourceType_ = nullptr;};
            inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
            inline Sources& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


          protected:
            shared_ptr<string> sourceFileSystemPath_ {};
            shared_ptr<string> sourceId_ {};
            shared_ptr<string> sourceRegion_ {};
            shared_ptr<string> sourceType_ {};
          };

          class Destinations : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Destinations& obj) { 
              DARABONBA_PTR_TO_JSON(DestinationFileSystemPath, destinationFileSystemPath_);
              DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
              DARABONBA_PTR_TO_JSON(DestinationRegion, destinationRegion_);
              DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
            };
            friend void from_json(const Darabonba::Json& j, Destinations& obj) { 
              DARABONBA_PTR_FROM_JSON(DestinationFileSystemPath, destinationFileSystemPath_);
              DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
              DARABONBA_PTR_FROM_JSON(DestinationRegion, destinationRegion_);
              DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
            };
            Destinations() = default ;
            Destinations(const Destinations &) = default ;
            Destinations(Destinations &&) = default ;
            Destinations(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Destinations() = default ;
            Destinations& operator=(const Destinations &) = default ;
            Destinations& operator=(Destinations &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->destinationFileSystemPath_ == nullptr
        && this->destinationId_ == nullptr && this->destinationRegion_ == nullptr && this->destinationType_ == nullptr; };
            // destinationFileSystemPath Field Functions 
            bool hasDestinationFileSystemPath() const { return this->destinationFileSystemPath_ != nullptr;};
            void deleteDestinationFileSystemPath() { this->destinationFileSystemPath_ = nullptr;};
            inline string getDestinationFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(destinationFileSystemPath_, "") };
            inline Destinations& setDestinationFileSystemPath(string destinationFileSystemPath) { DARABONBA_PTR_SET_VALUE(destinationFileSystemPath_, destinationFileSystemPath) };


            // destinationId Field Functions 
            bool hasDestinationId() const { return this->destinationId_ != nullptr;};
            void deleteDestinationId() { this->destinationId_ = nullptr;};
            inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
            inline Destinations& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


            // destinationRegion Field Functions 
            bool hasDestinationRegion() const { return this->destinationRegion_ != nullptr;};
            void deleteDestinationRegion() { this->destinationRegion_ = nullptr;};
            inline string getDestinationRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationRegion_, "") };
            inline Destinations& setDestinationRegion(string destinationRegion) { DARABONBA_PTR_SET_VALUE(destinationRegion_, destinationRegion) };


            // destinationType Field Functions 
            bool hasDestinationType() const { return this->destinationType_ != nullptr;};
            void deleteDestinationType() { this->destinationType_ = nullptr;};
            inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
            inline Destinations& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


          protected:
            shared_ptr<string> destinationFileSystemPath_ {};
            shared_ptr<string> destinationId_ {};
            shared_ptr<string> destinationRegion_ {};
            shared_ptr<string> destinationType_ {};
          };

          virtual bool empty() const override { return this->destinations_ == nullptr
        && this->sources_ == nullptr; };
          // destinations Field Functions 
          bool hasDestinations() const { return this->destinations_ != nullptr;};
          void deleteDestinations() { this->destinations_ = nullptr;};
          inline const vector<NetworkTopology::Destinations> & getDestinations() const { DARABONBA_PTR_GET_CONST(destinations_, vector<NetworkTopology::Destinations>) };
          inline vector<NetworkTopology::Destinations> getDestinations() { DARABONBA_PTR_GET(destinations_, vector<NetworkTopology::Destinations>) };
          inline NetworkTopology& setDestinations(const vector<NetworkTopology::Destinations> & destinations) { DARABONBA_PTR_SET_VALUE(destinations_, destinations) };
          inline NetworkTopology& setDestinations(vector<NetworkTopology::Destinations> && destinations) { DARABONBA_PTR_SET_RVALUE(destinations_, destinations) };


          // sources Field Functions 
          bool hasSources() const { return this->sources_ != nullptr;};
          void deleteSources() { this->sources_ = nullptr;};
          inline const vector<NetworkTopology::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<NetworkTopology::Sources>) };
          inline vector<NetworkTopology::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<NetworkTopology::Sources>) };
          inline NetworkTopology& setSources(const vector<NetworkTopology::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
          inline NetworkTopology& setSources(vector<NetworkTopology::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


        protected:
          shared_ptr<vector<NetworkTopology::Destinations>> destinations_ {};
          shared_ptr<vector<NetworkTopology::Sources>> sources_ {};
        };

        class Channels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Channels& obj) { 
            DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
            DARABONBA_PTR_TO_JSON(ChannelStatus, channelStatus_);
            DARABONBA_PTR_TO_JSON(FreezeSourceDuringSync, freezeSourceDuringSync_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
          };
          friend void from_json(const Darabonba::Json& j, Channels& obj) { 
            DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
            DARABONBA_PTR_FROM_JSON(ChannelStatus, channelStatus_);
            DARABONBA_PTR_FROM_JSON(FreezeSourceDuringSync, freezeSourceDuringSync_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
          };
          Channels() = default ;
          Channels(const Channels &) = default ;
          Channels(Channels &&) = default ;
          Channels(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Channels() = default ;
          Channels& operator=(const Channels &) = default ;
          Channels& operator=(Channels &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->channelId_ == nullptr
        && this->channelStatus_ == nullptr && this->freezeSourceDuringSync_ == nullptr && this->progress_ == nullptr; };
          // channelId Field Functions 
          bool hasChannelId() const { return this->channelId_ != nullptr;};
          void deleteChannelId() { this->channelId_ = nullptr;};
          inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
          inline Channels& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


          // channelStatus Field Functions 
          bool hasChannelStatus() const { return this->channelStatus_ != nullptr;};
          void deleteChannelStatus() { this->channelStatus_ = nullptr;};
          inline string getChannelStatus() const { DARABONBA_PTR_GET_DEFAULT(channelStatus_, "") };
          inline Channels& setChannelStatus(string channelStatus) { DARABONBA_PTR_SET_VALUE(channelStatus_, channelStatus) };


          // freezeSourceDuringSync Field Functions 
          bool hasFreezeSourceDuringSync() const { return this->freezeSourceDuringSync_ != nullptr;};
          void deleteFreezeSourceDuringSync() { this->freezeSourceDuringSync_ = nullptr;};
          inline bool getFreezeSourceDuringSync() const { DARABONBA_PTR_GET_DEFAULT(freezeSourceDuringSync_, false) };
          inline Channels& setFreezeSourceDuringSync(bool freezeSourceDuringSync) { DARABONBA_PTR_SET_VALUE(freezeSourceDuringSync_, freezeSourceDuringSync) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline Channels& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        protected:
          shared_ptr<string> channelId_ {};
          shared_ptr<string> channelStatus_ {};
          shared_ptr<bool> freezeSourceDuringSync_ {};
          shared_ptr<string> progress_ {};
        };

        virtual bool empty() const override { return this->channels_ == nullptr
        && this->createTime_ == nullptr && this->networkDescription_ == nullptr && this->networkId_ == nullptr && this->networkStatus_ == nullptr && this->networkTopology_ == nullptr; };
        // channels Field Functions 
        bool hasChannels() const { return this->channels_ != nullptr;};
        void deleteChannels() { this->channels_ = nullptr;};
        inline const vector<Networks::Channels> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<Networks::Channels>) };
        inline vector<Networks::Channels> getChannels() { DARABONBA_PTR_GET(channels_, vector<Networks::Channels>) };
        inline Networks& setChannels(const vector<Networks::Channels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
        inline Networks& setChannels(vector<Networks::Channels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Networks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // networkDescription Field Functions 
        bool hasNetworkDescription() const { return this->networkDescription_ != nullptr;};
        void deleteNetworkDescription() { this->networkDescription_ = nullptr;};
        inline string getNetworkDescription() const { DARABONBA_PTR_GET_DEFAULT(networkDescription_, "") };
        inline Networks& setNetworkDescription(string networkDescription) { DARABONBA_PTR_SET_VALUE(networkDescription_, networkDescription) };


        // networkId Field Functions 
        bool hasNetworkId() const { return this->networkId_ != nullptr;};
        void deleteNetworkId() { this->networkId_ = nullptr;};
        inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
        inline Networks& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


        // networkStatus Field Functions 
        bool hasNetworkStatus() const { return this->networkStatus_ != nullptr;};
        void deleteNetworkStatus() { this->networkStatus_ = nullptr;};
        inline string getNetworkStatus() const { DARABONBA_PTR_GET_DEFAULT(networkStatus_, "") };
        inline Networks& setNetworkStatus(string networkStatus) { DARABONBA_PTR_SET_VALUE(networkStatus_, networkStatus) };


        // networkTopology Field Functions 
        bool hasNetworkTopology() const { return this->networkTopology_ != nullptr;};
        void deleteNetworkTopology() { this->networkTopology_ = nullptr;};
        inline const Networks::NetworkTopology & getNetworkTopology() const { DARABONBA_PTR_GET_CONST(networkTopology_, Networks::NetworkTopology) };
        inline Networks::NetworkTopology getNetworkTopology() { DARABONBA_PTR_GET(networkTopology_, Networks::NetworkTopology) };
        inline Networks& setNetworkTopology(const Networks::NetworkTopology & networkTopology) { DARABONBA_PTR_SET_VALUE(networkTopology_, networkTopology) };
        inline Networks& setNetworkTopology(Networks::NetworkTopology && networkTopology) { DARABONBA_PTR_SET_RVALUE(networkTopology_, networkTopology) };


      protected:
        shared_ptr<vector<Networks::Channels>> channels_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> networkDescription_ {};
        // GDN ID
        shared_ptr<string> networkId_ {};
        shared_ptr<string> networkStatus_ {};
        shared_ptr<Networks::NetworkTopology> networkTopology_ {};
      };

      virtual bool empty() const override { return this->networks_ == nullptr; };
      // networks Field Functions 
      bool hasNetworks() const { return this->networks_ != nullptr;};
      void deleteNetworks() { this->networks_ = nullptr;};
      inline const vector<Items::Networks> & getNetworks() const { DARABONBA_PTR_GET_CONST(networks_, vector<Items::Networks>) };
      inline vector<Items::Networks> getNetworks() { DARABONBA_PTR_GET(networks_, vector<Items::Networks>) };
      inline Items& setNetworks(const vector<Items::Networks> & networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };
      inline Items& setNetworks(vector<Items::Networks> && networks) { DARABONBA_PTR_SET_RVALUE(networks_, networks) };


    protected:
      shared_ptr<vector<Items::Networks>> networks_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeGlobalDataNetworkListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeGlobalDataNetworkListResponseBody::Items) };
    inline DescribeGlobalDataNetworkListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeGlobalDataNetworkListResponseBody::Items) };
    inline DescribeGlobalDataNetworkListResponseBody& setItems(const DescribeGlobalDataNetworkListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeGlobalDataNetworkListResponseBody& setItems(DescribeGlobalDataNetworkListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeGlobalDataNetworkListResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline DescribeGlobalDataNetworkListResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalDataNetworkListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribeGlobalDataNetworkListResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<DescribeGlobalDataNetworkListResponseBody::Items> items_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
