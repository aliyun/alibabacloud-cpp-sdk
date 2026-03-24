// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDeliverListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDeliverListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDeliverListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnDeliverListResponseBody() = default ;
    DescribeCdnDeliverListResponseBody(const DescribeCdnDeliverListResponseBody &) = default ;
    DescribeCdnDeliverListResponseBody(DescribeCdnDeliverListResponseBody &&) = default ;
    DescribeCdnDeliverListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDeliverListResponseBody() = default ;
    DescribeCdnDeliverListResponseBody& operator=(const DescribeCdnDeliverListResponseBody &) = default ;
    DescribeCdnDeliverListResponseBody& operator=(DescribeCdnDeliverListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(crontab, crontab_);
          DARABONBA_PTR_TO_JSON(deliver, deliver_);
          DARABONBA_PTR_TO_JSON(deliverId, deliverId_);
          DARABONBA_PTR_TO_JSON(dmList, dmList_);
          DARABONBA_PTR_TO_JSON(frequency, frequency_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(reports, reports_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(timeEndFormat, timeEndFormat_);
          DARABONBA_PTR_TO_JSON(timeFromFormat, timeFromFormat_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(crontab, crontab_);
          DARABONBA_PTR_FROM_JSON(deliver, deliver_);
          DARABONBA_PTR_FROM_JSON(deliverId, deliverId_);
          DARABONBA_PTR_FROM_JSON(dmList, dmList_);
          DARABONBA_PTR_FROM_JSON(frequency, frequency_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(reports, reports_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(timeEndFormat, timeEndFormat_);
          DARABONBA_PTR_FROM_JSON(timeFromFormat, timeFromFormat_);
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
        class Reports : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Reports& obj) { 
            DARABONBA_PTR_TO_JSON(reportId, reportId_);
          };
          friend void from_json(const Darabonba::Json& j, Reports& obj) { 
            DARABONBA_PTR_FROM_JSON(reportId, reportId_);
          };
          Reports() = default ;
          Reports(const Reports &) = default ;
          Reports(Reports &&) = default ;
          Reports(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Reports() = default ;
          Reports& operator=(const Reports &) = default ;
          Reports& operator=(Reports &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->reportId_ == nullptr; };
          // reportId Field Functions 
          bool hasReportId() const { return this->reportId_ != nullptr;};
          void deleteReportId() { this->reportId_ = nullptr;};
          inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
          inline Reports& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


        protected:
          shared_ptr<int64_t> reportId_ {};
        };

        class Deliver : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Deliver& obj) { 
            DARABONBA_PTR_TO_JSON(email, email_);
          };
          friend void from_json(const Darabonba::Json& j, Deliver& obj) { 
            DARABONBA_PTR_FROM_JSON(email, email_);
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
          class Email : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Email& obj) { 
              DARABONBA_PTR_TO_JSON(to, to_);
            };
            friend void from_json(const Darabonba::Json& j, Email& obj) { 
              DARABONBA_PTR_FROM_JSON(to, to_);
            };
            Email() = default ;
            Email(const Email &) = default ;
            Email(Email &&) = default ;
            Email(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Email() = default ;
            Email& operator=(const Email &) = default ;
            Email& operator=(Email &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->to_ == nullptr; };
            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline const vector<string> & getTo() const { DARABONBA_PTR_GET_CONST(to_, vector<string>) };
            inline vector<string> getTo() { DARABONBA_PTR_GET(to_, vector<string>) };
            inline Email& setTo(const vector<string> & to) { DARABONBA_PTR_SET_VALUE(to_, to) };
            inline Email& setTo(vector<string> && to) { DARABONBA_PTR_SET_RVALUE(to_, to) };


          protected:
            shared_ptr<vector<string>> to_ {};
          };

          virtual bool empty() const override { return this->email_ == nullptr; };
          // email Field Functions 
          bool hasEmail() const { return this->email_ != nullptr;};
          void deleteEmail() { this->email_ = nullptr;};
          inline const Deliver::Email & getEmail() const { DARABONBA_PTR_GET_CONST(email_, Deliver::Email) };
          inline Deliver::Email getEmail() { DARABONBA_PTR_GET(email_, Deliver::Email) };
          inline Deliver& setEmail(const Deliver::Email & email) { DARABONBA_PTR_SET_VALUE(email_, email) };
          inline Deliver& setEmail(Deliver::Email && email) { DARABONBA_PTR_SET_RVALUE(email_, email) };


        protected:
          shared_ptr<Deliver::Email> email_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->crontab_ == nullptr && this->deliver_ == nullptr && this->deliverId_ == nullptr && this->dmList_ == nullptr && this->frequency_ == nullptr
        && this->name_ == nullptr && this->reports_ == nullptr && this->status_ == nullptr && this->timeEndFormat_ == nullptr && this->timeFromFormat_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // crontab Field Functions 
        bool hasCrontab() const { return this->crontab_ != nullptr;};
        void deleteCrontab() { this->crontab_ = nullptr;};
        inline string getCrontab() const { DARABONBA_PTR_GET_DEFAULT(crontab_, "") };
        inline Data& setCrontab(string crontab) { DARABONBA_PTR_SET_VALUE(crontab_, crontab) };


        // deliver Field Functions 
        bool hasDeliver() const { return this->deliver_ != nullptr;};
        void deleteDeliver() { this->deliver_ = nullptr;};
        inline const Data::Deliver & getDeliver() const { DARABONBA_PTR_GET_CONST(deliver_, Data::Deliver) };
        inline Data::Deliver getDeliver() { DARABONBA_PTR_GET(deliver_, Data::Deliver) };
        inline Data& setDeliver(const Data::Deliver & deliver) { DARABONBA_PTR_SET_VALUE(deliver_, deliver) };
        inline Data& setDeliver(Data::Deliver && deliver) { DARABONBA_PTR_SET_RVALUE(deliver_, deliver) };


        // deliverId Field Functions 
        bool hasDeliverId() const { return this->deliverId_ != nullptr;};
        void deleteDeliverId() { this->deliverId_ = nullptr;};
        inline int64_t getDeliverId() const { DARABONBA_PTR_GET_DEFAULT(deliverId_, 0L) };
        inline Data& setDeliverId(int64_t deliverId) { DARABONBA_PTR_SET_VALUE(deliverId_, deliverId) };


        // dmList Field Functions 
        bool hasDmList() const { return this->dmList_ != nullptr;};
        void deleteDmList() { this->dmList_ = nullptr;};
        inline const vector<string> & getDmList() const { DARABONBA_PTR_GET_CONST(dmList_, vector<string>) };
        inline vector<string> getDmList() { DARABONBA_PTR_GET(dmList_, vector<string>) };
        inline Data& setDmList(const vector<string> & dmList) { DARABONBA_PTR_SET_VALUE(dmList_, dmList) };
        inline Data& setDmList(vector<string> && dmList) { DARABONBA_PTR_SET_RVALUE(dmList_, dmList) };


        // frequency Field Functions 
        bool hasFrequency() const { return this->frequency_ != nullptr;};
        void deleteFrequency() { this->frequency_ = nullptr;};
        inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
        inline Data& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // reports Field Functions 
        bool hasReports() const { return this->reports_ != nullptr;};
        void deleteReports() { this->reports_ = nullptr;};
        inline const vector<Data::Reports> & getReports() const { DARABONBA_PTR_GET_CONST(reports_, vector<Data::Reports>) };
        inline vector<Data::Reports> getReports() { DARABONBA_PTR_GET(reports_, vector<Data::Reports>) };
        inline Data& setReports(const vector<Data::Reports> & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
        inline Data& setReports(vector<Data::Reports> && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timeEndFormat Field Functions 
        bool hasTimeEndFormat() const { return this->timeEndFormat_ != nullptr;};
        void deleteTimeEndFormat() { this->timeEndFormat_ = nullptr;};
        inline string getTimeEndFormat() const { DARABONBA_PTR_GET_DEFAULT(timeEndFormat_, "") };
        inline Data& setTimeEndFormat(string timeEndFormat) { DARABONBA_PTR_SET_VALUE(timeEndFormat_, timeEndFormat) };


        // timeFromFormat Field Functions 
        bool hasTimeFromFormat() const { return this->timeFromFormat_ != nullptr;};
        void deleteTimeFromFormat() { this->timeFromFormat_ = nullptr;};
        inline string getTimeFromFormat() const { DARABONBA_PTR_GET_DEFAULT(timeFromFormat_, "") };
        inline Data& setTimeFromFormat(string timeFromFormat) { DARABONBA_PTR_SET_VALUE(timeFromFormat_, timeFromFormat) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> crontab_ {};
        shared_ptr<Data::Deliver> deliver_ {};
        shared_ptr<int64_t> deliverId_ {};
        shared_ptr<vector<string>> dmList_ {};
        shared_ptr<string> frequency_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<Data::Reports>> reports_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> timeEndFormat_ {};
        shared_ptr<string> timeFromFormat_ {};
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
    inline const DescribeCdnDeliverListResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeCdnDeliverListResponseBody::Content) };
    inline DescribeCdnDeliverListResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeCdnDeliverListResponseBody::Content) };
    inline DescribeCdnDeliverListResponseBody& setContent(const DescribeCdnDeliverListResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeCdnDeliverListResponseBody& setContent(DescribeCdnDeliverListResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnDeliverListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the tracking task.
    shared_ptr<DescribeCdnDeliverListResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
