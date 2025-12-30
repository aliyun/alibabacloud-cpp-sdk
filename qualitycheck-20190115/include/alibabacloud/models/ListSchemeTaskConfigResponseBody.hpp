// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODY_HPP_
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
  class ListSchemeTaskConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemeTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(LastDataId, lastDataId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemeTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(LastDataId, lastDataId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSchemeTaskConfigResponseBody() = default ;
    ListSchemeTaskConfigResponseBody(const ListSchemeTaskConfigResponseBody &) = default ;
    ListSchemeTaskConfigResponseBody(ListSchemeTaskConfigResponseBody &&) = default ;
    ListSchemeTaskConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemeTaskConfigResponseBody() = default ;
    ListSchemeTaskConfigResponseBody& operator=(const ListSchemeTaskConfigResponseBody &) = default ;
    ListSchemeTaskConfigResponseBody& operator=(ListSchemeTaskConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline const vector<string> & getMessage() const { DARABONBA_PTR_GET_CONST(message_, vector<string>) };
      inline vector<string> getMessage() { DARABONBA_PTR_GET(message_, vector<string>) };
      inline Messages& setMessage(const vector<string> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
      inline Messages& setMessage(vector<string> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    protected:
      shared_ptr<vector<string>> message_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
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
          DARABONBA_PTR_TO_JSON(AsrTaskPriority, asrTaskPriority_);
          DARABONBA_PTR_TO_JSON(AsrVersion, asrVersion_);
          DARABONBA_PTR_TO_JSON(AssignType, assignType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(DataConfig, dataConfig_);
          DARABONBA_PTR_TO_JSON(FinishRate, finishRate_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ManualReview, manualReview_);
          DARABONBA_PTR_TO_JSON(ModeCustomizationId, modeCustomizationId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NumberExecuting, numberExecuting_);
          DARABONBA_PTR_TO_JSON(NumberFail, numberFail_);
          DARABONBA_PTR_TO_JSON(NumberSuccess, numberSuccess_);
          DARABONBA_PTR_TO_JSON(NumberSum, numberSum_);
          DARABONBA_PTR_TO_JSON(SchemeIdList, schemeIdList_);
          DARABONBA_PTR_TO_JSON(SchemeList, schemeList_);
          DARABONBA_PTR_TO_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
          DARABONBA_PTR_TO_JSON(SourceDataType, sourceDataType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
          DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
          DARABONBA_PTR_TO_JSON(VocabId, vocabId_);
          DARABONBA_PTR_TO_JSON(VocabName, vocabName_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AsrTaskPriority, asrTaskPriority_);
          DARABONBA_PTR_FROM_JSON(AsrVersion, asrVersion_);
          DARABONBA_PTR_FROM_JSON(AssignType, assignType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(DataConfig, dataConfig_);
          DARABONBA_PTR_FROM_JSON(FinishRate, finishRate_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ManualReview, manualReview_);
          DARABONBA_PTR_FROM_JSON(ModeCustomizationId, modeCustomizationId_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NumberExecuting, numberExecuting_);
          DARABONBA_PTR_FROM_JSON(NumberFail, numberFail_);
          DARABONBA_PTR_FROM_JSON(NumberSuccess, numberSuccess_);
          DARABONBA_PTR_FROM_JSON(NumberSum, numberSum_);
          DARABONBA_PTR_FROM_JSON(SchemeIdList, schemeIdList_);
          DARABONBA_PTR_FROM_JSON(SchemeList, schemeList_);
          DARABONBA_PTR_FROM_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
          DARABONBA_PTR_FROM_JSON(SourceDataType, sourceDataType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
          DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
          DARABONBA_PTR_FROM_JSON(VocabId, vocabId_);
          DARABONBA_PTR_FROM_JSON(VocabName, vocabName_);
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
        class SchemeList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SchemeList& obj) { 
            DARABONBA_PTR_TO_JSON(SchemeList, schemeList_);
          };
          friend void from_json(const Darabonba::Json& j, SchemeList& obj) { 
            DARABONBA_PTR_FROM_JSON(SchemeList, schemeList_);
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
          class SchemeListItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SchemeListItem& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
            };
            friend void from_json(const Darabonba::Json& j, SchemeListItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
            };
            SchemeListItem() = default ;
            SchemeListItem(const SchemeListItem &) = default ;
            SchemeListItem(SchemeListItem &&) = default ;
            SchemeListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SchemeListItem() = default ;
            SchemeListItem& operator=(const SchemeListItem &) = default ;
            SchemeListItem& operator=(SchemeListItem &&) = default ;
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
            inline SchemeListItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // schemeId Field Functions 
            bool hasSchemeId() const { return this->schemeId_ != nullptr;};
            void deleteSchemeId() { this->schemeId_ = nullptr;};
            inline int64_t getSchemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
            inline SchemeListItem& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<int64_t> schemeId_ {};
          };

          virtual bool empty() const override { return this->schemeList_ == nullptr; };
          // schemeList Field Functions 
          bool hasSchemeList() const { return this->schemeList_ != nullptr;};
          void deleteSchemeList() { this->schemeList_ = nullptr;};
          inline const vector<SchemeList::SchemeListItem> & getSchemeList() const { DARABONBA_PTR_GET_CONST(schemeList_, vector<SchemeList::SchemeListItem>) };
          inline vector<SchemeList::SchemeListItem> getSchemeList() { DARABONBA_PTR_GET(schemeList_, vector<SchemeList::SchemeListItem>) };
          inline SchemeList& setSchemeList(const vector<SchemeList::SchemeListItem> & schemeList) { DARABONBA_PTR_SET_VALUE(schemeList_, schemeList) };
          inline SchemeList& setSchemeList(vector<SchemeList::SchemeListItem> && schemeList) { DARABONBA_PTR_SET_RVALUE(schemeList_, schemeList) };


        protected:
          shared_ptr<vector<SchemeList::SchemeListItem>> schemeList_ {};
        };

        class SchemeIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SchemeIdList& obj) { 
            DARABONBA_PTR_TO_JSON(SchemeIdList, schemeIdList_);
          };
          friend void from_json(const Darabonba::Json& j, SchemeIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(SchemeIdList, schemeIdList_);
          };
          SchemeIdList() = default ;
          SchemeIdList(const SchemeIdList &) = default ;
          SchemeIdList(SchemeIdList &&) = default ;
          SchemeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SchemeIdList() = default ;
          SchemeIdList& operator=(const SchemeIdList &) = default ;
          SchemeIdList& operator=(SchemeIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->schemeIdList_ == nullptr; };
          // schemeIdList Field Functions 
          bool hasSchemeIdList() const { return this->schemeIdList_ != nullptr;};
          void deleteSchemeIdList() { this->schemeIdList_ = nullptr;};
          inline const vector<int64_t> & getSchemeIdList() const { DARABONBA_PTR_GET_CONST(schemeIdList_, vector<int64_t>) };
          inline vector<int64_t> getSchemeIdList() { DARABONBA_PTR_GET(schemeIdList_, vector<int64_t>) };
          inline SchemeIdList& setSchemeIdList(const vector<int64_t> & schemeIdList) { DARABONBA_PTR_SET_VALUE(schemeIdList_, schemeIdList) };
          inline SchemeIdList& setSchemeIdList(vector<int64_t> && schemeIdList) { DARABONBA_PTR_SET_RVALUE(schemeIdList_, schemeIdList) };


        protected:
          shared_ptr<vector<int64_t>> schemeIdList_ {};
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
              DARABONBA_PTR_TO_JSON(AssignConfig, assignConfig_);
            };
            friend void from_json(const Darabonba::Json& j, AssignConfigs& obj) { 
              DARABONBA_PTR_FROM_JSON(AssignConfig, assignConfig_);
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
            class AssignConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AssignConfig& obj) { 
                DARABONBA_PTR_TO_JSON(AssignConfigContests, assignConfigContests_);
              };
              friend void from_json(const Darabonba::Json& j, AssignConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(AssignConfigContests, assignConfigContests_);
              };
              AssignConfig() = default ;
              AssignConfig(const AssignConfig &) = default ;
              AssignConfig(AssignConfig &&) = default ;
              AssignConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AssignConfig() = default ;
              AssignConfig& operator=(const AssignConfig &) = default ;
              AssignConfig& operator=(AssignConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class AssignConfigContests : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const AssignConfigContests& obj) { 
                  DARABONBA_PTR_TO_JSON(AssignConfigContest, assignConfigContest_);
                };
                friend void from_json(const Darabonba::Json& j, AssignConfigContests& obj) { 
                  DARABONBA_PTR_FROM_JSON(AssignConfigContest, assignConfigContest_);
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
                class AssignConfigContest : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const AssignConfigContest& obj) { 
                    DARABONBA_PTR_TO_JSON(DataType, dataType_);
                    DARABONBA_PTR_TO_JSON(ListObject, listObject_);
                    DARABONBA_PTR_TO_JSON(Name, name_);
                    DARABONBA_PTR_TO_JSON(Symbol, symbol_);
                    DARABONBA_PTR_TO_JSON(Value, value_);
                  };
                  friend void from_json(const Darabonba::Json& j, AssignConfigContest& obj) { 
                    DARABONBA_PTR_FROM_JSON(DataType, dataType_);
                    DARABONBA_PTR_FROM_JSON(ListObject, listObject_);
                    DARABONBA_PTR_FROM_JSON(Name, name_);
                    DARABONBA_PTR_FROM_JSON(Symbol, symbol_);
                    DARABONBA_PTR_FROM_JSON(Value, value_);
                  };
                  AssignConfigContest() = default ;
                  AssignConfigContest(const AssignConfigContest &) = default ;
                  AssignConfigContest(AssignConfigContest &&) = default ;
                  AssignConfigContest(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~AssignConfigContest() = default ;
                  AssignConfigContest& operator=(const AssignConfigContest &) = default ;
                  AssignConfigContest& operator=(AssignConfigContest &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class ListObject : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const ListObject& obj) { 
                      DARABONBA_PTR_TO_JSON(ListObject, listObject_);
                    };
                    friend void from_json(const Darabonba::Json& j, ListObject& obj) { 
                      DARABONBA_PTR_FROM_JSON(ListObject, listObject_);
                    };
                    ListObject() = default ;
                    ListObject(const ListObject &) = default ;
                    ListObject(ListObject &&) = default ;
                    ListObject(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~ListObject() = default ;
                    ListObject& operator=(const ListObject &) = default ;
                    ListObject& operator=(ListObject &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->listObject_ == nullptr; };
                    // listObject Field Functions 
                    bool hasListObject() const { return this->listObject_ != nullptr;};
                    void deleteListObject() { this->listObject_ = nullptr;};
                    inline const vector<Darabonba::Json> & getListObject() const { DARABONBA_PTR_GET_CONST(listObject_, vector<Darabonba::Json>) };
                    inline vector<Darabonba::Json> getListObject() { DARABONBA_PTR_GET(listObject_, vector<Darabonba::Json>) };
                    inline ListObject& setListObject(const vector<Darabonba::Json> & listObject) { DARABONBA_PTR_SET_VALUE(listObject_, listObject) };
                    inline ListObject& setListObject(vector<Darabonba::Json> && listObject) { DARABONBA_PTR_SET_RVALUE(listObject_, listObject) };


                  protected:
                    shared_ptr<vector<Darabonba::Json>> listObject_ {};
                  };

                  virtual bool empty() const override { return this->dataType_ == nullptr
        && this->listObject_ == nullptr && this->name_ == nullptr && this->symbol_ == nullptr && this->value_ == nullptr; };
                  // dataType Field Functions 
                  bool hasDataType() const { return this->dataType_ != nullptr;};
                  void deleteDataType() { this->dataType_ = nullptr;};
                  inline int32_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
                  inline AssignConfigContest& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


                  // listObject Field Functions 
                  bool hasListObject() const { return this->listObject_ != nullptr;};
                  void deleteListObject() { this->listObject_ = nullptr;};
                  inline const AssignConfigContest::ListObject & getListObject() const { DARABONBA_PTR_GET_CONST(listObject_, AssignConfigContest::ListObject) };
                  inline AssignConfigContest::ListObject getListObject() { DARABONBA_PTR_GET(listObject_, AssignConfigContest::ListObject) };
                  inline AssignConfigContest& setListObject(const AssignConfigContest::ListObject & listObject) { DARABONBA_PTR_SET_VALUE(listObject_, listObject) };
                  inline AssignConfigContest& setListObject(AssignConfigContest::ListObject && listObject) { DARABONBA_PTR_SET_RVALUE(listObject_, listObject) };


                  // name Field Functions 
                  bool hasName() const { return this->name_ != nullptr;};
                  void deleteName() { this->name_ = nullptr;};
                  inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                  inline AssignConfigContest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                  // symbol Field Functions 
                  bool hasSymbol() const { return this->symbol_ != nullptr;};
                  void deleteSymbol() { this->symbol_ = nullptr;};
                  inline int32_t getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, 0) };
                  inline AssignConfigContest& setSymbol(int32_t symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


                  // value Field Functions 
                  bool hasValue() const { return this->value_ != nullptr;};
                  void deleteValue() { this->value_ = nullptr;};
                  inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                  inline AssignConfigContest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


                protected:
                  shared_ptr<int32_t> dataType_ {};
                  shared_ptr<AssignConfigContest::ListObject> listObject_ {};
                  shared_ptr<string> name_ {};
                  shared_ptr<int32_t> symbol_ {};
                  shared_ptr<string> value_ {};
                };

                virtual bool empty() const override { return this->assignConfigContest_ == nullptr; };
                // assignConfigContest Field Functions 
                bool hasAssignConfigContest() const { return this->assignConfigContest_ != nullptr;};
                void deleteAssignConfigContest() { this->assignConfigContest_ = nullptr;};
                inline const vector<AssignConfigContests::AssignConfigContest> & getAssignConfigContest() const { DARABONBA_PTR_GET_CONST(assignConfigContest_, vector<AssignConfigContests::AssignConfigContest>) };
                inline vector<AssignConfigContests::AssignConfigContest> getAssignConfigContest() { DARABONBA_PTR_GET(assignConfigContest_, vector<AssignConfigContests::AssignConfigContest>) };
                inline AssignConfigContests& setAssignConfigContest(const vector<AssignConfigContests::AssignConfigContest> & assignConfigContest) { DARABONBA_PTR_SET_VALUE(assignConfigContest_, assignConfigContest) };
                inline AssignConfigContests& setAssignConfigContest(vector<AssignConfigContests::AssignConfigContest> && assignConfigContest) { DARABONBA_PTR_SET_RVALUE(assignConfigContest_, assignConfigContest) };


              protected:
                shared_ptr<vector<AssignConfigContests::AssignConfigContest>> assignConfigContest_ {};
              };

              virtual bool empty() const override { return this->assignConfigContests_ == nullptr; };
              // assignConfigContests Field Functions 
              bool hasAssignConfigContests() const { return this->assignConfigContests_ != nullptr;};
              void deleteAssignConfigContests() { this->assignConfigContests_ = nullptr;};
              inline const AssignConfig::AssignConfigContests & getAssignConfigContests() const { DARABONBA_PTR_GET_CONST(assignConfigContests_, AssignConfig::AssignConfigContests) };
              inline AssignConfig::AssignConfigContests getAssignConfigContests() { DARABONBA_PTR_GET(assignConfigContests_, AssignConfig::AssignConfigContests) };
              inline AssignConfig& setAssignConfigContests(const AssignConfig::AssignConfigContests & assignConfigContests) { DARABONBA_PTR_SET_VALUE(assignConfigContests_, assignConfigContests) };
              inline AssignConfig& setAssignConfigContests(AssignConfig::AssignConfigContests && assignConfigContests) { DARABONBA_PTR_SET_RVALUE(assignConfigContests_, assignConfigContests) };


            protected:
              shared_ptr<AssignConfig::AssignConfigContests> assignConfigContests_ {};
            };

            virtual bool empty() const override { return this->assignConfig_ == nullptr; };
            // assignConfig Field Functions 
            bool hasAssignConfig() const { return this->assignConfig_ != nullptr;};
            void deleteAssignConfig() { this->assignConfig_ = nullptr;};
            inline const vector<AssignConfigs::AssignConfig> & getAssignConfig() const { DARABONBA_PTR_GET_CONST(assignConfig_, vector<AssignConfigs::AssignConfig>) };
            inline vector<AssignConfigs::AssignConfig> getAssignConfig() { DARABONBA_PTR_GET(assignConfig_, vector<AssignConfigs::AssignConfig>) };
            inline AssignConfigs& setAssignConfig(const vector<AssignConfigs::AssignConfig> & assignConfig) { DARABONBA_PTR_SET_VALUE(assignConfig_, assignConfig) };
            inline AssignConfigs& setAssignConfig(vector<AssignConfigs::AssignConfig> && assignConfig) { DARABONBA_PTR_SET_RVALUE(assignConfig_, assignConfig) };


          protected:
            shared_ptr<vector<AssignConfigs::AssignConfig>> assignConfig_ {};
          };

          virtual bool empty() const override { return this->assignConfigs_ == nullptr
        && this->dataSets_ == nullptr && this->index_ == nullptr && this->resultParam_ == nullptr; };
          // assignConfigs Field Functions 
          bool hasAssignConfigs() const { return this->assignConfigs_ != nullptr;};
          void deleteAssignConfigs() { this->assignConfigs_ = nullptr;};
          inline const DataConfig::AssignConfigs & getAssignConfigs() const { DARABONBA_PTR_GET_CONST(assignConfigs_, DataConfig::AssignConfigs) };
          inline DataConfig::AssignConfigs getAssignConfigs() { DARABONBA_PTR_GET(assignConfigs_, DataConfig::AssignConfigs) };
          inline DataConfig& setAssignConfigs(const DataConfig::AssignConfigs & assignConfigs) { DARABONBA_PTR_SET_VALUE(assignConfigs_, assignConfigs) };
          inline DataConfig& setAssignConfigs(DataConfig::AssignConfigs && assignConfigs) { DARABONBA_PTR_SET_RVALUE(assignConfigs_, assignConfigs) };


          // dataSets Field Functions 
          bool hasDataSets() const { return this->dataSets_ != nullptr;};
          void deleteDataSets() { this->dataSets_ = nullptr;};
          inline string getDataSets() const { DARABONBA_PTR_GET_DEFAULT(dataSets_, "") };
          inline DataConfig& setDataSets(string dataSets) { DARABONBA_PTR_SET_VALUE(dataSets_, dataSets) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
          inline DataConfig& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // resultParam Field Functions 
          bool hasResultParam() const { return this->resultParam_ != nullptr;};
          void deleteResultParam() { this->resultParam_ = nullptr;};
          inline string getResultParam() const { DARABONBA_PTR_GET_DEFAULT(resultParam_, "") };
          inline DataConfig& setResultParam(string resultParam) { DARABONBA_PTR_SET_VALUE(resultParam_, resultParam) };


        protected:
          shared_ptr<DataConfig::AssignConfigs> assignConfigs_ {};
          shared_ptr<string> dataSets_ {};
          shared_ptr<int32_t> index_ {};
          shared_ptr<string> resultParam_ {};
        };

        virtual bool empty() const override { return this->asrTaskPriority_ == nullptr
        && this->asrVersion_ == nullptr && this->assignType_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->dataConfig_ == nullptr
        && this->finishRate_ == nullptr && this->id_ == nullptr && this->manualReview_ == nullptr && this->modeCustomizationId_ == nullptr && this->modelName_ == nullptr
        && this->name_ == nullptr && this->numberExecuting_ == nullptr && this->numberFail_ == nullptr && this->numberSuccess_ == nullptr && this->numberSum_ == nullptr
        && this->schemeIdList_ == nullptr && this->schemeList_ == nullptr && this->schemeTaskConfigId_ == nullptr && this->sourceDataType_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr && this->updateTime_ == nullptr && this->updateUser_ == nullptr && this->userGroup_ == nullptr && this->vocabId_ == nullptr
        && this->vocabName_ == nullptr; };
        // asrTaskPriority Field Functions 
        bool hasAsrTaskPriority() const { return this->asrTaskPriority_ != nullptr;};
        void deleteAsrTaskPriority() { this->asrTaskPriority_ = nullptr;};
        inline int32_t getAsrTaskPriority() const { DARABONBA_PTR_GET_DEFAULT(asrTaskPriority_, 0) };
        inline DataItem& setAsrTaskPriority(int32_t asrTaskPriority) { DARABONBA_PTR_SET_VALUE(asrTaskPriority_, asrTaskPriority) };


        // asrVersion Field Functions 
        bool hasAsrVersion() const { return this->asrVersion_ != nullptr;};
        void deleteAsrVersion() { this->asrVersion_ = nullptr;};
        inline int32_t getAsrVersion() const { DARABONBA_PTR_GET_DEFAULT(asrVersion_, 0) };
        inline DataItem& setAsrVersion(int32_t asrVersion) { DARABONBA_PTR_SET_VALUE(asrVersion_, asrVersion) };


        // assignType Field Functions 
        bool hasAssignType() const { return this->assignType_ != nullptr;};
        void deleteAssignType() { this->assignType_ = nullptr;};
        inline int32_t getAssignType() const { DARABONBA_PTR_GET_DEFAULT(assignType_, 0) };
        inline DataItem& setAssignType(int32_t assignType) { DARABONBA_PTR_SET_VALUE(assignType_, assignType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DataItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline int64_t getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, 0L) };
        inline DataItem& setCreateUser(int64_t createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // dataConfig Field Functions 
        bool hasDataConfig() const { return this->dataConfig_ != nullptr;};
        void deleteDataConfig() { this->dataConfig_ = nullptr;};
        inline const DataItem::DataConfig & getDataConfig() const { DARABONBA_PTR_GET_CONST(dataConfig_, DataItem::DataConfig) };
        inline DataItem::DataConfig getDataConfig() { DARABONBA_PTR_GET(dataConfig_, DataItem::DataConfig) };
        inline DataItem& setDataConfig(const DataItem::DataConfig & dataConfig) { DARABONBA_PTR_SET_VALUE(dataConfig_, dataConfig) };
        inline DataItem& setDataConfig(DataItem::DataConfig && dataConfig) { DARABONBA_PTR_SET_RVALUE(dataConfig_, dataConfig) };


        // finishRate Field Functions 
        bool hasFinishRate() const { return this->finishRate_ != nullptr;};
        void deleteFinishRate() { this->finishRate_ = nullptr;};
        inline double getFinishRate() const { DARABONBA_PTR_GET_DEFAULT(finishRate_, 0.0) };
        inline DataItem& setFinishRate(double finishRate) { DARABONBA_PTR_SET_VALUE(finishRate_, finishRate) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataItem& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // manualReview Field Functions 
        bool hasManualReview() const { return this->manualReview_ != nullptr;};
        void deleteManualReview() { this->manualReview_ = nullptr;};
        inline int32_t getManualReview() const { DARABONBA_PTR_GET_DEFAULT(manualReview_, 0) };
        inline DataItem& setManualReview(int32_t manualReview) { DARABONBA_PTR_SET_VALUE(manualReview_, manualReview) };


        // modeCustomizationId Field Functions 
        bool hasModeCustomizationId() const { return this->modeCustomizationId_ != nullptr;};
        void deleteModeCustomizationId() { this->modeCustomizationId_ = nullptr;};
        inline string getModeCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(modeCustomizationId_, "") };
        inline DataItem& setModeCustomizationId(string modeCustomizationId) { DARABONBA_PTR_SET_VALUE(modeCustomizationId_, modeCustomizationId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline DataItem& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // numberExecuting Field Functions 
        bool hasNumberExecuting() const { return this->numberExecuting_ != nullptr;};
        void deleteNumberExecuting() { this->numberExecuting_ = nullptr;};
        inline int32_t getNumberExecuting() const { DARABONBA_PTR_GET_DEFAULT(numberExecuting_, 0) };
        inline DataItem& setNumberExecuting(int32_t numberExecuting) { DARABONBA_PTR_SET_VALUE(numberExecuting_, numberExecuting) };


        // numberFail Field Functions 
        bool hasNumberFail() const { return this->numberFail_ != nullptr;};
        void deleteNumberFail() { this->numberFail_ = nullptr;};
        inline int32_t getNumberFail() const { DARABONBA_PTR_GET_DEFAULT(numberFail_, 0) };
        inline DataItem& setNumberFail(int32_t numberFail) { DARABONBA_PTR_SET_VALUE(numberFail_, numberFail) };


        // numberSuccess Field Functions 
        bool hasNumberSuccess() const { return this->numberSuccess_ != nullptr;};
        void deleteNumberSuccess() { this->numberSuccess_ = nullptr;};
        inline int32_t getNumberSuccess() const { DARABONBA_PTR_GET_DEFAULT(numberSuccess_, 0) };
        inline DataItem& setNumberSuccess(int32_t numberSuccess) { DARABONBA_PTR_SET_VALUE(numberSuccess_, numberSuccess) };


        // numberSum Field Functions 
        bool hasNumberSum() const { return this->numberSum_ != nullptr;};
        void deleteNumberSum() { this->numberSum_ = nullptr;};
        inline int32_t getNumberSum() const { DARABONBA_PTR_GET_DEFAULT(numberSum_, 0) };
        inline DataItem& setNumberSum(int32_t numberSum) { DARABONBA_PTR_SET_VALUE(numberSum_, numberSum) };


        // schemeIdList Field Functions 
        bool hasSchemeIdList() const { return this->schemeIdList_ != nullptr;};
        void deleteSchemeIdList() { this->schemeIdList_ = nullptr;};
        inline const DataItem::SchemeIdList & getSchemeIdList() const { DARABONBA_PTR_GET_CONST(schemeIdList_, DataItem::SchemeIdList) };
        inline DataItem::SchemeIdList getSchemeIdList() { DARABONBA_PTR_GET(schemeIdList_, DataItem::SchemeIdList) };
        inline DataItem& setSchemeIdList(const DataItem::SchemeIdList & schemeIdList) { DARABONBA_PTR_SET_VALUE(schemeIdList_, schemeIdList) };
        inline DataItem& setSchemeIdList(DataItem::SchemeIdList && schemeIdList) { DARABONBA_PTR_SET_RVALUE(schemeIdList_, schemeIdList) };


        // schemeList Field Functions 
        bool hasSchemeList() const { return this->schemeList_ != nullptr;};
        void deleteSchemeList() { this->schemeList_ = nullptr;};
        inline const DataItem::SchemeList & getSchemeList() const { DARABONBA_PTR_GET_CONST(schemeList_, DataItem::SchemeList) };
        inline DataItem::SchemeList getSchemeList() { DARABONBA_PTR_GET(schemeList_, DataItem::SchemeList) };
        inline DataItem& setSchemeList(const DataItem::SchemeList & schemeList) { DARABONBA_PTR_SET_VALUE(schemeList_, schemeList) };
        inline DataItem& setSchemeList(DataItem::SchemeList && schemeList) { DARABONBA_PTR_SET_RVALUE(schemeList_, schemeList) };


        // schemeTaskConfigId Field Functions 
        bool hasSchemeTaskConfigId() const { return this->schemeTaskConfigId_ != nullptr;};
        void deleteSchemeTaskConfigId() { this->schemeTaskConfigId_ = nullptr;};
        inline int64_t getSchemeTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(schemeTaskConfigId_, 0L) };
        inline DataItem& setSchemeTaskConfigId(int64_t schemeTaskConfigId) { DARABONBA_PTR_SET_VALUE(schemeTaskConfigId_, schemeTaskConfigId) };


        // sourceDataType Field Functions 
        bool hasSourceDataType() const { return this->sourceDataType_ != nullptr;};
        void deleteSourceDataType() { this->sourceDataType_ = nullptr;};
        inline int32_t getSourceDataType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataType_, 0) };
        inline DataItem& setSourceDataType(int32_t sourceDataType) { DARABONBA_PTR_SET_VALUE(sourceDataType_, sourceDataType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline DataItem& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline DataItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline DataItem& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateUser Field Functions 
        bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
        void deleteUpdateUser() { this->updateUser_ = nullptr;};
        inline int64_t getUpdateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, 0L) };
        inline DataItem& setUpdateUser(int64_t updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


        // userGroup Field Functions 
        bool hasUserGroup() const { return this->userGroup_ != nullptr;};
        void deleteUserGroup() { this->userGroup_ = nullptr;};
        inline string getUserGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
        inline DataItem& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


        // vocabId Field Functions 
        bool hasVocabId() const { return this->vocabId_ != nullptr;};
        void deleteVocabId() { this->vocabId_ = nullptr;};
        inline string getVocabId() const { DARABONBA_PTR_GET_DEFAULT(vocabId_, "") };
        inline DataItem& setVocabId(string vocabId) { DARABONBA_PTR_SET_VALUE(vocabId_, vocabId) };


        // vocabName Field Functions 
        bool hasVocabName() const { return this->vocabName_ != nullptr;};
        void deleteVocabName() { this->vocabName_ = nullptr;};
        inline string getVocabName() const { DARABONBA_PTR_GET_DEFAULT(vocabName_, "") };
        inline DataItem& setVocabName(string vocabName) { DARABONBA_PTR_SET_VALUE(vocabName_, vocabName) };


      protected:
        shared_ptr<int32_t> asrTaskPriority_ {};
        shared_ptr<int32_t> asrVersion_ {};
        shared_ptr<int32_t> assignType_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> createUser_ {};
        shared_ptr<DataItem::DataConfig> dataConfig_ {};
        shared_ptr<double> finishRate_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int32_t> manualReview_ {};
        shared_ptr<string> modeCustomizationId_ {};
        shared_ptr<string> modelName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> numberExecuting_ {};
        shared_ptr<int32_t> numberFail_ {};
        shared_ptr<int32_t> numberSuccess_ {};
        shared_ptr<int32_t> numberSum_ {};
        shared_ptr<DataItem::SchemeIdList> schemeIdList_ {};
        shared_ptr<DataItem::SchemeList> schemeList_ {};
        shared_ptr<int64_t> schemeTaskConfigId_ {};
        shared_ptr<int32_t> sourceDataType_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<int64_t> updateUser_ {};
        shared_ptr<string> userGroup_ {};
        shared_ptr<string> vocabId_ {};
        shared_ptr<string> vocabName_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Data::DataItem> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Data::DataItem>) };
      inline vector<Data::DataItem> getData() { DARABONBA_PTR_GET(data_, vector<Data::DataItem>) };
      inline Data& setData(const vector<Data::DataItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(vector<Data::DataItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<vector<Data::DataItem>> data_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->currentPage_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->lastDataId_ == nullptr
        && this->message_ == nullptr && this->messages_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->resultCountId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSchemeTaskConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListSchemeTaskConfigResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListSchemeTaskConfigResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSchemeTaskConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSchemeTaskConfigResponseBody::Data) };
    inline ListSchemeTaskConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSchemeTaskConfigResponseBody::Data) };
    inline ListSchemeTaskConfigResponseBody& setData(const ListSchemeTaskConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSchemeTaskConfigResponseBody& setData(ListSchemeTaskConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSchemeTaskConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // lastDataId Field Functions 
    bool hasLastDataId() const { return this->lastDataId_ != nullptr;};
    void deleteLastDataId() { this->lastDataId_ = nullptr;};
    inline string getLastDataId() const { DARABONBA_PTR_GET_DEFAULT(lastDataId_, "") };
    inline ListSchemeTaskConfigResponseBody& setLastDataId(string lastDataId) { DARABONBA_PTR_SET_VALUE(lastDataId_, lastDataId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSchemeTaskConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const ListSchemeTaskConfigResponseBody::Messages & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, ListSchemeTaskConfigResponseBody::Messages) };
    inline ListSchemeTaskConfigResponseBody::Messages getMessages() { DARABONBA_PTR_GET(messages_, ListSchemeTaskConfigResponseBody::Messages) };
    inline ListSchemeTaskConfigResponseBody& setMessages(const ListSchemeTaskConfigResponseBody::Messages & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ListSchemeTaskConfigResponseBody& setMessages(ListSchemeTaskConfigResponseBody::Messages && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSchemeTaskConfigResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSchemeTaskConfigResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSchemeTaskConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCountId Field Functions 
    bool hasResultCountId() const { return this->resultCountId_ != nullptr;};
    void deleteResultCountId() { this->resultCountId_ = nullptr;};
    inline string getResultCountId() const { DARABONBA_PTR_GET_DEFAULT(resultCountId_, "") };
    inline ListSchemeTaskConfigResponseBody& setResultCountId(string resultCountId) { DARABONBA_PTR_SET_VALUE(resultCountId_, resultCountId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSchemeTaskConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<ListSchemeTaskConfigResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> lastDataId_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListSchemeTaskConfigResponseBody::Messages> messages_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCountId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
