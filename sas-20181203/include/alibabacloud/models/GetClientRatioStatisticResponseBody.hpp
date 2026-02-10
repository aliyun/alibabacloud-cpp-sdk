// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClientRatioStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientRatioStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientInstallRatio, clientInstallRatio_);
      DARABONBA_PTR_TO_JSON(ClientOnlineRatio, clientOnlineRatio_);
      DARABONBA_PTR_TO_JSON(Dates, dates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientRatioStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientInstallRatio, clientInstallRatio_);
      DARABONBA_PTR_FROM_JSON(ClientOnlineRatio, clientOnlineRatio_);
      DARABONBA_PTR_FROM_JSON(Dates, dates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClientRatioStatisticResponseBody() = default ;
    GetClientRatioStatisticResponseBody(const GetClientRatioStatisticResponseBody &) = default ;
    GetClientRatioStatisticResponseBody(GetClientRatioStatisticResponseBody &&) = default ;
    GetClientRatioStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientRatioStatisticResponseBody() = default ;
    GetClientRatioStatisticResponseBody& operator=(const GetClientRatioStatisticResponseBody &) = default ;
    GetClientRatioStatisticResponseBody& operator=(GetClientRatioStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClientOnlineRatio : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientOnlineRatio& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentItems, currentItems_);
        DARABONBA_PTR_TO_JSON(HistoryItems, historyItems_);
      };
      friend void from_json(const Darabonba::Json& j, ClientOnlineRatio& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentItems, currentItems_);
        DARABONBA_PTR_FROM_JSON(HistoryItems, historyItems_);
      };
      ClientOnlineRatio() = default ;
      ClientOnlineRatio(const ClientOnlineRatio &) = default ;
      ClientOnlineRatio(ClientOnlineRatio &&) = default ;
      ClientOnlineRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientOnlineRatio() = default ;
      ClientOnlineRatio& operator=(const ClientOnlineRatio &) = default ;
      ClientOnlineRatio& operator=(ClientOnlineRatio &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HistoryItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HistoryItems& obj) { 
          DARABONBA_PTR_TO_JSON(Items, items_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, HistoryItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Items, items_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        HistoryItems() = default ;
        HistoryItems(const HistoryItems &) = default ;
        HistoryItems(HistoryItems &&) = default ;
        HistoryItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HistoryItems() = default ;
        HistoryItems& operator=(const HistoryItems &) = default ;
        HistoryItems& operator=(HistoryItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(AssetInstallCount, assetInstallCount_);
            DARABONBA_PTR_TO_JSON(CalculateTime, calculateTime_);
            DARABONBA_PTR_TO_JSON(OnlineAssetCount, onlineAssetCount_);
            DARABONBA_PTR_TO_JSON(OnlineRatio, onlineRatio_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(AssetInstallCount, assetInstallCount_);
            DARABONBA_PTR_FROM_JSON(CalculateTime, calculateTime_);
            DARABONBA_PTR_FROM_JSON(OnlineAssetCount, onlineAssetCount_);
            DARABONBA_PTR_FROM_JSON(OnlineRatio, onlineRatio_);
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
          virtual bool empty() const override { return this->assetInstallCount_ == nullptr
        && this->calculateTime_ == nullptr && this->onlineAssetCount_ == nullptr && this->onlineRatio_ == nullptr; };
          // assetInstallCount Field Functions 
          bool hasAssetInstallCount() const { return this->assetInstallCount_ != nullptr;};
          void deleteAssetInstallCount() { this->assetInstallCount_ = nullptr;};
          inline int32_t getAssetInstallCount() const { DARABONBA_PTR_GET_DEFAULT(assetInstallCount_, 0) };
          inline Items& setAssetInstallCount(int32_t assetInstallCount) { DARABONBA_PTR_SET_VALUE(assetInstallCount_, assetInstallCount) };


          // calculateTime Field Functions 
          bool hasCalculateTime() const { return this->calculateTime_ != nullptr;};
          void deleteCalculateTime() { this->calculateTime_ = nullptr;};
          inline int64_t getCalculateTime() const { DARABONBA_PTR_GET_DEFAULT(calculateTime_, 0L) };
          inline Items& setCalculateTime(int64_t calculateTime) { DARABONBA_PTR_SET_VALUE(calculateTime_, calculateTime) };


          // onlineAssetCount Field Functions 
          bool hasOnlineAssetCount() const { return this->onlineAssetCount_ != nullptr;};
          void deleteOnlineAssetCount() { this->onlineAssetCount_ = nullptr;};
          inline int32_t getOnlineAssetCount() const { DARABONBA_PTR_GET_DEFAULT(onlineAssetCount_, 0) };
          inline Items& setOnlineAssetCount(int32_t onlineAssetCount) { DARABONBA_PTR_SET_VALUE(onlineAssetCount_, onlineAssetCount) };


          // onlineRatio Field Functions 
          bool hasOnlineRatio() const { return this->onlineRatio_ != nullptr;};
          void deleteOnlineRatio() { this->onlineRatio_ = nullptr;};
          inline double getOnlineRatio() const { DARABONBA_PTR_GET_DEFAULT(onlineRatio_, 0.0) };
          inline Items& setOnlineRatio(double onlineRatio) { DARABONBA_PTR_SET_VALUE(onlineRatio_, onlineRatio) };


        protected:
          // The number of assets on which the client is installed.
          shared_ptr<int32_t> assetInstallCount_ {};
          // The timestamp of the calculation. Unit: milliseconds.
          shared_ptr<int64_t> calculateTime_ {};
          // The number of online assets.
          shared_ptr<int32_t> onlineAssetCount_ {};
          // The online rate. Unit: %.
          shared_ptr<double> onlineRatio_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->vendor_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<HistoryItems::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<HistoryItems::Items>) };
        inline vector<HistoryItems::Items> getItems() { DARABONBA_PTR_GET(items_, vector<HistoryItems::Items>) };
        inline HistoryItems& setItems(const vector<HistoryItems::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline HistoryItems& setItems(vector<HistoryItems::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int64_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0L) };
        inline HistoryItems& setVendor(int64_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // The list of historical statistics on the online rate of the client by vendor.
        shared_ptr<vector<HistoryItems::Items>> items_ {};
        // The type of the server. Valid values:
        // 
        // *   **0**: an asset provided by Alibaba Cloud
        // *   **1**: a third-party cloud asset
        // *   **2**: an asset in a data center
        // *   **3**, **4**, **5**, and **7**: other cloud asset
        // *   **8**: a lightweight asset
        shared_ptr<int64_t> vendor_ {};
      };

      class CurrentItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CurrentItems& obj) { 
          DARABONBA_PTR_TO_JSON(Items, items_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, CurrentItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Items, items_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        CurrentItems() = default ;
        CurrentItems(const CurrentItems &) = default ;
        CurrentItems(CurrentItems &&) = default ;
        CurrentItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CurrentItems() = default ;
        CurrentItems& operator=(const CurrentItems &) = default ;
        CurrentItems& operator=(CurrentItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(AssetInstallCount, assetInstallCount_);
            DARABONBA_PTR_TO_JSON(CalculateTime, calculateTime_);
            DARABONBA_PTR_TO_JSON(OnlineAssetCount, onlineAssetCount_);
            DARABONBA_PTR_TO_JSON(OnlineRatio, onlineRatio_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(AssetInstallCount, assetInstallCount_);
            DARABONBA_PTR_FROM_JSON(CalculateTime, calculateTime_);
            DARABONBA_PTR_FROM_JSON(OnlineAssetCount, onlineAssetCount_);
            DARABONBA_PTR_FROM_JSON(OnlineRatio, onlineRatio_);
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
          virtual bool empty() const override { return this->assetInstallCount_ == nullptr
        && this->calculateTime_ == nullptr && this->onlineAssetCount_ == nullptr && this->onlineRatio_ == nullptr; };
          // assetInstallCount Field Functions 
          bool hasAssetInstallCount() const { return this->assetInstallCount_ != nullptr;};
          void deleteAssetInstallCount() { this->assetInstallCount_ = nullptr;};
          inline int32_t getAssetInstallCount() const { DARABONBA_PTR_GET_DEFAULT(assetInstallCount_, 0) };
          inline Items& setAssetInstallCount(int32_t assetInstallCount) { DARABONBA_PTR_SET_VALUE(assetInstallCount_, assetInstallCount) };


          // calculateTime Field Functions 
          bool hasCalculateTime() const { return this->calculateTime_ != nullptr;};
          void deleteCalculateTime() { this->calculateTime_ = nullptr;};
          inline int64_t getCalculateTime() const { DARABONBA_PTR_GET_DEFAULT(calculateTime_, 0L) };
          inline Items& setCalculateTime(int64_t calculateTime) { DARABONBA_PTR_SET_VALUE(calculateTime_, calculateTime) };


          // onlineAssetCount Field Functions 
          bool hasOnlineAssetCount() const { return this->onlineAssetCount_ != nullptr;};
          void deleteOnlineAssetCount() { this->onlineAssetCount_ = nullptr;};
          inline int32_t getOnlineAssetCount() const { DARABONBA_PTR_GET_DEFAULT(onlineAssetCount_, 0) };
          inline Items& setOnlineAssetCount(int32_t onlineAssetCount) { DARABONBA_PTR_SET_VALUE(onlineAssetCount_, onlineAssetCount) };


          // onlineRatio Field Functions 
          bool hasOnlineRatio() const { return this->onlineRatio_ != nullptr;};
          void deleteOnlineRatio() { this->onlineRatio_ = nullptr;};
          inline double getOnlineRatio() const { DARABONBA_PTR_GET_DEFAULT(onlineRatio_, 0.0) };
          inline Items& setOnlineRatio(double onlineRatio) { DARABONBA_PTR_SET_VALUE(onlineRatio_, onlineRatio) };


        protected:
          // The number of assets on which the client is installed.
          shared_ptr<int32_t> assetInstallCount_ {};
          // The timestamp of the calculation. Unit: milliseconds.
          shared_ptr<int64_t> calculateTime_ {};
          // The number of online assets.
          shared_ptr<int32_t> onlineAssetCount_ {};
          // The online rate. Unit: %.
          shared_ptr<double> onlineRatio_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->vendor_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<CurrentItems::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<CurrentItems::Items>) };
        inline vector<CurrentItems::Items> getItems() { DARABONBA_PTR_GET(items_, vector<CurrentItems::Items>) };
        inline CurrentItems& setItems(const vector<CurrentItems::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline CurrentItems& setItems(vector<CurrentItems::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int64_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0L) };
        inline CurrentItems& setVendor(int64_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // The list of current statistics on the online rate of the client by vendor.
        shared_ptr<vector<CurrentItems::Items>> items_ {};
        // The type of the cloud asset. Valid values:
        // 
        // *   **0**: an asset provided by Alibaba Cloud
        // *   **1**: a third-party cloud asset
        // *   **2**: an asset in a data center
        // *   **3**, **4**, **5**, and **7**: other cloud asset
        // *   **8**: a simple application server
        shared_ptr<int64_t> vendor_ {};
      };

      virtual bool empty() const override { return this->currentItems_ == nullptr
        && this->historyItems_ == nullptr; };
      // currentItems Field Functions 
      bool hasCurrentItems() const { return this->currentItems_ != nullptr;};
      void deleteCurrentItems() { this->currentItems_ = nullptr;};
      inline const vector<ClientOnlineRatio::CurrentItems> & getCurrentItems() const { DARABONBA_PTR_GET_CONST(currentItems_, vector<ClientOnlineRatio::CurrentItems>) };
      inline vector<ClientOnlineRatio::CurrentItems> getCurrentItems() { DARABONBA_PTR_GET(currentItems_, vector<ClientOnlineRatio::CurrentItems>) };
      inline ClientOnlineRatio& setCurrentItems(const vector<ClientOnlineRatio::CurrentItems> & currentItems) { DARABONBA_PTR_SET_VALUE(currentItems_, currentItems) };
      inline ClientOnlineRatio& setCurrentItems(vector<ClientOnlineRatio::CurrentItems> && currentItems) { DARABONBA_PTR_SET_RVALUE(currentItems_, currentItems) };


      // historyItems Field Functions 
      bool hasHistoryItems() const { return this->historyItems_ != nullptr;};
      void deleteHistoryItems() { this->historyItems_ = nullptr;};
      inline const vector<ClientOnlineRatio::HistoryItems> & getHistoryItems() const { DARABONBA_PTR_GET_CONST(historyItems_, vector<ClientOnlineRatio::HistoryItems>) };
      inline vector<ClientOnlineRatio::HistoryItems> getHistoryItems() { DARABONBA_PTR_GET(historyItems_, vector<ClientOnlineRatio::HistoryItems>) };
      inline ClientOnlineRatio& setHistoryItems(const vector<ClientOnlineRatio::HistoryItems> & historyItems) { DARABONBA_PTR_SET_VALUE(historyItems_, historyItems) };
      inline ClientOnlineRatio& setHistoryItems(vector<ClientOnlineRatio::HistoryItems> && historyItems) { DARABONBA_PTR_SET_RVALUE(historyItems_, historyItems) };


    protected:
      // The list of current statistics on the online rate of the client.
      shared_ptr<vector<ClientOnlineRatio::CurrentItems>> currentItems_ {};
      // The list of historical statistics on the online rate of the client.
      shared_ptr<vector<ClientOnlineRatio::HistoryItems>> historyItems_ {};
    };

    class ClientInstallRatio : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientInstallRatio& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentItems, currentItems_);
        DARABONBA_PTR_TO_JSON(HistoryItems, historyItems_);
      };
      friend void from_json(const Darabonba::Json& j, ClientInstallRatio& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentItems, currentItems_);
        DARABONBA_PTR_FROM_JSON(HistoryItems, historyItems_);
      };
      ClientInstallRatio() = default ;
      ClientInstallRatio(const ClientInstallRatio &) = default ;
      ClientInstallRatio(ClientInstallRatio &&) = default ;
      ClientInstallRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientInstallRatio() = default ;
      ClientInstallRatio& operator=(const ClientInstallRatio &) = default ;
      ClientInstallRatio& operator=(ClientInstallRatio &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HistoryItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HistoryItems& obj) { 
          DARABONBA_PTR_TO_JSON(Items, items_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, HistoryItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Items, items_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        HistoryItems() = default ;
        HistoryItems(const HistoryItems &) = default ;
        HistoryItems(HistoryItems &&) = default ;
        HistoryItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HistoryItems() = default ;
        HistoryItems& operator=(const HistoryItems &) = default ;
        HistoryItems& operator=(HistoryItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(AssetTotalCount, assetTotalCount_);
            DARABONBA_PTR_TO_JSON(CalculateTime, calculateTime_);
            DARABONBA_PTR_TO_JSON(InstallRatio, installRatio_);
            DARABONBA_PTR_TO_JSON(InstalledAssetCount, installedAssetCount_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(AssetTotalCount, assetTotalCount_);
            DARABONBA_PTR_FROM_JSON(CalculateTime, calculateTime_);
            DARABONBA_PTR_FROM_JSON(InstallRatio, installRatio_);
            DARABONBA_PTR_FROM_JSON(InstalledAssetCount, installedAssetCount_);
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
          virtual bool empty() const override { return this->assetTotalCount_ == nullptr
        && this->calculateTime_ == nullptr && this->installRatio_ == nullptr && this->installedAssetCount_ == nullptr; };
          // assetTotalCount Field Functions 
          bool hasAssetTotalCount() const { return this->assetTotalCount_ != nullptr;};
          void deleteAssetTotalCount() { this->assetTotalCount_ = nullptr;};
          inline int32_t getAssetTotalCount() const { DARABONBA_PTR_GET_DEFAULT(assetTotalCount_, 0) };
          inline Items& setAssetTotalCount(int32_t assetTotalCount) { DARABONBA_PTR_SET_VALUE(assetTotalCount_, assetTotalCount) };


          // calculateTime Field Functions 
          bool hasCalculateTime() const { return this->calculateTime_ != nullptr;};
          void deleteCalculateTime() { this->calculateTime_ = nullptr;};
          inline int64_t getCalculateTime() const { DARABONBA_PTR_GET_DEFAULT(calculateTime_, 0L) };
          inline Items& setCalculateTime(int64_t calculateTime) { DARABONBA_PTR_SET_VALUE(calculateTime_, calculateTime) };


          // installRatio Field Functions 
          bool hasInstallRatio() const { return this->installRatio_ != nullptr;};
          void deleteInstallRatio() { this->installRatio_ = nullptr;};
          inline double getInstallRatio() const { DARABONBA_PTR_GET_DEFAULT(installRatio_, 0.0) };
          inline Items& setInstallRatio(double installRatio) { DARABONBA_PTR_SET_VALUE(installRatio_, installRatio) };


          // installedAssetCount Field Functions 
          bool hasInstalledAssetCount() const { return this->installedAssetCount_ != nullptr;};
          void deleteInstalledAssetCount() { this->installedAssetCount_ = nullptr;};
          inline int32_t getInstalledAssetCount() const { DARABONBA_PTR_GET_DEFAULT(installedAssetCount_, 0) };
          inline Items& setInstalledAssetCount(int32_t installedAssetCount) { DARABONBA_PTR_SET_VALUE(installedAssetCount_, installedAssetCount) };


        protected:
          // The total number of assets.
          shared_ptr<int32_t> assetTotalCount_ {};
          // The timestamp of the calculation. Unit: milliseconds.
          shared_ptr<int64_t> calculateTime_ {};
          // The installation rate. Unit: %.
          shared_ptr<double> installRatio_ {};
          // The number of assets on which the client is installed.
          shared_ptr<int32_t> installedAssetCount_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->vendor_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<HistoryItems::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<HistoryItems::Items>) };
        inline vector<HistoryItems::Items> getItems() { DARABONBA_PTR_GET(items_, vector<HistoryItems::Items>) };
        inline HistoryItems& setItems(const vector<HistoryItems::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline HistoryItems& setItems(vector<HistoryItems::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int64_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0L) };
        inline HistoryItems& setVendor(int64_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // The list of statistics on the client installation rate.
        shared_ptr<vector<HistoryItems::Items>> items_ {};
        // The type of the cloud asset. Valid values:
        // 
        // *   **0**: an asset provided by Alibaba Cloud
        // *   **1**: a third-party cloud asset
        // *   **2**: an asset in a data center
        // *   **3**, **4**, **5**, and **7**: other cloud asset
        // *   **8**: a simple application server
        shared_ptr<int64_t> vendor_ {};
      };

      class CurrentItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CurrentItems& obj) { 
          DARABONBA_PTR_TO_JSON(Items, items_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, CurrentItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Items, items_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        CurrentItems() = default ;
        CurrentItems(const CurrentItems &) = default ;
        CurrentItems(CurrentItems &&) = default ;
        CurrentItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CurrentItems() = default ;
        CurrentItems& operator=(const CurrentItems &) = default ;
        CurrentItems& operator=(CurrentItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(AssetTotalCount, assetTotalCount_);
            DARABONBA_PTR_TO_JSON(CalculateTime, calculateTime_);
            DARABONBA_PTR_TO_JSON(InstallRatio, installRatio_);
            DARABONBA_PTR_TO_JSON(InstalledAssetCount, installedAssetCount_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(AssetTotalCount, assetTotalCount_);
            DARABONBA_PTR_FROM_JSON(CalculateTime, calculateTime_);
            DARABONBA_PTR_FROM_JSON(InstallRatio, installRatio_);
            DARABONBA_PTR_FROM_JSON(InstalledAssetCount, installedAssetCount_);
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
          virtual bool empty() const override { return this->assetTotalCount_ == nullptr
        && this->calculateTime_ == nullptr && this->installRatio_ == nullptr && this->installedAssetCount_ == nullptr; };
          // assetTotalCount Field Functions 
          bool hasAssetTotalCount() const { return this->assetTotalCount_ != nullptr;};
          void deleteAssetTotalCount() { this->assetTotalCount_ = nullptr;};
          inline int32_t getAssetTotalCount() const { DARABONBA_PTR_GET_DEFAULT(assetTotalCount_, 0) };
          inline Items& setAssetTotalCount(int32_t assetTotalCount) { DARABONBA_PTR_SET_VALUE(assetTotalCount_, assetTotalCount) };


          // calculateTime Field Functions 
          bool hasCalculateTime() const { return this->calculateTime_ != nullptr;};
          void deleteCalculateTime() { this->calculateTime_ = nullptr;};
          inline int64_t getCalculateTime() const { DARABONBA_PTR_GET_DEFAULT(calculateTime_, 0L) };
          inline Items& setCalculateTime(int64_t calculateTime) { DARABONBA_PTR_SET_VALUE(calculateTime_, calculateTime) };


          // installRatio Field Functions 
          bool hasInstallRatio() const { return this->installRatio_ != nullptr;};
          void deleteInstallRatio() { this->installRatio_ = nullptr;};
          inline double getInstallRatio() const { DARABONBA_PTR_GET_DEFAULT(installRatio_, 0.0) };
          inline Items& setInstallRatio(double installRatio) { DARABONBA_PTR_SET_VALUE(installRatio_, installRatio) };


          // installedAssetCount Field Functions 
          bool hasInstalledAssetCount() const { return this->installedAssetCount_ != nullptr;};
          void deleteInstalledAssetCount() { this->installedAssetCount_ = nullptr;};
          inline int32_t getInstalledAssetCount() const { DARABONBA_PTR_GET_DEFAULT(installedAssetCount_, 0) };
          inline Items& setInstalledAssetCount(int32_t installedAssetCount) { DARABONBA_PTR_SET_VALUE(installedAssetCount_, installedAssetCount) };


        protected:
          // The total number of assets.
          shared_ptr<int32_t> assetTotalCount_ {};
          // The timestamp of the calculation. Unit: milliseconds.
          shared_ptr<int64_t> calculateTime_ {};
          // The installation rate. Unit: %.
          shared_ptr<double> installRatio_ {};
          // The number of assets on which the client is installed.
          shared_ptr<int32_t> installedAssetCount_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->vendor_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<CurrentItems::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<CurrentItems::Items>) };
        inline vector<CurrentItems::Items> getItems() { DARABONBA_PTR_GET(items_, vector<CurrentItems::Items>) };
        inline CurrentItems& setItems(const vector<CurrentItems::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline CurrentItems& setItems(vector<CurrentItems::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int64_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0L) };
        inline CurrentItems& setVendor(int64_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // The list of the statistics on the installation rate of the client by vendor.
        shared_ptr<vector<CurrentItems::Items>> items_ {};
        // The type of the server. Valid values:
        // 
        // *   **0**: an asset provided by Alibaba Cloud
        // *   **1**: a third-party cloud asset
        // *   **2**: an asset in a data center
        // *   **3**, **4**, **5**, and **7**: other cloud asset
        // *   **8**: a lightweight asset
        shared_ptr<int64_t> vendor_ {};
      };

      virtual bool empty() const override { return this->currentItems_ == nullptr
        && this->historyItems_ == nullptr; };
      // currentItems Field Functions 
      bool hasCurrentItems() const { return this->currentItems_ != nullptr;};
      void deleteCurrentItems() { this->currentItems_ = nullptr;};
      inline const vector<ClientInstallRatio::CurrentItems> & getCurrentItems() const { DARABONBA_PTR_GET_CONST(currentItems_, vector<ClientInstallRatio::CurrentItems>) };
      inline vector<ClientInstallRatio::CurrentItems> getCurrentItems() { DARABONBA_PTR_GET(currentItems_, vector<ClientInstallRatio::CurrentItems>) };
      inline ClientInstallRatio& setCurrentItems(const vector<ClientInstallRatio::CurrentItems> & currentItems) { DARABONBA_PTR_SET_VALUE(currentItems_, currentItems) };
      inline ClientInstallRatio& setCurrentItems(vector<ClientInstallRatio::CurrentItems> && currentItems) { DARABONBA_PTR_SET_RVALUE(currentItems_, currentItems) };


      // historyItems Field Functions 
      bool hasHistoryItems() const { return this->historyItems_ != nullptr;};
      void deleteHistoryItems() { this->historyItems_ = nullptr;};
      inline const vector<ClientInstallRatio::HistoryItems> & getHistoryItems() const { DARABONBA_PTR_GET_CONST(historyItems_, vector<ClientInstallRatio::HistoryItems>) };
      inline vector<ClientInstallRatio::HistoryItems> getHistoryItems() { DARABONBA_PTR_GET(historyItems_, vector<ClientInstallRatio::HistoryItems>) };
      inline ClientInstallRatio& setHistoryItems(const vector<ClientInstallRatio::HistoryItems> & historyItems) { DARABONBA_PTR_SET_VALUE(historyItems_, historyItems) };
      inline ClientInstallRatio& setHistoryItems(vector<ClientInstallRatio::HistoryItems> && historyItems) { DARABONBA_PTR_SET_RVALUE(historyItems_, historyItems) };


    protected:
      // The list of current statistics on the installation rate of the client.
      shared_ptr<vector<ClientInstallRatio::CurrentItems>> currentItems_ {};
      // The list of historical statistics on the installation rate of the client.
      shared_ptr<vector<ClientInstallRatio::HistoryItems>> historyItems_ {};
    };

    virtual bool empty() const override { return this->clientInstallRatio_ == nullptr
        && this->clientOnlineRatio_ == nullptr && this->dates_ == nullptr && this->requestId_ == nullptr; };
    // clientInstallRatio Field Functions 
    bool hasClientInstallRatio() const { return this->clientInstallRatio_ != nullptr;};
    void deleteClientInstallRatio() { this->clientInstallRatio_ = nullptr;};
    inline const GetClientRatioStatisticResponseBody::ClientInstallRatio & getClientInstallRatio() const { DARABONBA_PTR_GET_CONST(clientInstallRatio_, GetClientRatioStatisticResponseBody::ClientInstallRatio) };
    inline GetClientRatioStatisticResponseBody::ClientInstallRatio getClientInstallRatio() { DARABONBA_PTR_GET(clientInstallRatio_, GetClientRatioStatisticResponseBody::ClientInstallRatio) };
    inline GetClientRatioStatisticResponseBody& setClientInstallRatio(const GetClientRatioStatisticResponseBody::ClientInstallRatio & clientInstallRatio) { DARABONBA_PTR_SET_VALUE(clientInstallRatio_, clientInstallRatio) };
    inline GetClientRatioStatisticResponseBody& setClientInstallRatio(GetClientRatioStatisticResponseBody::ClientInstallRatio && clientInstallRatio) { DARABONBA_PTR_SET_RVALUE(clientInstallRatio_, clientInstallRatio) };


    // clientOnlineRatio Field Functions 
    bool hasClientOnlineRatio() const { return this->clientOnlineRatio_ != nullptr;};
    void deleteClientOnlineRatio() { this->clientOnlineRatio_ = nullptr;};
    inline const GetClientRatioStatisticResponseBody::ClientOnlineRatio & getClientOnlineRatio() const { DARABONBA_PTR_GET_CONST(clientOnlineRatio_, GetClientRatioStatisticResponseBody::ClientOnlineRatio) };
    inline GetClientRatioStatisticResponseBody::ClientOnlineRatio getClientOnlineRatio() { DARABONBA_PTR_GET(clientOnlineRatio_, GetClientRatioStatisticResponseBody::ClientOnlineRatio) };
    inline GetClientRatioStatisticResponseBody& setClientOnlineRatio(const GetClientRatioStatisticResponseBody::ClientOnlineRatio & clientOnlineRatio) { DARABONBA_PTR_SET_VALUE(clientOnlineRatio_, clientOnlineRatio) };
    inline GetClientRatioStatisticResponseBody& setClientOnlineRatio(GetClientRatioStatisticResponseBody::ClientOnlineRatio && clientOnlineRatio) { DARABONBA_PTR_SET_RVALUE(clientOnlineRatio_, clientOnlineRatio) };


    // dates Field Functions 
    bool hasDates() const { return this->dates_ != nullptr;};
    void deleteDates() { this->dates_ = nullptr;};
    inline const vector<int64_t> & getDates() const { DARABONBA_PTR_GET_CONST(dates_, vector<int64_t>) };
    inline vector<int64_t> getDates() { DARABONBA_PTR_GET(dates_, vector<int64_t>) };
    inline GetClientRatioStatisticResponseBody& setDates(const vector<int64_t> & dates) { DARABONBA_PTR_SET_VALUE(dates_, dates) };
    inline GetClientRatioStatisticResponseBody& setDates(vector<int64_t> && dates) { DARABONBA_PTR_SET_RVALUE(dates_, dates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientRatioStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the client installation rate.
    shared_ptr<GetClientRatioStatisticResponseBody::ClientInstallRatio> clientInstallRatio_ {};
    // The statistics on the client online rate.
    shared_ptr<GetClientRatioStatisticResponseBody::ClientOnlineRatio> clientOnlineRatio_ {};
    // The list of time when statistics were collected.
    shared_ptr<vector<int64_t>> dates_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
