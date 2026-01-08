// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeMultimodalModerationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultimodalModerationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultimodalModerationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMultimodalModerationResultResponseBody() = default ;
    DescribeMultimodalModerationResultResponseBody(const DescribeMultimodalModerationResultResponseBody &) = default ;
    DescribeMultimodalModerationResultResponseBody(DescribeMultimodalModerationResultResponseBody &&) = default ;
    DescribeMultimodalModerationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultimodalModerationResultResponseBody() = default ;
    DescribeMultimodalModerationResultResponseBody& operator=(const DescribeMultimodalModerationResultResponseBody &) = default ;
    DescribeMultimodalModerationResultResponseBody& operator=(DescribeMultimodalModerationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CommentDatas, commentDatas_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(MainData, mainData_);
        DARABONBA_PTR_TO_JSON(ReqId, reqId_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CommentDatas, commentDatas_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(MainData, mainData_);
        DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
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
      class MainData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MainData& obj) { 
          DARABONBA_PTR_TO_JSON(Results, results_);
        };
        friend void from_json(const Darabonba::Json& j, MainData& obj) { 
          DARABONBA_PTR_FROM_JSON(Results, results_);
        };
        MainData() = default ;
        MainData(const MainData &) = default ;
        MainData(MainData &&) = default ;
        MainData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MainData() = default ;
        MainData& operator=(const MainData &) = default ;
        MainData& operator=(MainData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Results : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Results& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Results& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Results() = default ;
          Results(const Results &) = default ;
          Results(Results &&) = default ;
          Results(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Results() = default ;
          Results& operator=(const Results &) = default ;
          Results& operator=(Results &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Results& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Results& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> label_ {};
        };

        virtual bool empty() const override { return this->results_ == nullptr; };
        // results Field Functions 
        bool hasResults() const { return this->results_ != nullptr;};
        void deleteResults() { this->results_ = nullptr;};
        inline const vector<MainData::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<MainData::Results>) };
        inline vector<MainData::Results> getResults() { DARABONBA_PTR_GET(results_, vector<MainData::Results>) };
        inline MainData& setResults(const vector<MainData::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
        inline MainData& setResults(vector<MainData::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      protected:
        shared_ptr<vector<MainData::Results>> results_ {};
      };

      class CommentDatas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CommentDatas& obj) { 
          DARABONBA_PTR_TO_JSON(CommentDatas, commentDatas_);
          DARABONBA_PTR_TO_JSON(Results, results_);
        };
        friend void from_json(const Darabonba::Json& j, CommentDatas& obj) { 
          DARABONBA_PTR_FROM_JSON(CommentDatas, commentDatas_);
          DARABONBA_PTR_FROM_JSON(Results, results_);
        };
        CommentDatas() = default ;
        CommentDatas(const CommentDatas &) = default ;
        CommentDatas(CommentDatas &&) = default ;
        CommentDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CommentDatas() = default ;
        CommentDatas& operator=(const CommentDatas &) = default ;
        CommentDatas& operator=(CommentDatas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Results : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Results& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Results& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Results() = default ;
          Results(const Results &) = default ;
          Results(Results &&) = default ;
          Results(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Results() = default ;
          Results& operator=(const Results &) = default ;
          Results& operator=(Results &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Results& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Results& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> label_ {};
        };

        class CommentDatasItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CommentDatasItem& obj) { 
            DARABONBA_PTR_TO_JSON(Results, results_);
          };
          friend void from_json(const Darabonba::Json& j, CommentDatasItem& obj) { 
            DARABONBA_PTR_FROM_JSON(Results, results_);
          };
          CommentDatasItem() = default ;
          CommentDatasItem(const CommentDatasItem &) = default ;
          CommentDatasItem(CommentDatasItem &&) = default ;
          CommentDatasItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CommentDatasItem() = default ;
          CommentDatasItem& operator=(const CommentDatasItem &) = default ;
          CommentDatasItem& operator=(CommentDatasItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Results : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Results& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Label, label_);
            };
            friend void from_json(const Darabonba::Json& j, Results& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
            };
            Results() = default ;
            Results(const Results &) = default ;
            Results(Results &&) = default ;
            Results(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Results() = default ;
            Results& operator=(const Results &) = default ;
            Results& operator=(Results &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline Results& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline Results& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          protected:
            shared_ptr<string> description_ {};
            shared_ptr<string> label_ {};
          };

          virtual bool empty() const override { return this->results_ == nullptr; };
          // results Field Functions 
          bool hasResults() const { return this->results_ != nullptr;};
          void deleteResults() { this->results_ = nullptr;};
          inline const vector<CommentDatasItem::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<CommentDatasItem::Results>) };
          inline vector<CommentDatasItem::Results> getResults() { DARABONBA_PTR_GET(results_, vector<CommentDatasItem::Results>) };
          inline CommentDatasItem& setResults(const vector<CommentDatasItem::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
          inline CommentDatasItem& setResults(vector<CommentDatasItem::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


        protected:
          shared_ptr<vector<CommentDatasItem::Results>> results_ {};
        };

        virtual bool empty() const override { return this->commentDatas_ == nullptr
        && this->results_ == nullptr; };
        // commentDatas Field Functions 
        bool hasCommentDatas() const { return this->commentDatas_ != nullptr;};
        void deleteCommentDatas() { this->commentDatas_ = nullptr;};
        inline const vector<CommentDatas::CommentDatasItem> & getCommentDatas() const { DARABONBA_PTR_GET_CONST(commentDatas_, vector<CommentDatas::CommentDatasItem>) };
        inline vector<CommentDatas::CommentDatasItem> getCommentDatas() { DARABONBA_PTR_GET(commentDatas_, vector<CommentDatas::CommentDatasItem>) };
        inline CommentDatas& setCommentDatas(const vector<CommentDatas::CommentDatasItem> & commentDatas) { DARABONBA_PTR_SET_VALUE(commentDatas_, commentDatas) };
        inline CommentDatas& setCommentDatas(vector<CommentDatas::CommentDatasItem> && commentDatas) { DARABONBA_PTR_SET_RVALUE(commentDatas_, commentDatas) };


        // results Field Functions 
        bool hasResults() const { return this->results_ != nullptr;};
        void deleteResults() { this->results_ = nullptr;};
        inline const vector<CommentDatas::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<CommentDatas::Results>) };
        inline vector<CommentDatas::Results> getResults() { DARABONBA_PTR_GET(results_, vector<CommentDatas::Results>) };
        inline CommentDatas& setResults(const vector<CommentDatas::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
        inline CommentDatas& setResults(vector<CommentDatas::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      protected:
        shared_ptr<vector<CommentDatas::CommentDatasItem>> commentDatas_ {};
        shared_ptr<vector<CommentDatas::Results>> results_ {};
      };

      virtual bool empty() const override { return this->commentDatas_ == nullptr
        && this->dataId_ == nullptr && this->mainData_ == nullptr && this->reqId_ == nullptr && this->riskLevel_ == nullptr; };
      // commentDatas Field Functions 
      bool hasCommentDatas() const { return this->commentDatas_ != nullptr;};
      void deleteCommentDatas() { this->commentDatas_ = nullptr;};
      inline const vector<Data::CommentDatas> & getCommentDatas() const { DARABONBA_PTR_GET_CONST(commentDatas_, vector<Data::CommentDatas>) };
      inline vector<Data::CommentDatas> getCommentDatas() { DARABONBA_PTR_GET(commentDatas_, vector<Data::CommentDatas>) };
      inline Data& setCommentDatas(const vector<Data::CommentDatas> & commentDatas) { DARABONBA_PTR_SET_VALUE(commentDatas_, commentDatas) };
      inline Data& setCommentDatas(vector<Data::CommentDatas> && commentDatas) { DARABONBA_PTR_SET_RVALUE(commentDatas_, commentDatas) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // mainData Field Functions 
      bool hasMainData() const { return this->mainData_ != nullptr;};
      void deleteMainData() { this->mainData_ = nullptr;};
      inline const Data::MainData & getMainData() const { DARABONBA_PTR_GET_CONST(mainData_, Data::MainData) };
      inline Data::MainData getMainData() { DARABONBA_PTR_GET(mainData_, Data::MainData) };
      inline Data& setMainData(const Data::MainData & mainData) { DARABONBA_PTR_SET_VALUE(mainData_, mainData) };
      inline Data& setMainData(Data::MainData && mainData) { DARABONBA_PTR_SET_RVALUE(mainData_, mainData) };


      // reqId Field Functions 
      bool hasReqId() const { return this->reqId_ != nullptr;};
      void deleteReqId() { this->reqId_ = nullptr;};
      inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
      inline Data& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      shared_ptr<vector<Data::CommentDatas>> commentDatas_ {};
      shared_ptr<string> dataId_ {};
      shared_ptr<Data::MainData> mainData_ {};
      shared_ptr<string> reqId_ {};
      shared_ptr<string> riskLevel_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeMultimodalModerationResultResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeMultimodalModerationResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeMultimodalModerationResultResponseBody::Data) };
    inline DescribeMultimodalModerationResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeMultimodalModerationResultResponseBody::Data) };
    inline DescribeMultimodalModerationResultResponseBody& setData(const DescribeMultimodalModerationResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMultimodalModerationResultResponseBody& setData(DescribeMultimodalModerationResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeMultimodalModerationResultResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMultimodalModerationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<DescribeMultimodalModerationResultResponseBody::Data> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
