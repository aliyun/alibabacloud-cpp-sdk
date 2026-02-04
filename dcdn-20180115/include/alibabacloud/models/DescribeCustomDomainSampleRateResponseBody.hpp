// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMDOMAINSAMPLERATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMDOMAINSAMPLERATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeCustomDomainSampleRateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomDomainSampleRateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomDomainSampleRateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomDomainSampleRateResponseBody() = default ;
    DescribeCustomDomainSampleRateResponseBody(const DescribeCustomDomainSampleRateResponseBody &) = default ;
    DescribeCustomDomainSampleRateResponseBody(DescribeCustomDomainSampleRateResponseBody &&) = default ;
    DescribeCustomDomainSampleRateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomDomainSampleRateResponseBody() = default ;
    DescribeCustomDomainSampleRateResponseBody& operator=(const DescribeCustomDomainSampleRateResponseBody &) = default ;
    DescribeCustomDomainSampleRateResponseBody& operator=(DescribeCustomDomainSampleRateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(DomainContent, domainContent_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainContent, domainContent_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class DomainContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainContent& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
        };
        friend void from_json(const Darabonba::Json& j, DomainContent& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
        };
        DomainContent() = default ;
        DomainContent(const DomainContent &) = default ;
        DomainContent(DomainContent &&) = default ;
        DomainContent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainContent() = default ;
        DomainContent& operator=(const DomainContent &) = default ;
        DomainContent& operator=(DomainContent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->sampleRate_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainContent& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // sampleRate Field Functions 
        bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
        void deleteSampleRate() { this->sampleRate_ = nullptr;};
        inline float getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0.0) };
        inline DomainContent& setSampleRate(float sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


      protected:
        shared_ptr<string> domainName_ {};
        shared_ptr<float> sampleRate_ {};
      };

      virtual bool empty() const override { return this->domainContent_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // domainContent Field Functions 
      bool hasDomainContent() const { return this->domainContent_ != nullptr;};
      void deleteDomainContent() { this->domainContent_ = nullptr;};
      inline const vector<Content::DomainContent> & getDomainContent() const { DARABONBA_PTR_GET_CONST(domainContent_, vector<Content::DomainContent>) };
      inline vector<Content::DomainContent> getDomainContent() { DARABONBA_PTR_GET(domainContent_, vector<Content::DomainContent>) };
      inline Content& setDomainContent(const vector<Content::DomainContent> & domainContent) { DARABONBA_PTR_SET_VALUE(domainContent_, domainContent) };
      inline Content& setDomainContent(vector<Content::DomainContent> && domainContent) { DARABONBA_PTR_SET_RVALUE(domainContent_, domainContent) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Content& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Content& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Content& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Content::DomainContent>> domainContent_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeCustomDomainSampleRateResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeCustomDomainSampleRateResponseBody::Content) };
    inline DescribeCustomDomainSampleRateResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeCustomDomainSampleRateResponseBody::Content) };
    inline DescribeCustomDomainSampleRateResponseBody& setContent(const DescribeCustomDomainSampleRateResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeCustomDomainSampleRateResponseBody& setContent(DescribeCustomDomainSampleRateResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomDomainSampleRateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeCustomDomainSampleRateResponseBody::Content> content_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
