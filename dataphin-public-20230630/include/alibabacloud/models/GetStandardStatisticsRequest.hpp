// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDARDSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDARDSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetStandardStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandardStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(StatisticsQuery, statisticsQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandardStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(StatisticsQuery, statisticsQuery_);
    };
    GetStandardStatisticsRequest() = default ;
    GetStandardStatisticsRequest(const GetStandardStatisticsRequest &) = default ;
    GetStandardStatisticsRequest(GetStandardStatisticsRequest &&) = default ;
    GetStandardStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandardStatisticsRequest() = default ;
    GetStandardStatisticsRequest& operator=(const GetStandardStatisticsRequest &) = default ;
    GetStandardStatisticsRequest& operator=(GetStandardStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatisticsQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatisticsQuery& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTimePeriod, createTimePeriod_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(StandardStageList, standardStageList_);
      };
      friend void from_json(const Darabonba::Json& j, StatisticsQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTimePeriod, createTimePeriod_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(StandardStageList, standardStageList_);
      };
      StatisticsQuery() = default ;
      StatisticsQuery(const StatisticsQuery &) = default ;
      StatisticsQuery(StatisticsQuery &&) = default ;
      StatisticsQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatisticsQuery() = default ;
      StatisticsQuery& operator=(const StatisticsQuery &) = default ;
      StatisticsQuery& operator=(StatisticsQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CreateTimePeriod : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreateTimePeriod& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(IncludeEndTime, includeEndTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, CreateTimePeriod& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(IncludeEndTime, includeEndTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        CreateTimePeriod() = default ;
        CreateTimePeriod(const CreateTimePeriod &) = default ;
        CreateTimePeriod(CreateTimePeriod &&) = default ;
        CreateTimePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreateTimePeriod() = default ;
        CreateTimePeriod& operator=(const CreateTimePeriod &) = default ;
        CreateTimePeriod& operator=(CreateTimePeriod &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->includeEndTime_ == nullptr && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline CreateTimePeriod& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // includeEndTime Field Functions 
        bool hasIncludeEndTime() const { return this->includeEndTime_ != nullptr;};
        void deleteIncludeEndTime() { this->includeEndTime_ = nullptr;};
        inline bool getIncludeEndTime() const { DARABONBA_PTR_GET_DEFAULT(includeEndTime_, false) };
        inline CreateTimePeriod& setIncludeEndTime(bool includeEndTime) { DARABONBA_PTR_SET_VALUE(includeEndTime_, includeEndTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline CreateTimePeriod& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> endTime_ {};
        shared_ptr<bool> includeEndTime_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->createTimePeriod_ == nullptr
        && this->directory_ == nullptr && this->standardStageList_ == nullptr; };
      // createTimePeriod Field Functions 
      bool hasCreateTimePeriod() const { return this->createTimePeriod_ != nullptr;};
      void deleteCreateTimePeriod() { this->createTimePeriod_ = nullptr;};
      inline const StatisticsQuery::CreateTimePeriod & getCreateTimePeriod() const { DARABONBA_PTR_GET_CONST(createTimePeriod_, StatisticsQuery::CreateTimePeriod) };
      inline StatisticsQuery::CreateTimePeriod getCreateTimePeriod() { DARABONBA_PTR_GET(createTimePeriod_, StatisticsQuery::CreateTimePeriod) };
      inline StatisticsQuery& setCreateTimePeriod(const StatisticsQuery::CreateTimePeriod & createTimePeriod) { DARABONBA_PTR_SET_VALUE(createTimePeriod_, createTimePeriod) };
      inline StatisticsQuery& setCreateTimePeriod(StatisticsQuery::CreateTimePeriod && createTimePeriod) { DARABONBA_PTR_SET_RVALUE(createTimePeriod_, createTimePeriod) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline StatisticsQuery& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // standardStageList Field Functions 
      bool hasStandardStageList() const { return this->standardStageList_ != nullptr;};
      void deleteStandardStageList() { this->standardStageList_ = nullptr;};
      inline const vector<string> & getStandardStageList() const { DARABONBA_PTR_GET_CONST(standardStageList_, vector<string>) };
      inline vector<string> getStandardStageList() { DARABONBA_PTR_GET(standardStageList_, vector<string>) };
      inline StatisticsQuery& setStandardStageList(const vector<string> & standardStageList) { DARABONBA_PTR_SET_VALUE(standardStageList_, standardStageList) };
      inline StatisticsQuery& setStandardStageList(vector<string> && standardStageList) { DARABONBA_PTR_SET_RVALUE(standardStageList_, standardStageList) };


    protected:
      shared_ptr<StatisticsQuery::CreateTimePeriod> createTimePeriod_ {};
      // This parameter is required.
      shared_ptr<string> directory_ {};
      shared_ptr<vector<string>> standardStageList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->statisticsQuery_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetStandardStatisticsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // statisticsQuery Field Functions 
    bool hasStatisticsQuery() const { return this->statisticsQuery_ != nullptr;};
    void deleteStatisticsQuery() { this->statisticsQuery_ = nullptr;};
    inline const GetStandardStatisticsRequest::StatisticsQuery & getStatisticsQuery() const { DARABONBA_PTR_GET_CONST(statisticsQuery_, GetStandardStatisticsRequest::StatisticsQuery) };
    inline GetStandardStatisticsRequest::StatisticsQuery getStatisticsQuery() { DARABONBA_PTR_GET(statisticsQuery_, GetStandardStatisticsRequest::StatisticsQuery) };
    inline GetStandardStatisticsRequest& setStatisticsQuery(const GetStandardStatisticsRequest::StatisticsQuery & statisticsQuery) { DARABONBA_PTR_SET_VALUE(statisticsQuery_, statisticsQuery) };
    inline GetStandardStatisticsRequest& setStatisticsQuery(GetStandardStatisticsRequest::StatisticsQuery && statisticsQuery) { DARABONBA_PTR_SET_RVALUE(statisticsQuery_, statisticsQuery) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<GetStandardStatisticsRequest::StatisticsQuery> statisticsQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
