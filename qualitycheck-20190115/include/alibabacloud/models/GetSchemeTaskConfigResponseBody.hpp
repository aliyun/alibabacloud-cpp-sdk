// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSchemeTaskConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemeTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemeTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSchemeTaskConfigResponseBody() = default ;
    GetSchemeTaskConfigResponseBody(const GetSchemeTaskConfigResponseBody &) = default ;
    GetSchemeTaskConfigResponseBody(GetSchemeTaskConfigResponseBody &&) = default ;
    GetSchemeTaskConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemeTaskConfigResponseBody() = default ;
    GetSchemeTaskConfigResponseBody& operator=(const GetSchemeTaskConfigResponseBody &) = default ;
    GetSchemeTaskConfigResponseBody& operator=(GetSchemeTaskConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AsrTaskPriority, asrTaskPriority_);
        DARABONBA_PTR_TO_JSON(AssignType, assignType_);
        DARABONBA_PTR_TO_JSON(DataConfig, dataConfig_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ManualReview, manualReview_);
        DARABONBA_PTR_TO_JSON(ModeCustomizationId, modeCustomizationId_);
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SchemeIdList, schemeIdList_);
        DARABONBA_PTR_TO_JSON(SchemeList, schemeList_);
        DARABONBA_PTR_TO_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
        DARABONBA_PTR_TO_JSON(SourceDataType, sourceDataType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AsrTaskPriority, asrTaskPriority_);
        DARABONBA_PTR_FROM_JSON(AssignType, assignType_);
        DARABONBA_PTR_FROM_JSON(DataConfig, dataConfig_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ManualReview, manualReview_);
        DARABONBA_PTR_FROM_JSON(ModeCustomizationId, modeCustomizationId_);
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SchemeIdList, schemeIdList_);
        DARABONBA_PTR_FROM_JSON(SchemeList, schemeList_);
        DARABONBA_PTR_FROM_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
        DARABONBA_PTR_FROM_JSON(SourceDataType, sourceDataType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class SchemeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SchemeList& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
        };
        friend void from_json(const Darabonba::Json& j, SchemeList& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
        };
        SchemeList() = default ;
        SchemeList(const SchemeList &) = default ;
        SchemeList(SchemeList &&) = default ;
        SchemeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SchemeList() = default ;
        SchemeList& operator=(const SchemeList &) = default ;
        SchemeList& operator=(SchemeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->schemeId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SchemeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // schemeId Field Functions 
        bool hasSchemeId() const { return this->schemeId_ != nullptr;};
        void deleteSchemeId() { this->schemeId_ = nullptr;};
        inline int64_t getSchemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
        inline SchemeList& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> schemeId_ {};
      };

      class DataConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AssignConfigs, assignConfigs_);
          DARABONBA_PTR_TO_JSON(DataSets, dataSets_);
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(ResultParam, resultParam_);
        };
        friend void from_json(const Darabonba::Json& j, DataConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AssignConfigs, assignConfigs_);
          DARABONBA_PTR_FROM_JSON(DataSets, dataSets_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(ResultParam, resultParam_);
        };
        DataConfig() = default ;
        DataConfig(const DataConfig &) = default ;
        DataConfig(DataConfig &&) = default ;
        DataConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataConfig() = default ;
        DataConfig& operator=(const DataConfig &) = default ;
        DataConfig& operator=(DataConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AssignConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssignConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(AssignConfigContests, assignConfigContests_);
          };
          friend void from_json(const Darabonba::Json& j, AssignConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(AssignConfigContests, assignConfigContests_);
          };
          AssignConfigs() = default ;
          AssignConfigs(const AssignConfigs &) = default ;
          AssignConfigs(AssignConfigs &&) = default ;
          AssignConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssignConfigs() = default ;
          AssignConfigs& operator=(const AssignConfigs &) = default ;
          AssignConfigs& operator=(AssignConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AssignConfigContests : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AssignConfigContests& obj) { 
              DARABONBA_PTR_TO_JSON(DataType, dataType_);
              DARABONBA_PTR_TO_JSON(ListObject, listObject_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Symbol, symbol_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, AssignConfigContests& obj) { 
              DARABONBA_PTR_FROM_JSON(DataType, dataType_);
              DARABONBA_PTR_FROM_JSON(ListObject, listObject_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Symbol, symbol_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            AssignConfigContests() = default ;
            AssignConfigContests(const AssignConfigContests &) = default ;
            AssignConfigContests(AssignConfigContests &&) = default ;
            AssignConfigContests(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AssignConfigContests() = default ;
            AssignConfigContests& operator=(const AssignConfigContests &) = default ;
            AssignConfigContests& operator=(AssignConfigContests &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->dataType_ == nullptr
        && this->listObject_ == nullptr && this->name_ == nullptr && this->symbol_ == nullptr && this->value_ == nullptr; };
            // dataType Field Functions 
            bool hasDataType() const { return this->dataType_ != nullptr;};
            void deleteDataType() { this->dataType_ = nullptr;};
            inline int32_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
            inline AssignConfigContests& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


            // listObject Field Functions 
            bool hasListObject() const { return this->listObject_ != nullptr;};
            void deleteListObject() { this->listObject_ = nullptr;};
            inline const vector<Darabonba::Json> & getListObject() const { DARABONBA_PTR_GET_CONST(listObject_, vector<Darabonba::Json>) };
            inline vector<Darabonba::Json> getListObject() { DARABONBA_PTR_GET(listObject_, vector<Darabonba::Json>) };
            inline AssignConfigContests& setListObject(const vector<Darabonba::Json> & listObject) { DARABONBA_PTR_SET_VALUE(listObject_, listObject) };
            inline AssignConfigContests& setListObject(vector<Darabonba::Json> && listObject) { DARABONBA_PTR_SET_RVALUE(listObject_, listObject) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline AssignConfigContests& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // symbol Field Functions 
            bool hasSymbol() const { return this->symbol_ != nullptr;};
            void deleteSymbol() { this->symbol_ = nullptr;};
            inline int32_t getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, 0) };
            inline AssignConfigContests& setSymbol(int32_t symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline AssignConfigContests& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<int32_t> dataType_ {};
            shared_ptr<vector<Darabonba::Json>> listObject_ {};
            shared_ptr<string> name_ {};
            shared_ptr<int32_t> symbol_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->assignConfigContests_ == nullptr; };
          // assignConfigContests Field Functions 
          bool hasAssignConfigContests() const { return this->assignConfigContests_ != nullptr;};
          void deleteAssignConfigContests() { this->assignConfigContests_ = nullptr;};
          inline const vector<AssignConfigs::AssignConfigContests> & getAssignConfigContests() const { DARABONBA_PTR_GET_CONST(assignConfigContests_, vector<AssignConfigs::AssignConfigContests>) };
          inline vector<AssignConfigs::AssignConfigContests> getAssignConfigContests() { DARABONBA_PTR_GET(assignConfigContests_, vector<AssignConfigs::AssignConfigContests>) };
          inline AssignConfigs& setAssignConfigContests(const vector<AssignConfigs::AssignConfigContests> & assignConfigContests) { DARABONBA_PTR_SET_VALUE(assignConfigContests_, assignConfigContests) };
          inline AssignConfigs& setAssignConfigContests(vector<AssignConfigs::AssignConfigContests> && assignConfigContests) { DARABONBA_PTR_SET_RVALUE(assignConfigContests_, assignConfigContests) };


        protected:
          shared_ptr<vector<AssignConfigs::AssignConfigContests>> assignConfigContests_ {};
        };

        virtual bool empty() const override { return this->assignConfigs_ == nullptr
        && this->dataSets_ == nullptr && this->index_ == nullptr && this->resultParam_ == nullptr; };
        // assignConfigs Field Functions 
        bool hasAssignConfigs() const { return this->assignConfigs_ != nullptr;};
        void deleteAssignConfigs() { this->assignConfigs_ = nullptr;};
        inline const vector<DataConfig::AssignConfigs> & getAssignConfigs() const { DARABONBA_PTR_GET_CONST(assignConfigs_, vector<DataConfig::AssignConfigs>) };
        inline vector<DataConfig::AssignConfigs> getAssignConfigs() { DARABONBA_PTR_GET(assignConfigs_, vector<DataConfig::AssignConfigs>) };
        inline DataConfig& setAssignConfigs(const vector<DataConfig::AssignConfigs> & assignConfigs) { DARABONBA_PTR_SET_VALUE(assignConfigs_, assignConfigs) };
        inline DataConfig& setAssignConfigs(vector<DataConfig::AssignConfigs> && assignConfigs) { DARABONBA_PTR_SET_RVALUE(assignConfigs_, assignConfigs) };


        // dataSets Field Functions 
        bool hasDataSets() const { return this->dataSets_ != nullptr;};
        void deleteDataSets() { this->dataSets_ = nullptr;};
        inline string getDataSets() const { DARABONBA_PTR_GET_DEFAULT(dataSets_, "") };
        inline DataConfig& setDataSets(string dataSets) { DARABONBA_PTR_SET_VALUE(dataSets_, dataSets) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
        inline DataConfig& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // resultParam Field Functions 
        bool hasResultParam() const { return this->resultParam_ != nullptr;};
        void deleteResultParam() { this->resultParam_ = nullptr;};
        inline string getResultParam() const { DARABONBA_PTR_GET_DEFAULT(resultParam_, "") };
        inline DataConfig& setResultParam(string resultParam) { DARABONBA_PTR_SET_VALUE(resultParam_, resultParam) };


      protected:
        shared_ptr<vector<DataConfig::AssignConfigs>> assignConfigs_ {};
        shared_ptr<string> dataSets_ {};
        shared_ptr<int64_t> index_ {};
        shared_ptr<string> resultParam_ {};
      };

      virtual bool empty() const override { return this->asrTaskPriority_ == nullptr
        && this->assignType_ == nullptr && this->dataConfig_ == nullptr && this->id_ == nullptr && this->manualReview_ == nullptr && this->modeCustomizationId_ == nullptr
        && this->modelName_ == nullptr && this->name_ == nullptr && this->schemeIdList_ == nullptr && this->schemeList_ == nullptr && this->schemeTaskConfigId_ == nullptr
        && this->sourceDataType_ == nullptr && this->status_ == nullptr; };
      // asrTaskPriority Field Functions 
      bool hasAsrTaskPriority() const { return this->asrTaskPriority_ != nullptr;};
      void deleteAsrTaskPriority() { this->asrTaskPriority_ = nullptr;};
      inline int32_t getAsrTaskPriority() const { DARABONBA_PTR_GET_DEFAULT(asrTaskPriority_, 0) };
      inline Data& setAsrTaskPriority(int32_t asrTaskPriority) { DARABONBA_PTR_SET_VALUE(asrTaskPriority_, asrTaskPriority) };


      // assignType Field Functions 
      bool hasAssignType() const { return this->assignType_ != nullptr;};
      void deleteAssignType() { this->assignType_ = nullptr;};
      inline int32_t getAssignType() const { DARABONBA_PTR_GET_DEFAULT(assignType_, 0) };
      inline Data& setAssignType(int32_t assignType) { DARABONBA_PTR_SET_VALUE(assignType_, assignType) };


      // dataConfig Field Functions 
      bool hasDataConfig() const { return this->dataConfig_ != nullptr;};
      void deleteDataConfig() { this->dataConfig_ = nullptr;};
      inline const Data::DataConfig & getDataConfig() const { DARABONBA_PTR_GET_CONST(dataConfig_, Data::DataConfig) };
      inline Data::DataConfig getDataConfig() { DARABONBA_PTR_GET(dataConfig_, Data::DataConfig) };
      inline Data& setDataConfig(const Data::DataConfig & dataConfig) { DARABONBA_PTR_SET_VALUE(dataConfig_, dataConfig) };
      inline Data& setDataConfig(Data::DataConfig && dataConfig) { DARABONBA_PTR_SET_RVALUE(dataConfig_, dataConfig) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // manualReview Field Functions 
      bool hasManualReview() const { return this->manualReview_ != nullptr;};
      void deleteManualReview() { this->manualReview_ = nullptr;};
      inline int32_t getManualReview() const { DARABONBA_PTR_GET_DEFAULT(manualReview_, 0) };
      inline Data& setManualReview(int32_t manualReview) { DARABONBA_PTR_SET_VALUE(manualReview_, manualReview) };


      // modeCustomizationId Field Functions 
      bool hasModeCustomizationId() const { return this->modeCustomizationId_ != nullptr;};
      void deleteModeCustomizationId() { this->modeCustomizationId_ = nullptr;};
      inline string getModeCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(modeCustomizationId_, "") };
      inline Data& setModeCustomizationId(string modeCustomizationId) { DARABONBA_PTR_SET_VALUE(modeCustomizationId_, modeCustomizationId) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Data& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // schemeIdList Field Functions 
      bool hasSchemeIdList() const { return this->schemeIdList_ != nullptr;};
      void deleteSchemeIdList() { this->schemeIdList_ = nullptr;};
      inline const vector<int64_t> & getSchemeIdList() const { DARABONBA_PTR_GET_CONST(schemeIdList_, vector<int64_t>) };
      inline vector<int64_t> getSchemeIdList() { DARABONBA_PTR_GET(schemeIdList_, vector<int64_t>) };
      inline Data& setSchemeIdList(const vector<int64_t> & schemeIdList) { DARABONBA_PTR_SET_VALUE(schemeIdList_, schemeIdList) };
      inline Data& setSchemeIdList(vector<int64_t> && schemeIdList) { DARABONBA_PTR_SET_RVALUE(schemeIdList_, schemeIdList) };


      // schemeList Field Functions 
      bool hasSchemeList() const { return this->schemeList_ != nullptr;};
      void deleteSchemeList() { this->schemeList_ = nullptr;};
      inline const vector<Data::SchemeList> & getSchemeList() const { DARABONBA_PTR_GET_CONST(schemeList_, vector<Data::SchemeList>) };
      inline vector<Data::SchemeList> getSchemeList() { DARABONBA_PTR_GET(schemeList_, vector<Data::SchemeList>) };
      inline Data& setSchemeList(const vector<Data::SchemeList> & schemeList) { DARABONBA_PTR_SET_VALUE(schemeList_, schemeList) };
      inline Data& setSchemeList(vector<Data::SchemeList> && schemeList) { DARABONBA_PTR_SET_RVALUE(schemeList_, schemeList) };


      // schemeTaskConfigId Field Functions 
      bool hasSchemeTaskConfigId() const { return this->schemeTaskConfigId_ != nullptr;};
      void deleteSchemeTaskConfigId() { this->schemeTaskConfigId_ = nullptr;};
      inline int64_t getSchemeTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(schemeTaskConfigId_, 0L) };
      inline Data& setSchemeTaskConfigId(int64_t schemeTaskConfigId) { DARABONBA_PTR_SET_VALUE(schemeTaskConfigId_, schemeTaskConfigId) };


      // sourceDataType Field Functions 
      bool hasSourceDataType() const { return this->sourceDataType_ != nullptr;};
      void deleteSourceDataType() { this->sourceDataType_ = nullptr;};
      inline string getSourceDataType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataType_, "") };
      inline Data& setSourceDataType(string sourceDataType) { DARABONBA_PTR_SET_VALUE(sourceDataType_, sourceDataType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int32_t> asrTaskPriority_ {};
      shared_ptr<int32_t> assignType_ {};
      shared_ptr<Data::DataConfig> dataConfig_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int32_t> manualReview_ {};
      shared_ptr<string> modeCustomizationId_ {};
      shared_ptr<string> modelName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<int64_t>> schemeIdList_ {};
      shared_ptr<vector<Data::SchemeList>> schemeList_ {};
      shared_ptr<int64_t> schemeTaskConfigId_ {};
      shared_ptr<string> sourceDataType_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSchemeTaskConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSchemeTaskConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSchemeTaskConfigResponseBody::Data) };
    inline GetSchemeTaskConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSchemeTaskConfigResponseBody::Data) };
    inline GetSchemeTaskConfigResponseBody& setData(const GetSchemeTaskConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSchemeTaskConfigResponseBody& setData(GetSchemeTaskConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetSchemeTaskConfigResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSchemeTaskConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSchemeTaskConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetSchemeTaskConfigResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSchemeTaskConfigResponseBody::Data> data_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
