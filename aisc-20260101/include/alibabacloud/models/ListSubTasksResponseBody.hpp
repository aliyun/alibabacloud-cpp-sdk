// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class ListSubTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSubTasksResponseBody() = default ;
    ListSubTasksResponseBody(const ListSubTasksResponseBody &) = default ;
    ListSubTasksResponseBody(ListSubTasksResponseBody &&) = default ;
    ListSubTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubTasksResponseBody() = default ;
    ListSubTasksResponseBody& operator=(const ListSubTasksResponseBody &) = default ;
    ListSubTasksResponseBody& operator=(ListSubTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
      inline PageInfo& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> count_ {};
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TaskResultMessage, taskResultMessage_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(TaskResultMessage, taskResultMessage_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
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
      class TaskResultMessage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskResultMessage& obj) { 
          DARABONBA_PTR_TO_JSON(SkillCheckResult, skillCheckResult_);
        };
        friend void from_json(const Darabonba::Json& j, TaskResultMessage& obj) { 
          DARABONBA_PTR_FROM_JSON(SkillCheckResult, skillCheckResult_);
        };
        TaskResultMessage() = default ;
        TaskResultMessage(const TaskResultMessage &) = default ;
        TaskResultMessage(TaskResultMessage &&) = default ;
        TaskResultMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskResultMessage() = default ;
        TaskResultMessage& operator=(const TaskResultMessage &) = default ;
        TaskResultMessage& operator=(TaskResultMessage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SkillCheckResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SkillCheckResult& obj) { 
            DARABONBA_PTR_TO_JSON(RiskInfo, riskInfo_);
          };
          friend void from_json(const Darabonba::Json& j, SkillCheckResult& obj) { 
            DARABONBA_PTR_FROM_JSON(RiskInfo, riskInfo_);
          };
          SkillCheckResult() = default ;
          SkillCheckResult(const SkillCheckResult &) = default ;
          SkillCheckResult(SkillCheckResult &&) = default ;
          SkillCheckResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SkillCheckResult() = default ;
          SkillCheckResult& operator=(const SkillCheckResult &) = default ;
          SkillCheckResult& operator=(SkillCheckResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RiskInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RiskInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Ext, ext_);
              DARABONBA_PTR_TO_JSON(Path, path_);
              DARABONBA_PTR_TO_JSON(ResultType, resultType_);
            };
            friend void from_json(const Darabonba::Json& j, RiskInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Ext, ext_);
              DARABONBA_PTR_FROM_JSON(Path, path_);
              DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
            };
            RiskInfo() = default ;
            RiskInfo(const RiskInfo &) = default ;
            RiskInfo(RiskInfo &&) = default ;
            RiskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RiskInfo() = default ;
            RiskInfo& operator=(const RiskInfo &) = default ;
            RiskInfo& operator=(RiskInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Ext : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Ext& obj) { 
                DARABONBA_PTR_TO_JSON(Config, config_);
                DARABONBA_PTR_TO_JSON(Guardrail, guardrail_);
                DARABONBA_PTR_TO_JSON(Sensitive, sensitive_);
                DARABONBA_PTR_TO_JSON(Virus, virus_);
              };
              friend void from_json(const Darabonba::Json& j, Ext& obj) { 
                DARABONBA_PTR_FROM_JSON(Config, config_);
                DARABONBA_PTR_FROM_JSON(Guardrail, guardrail_);
                DARABONBA_PTR_FROM_JSON(Sensitive, sensitive_);
                DARABONBA_PTR_FROM_JSON(Virus, virus_);
              };
              Ext() = default ;
              Ext(const Ext &) = default ;
              Ext(Ext &&) = default ;
              Ext(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Ext() = default ;
              Ext& operator=(const Ext &) = default ;
              Ext& operator=(Ext &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Virus : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Virus& obj) { 
                  DARABONBA_PTR_TO_JSON(Ext, ext_);
                  DARABONBA_PTR_TO_JSON(Score, score_);
                  DARABONBA_PTR_TO_JSON(Type, type_);
                };
                friend void from_json(const Darabonba::Json& j, Virus& obj) { 
                  DARABONBA_PTR_FROM_JSON(Ext, ext_);
                  DARABONBA_PTR_FROM_JSON(Score, score_);
                  DARABONBA_PTR_FROM_JSON(Type, type_);
                };
                Virus() = default ;
                Virus(const Virus &) = default ;
                Virus(Virus &&) = default ;
                Virus(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Virus() = default ;
                Virus& operator=(const Virus &) = default ;
                Virus& operator=(Virus &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->ext_ == nullptr
        && this->score_ == nullptr && this->type_ == nullptr; };
                // ext Field Functions 
                bool hasExt() const { return this->ext_ != nullptr;};
                void deleteExt() { this->ext_ = nullptr;};
                inline string getExt() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
                inline Virus& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


                // score Field Functions 
                bool hasScore() const { return this->score_ != nullptr;};
                void deleteScore() { this->score_ = nullptr;};
                inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
                inline Virus& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                // type Field Functions 
                bool hasType() const { return this->type_ != nullptr;};
                void deleteType() { this->type_ = nullptr;};
                inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                inline Virus& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              protected:
                shared_ptr<string> ext_ {};
                shared_ptr<int32_t> score_ {};
                shared_ptr<string> type_ {};
              };

              class Sensitive : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Sensitive& obj) { 
                  DARABONBA_PTR_TO_JSON(Detail, detail_);
                };
                friend void from_json(const Darabonba::Json& j, Sensitive& obj) { 
                  DARABONBA_PTR_FROM_JSON(Detail, detail_);
                };
                Sensitive() = default ;
                Sensitive(const Sensitive &) = default ;
                Sensitive(Sensitive &&) = default ;
                Sensitive(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Sensitive() = default ;
                Sensitive& operator=(const Sensitive &) = default ;
                Sensitive& operator=(Sensitive &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class Detail : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Detail& obj) { 
                    DARABONBA_PTR_TO_JSON(Desc, desc_);
                    DARABONBA_PTR_TO_JSON(Result, result_);
                  };
                  friend void from_json(const Darabonba::Json& j, Detail& obj) { 
                    DARABONBA_PTR_FROM_JSON(Desc, desc_);
                    DARABONBA_PTR_FROM_JSON(Result, result_);
                  };
                  Detail() = default ;
                  Detail(const Detail &) = default ;
                  Detail(Detail &&) = default ;
                  Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Detail() = default ;
                  Detail& operator=(const Detail &) = default ;
                  Detail& operator=(Detail &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->desc_ == nullptr
        && this->result_ == nullptr; };
                  // desc Field Functions 
                  bool hasDesc() const { return this->desc_ != nullptr;};
                  void deleteDesc() { this->desc_ = nullptr;};
                  inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
                  inline Detail& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


                  // result Field Functions 
                  bool hasResult() const { return this->result_ != nullptr;};
                  void deleteResult() { this->result_ = nullptr;};
                  inline const vector<string> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<string>) };
                  inline vector<string> getResult() { DARABONBA_PTR_GET(result_, vector<string>) };
                  inline Detail& setResult(const vector<string> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
                  inline Detail& setResult(vector<string> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


                protected:
                  shared_ptr<string> desc_ {};
                  shared_ptr<vector<string>> result_ {};
                };

                virtual bool empty() const override { return this->detail_ == nullptr; };
                // detail Field Functions 
                bool hasDetail() const { return this->detail_ != nullptr;};
                void deleteDetail() { this->detail_ = nullptr;};
                inline const vector<Sensitive::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Sensitive::Detail>) };
                inline vector<Sensitive::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<Sensitive::Detail>) };
                inline Sensitive& setDetail(const vector<Sensitive::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
                inline Sensitive& setDetail(vector<Sensitive::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


              protected:
                shared_ptr<vector<Sensitive::Detail>> detail_ {};
              };

              class Guardrail : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Guardrail& obj) { 
                  DARABONBA_PTR_TO_JSON(Detail, detail_);
                  DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
                };
                friend void from_json(const Darabonba::Json& j, Guardrail& obj) { 
                  DARABONBA_PTR_FROM_JSON(Detail, detail_);
                  DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
                };
                Guardrail() = default ;
                Guardrail(const Guardrail &) = default ;
                Guardrail(Guardrail &&) = default ;
                Guardrail(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Guardrail() = default ;
                Guardrail& operator=(const Guardrail &) = default ;
                Guardrail& operator=(Guardrail &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class Detail : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Detail& obj) { 
                    DARABONBA_PTR_TO_JSON(Level, level_);
                    DARABONBA_PTR_TO_JSON(Result, result_);
                    DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
                    DARABONBA_PTR_TO_JSON(Type, type_);
                  };
                  friend void from_json(const Darabonba::Json& j, Detail& obj) { 
                    DARABONBA_PTR_FROM_JSON(Level, level_);
                    DARABONBA_PTR_FROM_JSON(Result, result_);
                    DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
                    DARABONBA_PTR_FROM_JSON(Type, type_);
                  };
                  Detail() = default ;
                  Detail(const Detail &) = default ;
                  Detail(Detail &&) = default ;
                  Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Detail() = default ;
                  Detail& operator=(const Detail &) = default ;
                  Detail& operator=(Detail &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class Result : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Result& obj) { 
                      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
                      DARABONBA_PTR_TO_JSON(Description, description_);
                      DARABONBA_PTR_TO_JSON(Label, label_);
                      DARABONBA_PTR_TO_JSON(Level, level_);
                    };
                    friend void from_json(const Darabonba::Json& j, Result& obj) { 
                      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
                      DARABONBA_PTR_FROM_JSON(Description, description_);
                      DARABONBA_PTR_FROM_JSON(Label, label_);
                      DARABONBA_PTR_FROM_JSON(Level, level_);
                    };
                    Result() = default ;
                    Result(const Result &) = default ;
                    Result(Result &&) = default ;
                    Result(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Result() = default ;
                    Result& operator=(const Result &) = default ;
                    Result& operator=(Result &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr && this->level_ == nullptr; };
                    // confidence Field Functions 
                    bool hasConfidence() const { return this->confidence_ != nullptr;};
                    void deleteConfidence() { this->confidence_ = nullptr;};
                    inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
                    inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


                    // description Field Functions 
                    bool hasDescription() const { return this->description_ != nullptr;};
                    void deleteDescription() { this->description_ = nullptr;};
                    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
                    inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


                    // label Field Functions 
                    bool hasLabel() const { return this->label_ != nullptr;};
                    void deleteLabel() { this->label_ = nullptr;};
                    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
                    inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


                    // level Field Functions 
                    bool hasLevel() const { return this->level_ != nullptr;};
                    void deleteLevel() { this->level_ = nullptr;};
                    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
                    inline Result& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


                  protected:
                    shared_ptr<float> confidence_ {};
                    shared_ptr<string> description_ {};
                    shared_ptr<string> label_ {};
                    shared_ptr<string> level_ {};
                  };

                  virtual bool empty() const override { return this->level_ == nullptr
        && this->result_ == nullptr && this->suggestion_ == nullptr && this->type_ == nullptr; };
                  // level Field Functions 
                  bool hasLevel() const { return this->level_ != nullptr;};
                  void deleteLevel() { this->level_ = nullptr;};
                  inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
                  inline Detail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


                  // result Field Functions 
                  bool hasResult() const { return this->result_ != nullptr;};
                  void deleteResult() { this->result_ = nullptr;};
                  inline const vector<Detail::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Detail::Result>) };
                  inline vector<Detail::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Detail::Result>) };
                  inline Detail& setResult(const vector<Detail::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
                  inline Detail& setResult(vector<Detail::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


                  // suggestion Field Functions 
                  bool hasSuggestion() const { return this->suggestion_ != nullptr;};
                  void deleteSuggestion() { this->suggestion_ = nullptr;};
                  inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
                  inline Detail& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


                  // type Field Functions 
                  bool hasType() const { return this->type_ != nullptr;};
                  void deleteType() { this->type_ = nullptr;};
                  inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                  inline Detail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                protected:
                  shared_ptr<string> level_ {};
                  shared_ptr<vector<Detail::Result>> result_ {};
                  shared_ptr<string> suggestion_ {};
                  shared_ptr<string> type_ {};
                };

                virtual bool empty() const override { return this->detail_ == nullptr
        && this->suggestion_ == nullptr; };
                // detail Field Functions 
                bool hasDetail() const { return this->detail_ != nullptr;};
                void deleteDetail() { this->detail_ = nullptr;};
                inline const vector<Guardrail::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Guardrail::Detail>) };
                inline vector<Guardrail::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<Guardrail::Detail>) };
                inline Guardrail& setDetail(const vector<Guardrail::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
                inline Guardrail& setDetail(vector<Guardrail::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


                // suggestion Field Functions 
                bool hasSuggestion() const { return this->suggestion_ != nullptr;};
                void deleteSuggestion() { this->suggestion_ = nullptr;};
                inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
                inline Guardrail& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


              protected:
                shared_ptr<vector<Guardrail::Detail>> detail_ {};
                shared_ptr<string> suggestion_ {};
              };

              class Config : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Config& obj) { 
                  DARABONBA_PTR_TO_JSON(Detail, detail_);
                };
                friend void from_json(const Darabonba::Json& j, Config& obj) { 
                  DARABONBA_PTR_FROM_JSON(Detail, detail_);
                };
                Config() = default ;
                Config(const Config &) = default ;
                Config(Config &&) = default ;
                Config(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Config() = default ;
                Config& operator=(const Config &) = default ;
                Config& operator=(Config &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class Detail : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Detail& obj) { 
                    DARABONBA_PTR_TO_JSON(Content, content_);
                    DARABONBA_PTR_TO_JSON(Description, description_);
                    DARABONBA_PTR_TO_JSON(ItemName, itemName_);
                    DARABONBA_PTR_TO_JSON(Line, line_);
                  };
                  friend void from_json(const Darabonba::Json& j, Detail& obj) { 
                    DARABONBA_PTR_FROM_JSON(Content, content_);
                    DARABONBA_PTR_FROM_JSON(Description, description_);
                    DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
                    DARABONBA_PTR_FROM_JSON(Line, line_);
                  };
                  Detail() = default ;
                  Detail(const Detail &) = default ;
                  Detail(Detail &&) = default ;
                  Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Detail() = default ;
                  Detail& operator=(const Detail &) = default ;
                  Detail& operator=(Detail &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->itemName_ == nullptr && this->line_ == nullptr; };
                  // content Field Functions 
                  bool hasContent() const { return this->content_ != nullptr;};
                  void deleteContent() { this->content_ = nullptr;};
                  inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                  inline Detail& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                  // description Field Functions 
                  bool hasDescription() const { return this->description_ != nullptr;};
                  void deleteDescription() { this->description_ = nullptr;};
                  inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
                  inline Detail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


                  // itemName Field Functions 
                  bool hasItemName() const { return this->itemName_ != nullptr;};
                  void deleteItemName() { this->itemName_ = nullptr;};
                  inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
                  inline Detail& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


                  // line Field Functions 
                  bool hasLine() const { return this->line_ != nullptr;};
                  void deleteLine() { this->line_ = nullptr;};
                  inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
                  inline Detail& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


                protected:
                  shared_ptr<string> content_ {};
                  shared_ptr<string> description_ {};
                  shared_ptr<string> itemName_ {};
                  shared_ptr<string> line_ {};
                };

                virtual bool empty() const override { return this->detail_ == nullptr; };
                // detail Field Functions 
                bool hasDetail() const { return this->detail_ != nullptr;};
                void deleteDetail() { this->detail_ = nullptr;};
                inline const vector<Config::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Config::Detail>) };
                inline vector<Config::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<Config::Detail>) };
                inline Config& setDetail(const vector<Config::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
                inline Config& setDetail(vector<Config::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


              protected:
                shared_ptr<vector<Config::Detail>> detail_ {};
              };

              virtual bool empty() const override { return this->config_ == nullptr
        && this->guardrail_ == nullptr && this->sensitive_ == nullptr && this->virus_ == nullptr; };
              // config Field Functions 
              bool hasConfig() const { return this->config_ != nullptr;};
              void deleteConfig() { this->config_ = nullptr;};
              inline const Ext::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Ext::Config) };
              inline Ext::Config getConfig() { DARABONBA_PTR_GET(config_, Ext::Config) };
              inline Ext& setConfig(const Ext::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
              inline Ext& setConfig(Ext::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


              // guardrail Field Functions 
              bool hasGuardrail() const { return this->guardrail_ != nullptr;};
              void deleteGuardrail() { this->guardrail_ = nullptr;};
              inline const Ext::Guardrail & getGuardrail() const { DARABONBA_PTR_GET_CONST(guardrail_, Ext::Guardrail) };
              inline Ext::Guardrail getGuardrail() { DARABONBA_PTR_GET(guardrail_, Ext::Guardrail) };
              inline Ext& setGuardrail(const Ext::Guardrail & guardrail) { DARABONBA_PTR_SET_VALUE(guardrail_, guardrail) };
              inline Ext& setGuardrail(Ext::Guardrail && guardrail) { DARABONBA_PTR_SET_RVALUE(guardrail_, guardrail) };


              // sensitive Field Functions 
              bool hasSensitive() const { return this->sensitive_ != nullptr;};
              void deleteSensitive() { this->sensitive_ = nullptr;};
              inline const Ext::Sensitive & getSensitive() const { DARABONBA_PTR_GET_CONST(sensitive_, Ext::Sensitive) };
              inline Ext::Sensitive getSensitive() { DARABONBA_PTR_GET(sensitive_, Ext::Sensitive) };
              inline Ext& setSensitive(const Ext::Sensitive & sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };
              inline Ext& setSensitive(Ext::Sensitive && sensitive) { DARABONBA_PTR_SET_RVALUE(sensitive_, sensitive) };


              // virus Field Functions 
              bool hasVirus() const { return this->virus_ != nullptr;};
              void deleteVirus() { this->virus_ = nullptr;};
              inline const vector<Ext::Virus> & getVirus() const { DARABONBA_PTR_GET_CONST(virus_, vector<Ext::Virus>) };
              inline vector<Ext::Virus> getVirus() { DARABONBA_PTR_GET(virus_, vector<Ext::Virus>) };
              inline Ext& setVirus(const vector<Ext::Virus> & virus) { DARABONBA_PTR_SET_VALUE(virus_, virus) };
              inline Ext& setVirus(vector<Ext::Virus> && virus) { DARABONBA_PTR_SET_RVALUE(virus_, virus) };


            protected:
              shared_ptr<Ext::Config> config_ {};
              shared_ptr<Ext::Guardrail> guardrail_ {};
              shared_ptr<Ext::Sensitive> sensitive_ {};
              shared_ptr<vector<Ext::Virus>> virus_ {};
            };

            virtual bool empty() const override { return this->ext_ == nullptr
        && this->path_ == nullptr && this->resultType_ == nullptr; };
            // ext Field Functions 
            bool hasExt() const { return this->ext_ != nullptr;};
            void deleteExt() { this->ext_ = nullptr;};
            inline const RiskInfo::Ext & getExt() const { DARABONBA_PTR_GET_CONST(ext_, RiskInfo::Ext) };
            inline RiskInfo::Ext getExt() { DARABONBA_PTR_GET(ext_, RiskInfo::Ext) };
            inline RiskInfo& setExt(const RiskInfo::Ext & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
            inline RiskInfo& setExt(RiskInfo::Ext && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


            // path Field Functions 
            bool hasPath() const { return this->path_ != nullptr;};
            void deletePath() { this->path_ = nullptr;};
            inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
            inline RiskInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


            // resultType Field Functions 
            bool hasResultType() const { return this->resultType_ != nullptr;};
            void deleteResultType() { this->resultType_ = nullptr;};
            inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
            inline RiskInfo& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


          protected:
            shared_ptr<RiskInfo::Ext> ext_ {};
            shared_ptr<string> path_ {};
            shared_ptr<string> resultType_ {};
          };

          virtual bool empty() const override { return this->riskInfo_ == nullptr; };
          // riskInfo Field Functions 
          bool hasRiskInfo() const { return this->riskInfo_ != nullptr;};
          void deleteRiskInfo() { this->riskInfo_ = nullptr;};
          inline const vector<SkillCheckResult::RiskInfo> & getRiskInfo() const { DARABONBA_PTR_GET_CONST(riskInfo_, vector<SkillCheckResult::RiskInfo>) };
          inline vector<SkillCheckResult::RiskInfo> getRiskInfo() { DARABONBA_PTR_GET(riskInfo_, vector<SkillCheckResult::RiskInfo>) };
          inline SkillCheckResult& setRiskInfo(const vector<SkillCheckResult::RiskInfo> & riskInfo) { DARABONBA_PTR_SET_VALUE(riskInfo_, riskInfo) };
          inline SkillCheckResult& setRiskInfo(vector<SkillCheckResult::RiskInfo> && riskInfo) { DARABONBA_PTR_SET_RVALUE(riskInfo_, riskInfo) };


        protected:
          shared_ptr<vector<SkillCheckResult::RiskInfo>> riskInfo_ {};
        };

        virtual bool empty() const override { return this->skillCheckResult_ == nullptr; };
        // skillCheckResult Field Functions 
        bool hasSkillCheckResult() const { return this->skillCheckResult_ != nullptr;};
        void deleteSkillCheckResult() { this->skillCheckResult_ = nullptr;};
        inline const TaskResultMessage::SkillCheckResult & getSkillCheckResult() const { DARABONBA_PTR_GET_CONST(skillCheckResult_, TaskResultMessage::SkillCheckResult) };
        inline TaskResultMessage::SkillCheckResult getSkillCheckResult() { DARABONBA_PTR_GET(skillCheckResult_, TaskResultMessage::SkillCheckResult) };
        inline TaskResultMessage& setSkillCheckResult(const TaskResultMessage::SkillCheckResult & skillCheckResult) { DARABONBA_PTR_SET_VALUE(skillCheckResult_, skillCheckResult) };
        inline TaskResultMessage& setSkillCheckResult(TaskResultMessage::SkillCheckResult && skillCheckResult) { DARABONBA_PTR_SET_RVALUE(skillCheckResult_, skillCheckResult) };


      protected:
        shared_ptr<TaskResultMessage::SkillCheckResult> skillCheckResult_ {};
      };

      virtual bool empty() const override { return this->fileHash_ == nullptr
        && this->id_ == nullptr && this->target_ == nullptr && this->taskResultMessage_ == nullptr && this->taskStatus_ == nullptr; };
      // fileHash Field Functions 
      bool hasFileHash() const { return this->fileHash_ != nullptr;};
      void deleteFileHash() { this->fileHash_ = nullptr;};
      inline string getFileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
      inline Data& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Data& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // taskResultMessage Field Functions 
      bool hasTaskResultMessage() const { return this->taskResultMessage_ != nullptr;};
      void deleteTaskResultMessage() { this->taskResultMessage_ = nullptr;};
      inline const Data::TaskResultMessage & getTaskResultMessage() const { DARABONBA_PTR_GET_CONST(taskResultMessage_, Data::TaskResultMessage) };
      inline Data::TaskResultMessage getTaskResultMessage() { DARABONBA_PTR_GET(taskResultMessage_, Data::TaskResultMessage) };
      inline Data& setTaskResultMessage(const Data::TaskResultMessage & taskResultMessage) { DARABONBA_PTR_SET_VALUE(taskResultMessage_, taskResultMessage) };
      inline Data& setTaskResultMessage(Data::TaskResultMessage && taskResultMessage) { DARABONBA_PTR_SET_RVALUE(taskResultMessage_, taskResultMessage) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      shared_ptr<string> fileHash_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> target_ {};
      shared_ptr<Data::TaskResultMessage> taskResultMessage_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSubTasksResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSubTasksResponseBody::Data>) };
    inline vector<ListSubTasksResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSubTasksResponseBody::Data>) };
    inline ListSubTasksResponseBody& setData(const vector<ListSubTasksResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSubTasksResponseBody& setData(vector<ListSubTasksResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListSubTasksResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListSubTasksResponseBody::PageInfo) };
    inline ListSubTasksResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListSubTasksResponseBody::PageInfo) };
    inline ListSubTasksResponseBody& setPageInfo(const ListSubTasksResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListSubTasksResponseBody& setPageInfo(ListSubTasksResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSubTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListSubTasksResponseBody::Data>> data_ {};
    shared_ptr<ListSubTasksResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
