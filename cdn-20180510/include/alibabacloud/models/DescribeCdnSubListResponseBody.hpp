// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSUBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSUBLISTRESPONSEBODY_HPP_
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
  class DescribeCdnSubListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSubListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSubListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnSubListResponseBody() = default ;
    DescribeCdnSubListResponseBody(const DescribeCdnSubListResponseBody &) = default ;
    DescribeCdnSubListResponseBody(DescribeCdnSubListResponseBody &&) = default ;
    DescribeCdnSubListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSubListResponseBody() = default ;
    DescribeCdnSubListResponseBody& operator=(const DescribeCdnSubListResponseBody &) = default ;
    DescribeCdnSubListResponseBody& operator=(DescribeCdnSubListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(domains, domains_);
          DARABONBA_PTR_TO_JSON(effectiveEnd, effectiveEnd_);
          DARABONBA_PTR_TO_JSON(effectiveFrom, effectiveFrom_);
          DARABONBA_PTR_TO_JSON(reportId, reportId_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(subId, subId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(domains, domains_);
          DARABONBA_PTR_FROM_JSON(effectiveEnd, effectiveEnd_);
          DARABONBA_PTR_FROM_JSON(effectiveFrom, effectiveFrom_);
          DARABONBA_PTR_FROM_JSON(reportId, reportId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(subId, subId_);
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
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->domains_ == nullptr && this->effectiveEnd_ == nullptr && this->effectiveFrom_ == nullptr && this->reportId_ == nullptr && this->status_ == nullptr
        && this->subId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // domains Field Functions 
        bool hasDomains() const { return this->domains_ != nullptr;};
        void deleteDomains() { this->domains_ = nullptr;};
        inline const vector<string> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
        inline vector<string> getDomains() { DARABONBA_PTR_GET(domains_, vector<string>) };
        inline Data& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
        inline Data& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


        // effectiveEnd Field Functions 
        bool hasEffectiveEnd() const { return this->effectiveEnd_ != nullptr;};
        void deleteEffectiveEnd() { this->effectiveEnd_ = nullptr;};
        inline string getEffectiveEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveEnd_, "") };
        inline Data& setEffectiveEnd(string effectiveEnd) { DARABONBA_PTR_SET_VALUE(effectiveEnd_, effectiveEnd) };


        // effectiveFrom Field Functions 
        bool hasEffectiveFrom() const { return this->effectiveFrom_ != nullptr;};
        void deleteEffectiveFrom() { this->effectiveFrom_ = nullptr;};
        inline string getEffectiveFrom() const { DARABONBA_PTR_GET_DEFAULT(effectiveFrom_, "") };
        inline Data& setEffectiveFrom(string effectiveFrom) { DARABONBA_PTR_SET_VALUE(effectiveFrom_, effectiveFrom) };


        // reportId Field Functions 
        bool hasReportId() const { return this->reportId_ != nullptr;};
        void deleteReportId() { this->reportId_ = nullptr;};
        inline const vector<int64_t> & getReportId() const { DARABONBA_PTR_GET_CONST(reportId_, vector<int64_t>) };
        inline vector<int64_t> getReportId() { DARABONBA_PTR_GET(reportId_, vector<int64_t>) };
        inline Data& setReportId(const vector<int64_t> & reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };
        inline Data& setReportId(vector<int64_t> && reportId) { DARABONBA_PTR_SET_RVALUE(reportId_, reportId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subId Field Functions 
        bool hasSubId() const { return this->subId_ != nullptr;};
        void deleteSubId() { this->subId_ = nullptr;};
        inline int64_t getSubId() const { DARABONBA_PTR_GET_DEFAULT(subId_, 0L) };
        inline Data& setSubId(int64_t subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<vector<string>> domains_ {};
        shared_ptr<string> effectiveEnd_ {};
        shared_ptr<string> effectiveFrom_ {};
        shared_ptr<vector<int64_t>> reportId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> subId_ {};
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
    inline const DescribeCdnSubListResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeCdnSubListResponseBody::Content) };
    inline DescribeCdnSubListResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeCdnSubListResponseBody::Content) };
    inline DescribeCdnSubListResponseBody& setContent(const DescribeCdnSubListResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeCdnSubListResponseBody& setContent(DescribeCdnSubListResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnSubListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the custom report task.
    shared_ptr<DescribeCdnSubListResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
