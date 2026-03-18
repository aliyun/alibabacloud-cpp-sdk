// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORALEVALUATIONSTATISTICSERRORCOUNTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ORALEVALUATIONSTATISTICSERRORCOUNTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class OralEvaluationStatisticsErrorCountResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OralEvaluationStatisticsErrorCountResponse& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectData, projectData_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, OralEvaluationStatisticsErrorCountResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectData, projectData_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
    };
    OralEvaluationStatisticsErrorCountResponse() = default ;
    OralEvaluationStatisticsErrorCountResponse(const OralEvaluationStatisticsErrorCountResponse &) = default ;
    OralEvaluationStatisticsErrorCountResponse(OralEvaluationStatisticsErrorCountResponse &&) = default ;
    OralEvaluationStatisticsErrorCountResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OralEvaluationStatisticsErrorCountResponse() = default ;
    OralEvaluationStatisticsErrorCountResponse& operator=(const OralEvaluationStatisticsErrorCountResponse &) = default ;
    OralEvaluationStatisticsErrorCountResponse& operator=(OralEvaluationStatisticsErrorCountResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectData& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationData, applicationData_);
        DARABONBA_PTR_TO_JSON(applicationInternalId, applicationInternalId_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectData& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationData, applicationData_);
        DARABONBA_PTR_FROM_JSON(applicationInternalId, applicationInternalId_);
      };
      ProjectData() = default ;
      ProjectData(const ProjectData &) = default ;
      ProjectData(ProjectData &&) = default ;
      ProjectData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectData() = default ;
      ProjectData& operator=(const ProjectData &) = default ;
      ProjectData& operator=(ProjectData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApplicationData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicationData& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(applicationAccessId, applicationAccessId_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicationData& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(applicationAccessId, applicationAccessId_);
        };
        ApplicationData() = default ;
        ApplicationData(const ApplicationData &) = default ;
        ApplicationData(ApplicationData &&) = default ;
        ApplicationData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicationData() = default ;
        ApplicationData& operator=(const ApplicationData &) = default ;
        ApplicationData& operator=(ApplicationData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
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
          class DataItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
              DARABONBA_PTR_TO_JSON(count, count_);
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
              DARABONBA_PTR_FROM_JSON(count, count_);
              DARABONBA_PTR_FROM_JSON(name, name_);
            };
            DataItem() = default ;
            DataItem(const DataItem &) = default ;
            DataItem(DataItem &&) = default ;
            DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DataItem() = default ;
            DataItem& operator=(const DataItem &) = default ;
            DataItem& operator=(DataItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->count_ == nullptr
        && this->name_ == nullptr; };
            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
            inline DataItem& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline DataItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            // This parameter is required.
            shared_ptr<int32_t> count_ {};
            // This parameter is required.
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline const vector<Data::DataItem> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Data::DataItem>) };
          inline vector<Data::DataItem> getData() { DARABONBA_PTR_GET(data_, vector<Data::DataItem>) };
          inline Data& setData(const vector<Data::DataItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
          inline Data& setData(vector<Data::DataItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        protected:
          shared_ptr<vector<Data::DataItem>> data_ {};
          shared_ptr<string> errorCode_ {};
          shared_ptr<string> errorMessage_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr
        && this->applicationAccessId_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<ApplicationData::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ApplicationData::Data>) };
        inline vector<ApplicationData::Data> getData() { DARABONBA_PTR_GET(data_, vector<ApplicationData::Data>) };
        inline ApplicationData& setData(const vector<ApplicationData::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline ApplicationData& setData(vector<ApplicationData::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // applicationAccessId Field Functions 
        bool hasApplicationAccessId() const { return this->applicationAccessId_ != nullptr;};
        void deleteApplicationAccessId() { this->applicationAccessId_ = nullptr;};
        inline string getApplicationAccessId() const { DARABONBA_PTR_GET_DEFAULT(applicationAccessId_, "") };
        inline ApplicationData& setApplicationAccessId(string applicationAccessId) { DARABONBA_PTR_SET_VALUE(applicationAccessId_, applicationAccessId) };


      protected:
        shared_ptr<vector<ApplicationData::Data>> data_ {};
        // appId,appkey
        // 
        // This parameter is required.
        shared_ptr<string> applicationAccessId_ {};
      };

      virtual bool empty() const override { return this->applicationData_ == nullptr
        && this->applicationInternalId_ == nullptr; };
      // applicationData Field Functions 
      bool hasApplicationData() const { return this->applicationData_ != nullptr;};
      void deleteApplicationData() { this->applicationData_ = nullptr;};
      inline const vector<ProjectData::ApplicationData> & getApplicationData() const { DARABONBA_PTR_GET_CONST(applicationData_, vector<ProjectData::ApplicationData>) };
      inline vector<ProjectData::ApplicationData> getApplicationData() { DARABONBA_PTR_GET(applicationData_, vector<ProjectData::ApplicationData>) };
      inline ProjectData& setApplicationData(const vector<ProjectData::ApplicationData> & applicationData) { DARABONBA_PTR_SET_VALUE(applicationData_, applicationData) };
      inline ProjectData& setApplicationData(vector<ProjectData::ApplicationData> && applicationData) { DARABONBA_PTR_SET_RVALUE(applicationData_, applicationData) };


      // applicationInternalId Field Functions 
      bool hasApplicationInternalId() const { return this->applicationInternalId_ != nullptr;};
      void deleteApplicationInternalId() { this->applicationInternalId_ = nullptr;};
      inline string getApplicationInternalId() const { DARABONBA_PTR_GET_DEFAULT(applicationInternalId_, "") };
      inline ProjectData& setApplicationInternalId(string applicationInternalId) { DARABONBA_PTR_SET_VALUE(applicationInternalId_, applicationInternalId) };


    protected:
      shared_ptr<vector<ProjectData::ApplicationData>> applicationData_ {};
      // This parameter is required.
      shared_ptr<string> applicationInternalId_ {};
    };

    virtual bool empty() const override { return this->projectData_ == nullptr
        && this->projectId_ == nullptr; };
    // projectData Field Functions 
    bool hasProjectData() const { return this->projectData_ != nullptr;};
    void deleteProjectData() { this->projectData_ = nullptr;};
    inline const OralEvaluationStatisticsErrorCountResponse::ProjectData & getProjectData() const { DARABONBA_PTR_GET_CONST(projectData_, OralEvaluationStatisticsErrorCountResponse::ProjectData) };
    inline OralEvaluationStatisticsErrorCountResponse::ProjectData getProjectData() { DARABONBA_PTR_GET(projectData_, OralEvaluationStatisticsErrorCountResponse::ProjectData) };
    inline OralEvaluationStatisticsErrorCountResponse& setProjectData(const OralEvaluationStatisticsErrorCountResponse::ProjectData & projectData) { DARABONBA_PTR_SET_VALUE(projectData_, projectData) };
    inline OralEvaluationStatisticsErrorCountResponse& setProjectData(OralEvaluationStatisticsErrorCountResponse::ProjectData && projectData) { DARABONBA_PTR_SET_RVALUE(projectData_, projectData) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline OralEvaluationStatisticsErrorCountResponse& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<OralEvaluationStatisticsErrorCountResponse::ProjectData> projectData_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
