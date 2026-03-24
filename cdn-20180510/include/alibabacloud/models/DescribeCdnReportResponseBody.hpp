// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnReportResponseBody() = default ;
    DescribeCdnReportResponseBody(const DescribeCdnReportResponseBody &) = default ;
    DescribeCdnReportResponseBody(DescribeCdnReportResponseBody &&) = default ;
    DescribeCdnReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnReportResponseBody() = default ;
    DescribeCdnReportResponseBody& operator=(const DescribeCdnReportResponseBody &) = default ;
    DescribeCdnReportResponseBody& operator=(DescribeCdnReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(data, data_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(data, data_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(data, data_);
          DARABONBA_PTR_TO_JSON(deliver, deliver_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(data, data_);
          DARABONBA_PTR_FROM_JSON(deliver, deliver_);
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
        class Deliver : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Deliver& obj) { 
            DARABONBA_PTR_TO_JSON(report, report_);
          };
          friend void from_json(const Darabonba::Json& j, Deliver& obj) { 
            DARABONBA_PTR_FROM_JSON(report, report_);
          };
          Deliver() = default ;
          Deliver(const Deliver &) = default ;
          Deliver(Deliver &&) = default ;
          Deliver(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Deliver() = default ;
          Deliver& operator=(const Deliver &) = default ;
          Deliver& operator=(Deliver &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Report : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Report& obj) { 
              DARABONBA_PTR_TO_JSON(format, format_);
              DARABONBA_PTR_TO_JSON(header, header_);
              DARABONBA_PTR_TO_JSON(outLine, outLine_);
              DARABONBA_PTR_TO_JSON(outSize, outSize_);
              DARABONBA_PTR_TO_JSON(shape, shape_);
              DARABONBA_PTR_TO_JSON(title, title_);
            };
            friend void from_json(const Darabonba::Json& j, Report& obj) { 
              DARABONBA_PTR_FROM_JSON(format, format_);
              DARABONBA_PTR_FROM_JSON(header, header_);
              DARABONBA_PTR_FROM_JSON(outLine, outLine_);
              DARABONBA_PTR_FROM_JSON(outSize, outSize_);
              DARABONBA_PTR_FROM_JSON(shape, shape_);
              DARABONBA_PTR_FROM_JSON(title, title_);
            };
            Report() = default ;
            Report(const Report &) = default ;
            Report(Report &&) = default ;
            Report(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Report() = default ;
            Report& operator=(const Report &) = default ;
            Report& operator=(Report &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->format_ == nullptr
        && this->header_ == nullptr && this->outLine_ == nullptr && this->outSize_ == nullptr && this->shape_ == nullptr && this->title_ == nullptr; };
            // format Field Functions 
            bool hasFormat() const { return this->format_ != nullptr;};
            void deleteFormat() { this->format_ = nullptr;};
            inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
            inline Report& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


            // header Field Functions 
            bool hasHeader() const { return this->header_ != nullptr;};
            void deleteHeader() { this->header_ = nullptr;};
            inline const vector<string> & getHeader() const { DARABONBA_PTR_GET_CONST(header_, vector<string>) };
            inline vector<string> getHeader() { DARABONBA_PTR_GET(header_, vector<string>) };
            inline Report& setHeader(const vector<string> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
            inline Report& setHeader(vector<string> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


            // outLine Field Functions 
            bool hasOutLine() const { return this->outLine_ != nullptr;};
            void deleteOutLine() { this->outLine_ = nullptr;};
            inline int64_t getOutLine() const { DARABONBA_PTR_GET_DEFAULT(outLine_, 0L) };
            inline Report& setOutLine(int64_t outLine) { DARABONBA_PTR_SET_VALUE(outLine_, outLine) };


            // outSize Field Functions 
            bool hasOutSize() const { return this->outSize_ != nullptr;};
            void deleteOutSize() { this->outSize_ = nullptr;};
            inline int64_t getOutSize() const { DARABONBA_PTR_GET_DEFAULT(outSize_, 0L) };
            inline Report& setOutSize(int64_t outSize) { DARABONBA_PTR_SET_VALUE(outSize_, outSize) };


            // shape Field Functions 
            bool hasShape() const { return this->shape_ != nullptr;};
            void deleteShape() { this->shape_ = nullptr;};
            inline string getShape() const { DARABONBA_PTR_GET_DEFAULT(shape_, "") };
            inline Report& setShape(string shape) { DARABONBA_PTR_SET_VALUE(shape_, shape) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline Report& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          protected:
            shared_ptr<string> format_ {};
            shared_ptr<vector<string>> header_ {};
            shared_ptr<int64_t> outLine_ {};
            shared_ptr<int64_t> outSize_ {};
            shared_ptr<string> shape_ {};
            shared_ptr<string> title_ {};
          };

          virtual bool empty() const override { return this->report_ == nullptr; };
          // report Field Functions 
          bool hasReport() const { return this->report_ != nullptr;};
          void deleteReport() { this->report_ = nullptr;};
          inline const Deliver::Report & getReport() const { DARABONBA_PTR_GET_CONST(report_, Deliver::Report) };
          inline Deliver::Report getReport() { DARABONBA_PTR_GET(report_, Deliver::Report) };
          inline Deliver& setReport(const Deliver::Report & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
          inline Deliver& setReport(Deliver::Report && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


        protected:
          shared_ptr<Deliver::Report> report_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr
        && this->deliver_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<map<string, string>> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<map<string, string>>) };
        inline vector<map<string, string>> getData() { DARABONBA_PTR_GET(data_, vector<map<string, string>>) };
        inline Data& setData(const vector<map<string, string>> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Data& setData(vector<map<string, string>> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // deliver Field Functions 
        bool hasDeliver() const { return this->deliver_ != nullptr;};
        void deleteDeliver() { this->deliver_ = nullptr;};
        inline const Data::Deliver & getDeliver() const { DARABONBA_PTR_GET_CONST(deliver_, Data::Deliver) };
        inline Data::Deliver getDeliver() { DARABONBA_PTR_GET(deliver_, Data::Deliver) };
        inline Data& setDeliver(const Data::Deliver & deliver) { DARABONBA_PTR_SET_VALUE(deliver_, deliver) };
        inline Data& setDeliver(Data::Deliver && deliver) { DARABONBA_PTR_SET_RVALUE(deliver_, deliver) };


      protected:
        shared_ptr<vector<map<string, string>>> data_ {};
        shared_ptr<Data::Deliver> deliver_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Content::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Content::Data>) };
      inline vector<Content::Data> getData() { DARABONBA_PTR_GET(data_, vector<Content::Data>) };
      inline Content& setData(const vector<Content::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Content& setData(vector<Content::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<vector<Content::Data>> data_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeCdnReportResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeCdnReportResponseBody::Content) };
    inline DescribeCdnReportResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeCdnReportResponseBody::Content) };
    inline DescribeCdnReportResponseBody& setContent(const DescribeCdnReportResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeCdnReportResponseBody& setContent(DescribeCdnReportResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the operations report.
    shared_ptr<DescribeCdnReportResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
