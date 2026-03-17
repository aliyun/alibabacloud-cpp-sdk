// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCRIBESMARTACCESSGATEWAYDIAGNOSISREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISCRIBESMARTACCESSGATEWAYDIAGNOSISREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DiscribeSmartAccessGatewayDiagnosisReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscribeSmartAccessGatewayDiagnosisReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnoseResult, diagnoseResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DiscribeSmartAccessGatewayDiagnosisReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnoseResult, diagnoseResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DiscribeSmartAccessGatewayDiagnosisReportResponseBody() = default ;
    DiscribeSmartAccessGatewayDiagnosisReportResponseBody(const DiscribeSmartAccessGatewayDiagnosisReportResponseBody &) = default ;
    DiscribeSmartAccessGatewayDiagnosisReportResponseBody(DiscribeSmartAccessGatewayDiagnosisReportResponseBody &&) = default ;
    DiscribeSmartAccessGatewayDiagnosisReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscribeSmartAccessGatewayDiagnosisReportResponseBody() = default ;
    DiscribeSmartAccessGatewayDiagnosisReportResponseBody& operator=(const DiscribeSmartAccessGatewayDiagnosisReportResponseBody &) = default ;
    DiscribeSmartAccessGatewayDiagnosisReportResponseBody& operator=(DiscribeSmartAccessGatewayDiagnosisReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiagnoseResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiagnoseResult& obj) { 
        DARABONBA_PTR_TO_JSON(BoxType, boxType_);
        DARABONBA_PTR_TO_JSON(BoxVersion, boxVersion_);
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(DiagnoseId, diagnoseId_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FinishedNumber, finishedNumber_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(MonitorVersion, monitorVersion_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(ReportSLSSuccess, reportSLSSuccess_);
        DARABONBA_PTR_TO_JSON(SN, SN_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Statistics, statistics_);
        DARABONBA_PTR_TO_JSON(StoreType, storeType_);
        DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
        DARABONBA_PTR_TO_JSON(UId, UId_);
        DARABONBA_PTR_TO_JSON(UserLevel, userLevel_);
      };
      friend void from_json(const Darabonba::Json& j, DiagnoseResult& obj) { 
        DARABONBA_PTR_FROM_JSON(BoxType, boxType_);
        DARABONBA_PTR_FROM_JSON(BoxVersion, boxVersion_);
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(DiagnoseId, diagnoseId_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FinishedNumber, finishedNumber_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(MonitorVersion, monitorVersion_);
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(ReportSLSSuccess, reportSLSSuccess_);
        DARABONBA_PTR_FROM_JSON(SN, SN_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
        DARABONBA_PTR_FROM_JSON(StoreType, storeType_);
        DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
        DARABONBA_PTR_FROM_JSON(UId, UId_);
        DARABONBA_PTR_FROM_JSON(UserLevel, userLevel_);
      };
      DiagnoseResult() = default ;
      DiagnoseResult(const DiagnoseResult &) = default ;
      DiagnoseResult(DiagnoseResult &&) = default ;
      DiagnoseResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiagnoseResult() = default ;
      DiagnoseResult& operator=(const DiagnoseResult &) = default ;
      DiagnoseResult& operator=(DiagnoseResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Statistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
          DARABONBA_PTR_TO_JSON(Error, error_);
          DARABONBA_PTR_TO_JSON(Info, info_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Warning, warning_);
        };
        friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
          DARABONBA_PTR_FROM_JSON(Error, error_);
          DARABONBA_PTR_FROM_JSON(Info, info_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Warning, warning_);
        };
        Statistics() = default ;
        Statistics(const Statistics &) = default ;
        Statistics(Statistics &&) = default ;
        Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistics() = default ;
        Statistics& operator=(const Statistics &) = default ;
        Statistics& operator=(Statistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->error_ == nullptr
        && this->info_ == nullptr && this->total_ == nullptr && this->warning_ == nullptr; };
        // error Field Functions 
        bool hasError() const { return this->error_ != nullptr;};
        void deleteError() { this->error_ = nullptr;};
        inline int32_t getError() const { DARABONBA_PTR_GET_DEFAULT(error_, 0) };
        inline Statistics& setError(int32_t error) { DARABONBA_PTR_SET_VALUE(error_, error) };


        // info Field Functions 
        bool hasInfo() const { return this->info_ != nullptr;};
        void deleteInfo() { this->info_ = nullptr;};
        inline int32_t getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, 0) };
        inline Statistics& setInfo(int32_t info) { DARABONBA_PTR_SET_VALUE(info_, info) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline Statistics& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // warning Field Functions 
        bool hasWarning() const { return this->warning_ != nullptr;};
        void deleteWarning() { this->warning_ = nullptr;};
        inline int32_t getWarning() const { DARABONBA_PTR_GET_DEFAULT(warning_, 0) };
        inline Statistics& setWarning(int32_t warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };


      protected:
        // The number of items of the **ERROR** level.
        shared_ptr<int32_t> error_ {};
        // The number of items of the **INFO** level.
        shared_ptr<int32_t> info_ {};
        // The total number of items.
        shared_ptr<int32_t> total_ {};
        // The number of items of the **WARNING** level.
        shared_ptr<int32_t> warning_ {};
      };

      class Level : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Level& obj) { 
          DARABONBA_PTR_TO_JSON(Biz, biz_);
          DARABONBA_PTR_TO_JSON(Configuration, configuration_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, Level& obj) { 
          DARABONBA_PTR_FROM_JSON(Biz, biz_);
          DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        Level() = default ;
        Level(const Level &) = default ;
        Level(Level &&) = default ;
        Level(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Level() = default ;
        Level& operator=(const Level &) = default ;
        Level& operator=(Level &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->biz_ == nullptr
        && this->configuration_ == nullptr && this->total_ == nullptr; };
        // biz Field Functions 
        bool hasBiz() const { return this->biz_ != nullptr;};
        void deleteBiz() { this->biz_ = nullptr;};
        inline string getBiz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
        inline Level& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


        // configuration Field Functions 
        bool hasConfiguration() const { return this->configuration_ != nullptr;};
        void deleteConfiguration() { this->configuration_ = nullptr;};
        inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
        inline Level& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
        inline Level& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        // The diagnosis level of the service quality.
        shared_ptr<string> biz_ {};
        // The diagnosis level of the SAG configuration.
        shared_ptr<string> configuration_ {};
        // The overall diagnosis level.
        // 
        // *   **error**: severe
        // *   **warning**: warning
        // *   **info**: normal
        shared_ptr<string> total_ {};
      };

      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(Items, items_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(Items, items_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Statistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
            DARABONBA_PTR_TO_JSON(Error, error_);
            DARABONBA_PTR_TO_JSON(Info, info_);
            DARABONBA_PTR_TO_JSON(Total, total_);
            DARABONBA_PTR_TO_JSON(Warning, warning_);
          };
          friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
            DARABONBA_PTR_FROM_JSON(Error, error_);
            DARABONBA_PTR_FROM_JSON(Info, info_);
            DARABONBA_PTR_FROM_JSON(Total, total_);
            DARABONBA_PTR_FROM_JSON(Warning, warning_);
          };
          Statistics() = default ;
          Statistics(const Statistics &) = default ;
          Statistics(Statistics &&) = default ;
          Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Statistics() = default ;
          Statistics& operator=(const Statistics &) = default ;
          Statistics& operator=(Statistics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->error_ == nullptr
        && this->info_ == nullptr && this->total_ == nullptr && this->warning_ == nullptr; };
          // error Field Functions 
          bool hasError() const { return this->error_ != nullptr;};
          void deleteError() { this->error_ = nullptr;};
          inline int32_t getError() const { DARABONBA_PTR_GET_DEFAULT(error_, 0) };
          inline Statistics& setError(int32_t error) { DARABONBA_PTR_SET_VALUE(error_, error) };


          // info Field Functions 
          bool hasInfo() const { return this->info_ != nullptr;};
          void deleteInfo() { this->info_ = nullptr;};
          inline int32_t getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, 0) };
          inline Statistics& setInfo(int32_t info) { DARABONBA_PTR_SET_VALUE(info_, info) };


          // total Field Functions 
          bool hasTotal() const { return this->total_ != nullptr;};
          void deleteTotal() { this->total_ = nullptr;};
          inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
          inline Statistics& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          // warning Field Functions 
          bool hasWarning() const { return this->warning_ != nullptr;};
          void deleteWarning() { this->warning_ = nullptr;};
          inline int32_t getWarning() const { DARABONBA_PTR_GET_DEFAULT(warning_, 0) };
          inline Statistics& setWarning(int32_t warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };


        protected:
          // The number of items of the **ERROR** level.
          shared_ptr<int32_t> error_ {};
          // The number of items of the **INFO** level.
          shared_ptr<int32_t> info_ {};
          // The total number of items for the current diagnosis type.
          shared_ptr<int32_t> total_ {};
          // The number of items of the **WARNING** level.
          shared_ptr<int32_t> warning_ {};
        };

        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(CN, CN_);
            DARABONBA_PTR_TO_JSON(EN, EN_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(ItemName, itemName_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(CN, CN_);
            DARABONBA_PTR_FROM_JSON(EN, EN_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
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
          class EN : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EN& obj) { 
              DARABONBA_PTR_TO_JSON(Advice, advice_);
              DARABONBA_PTR_TO_JSON(Details, details_);
              DARABONBA_PTR_TO_JSON(ItemLevel, itemLevel_);
              DARABONBA_PTR_TO_JSON(ItemName, itemName_);
              DARABONBA_PTR_TO_JSON(ItemType, itemType_);
            };
            friend void from_json(const Darabonba::Json& j, EN& obj) { 
              DARABONBA_PTR_FROM_JSON(Advice, advice_);
              DARABONBA_PTR_FROM_JSON(Details, details_);
              DARABONBA_PTR_FROM_JSON(ItemLevel, itemLevel_);
              DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
              DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
            };
            EN() = default ;
            EN(const EN &) = default ;
            EN(EN &&) = default ;
            EN(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EN() = default ;
            EN& operator=(const EN &) = default ;
            EN& operator=(EN &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->advice_ == nullptr
        && this->details_ == nullptr && this->itemLevel_ == nullptr && this->itemName_ == nullptr && this->itemType_ == nullptr; };
            // advice Field Functions 
            bool hasAdvice() const { return this->advice_ != nullptr;};
            void deleteAdvice() { this->advice_ = nullptr;};
            inline const vector<string> & getAdvice() const { DARABONBA_PTR_GET_CONST(advice_, vector<string>) };
            inline vector<string> getAdvice() { DARABONBA_PTR_GET(advice_, vector<string>) };
            inline EN& setAdvice(const vector<string> & advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };
            inline EN& setAdvice(vector<string> && advice) { DARABONBA_PTR_SET_RVALUE(advice_, advice) };


            // details Field Functions 
            bool hasDetails() const { return this->details_ != nullptr;};
            void deleteDetails() { this->details_ = nullptr;};
            inline const vector<string> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<string>) };
            inline vector<string> getDetails() { DARABONBA_PTR_GET(details_, vector<string>) };
            inline EN& setDetails(const vector<string> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
            inline EN& setDetails(vector<string> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


            // itemLevel Field Functions 
            bool hasItemLevel() const { return this->itemLevel_ != nullptr;};
            void deleteItemLevel() { this->itemLevel_ = nullptr;};
            inline string getItemLevel() const { DARABONBA_PTR_GET_DEFAULT(itemLevel_, "") };
            inline EN& setItemLevel(string itemLevel) { DARABONBA_PTR_SET_VALUE(itemLevel_, itemLevel) };


            // itemName Field Functions 
            bool hasItemName() const { return this->itemName_ != nullptr;};
            void deleteItemName() { this->itemName_ = nullptr;};
            inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
            inline EN& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


            // itemType Field Functions 
            bool hasItemType() const { return this->itemType_ != nullptr;};
            void deleteItemType() { this->itemType_ = nullptr;};
            inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
            inline EN& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


          protected:
            // The suggestion for the diagnosis.
            shared_ptr<vector<string>> advice_ {};
            // The diagnosis.
            shared_ptr<vector<string>> details_ {};
            // The diagnosis level of the item. Valid values:
            // 
            // *   **ERROR**: indicates that the item has an issue that may affect your services. We recommend that you handle the issue at the earliest opportunity.
            // *   **WARNING**: indicates that the item has an issue. You can handle the issue based on your business requirements.
            // *   **INFO**: indicates that the item is working as expected. No additional operation is required.
            shared_ptr<string> itemLevel_ {};
            // The name of the item.
            shared_ptr<string> itemName_ {};
            // The type of the item. Valid values:
            // 
            // *   **Config**: **SAG configuration**
            // *   **Service**: **service quality**
            // *   **Internet**: **quality of connections to the Internet**
            shared_ptr<string> itemType_ {};
          };

          class CN : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CN& obj) { 
              DARABONBA_PTR_TO_JSON(Advice, advice_);
              DARABONBA_PTR_TO_JSON(Details, details_);
              DARABONBA_PTR_TO_JSON(ItemLevel, itemLevel_);
              DARABONBA_PTR_TO_JSON(ItemName, itemName_);
              DARABONBA_PTR_TO_JSON(ItemType, itemType_);
            };
            friend void from_json(const Darabonba::Json& j, CN& obj) { 
              DARABONBA_PTR_FROM_JSON(Advice, advice_);
              DARABONBA_PTR_FROM_JSON(Details, details_);
              DARABONBA_PTR_FROM_JSON(ItemLevel, itemLevel_);
              DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
              DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
            };
            CN() = default ;
            CN(const CN &) = default ;
            CN(CN &&) = default ;
            CN(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CN() = default ;
            CN& operator=(const CN &) = default ;
            CN& operator=(CN &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->advice_ == nullptr
        && this->details_ == nullptr && this->itemLevel_ == nullptr && this->itemName_ == nullptr && this->itemType_ == nullptr; };
            // advice Field Functions 
            bool hasAdvice() const { return this->advice_ != nullptr;};
            void deleteAdvice() { this->advice_ = nullptr;};
            inline const vector<string> & getAdvice() const { DARABONBA_PTR_GET_CONST(advice_, vector<string>) };
            inline vector<string> getAdvice() { DARABONBA_PTR_GET(advice_, vector<string>) };
            inline CN& setAdvice(const vector<string> & advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };
            inline CN& setAdvice(vector<string> && advice) { DARABONBA_PTR_SET_RVALUE(advice_, advice) };


            // details Field Functions 
            bool hasDetails() const { return this->details_ != nullptr;};
            void deleteDetails() { this->details_ = nullptr;};
            inline const vector<string> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<string>) };
            inline vector<string> getDetails() { DARABONBA_PTR_GET(details_, vector<string>) };
            inline CN& setDetails(const vector<string> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
            inline CN& setDetails(vector<string> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


            // itemLevel Field Functions 
            bool hasItemLevel() const { return this->itemLevel_ != nullptr;};
            void deleteItemLevel() { this->itemLevel_ = nullptr;};
            inline string getItemLevel() const { DARABONBA_PTR_GET_DEFAULT(itemLevel_, "") };
            inline CN& setItemLevel(string itemLevel) { DARABONBA_PTR_SET_VALUE(itemLevel_, itemLevel) };


            // itemName Field Functions 
            bool hasItemName() const { return this->itemName_ != nullptr;};
            void deleteItemName() { this->itemName_ = nullptr;};
            inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
            inline CN& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


            // itemType Field Functions 
            bool hasItemType() const { return this->itemType_ != nullptr;};
            void deleteItemType() { this->itemType_ = nullptr;};
            inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
            inline CN& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


          protected:
            // The suggestion for the diagnosis.
            shared_ptr<vector<string>> advice_ {};
            // The diagnosis.
            shared_ptr<vector<string>> details_ {};
            // The diagnosis level of the item. Valid values:
            // 
            // *   **ERROR**: indicates that the item has an issue that may affect your services. We recommend that you handle the issue at the earliest opportunity.
            // *   **WARNING**: indicates that the item has an issue. You can handle the issue based on your business requirements.
            // *   **INFO**: indicates that the item is working as expected. No additional operation is required.
            shared_ptr<string> itemLevel_ {};
            // The name of the item.
            shared_ptr<string> itemName_ {};
            // The type of the item. Valid values:
            // 
            // *   **Config**: **SAG configuration**
            // *   **Service**: **service quality**
            // *   **Internet**: **quality of connections to the Internet**
            shared_ptr<string> itemType_ {};
          };

          virtual bool empty() const override { return this->CN_ == nullptr
        && this->EN_ == nullptr && this->endTime_ == nullptr && this->itemName_ == nullptr && this->level_ == nullptr && this->startTime_ == nullptr
        && this->type_ == nullptr; };
          // CN Field Functions 
          bool hasCN() const { return this->CN_ != nullptr;};
          void deleteCN() { this->CN_ = nullptr;};
          inline const Items::CN & getCN() const { DARABONBA_PTR_GET_CONST(CN_, Items::CN) };
          inline Items::CN getCN() { DARABONBA_PTR_GET(CN_, Items::CN) };
          inline Items& setCN(const Items::CN & cN) { DARABONBA_PTR_SET_VALUE(CN_, cN) };
          inline Items& setCN(Items::CN && cN) { DARABONBA_PTR_SET_RVALUE(CN_, cN) };


          // EN Field Functions 
          bool hasEN() const { return this->EN_ != nullptr;};
          void deleteEN() { this->EN_ = nullptr;};
          inline const Items::EN & getEN() const { DARABONBA_PTR_GET_CONST(EN_, Items::EN) };
          inline Items::EN getEN() { DARABONBA_PTR_GET(EN_, Items::EN) };
          inline Items& setEN(const Items::EN & eN) { DARABONBA_PTR_SET_VALUE(EN_, eN) };
          inline Items& setEN(Items::EN && eN) { DARABONBA_PTR_SET_RVALUE(EN_, eN) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline Items& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // itemName Field Functions 
          bool hasItemName() const { return this->itemName_ != nullptr;};
          void deleteItemName() { this->itemName_ = nullptr;};
          inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
          inline Items& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline Items& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline Items& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The diagnosis report in Chinese.
          shared_ptr<Items::CN> CN_ {};
          // The diagnosis report in English.
          shared_ptr<Items::EN> EN_ {};
          // The timestamp when the system finishes diagnosing the item.
          shared_ptr<int64_t> endTime_ {};
          // The name of the item, which is the unique identifier of the item.
          shared_ptr<string> itemName_ {};
          // The diagnosis level of the item. Valid values:
          // 
          // *   **error**: severe
          // *   **warning**: warning
          // *   **info**: normal
          shared_ptr<string> level_ {};
          // The timestamp when the system starts to diagnose the item.
          shared_ptr<int64_t> startTime_ {};
          // The type of the item. Valid values:
          // 
          // *   **config**: SAG configuration
          // *   **internet**: quality of connections to the Internet
          // *   **biz**: service quality
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->statistics_ == nullptr && this->type_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<Details::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Details::Items>) };
        inline vector<Details::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Details::Items>) };
        inline Details& setItems(const vector<Details::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline Details& setItems(vector<Details::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline const Details::Statistics & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, Details::Statistics) };
        inline Details::Statistics getStatistics() { DARABONBA_PTR_GET(statistics_, Details::Statistics) };
        inline Details& setStatistics(const Details::Statistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
        inline Details& setStatistics(Details::Statistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Details& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The list of items diagnosed.
        shared_ptr<vector<Details::Items>> items_ {};
        // The information about items of each diagnosis level for the current diagnosis type.
        shared_ptr<Details::Statistics> statistics_ {};
        // The type of the diagnosis. Valid values:
        // 
        // *   **config**: SAG configuration
        // *   **internet**: quality of connections to the Internet
        // *   **biz**: service quality
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->boxType_ == nullptr
        && this->boxVersion_ == nullptr && this->details_ == nullptr && this->diagnoseId_ == nullptr && this->endTime_ == nullptr && this->finishedNumber_ == nullptr
        && this->instanceId_ == nullptr && this->level_ == nullptr && this->monitorVersion_ == nullptr && this->percent_ == nullptr && this->reportSLSSuccess_ == nullptr
        && this->SN_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->statistics_ == nullptr && this->storeType_ == nullptr
        && this->totalNumber_ == nullptr && this->UId_ == nullptr && this->userLevel_ == nullptr; };
      // boxType Field Functions 
      bool hasBoxType() const { return this->boxType_ != nullptr;};
      void deleteBoxType() { this->boxType_ = nullptr;};
      inline string getBoxType() const { DARABONBA_PTR_GET_DEFAULT(boxType_, "") };
      inline DiagnoseResult& setBoxType(string boxType) { DARABONBA_PTR_SET_VALUE(boxType_, boxType) };


      // boxVersion Field Functions 
      bool hasBoxVersion() const { return this->boxVersion_ != nullptr;};
      void deleteBoxVersion() { this->boxVersion_ = nullptr;};
      inline string getBoxVersion() const { DARABONBA_PTR_GET_DEFAULT(boxVersion_, "") };
      inline DiagnoseResult& setBoxVersion(string boxVersion) { DARABONBA_PTR_SET_VALUE(boxVersion_, boxVersion) };


      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<DiagnoseResult::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<DiagnoseResult::Details>) };
      inline vector<DiagnoseResult::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<DiagnoseResult::Details>) };
      inline DiagnoseResult& setDetails(const vector<DiagnoseResult::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline DiagnoseResult& setDetails(vector<DiagnoseResult::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // diagnoseId Field Functions 
      bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
      void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
      inline string getDiagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
      inline DiagnoseResult& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
      inline DiagnoseResult& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // finishedNumber Field Functions 
      bool hasFinishedNumber() const { return this->finishedNumber_ != nullptr;};
      void deleteFinishedNumber() { this->finishedNumber_ = nullptr;};
      inline int32_t getFinishedNumber() const { DARABONBA_PTR_GET_DEFAULT(finishedNumber_, 0) };
      inline DiagnoseResult& setFinishedNumber(int32_t finishedNumber) { DARABONBA_PTR_SET_VALUE(finishedNumber_, finishedNumber) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DiagnoseResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline const DiagnoseResult::Level & getLevel() const { DARABONBA_PTR_GET_CONST(level_, DiagnoseResult::Level) };
      inline DiagnoseResult::Level getLevel() { DARABONBA_PTR_GET(level_, DiagnoseResult::Level) };
      inline DiagnoseResult& setLevel(const DiagnoseResult::Level & level) { DARABONBA_PTR_SET_VALUE(level_, level) };
      inline DiagnoseResult& setLevel(DiagnoseResult::Level && level) { DARABONBA_PTR_SET_RVALUE(level_, level) };


      // monitorVersion Field Functions 
      bool hasMonitorVersion() const { return this->monitorVersion_ != nullptr;};
      void deleteMonitorVersion() { this->monitorVersion_ = nullptr;};
      inline string getMonitorVersion() const { DARABONBA_PTR_GET_DEFAULT(monitorVersion_, "") };
      inline DiagnoseResult& setMonitorVersion(string monitorVersion) { DARABONBA_PTR_SET_VALUE(monitorVersion_, monitorVersion) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
      inline DiagnoseResult& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // reportSLSSuccess Field Functions 
      bool hasReportSLSSuccess() const { return this->reportSLSSuccess_ != nullptr;};
      void deleteReportSLSSuccess() { this->reportSLSSuccess_ = nullptr;};
      inline int32_t getReportSLSSuccess() const { DARABONBA_PTR_GET_DEFAULT(reportSLSSuccess_, 0) };
      inline DiagnoseResult& setReportSLSSuccess(int32_t reportSLSSuccess) { DARABONBA_PTR_SET_VALUE(reportSLSSuccess_, reportSLSSuccess) };


      // SN Field Functions 
      bool hasSN() const { return this->SN_ != nullptr;};
      void deleteSN() { this->SN_ = nullptr;};
      inline string getSN() const { DARABONBA_PTR_GET_DEFAULT(SN_, "") };
      inline DiagnoseResult& setSN(string SN) { DARABONBA_PTR_SET_VALUE(SN_, SN) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
      inline DiagnoseResult& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline DiagnoseResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline const DiagnoseResult::Statistics & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, DiagnoseResult::Statistics) };
      inline DiagnoseResult::Statistics getStatistics() { DARABONBA_PTR_GET(statistics_, DiagnoseResult::Statistics) };
      inline DiagnoseResult& setStatistics(const DiagnoseResult::Statistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
      inline DiagnoseResult& setStatistics(DiagnoseResult::Statistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


      // storeType Field Functions 
      bool hasStoreType() const { return this->storeType_ != nullptr;};
      void deleteStoreType() { this->storeType_ = nullptr;};
      inline string getStoreType() const { DARABONBA_PTR_GET_DEFAULT(storeType_, "") };
      inline DiagnoseResult& setStoreType(string storeType) { DARABONBA_PTR_SET_VALUE(storeType_, storeType) };


      // totalNumber Field Functions 
      bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
      void deleteTotalNumber() { this->totalNumber_ = nullptr;};
      inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
      inline DiagnoseResult& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


      // UId Field Functions 
      bool hasUId() const { return this->UId_ != nullptr;};
      void deleteUId() { this->UId_ = nullptr;};
      inline string getUId() const { DARABONBA_PTR_GET_DEFAULT(UId_, "") };
      inline DiagnoseResult& setUId(string UId) { DARABONBA_PTR_SET_VALUE(UId_, UId) };


      // userLevel Field Functions 
      bool hasUserLevel() const { return this->userLevel_ != nullptr;};
      void deleteUserLevel() { this->userLevel_ = nullptr;};
      inline string getUserLevel() const { DARABONBA_PTR_GET_DEFAULT(userLevel_, "") };
      inline DiagnoseResult& setUserLevel(string userLevel) { DARABONBA_PTR_SET_VALUE(userLevel_, userLevel) };


    protected:
      // The model of the SAG device.
      // 
      // *   **sag-1000**
      // *   **sag-100WM**
      shared_ptr<string> boxType_ {};
      // The version of the SAG device.
      shared_ptr<string> boxVersion_ {};
      // The list of diagnoses that are returned.
      shared_ptr<vector<DiagnoseResult::Details>> details_ {};
      // The ID of the diagnosis.
      shared_ptr<string> diagnoseId_ {};
      // The timestamp when the system finishes diagnosing the item.
      shared_ptr<int32_t> endTime_ {};
      // The number of items that are diagnosed.
      shared_ptr<int32_t> finishedNumber_ {};
      // The ID of the SAG instance.
      shared_ptr<string> instanceId_ {};
      // The diagnosis level.
      shared_ptr<DiagnoseResult::Level> level_ {};
      // The version of the monitoring feature that is used by the SAG device.
      shared_ptr<string> monitorVersion_ {};
      // The completion percentage of the diagnosis report.
      shared_ptr<int32_t> percent_ {};
      // The status of the diagnosis report to be uploaded to Log Service.
      // 
      // *   **0**: The system failed to upload the report.
      // *   **1**: The system has uploaded the report to Log Service.
      shared_ptr<int32_t> reportSLSSuccess_ {};
      // The serial number of the SAG device.
      shared_ptr<string> SN_ {};
      // The timestamp when the system starts to diagnose the item.
      shared_ptr<int32_t> startTime_ {};
      // The diagnosis status. Valid values:
      // 
      // *   **processing**: The SAG device is being diagnosed.
      // *   **finished**: The SAG device is diagnosed.
      // *   **failed**: The system failed to diagnose the SAG device.
      // *   **error**: A diagnostic error occurred.
      // *   **upload_to_sls_fail**: The system failed to upload the diagnosis report.
      shared_ptr<string> state_ {};
      // The overall diagnosis level.
      shared_ptr<DiagnoseResult::Statistics> statistics_ {};
      // The storage type.
      // 
      // The value is set to **both**, which indicates that the data is stored in the SAG device and Log Service.
      shared_ptr<string> storeType_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalNumber_ {};
      // The user ID (UID) of the Alibaba Cloud account to which the SAG instance belongs.
      shared_ptr<string> UId_ {};
      // The type of user that initiated the diagnostics. The value is set to **user**.
      shared_ptr<string> userLevel_ {};
    };

    virtual bool empty() const override { return this->diagnoseResult_ == nullptr
        && this->requestId_ == nullptr; };
    // diagnoseResult Field Functions 
    bool hasDiagnoseResult() const { return this->diagnoseResult_ != nullptr;};
    void deleteDiagnoseResult() { this->diagnoseResult_ = nullptr;};
    inline const DiscribeSmartAccessGatewayDiagnosisReportResponseBody::DiagnoseResult & getDiagnoseResult() const { DARABONBA_PTR_GET_CONST(diagnoseResult_, DiscribeSmartAccessGatewayDiagnosisReportResponseBody::DiagnoseResult) };
    inline DiscribeSmartAccessGatewayDiagnosisReportResponseBody::DiagnoseResult getDiagnoseResult() { DARABONBA_PTR_GET(diagnoseResult_, DiscribeSmartAccessGatewayDiagnosisReportResponseBody::DiagnoseResult) };
    inline DiscribeSmartAccessGatewayDiagnosisReportResponseBody& setDiagnoseResult(const DiscribeSmartAccessGatewayDiagnosisReportResponseBody::DiagnoseResult & diagnoseResult) { DARABONBA_PTR_SET_VALUE(diagnoseResult_, diagnoseResult) };
    inline DiscribeSmartAccessGatewayDiagnosisReportResponseBody& setDiagnoseResult(DiscribeSmartAccessGatewayDiagnosisReportResponseBody::DiagnoseResult && diagnoseResult) { DARABONBA_PTR_SET_RVALUE(diagnoseResult_, diagnoseResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DiscribeSmartAccessGatewayDiagnosisReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnosis report of the SAG device.
    shared_ptr<DiscribeSmartAccessGatewayDiagnosisReportResponseBody::DiagnoseResult> diagnoseResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
