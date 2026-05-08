// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDGUESTTICKETRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDGUESTTICKETRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class FindGuestTicketRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindGuestTicketRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FindGuestTicketRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    FindGuestTicketRecordResponseBody() = default ;
    FindGuestTicketRecordResponseBody(const FindGuestTicketRecordResponseBody &) = default ;
    FindGuestTicketRecordResponseBody(FindGuestTicketRecordResponseBody &&) = default ;
    FindGuestTicketRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindGuestTicketRecordResponseBody() = default ;
    FindGuestTicketRecordResponseBody& operator=(const FindGuestTicketRecordResponseBody &) = default ;
    FindGuestTicketRecordResponseBody& operator=(FindGuestTicketRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelLevelInfo, channelLevelInfo_);
        DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
        DARABONBA_PTR_TO_JSON(EquityDates, equityDates_);
        DARABONBA_PTR_TO_JSON(HealthCommitmentStatus, healthCommitmentStatus_);
        DARABONBA_PTR_TO_JSON(IdNumber, idNumber_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TicketCode, ticketCode_);
        DARABONBA_PTR_TO_JSON(TicketName, ticketName_);
        DARABONBA_PTR_TO_JSON(TicketReceiveDates, ticketReceiveDates_);
        DARABONBA_PTR_TO_JSON(TicketType, ticketType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelLevelInfo, channelLevelInfo_);
        DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
        DARABONBA_PTR_FROM_JSON(EquityDates, equityDates_);
        DARABONBA_PTR_FROM_JSON(HealthCommitmentStatus, healthCommitmentStatus_);
        DARABONBA_PTR_FROM_JSON(IdNumber, idNumber_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TicketCode, ticketCode_);
        DARABONBA_PTR_FROM_JSON(TicketName, ticketName_);
        DARABONBA_PTR_FROM_JSON(TicketReceiveDates, ticketReceiveDates_);
        DARABONBA_PTR_FROM_JSON(TicketType, ticketType_);
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
      class ChannelLevelInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChannelLevelInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
          DARABONBA_PTR_TO_JSON(LevelOneChannelName, levelOneChannelName_);
          DARABONBA_PTR_TO_JSON(LevelOneOwner, levelOneOwner_);
          DARABONBA_PTR_TO_JSON(LevelThreeChannelName, levelThreeChannelName_);
          DARABONBA_PTR_TO_JSON(LevelThreeOwner, levelThreeOwner_);
          DARABONBA_PTR_TO_JSON(LevelTwoChannelName, levelTwoChannelName_);
          DARABONBA_PTR_TO_JSON(LevelTwoOwner, levelTwoOwner_);
        };
        friend void from_json(const Darabonba::Json& j, ChannelLevelInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
          DARABONBA_PTR_FROM_JSON(LevelOneChannelName, levelOneChannelName_);
          DARABONBA_PTR_FROM_JSON(LevelOneOwner, levelOneOwner_);
          DARABONBA_PTR_FROM_JSON(LevelThreeChannelName, levelThreeChannelName_);
          DARABONBA_PTR_FROM_JSON(LevelThreeOwner, levelThreeOwner_);
          DARABONBA_PTR_FROM_JSON(LevelTwoChannelName, levelTwoChannelName_);
          DARABONBA_PTR_FROM_JSON(LevelTwoOwner, levelTwoOwner_);
        };
        ChannelLevelInfo() = default ;
        ChannelLevelInfo(const ChannelLevelInfo &) = default ;
        ChannelLevelInfo(ChannelLevelInfo &&) = default ;
        ChannelLevelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChannelLevelInfo() = default ;
        ChannelLevelInfo& operator=(const ChannelLevelInfo &) = default ;
        ChannelLevelInfo& operator=(ChannelLevelInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LevelTwoOwner : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LevelTwoOwner& obj) { 
            DARABONBA_PTR_TO_JSON(OwnerEmpIdOrTelephone, ownerEmpIdOrTelephone_);
            DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_TO_JSON(OwnerNickName, ownerNickName_);
          };
          friend void from_json(const Darabonba::Json& j, LevelTwoOwner& obj) { 
            DARABONBA_PTR_FROM_JSON(OwnerEmpIdOrTelephone, ownerEmpIdOrTelephone_);
            DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_FROM_JSON(OwnerNickName, ownerNickName_);
          };
          LevelTwoOwner() = default ;
          LevelTwoOwner(const LevelTwoOwner &) = default ;
          LevelTwoOwner(LevelTwoOwner &&) = default ;
          LevelTwoOwner(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LevelTwoOwner() = default ;
          LevelTwoOwner& operator=(const LevelTwoOwner &) = default ;
          LevelTwoOwner& operator=(LevelTwoOwner &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ownerEmpIdOrTelephone_ == nullptr
        && this->ownerName_ == nullptr && this->ownerNickName_ == nullptr; };
          // ownerEmpIdOrTelephone Field Functions 
          bool hasOwnerEmpIdOrTelephone() const { return this->ownerEmpIdOrTelephone_ != nullptr;};
          void deleteOwnerEmpIdOrTelephone() { this->ownerEmpIdOrTelephone_ = nullptr;};
          inline string getOwnerEmpIdOrTelephone() const { DARABONBA_PTR_GET_DEFAULT(ownerEmpIdOrTelephone_, "") };
          inline LevelTwoOwner& setOwnerEmpIdOrTelephone(string ownerEmpIdOrTelephone) { DARABONBA_PTR_SET_VALUE(ownerEmpIdOrTelephone_, ownerEmpIdOrTelephone) };


          // ownerName Field Functions 
          bool hasOwnerName() const { return this->ownerName_ != nullptr;};
          void deleteOwnerName() { this->ownerName_ = nullptr;};
          inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
          inline LevelTwoOwner& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


          // ownerNickName Field Functions 
          bool hasOwnerNickName() const { return this->ownerNickName_ != nullptr;};
          void deleteOwnerNickName() { this->ownerNickName_ = nullptr;};
          inline string getOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(ownerNickName_, "") };
          inline LevelTwoOwner& setOwnerNickName(string ownerNickName) { DARABONBA_PTR_SET_VALUE(ownerNickName_, ownerNickName) };


        protected:
          shared_ptr<string> ownerEmpIdOrTelephone_ {};
          shared_ptr<string> ownerName_ {};
          shared_ptr<string> ownerNickName_ {};
        };

        class LevelThreeOwner : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LevelThreeOwner& obj) { 
            DARABONBA_PTR_TO_JSON(OwnerEmpIdOrTelephone, ownerEmpIdOrTelephone_);
            DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_TO_JSON(OwnerNickName, ownerNickName_);
          };
          friend void from_json(const Darabonba::Json& j, LevelThreeOwner& obj) { 
            DARABONBA_PTR_FROM_JSON(OwnerEmpIdOrTelephone, ownerEmpIdOrTelephone_);
            DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_FROM_JSON(OwnerNickName, ownerNickName_);
          };
          LevelThreeOwner() = default ;
          LevelThreeOwner(const LevelThreeOwner &) = default ;
          LevelThreeOwner(LevelThreeOwner &&) = default ;
          LevelThreeOwner(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LevelThreeOwner() = default ;
          LevelThreeOwner& operator=(const LevelThreeOwner &) = default ;
          LevelThreeOwner& operator=(LevelThreeOwner &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ownerEmpIdOrTelephone_ == nullptr
        && this->ownerName_ == nullptr && this->ownerNickName_ == nullptr; };
          // ownerEmpIdOrTelephone Field Functions 
          bool hasOwnerEmpIdOrTelephone() const { return this->ownerEmpIdOrTelephone_ != nullptr;};
          void deleteOwnerEmpIdOrTelephone() { this->ownerEmpIdOrTelephone_ = nullptr;};
          inline string getOwnerEmpIdOrTelephone() const { DARABONBA_PTR_GET_DEFAULT(ownerEmpIdOrTelephone_, "") };
          inline LevelThreeOwner& setOwnerEmpIdOrTelephone(string ownerEmpIdOrTelephone) { DARABONBA_PTR_SET_VALUE(ownerEmpIdOrTelephone_, ownerEmpIdOrTelephone) };


          // ownerName Field Functions 
          bool hasOwnerName() const { return this->ownerName_ != nullptr;};
          void deleteOwnerName() { this->ownerName_ = nullptr;};
          inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
          inline LevelThreeOwner& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


          // ownerNickName Field Functions 
          bool hasOwnerNickName() const { return this->ownerNickName_ != nullptr;};
          void deleteOwnerNickName() { this->ownerNickName_ = nullptr;};
          inline string getOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(ownerNickName_, "") };
          inline LevelThreeOwner& setOwnerNickName(string ownerNickName) { DARABONBA_PTR_SET_VALUE(ownerNickName_, ownerNickName) };


        protected:
          shared_ptr<string> ownerEmpIdOrTelephone_ {};
          shared_ptr<string> ownerName_ {};
          shared_ptr<string> ownerNickName_ {};
        };

        class LevelOneOwner : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LevelOneOwner& obj) { 
            DARABONBA_PTR_TO_JSON(OwnerEmpIdOrTelephone, ownerEmpIdOrTelephone_);
            DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_TO_JSON(OwnerNickName, ownerNickName_);
          };
          friend void from_json(const Darabonba::Json& j, LevelOneOwner& obj) { 
            DARABONBA_PTR_FROM_JSON(OwnerEmpIdOrTelephone, ownerEmpIdOrTelephone_);
            DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_FROM_JSON(OwnerNickName, ownerNickName_);
          };
          LevelOneOwner() = default ;
          LevelOneOwner(const LevelOneOwner &) = default ;
          LevelOneOwner(LevelOneOwner &&) = default ;
          LevelOneOwner(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LevelOneOwner() = default ;
          LevelOneOwner& operator=(const LevelOneOwner &) = default ;
          LevelOneOwner& operator=(LevelOneOwner &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ownerEmpIdOrTelephone_ == nullptr
        && this->ownerName_ == nullptr && this->ownerNickName_ == nullptr; };
          // ownerEmpIdOrTelephone Field Functions 
          bool hasOwnerEmpIdOrTelephone() const { return this->ownerEmpIdOrTelephone_ != nullptr;};
          void deleteOwnerEmpIdOrTelephone() { this->ownerEmpIdOrTelephone_ = nullptr;};
          inline string getOwnerEmpIdOrTelephone() const { DARABONBA_PTR_GET_DEFAULT(ownerEmpIdOrTelephone_, "") };
          inline LevelOneOwner& setOwnerEmpIdOrTelephone(string ownerEmpIdOrTelephone) { DARABONBA_PTR_SET_VALUE(ownerEmpIdOrTelephone_, ownerEmpIdOrTelephone) };


          // ownerName Field Functions 
          bool hasOwnerName() const { return this->ownerName_ != nullptr;};
          void deleteOwnerName() { this->ownerName_ = nullptr;};
          inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
          inline LevelOneOwner& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


          // ownerNickName Field Functions 
          bool hasOwnerNickName() const { return this->ownerNickName_ != nullptr;};
          void deleteOwnerNickName() { this->ownerNickName_ = nullptr;};
          inline string getOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(ownerNickName_, "") };
          inline LevelOneOwner& setOwnerNickName(string ownerNickName) { DARABONBA_PTR_SET_VALUE(ownerNickName_, ownerNickName) };


        protected:
          shared_ptr<string> ownerEmpIdOrTelephone_ {};
          shared_ptr<string> ownerName_ {};
          shared_ptr<string> ownerNickName_ {};
        };

        virtual bool empty() const override { return this->channelId_ == nullptr
        && this->channelName_ == nullptr && this->levelOneChannelName_ == nullptr && this->levelOneOwner_ == nullptr && this->levelThreeChannelName_ == nullptr && this->levelThreeOwner_ == nullptr
        && this->levelTwoChannelName_ == nullptr && this->levelTwoOwner_ == nullptr; };
        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline int64_t getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0L) };
        inline ChannelLevelInfo& setChannelId(int64_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // channelName Field Functions 
        bool hasChannelName() const { return this->channelName_ != nullptr;};
        void deleteChannelName() { this->channelName_ = nullptr;};
        inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
        inline ChannelLevelInfo& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


        // levelOneChannelName Field Functions 
        bool hasLevelOneChannelName() const { return this->levelOneChannelName_ != nullptr;};
        void deleteLevelOneChannelName() { this->levelOneChannelName_ = nullptr;};
        inline string getLevelOneChannelName() const { DARABONBA_PTR_GET_DEFAULT(levelOneChannelName_, "") };
        inline ChannelLevelInfo& setLevelOneChannelName(string levelOneChannelName) { DARABONBA_PTR_SET_VALUE(levelOneChannelName_, levelOneChannelName) };


        // levelOneOwner Field Functions 
        bool hasLevelOneOwner() const { return this->levelOneOwner_ != nullptr;};
        void deleteLevelOneOwner() { this->levelOneOwner_ = nullptr;};
        inline const vector<ChannelLevelInfo::LevelOneOwner> & getLevelOneOwner() const { DARABONBA_PTR_GET_CONST(levelOneOwner_, vector<ChannelLevelInfo::LevelOneOwner>) };
        inline vector<ChannelLevelInfo::LevelOneOwner> getLevelOneOwner() { DARABONBA_PTR_GET(levelOneOwner_, vector<ChannelLevelInfo::LevelOneOwner>) };
        inline ChannelLevelInfo& setLevelOneOwner(const vector<ChannelLevelInfo::LevelOneOwner> & levelOneOwner) { DARABONBA_PTR_SET_VALUE(levelOneOwner_, levelOneOwner) };
        inline ChannelLevelInfo& setLevelOneOwner(vector<ChannelLevelInfo::LevelOneOwner> && levelOneOwner) { DARABONBA_PTR_SET_RVALUE(levelOneOwner_, levelOneOwner) };


        // levelThreeChannelName Field Functions 
        bool hasLevelThreeChannelName() const { return this->levelThreeChannelName_ != nullptr;};
        void deleteLevelThreeChannelName() { this->levelThreeChannelName_ = nullptr;};
        inline string getLevelThreeChannelName() const { DARABONBA_PTR_GET_DEFAULT(levelThreeChannelName_, "") };
        inline ChannelLevelInfo& setLevelThreeChannelName(string levelThreeChannelName) { DARABONBA_PTR_SET_VALUE(levelThreeChannelName_, levelThreeChannelName) };


        // levelThreeOwner Field Functions 
        bool hasLevelThreeOwner() const { return this->levelThreeOwner_ != nullptr;};
        void deleteLevelThreeOwner() { this->levelThreeOwner_ = nullptr;};
        inline const vector<ChannelLevelInfo::LevelThreeOwner> & getLevelThreeOwner() const { DARABONBA_PTR_GET_CONST(levelThreeOwner_, vector<ChannelLevelInfo::LevelThreeOwner>) };
        inline vector<ChannelLevelInfo::LevelThreeOwner> getLevelThreeOwner() { DARABONBA_PTR_GET(levelThreeOwner_, vector<ChannelLevelInfo::LevelThreeOwner>) };
        inline ChannelLevelInfo& setLevelThreeOwner(const vector<ChannelLevelInfo::LevelThreeOwner> & levelThreeOwner) { DARABONBA_PTR_SET_VALUE(levelThreeOwner_, levelThreeOwner) };
        inline ChannelLevelInfo& setLevelThreeOwner(vector<ChannelLevelInfo::LevelThreeOwner> && levelThreeOwner) { DARABONBA_PTR_SET_RVALUE(levelThreeOwner_, levelThreeOwner) };


        // levelTwoChannelName Field Functions 
        bool hasLevelTwoChannelName() const { return this->levelTwoChannelName_ != nullptr;};
        void deleteLevelTwoChannelName() { this->levelTwoChannelName_ = nullptr;};
        inline string getLevelTwoChannelName() const { DARABONBA_PTR_GET_DEFAULT(levelTwoChannelName_, "") };
        inline ChannelLevelInfo& setLevelTwoChannelName(string levelTwoChannelName) { DARABONBA_PTR_SET_VALUE(levelTwoChannelName_, levelTwoChannelName) };


        // levelTwoOwner Field Functions 
        bool hasLevelTwoOwner() const { return this->levelTwoOwner_ != nullptr;};
        void deleteLevelTwoOwner() { this->levelTwoOwner_ = nullptr;};
        inline const vector<ChannelLevelInfo::LevelTwoOwner> & getLevelTwoOwner() const { DARABONBA_PTR_GET_CONST(levelTwoOwner_, vector<ChannelLevelInfo::LevelTwoOwner>) };
        inline vector<ChannelLevelInfo::LevelTwoOwner> getLevelTwoOwner() { DARABONBA_PTR_GET(levelTwoOwner_, vector<ChannelLevelInfo::LevelTwoOwner>) };
        inline ChannelLevelInfo& setLevelTwoOwner(const vector<ChannelLevelInfo::LevelTwoOwner> & levelTwoOwner) { DARABONBA_PTR_SET_VALUE(levelTwoOwner_, levelTwoOwner) };
        inline ChannelLevelInfo& setLevelTwoOwner(vector<ChannelLevelInfo::LevelTwoOwner> && levelTwoOwner) { DARABONBA_PTR_SET_RVALUE(levelTwoOwner_, levelTwoOwner) };


      protected:
        shared_ptr<int64_t> channelId_ {};
        shared_ptr<string> channelName_ {};
        shared_ptr<string> levelOneChannelName_ {};
        shared_ptr<vector<ChannelLevelInfo::LevelOneOwner>> levelOneOwner_ {};
        shared_ptr<string> levelThreeChannelName_ {};
        shared_ptr<vector<ChannelLevelInfo::LevelThreeOwner>> levelThreeOwner_ {};
        shared_ptr<string> levelTwoChannelName_ {};
        shared_ptr<vector<ChannelLevelInfo::LevelTwoOwner>> levelTwoOwner_ {};
      };

      virtual bool empty() const override { return this->channelLevelInfo_ == nullptr
        && this->companyName_ == nullptr && this->equityDates_ == nullptr && this->healthCommitmentStatus_ == nullptr && this->idNumber_ == nullptr && this->idType_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr && this->ticketCode_ == nullptr && this->ticketName_ == nullptr && this->ticketReceiveDates_ == nullptr
        && this->ticketType_ == nullptr; };
      // channelLevelInfo Field Functions 
      bool hasChannelLevelInfo() const { return this->channelLevelInfo_ != nullptr;};
      void deleteChannelLevelInfo() { this->channelLevelInfo_ = nullptr;};
      inline const Data::ChannelLevelInfo & getChannelLevelInfo() const { DARABONBA_PTR_GET_CONST(channelLevelInfo_, Data::ChannelLevelInfo) };
      inline Data::ChannelLevelInfo getChannelLevelInfo() { DARABONBA_PTR_GET(channelLevelInfo_, Data::ChannelLevelInfo) };
      inline Data& setChannelLevelInfo(const Data::ChannelLevelInfo & channelLevelInfo) { DARABONBA_PTR_SET_VALUE(channelLevelInfo_, channelLevelInfo) };
      inline Data& setChannelLevelInfo(Data::ChannelLevelInfo && channelLevelInfo) { DARABONBA_PTR_SET_RVALUE(channelLevelInfo_, channelLevelInfo) };


      // companyName Field Functions 
      bool hasCompanyName() const { return this->companyName_ != nullptr;};
      void deleteCompanyName() { this->companyName_ = nullptr;};
      inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
      inline Data& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


      // equityDates Field Functions 
      bool hasEquityDates() const { return this->equityDates_ != nullptr;};
      void deleteEquityDates() { this->equityDates_ = nullptr;};
      inline string getEquityDates() const { DARABONBA_PTR_GET_DEFAULT(equityDates_, "") };
      inline Data& setEquityDates(string equityDates) { DARABONBA_PTR_SET_VALUE(equityDates_, equityDates) };


      // healthCommitmentStatus Field Functions 
      bool hasHealthCommitmentStatus() const { return this->healthCommitmentStatus_ != nullptr;};
      void deleteHealthCommitmentStatus() { this->healthCommitmentStatus_ = nullptr;};
      inline int32_t getHealthCommitmentStatus() const { DARABONBA_PTR_GET_DEFAULT(healthCommitmentStatus_, 0) };
      inline Data& setHealthCommitmentStatus(int32_t healthCommitmentStatus) { DARABONBA_PTR_SET_VALUE(healthCommitmentStatus_, healthCommitmentStatus) };


      // idNumber Field Functions 
      bool hasIdNumber() const { return this->idNumber_ != nullptr;};
      void deleteIdNumber() { this->idNumber_ = nullptr;};
      inline string getIdNumber() const { DARABONBA_PTR_GET_DEFAULT(idNumber_, "") };
      inline Data& setIdNumber(string idNumber) { DARABONBA_PTR_SET_VALUE(idNumber_, idNumber) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline Data& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // ticketCode Field Functions 
      bool hasTicketCode() const { return this->ticketCode_ != nullptr;};
      void deleteTicketCode() { this->ticketCode_ = nullptr;};
      inline string getTicketCode() const { DARABONBA_PTR_GET_DEFAULT(ticketCode_, "") };
      inline Data& setTicketCode(string ticketCode) { DARABONBA_PTR_SET_VALUE(ticketCode_, ticketCode) };


      // ticketName Field Functions 
      bool hasTicketName() const { return this->ticketName_ != nullptr;};
      void deleteTicketName() { this->ticketName_ = nullptr;};
      inline string getTicketName() const { DARABONBA_PTR_GET_DEFAULT(ticketName_, "") };
      inline Data& setTicketName(string ticketName) { DARABONBA_PTR_SET_VALUE(ticketName_, ticketName) };


      // ticketReceiveDates Field Functions 
      bool hasTicketReceiveDates() const { return this->ticketReceiveDates_ != nullptr;};
      void deleteTicketReceiveDates() { this->ticketReceiveDates_ = nullptr;};
      inline string getTicketReceiveDates() const { DARABONBA_PTR_GET_DEFAULT(ticketReceiveDates_, "") };
      inline Data& setTicketReceiveDates(string ticketReceiveDates) { DARABONBA_PTR_SET_VALUE(ticketReceiveDates_, ticketReceiveDates) };


      // ticketType Field Functions 
      bool hasTicketType() const { return this->ticketType_ != nullptr;};
      void deleteTicketType() { this->ticketType_ = nullptr;};
      inline string getTicketType() const { DARABONBA_PTR_GET_DEFAULT(ticketType_, "") };
      inline Data& setTicketType(string ticketType) { DARABONBA_PTR_SET_VALUE(ticketType_, ticketType) };


    protected:
      shared_ptr<Data::ChannelLevelInfo> channelLevelInfo_ {};
      shared_ptr<string> companyName_ {};
      shared_ptr<string> equityDates_ {};
      shared_ptr<int32_t> healthCommitmentStatus_ {};
      shared_ptr<string> idNumber_ {};
      shared_ptr<string> idType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> ticketCode_ {};
      shared_ptr<string> ticketName_ {};
      shared_ptr<string> ticketReceiveDates_ {};
      shared_ptr<string> ticketType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<FindGuestTicketRecordResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<FindGuestTicketRecordResponseBody::Data>) };
    inline vector<FindGuestTicketRecordResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<FindGuestTicketRecordResponseBody::Data>) };
    inline FindGuestTicketRecordResponseBody& setData(const vector<FindGuestTicketRecordResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline FindGuestTicketRecordResponseBody& setData(vector<FindGuestTicketRecordResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline FindGuestTicketRecordResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline FindGuestTicketRecordResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindGuestTicketRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FindGuestTicketRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<FindGuestTicketRecordResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
