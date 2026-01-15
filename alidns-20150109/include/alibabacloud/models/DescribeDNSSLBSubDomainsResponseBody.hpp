// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDNSSLBSubDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDNSSLBSubDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlbSubDomains, slbSubDomains_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDNSSLBSubDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlbSubDomains, slbSubDomains_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDNSSLBSubDomainsResponseBody() = default ;
    DescribeDNSSLBSubDomainsResponseBody(const DescribeDNSSLBSubDomainsResponseBody &) = default ;
    DescribeDNSSLBSubDomainsResponseBody(DescribeDNSSLBSubDomainsResponseBody &&) = default ;
    DescribeDNSSLBSubDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDNSSLBSubDomainsResponseBody() = default ;
    DescribeDNSSLBSubDomainsResponseBody& operator=(const DescribeDNSSLBSubDomainsResponseBody &) = default ;
    DescribeDNSSLBSubDomainsResponseBody& operator=(DescribeDNSSLBSubDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlbSubDomains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlbSubDomains& obj) { 
        DARABONBA_PTR_TO_JSON(SlbSubDomain, slbSubDomain_);
      };
      friend void from_json(const Darabonba::Json& j, SlbSubDomains& obj) { 
        DARABONBA_PTR_FROM_JSON(SlbSubDomain, slbSubDomain_);
      };
      SlbSubDomains() = default ;
      SlbSubDomains(const SlbSubDomains &) = default ;
      SlbSubDomains(SlbSubDomains &&) = default ;
      SlbSubDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlbSubDomains() = default ;
      SlbSubDomains& operator=(const SlbSubDomains &) = default ;
      SlbSubDomains& operator=(SlbSubDomains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlbSubDomain : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlbSubDomain& obj) { 
          DARABONBA_PTR_TO_JSON(LineAlgorithms, lineAlgorithms_);
          DARABONBA_PTR_TO_JSON(Open, open_);
          DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, SlbSubDomain& obj) { 
          DARABONBA_PTR_FROM_JSON(LineAlgorithms, lineAlgorithms_);
          DARABONBA_PTR_FROM_JSON(Open, open_);
          DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        SlbSubDomain() = default ;
        SlbSubDomain(const SlbSubDomain &) = default ;
        SlbSubDomain(SlbSubDomain &&) = default ;
        SlbSubDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlbSubDomain() = default ;
        SlbSubDomain& operator=(const SlbSubDomain &) = default ;
        SlbSubDomain& operator=(SlbSubDomain &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LineAlgorithms : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LineAlgorithms& obj) { 
            DARABONBA_PTR_TO_JSON(LineAlgorithm, lineAlgorithm_);
          };
          friend void from_json(const Darabonba::Json& j, LineAlgorithms& obj) { 
            DARABONBA_PTR_FROM_JSON(LineAlgorithm, lineAlgorithm_);
          };
          LineAlgorithms() = default ;
          LineAlgorithms(const LineAlgorithms &) = default ;
          LineAlgorithms(LineAlgorithms &&) = default ;
          LineAlgorithms(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LineAlgorithms() = default ;
          LineAlgorithms& operator=(const LineAlgorithms &) = default ;
          LineAlgorithms& operator=(LineAlgorithms &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LineAlgorithm : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LineAlgorithm& obj) { 
              DARABONBA_PTR_TO_JSON(Line, line_);
              DARABONBA_PTR_TO_JSON(Open, open_);
            };
            friend void from_json(const Darabonba::Json& j, LineAlgorithm& obj) { 
              DARABONBA_PTR_FROM_JSON(Line, line_);
              DARABONBA_PTR_FROM_JSON(Open, open_);
            };
            LineAlgorithm() = default ;
            LineAlgorithm(const LineAlgorithm &) = default ;
            LineAlgorithm(LineAlgorithm &&) = default ;
            LineAlgorithm(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LineAlgorithm() = default ;
            LineAlgorithm& operator=(const LineAlgorithm &) = default ;
            LineAlgorithm& operator=(LineAlgorithm &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->line_ == nullptr
        && this->open_ == nullptr; };
            // line Field Functions 
            bool hasLine() const { return this->line_ != nullptr;};
            void deleteLine() { this->line_ = nullptr;};
            inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
            inline LineAlgorithm& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


            // open Field Functions 
            bool hasOpen() const { return this->open_ != nullptr;};
            void deleteOpen() { this->open_ = nullptr;};
            inline bool getOpen() const { DARABONBA_PTR_GET_DEFAULT(open_, false) };
            inline LineAlgorithm& setOpen(bool open) { DARABONBA_PTR_SET_VALUE(open_, open) };


          protected:
            // The DNS resolution line. The line can be China Telecom, China Mobile, and China Unicom.
            shared_ptr<string> line_ {};
            // Indicates whether weighted round-robin is enabled for the line. Valid values:
            // 
            // *   **true** (default): Weighted round-robin is enabled.
            // *   **false**: Weighted round-robin is disabled.
            shared_ptr<bool> open_ {};
          };

          virtual bool empty() const override { return this->lineAlgorithm_ == nullptr; };
          // lineAlgorithm Field Functions 
          bool hasLineAlgorithm() const { return this->lineAlgorithm_ != nullptr;};
          void deleteLineAlgorithm() { this->lineAlgorithm_ = nullptr;};
          inline const vector<LineAlgorithms::LineAlgorithm> & getLineAlgorithm() const { DARABONBA_PTR_GET_CONST(lineAlgorithm_, vector<LineAlgorithms::LineAlgorithm>) };
          inline vector<LineAlgorithms::LineAlgorithm> getLineAlgorithm() { DARABONBA_PTR_GET(lineAlgorithm_, vector<LineAlgorithms::LineAlgorithm>) };
          inline LineAlgorithms& setLineAlgorithm(const vector<LineAlgorithms::LineAlgorithm> & lineAlgorithm) { DARABONBA_PTR_SET_VALUE(lineAlgorithm_, lineAlgorithm) };
          inline LineAlgorithms& setLineAlgorithm(vector<LineAlgorithms::LineAlgorithm> && lineAlgorithm) { DARABONBA_PTR_SET_RVALUE(lineAlgorithm_, lineAlgorithm) };


        protected:
          shared_ptr<vector<LineAlgorithms::LineAlgorithm>> lineAlgorithm_ {};
        };

        virtual bool empty() const override { return this->lineAlgorithms_ == nullptr
        && this->open_ == nullptr && this->recordCount_ == nullptr && this->subDomain_ == nullptr && this->type_ == nullptr; };
        // lineAlgorithms Field Functions 
        bool hasLineAlgorithms() const { return this->lineAlgorithms_ != nullptr;};
        void deleteLineAlgorithms() { this->lineAlgorithms_ = nullptr;};
        inline const SlbSubDomain::LineAlgorithms & getLineAlgorithms() const { DARABONBA_PTR_GET_CONST(lineAlgorithms_, SlbSubDomain::LineAlgorithms) };
        inline SlbSubDomain::LineAlgorithms getLineAlgorithms() { DARABONBA_PTR_GET(lineAlgorithms_, SlbSubDomain::LineAlgorithms) };
        inline SlbSubDomain& setLineAlgorithms(const SlbSubDomain::LineAlgorithms & lineAlgorithms) { DARABONBA_PTR_SET_VALUE(lineAlgorithms_, lineAlgorithms) };
        inline SlbSubDomain& setLineAlgorithms(SlbSubDomain::LineAlgorithms && lineAlgorithms) { DARABONBA_PTR_SET_RVALUE(lineAlgorithms_, lineAlgorithms) };


        // open Field Functions 
        bool hasOpen() const { return this->open_ != nullptr;};
        void deleteOpen() { this->open_ = nullptr;};
        inline bool getOpen() const { DARABONBA_PTR_GET_DEFAULT(open_, false) };
        inline SlbSubDomain& setOpen(bool open) { DARABONBA_PTR_SET_VALUE(open_, open) };


        // recordCount Field Functions 
        bool hasRecordCount() const { return this->recordCount_ != nullptr;};
        void deleteRecordCount() { this->recordCount_ = nullptr;};
        inline int64_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
        inline SlbSubDomain& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


        // subDomain Field Functions 
        bool hasSubDomain() const { return this->subDomain_ != nullptr;};
        void deleteSubDomain() { this->subDomain_ = nullptr;};
        inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
        inline SlbSubDomain& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SlbSubDomain& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The lines for which weighted round-robin is enabled.
        shared_ptr<SlbSubDomain::LineAlgorithms> lineAlgorithms_ {};
        // Indicates whether weighted round-robin is enabled for the subdomain.
        shared_ptr<bool> open_ {};
        // The number of DNS records added for the subdomain.
        shared_ptr<int64_t> recordCount_ {};
        // The name of the subdomain.
        shared_ptr<string> subDomain_ {};
        // The type of the Domain Name System (DNS) record that supports weighted round-robin. Valid values: A, AAAA, and CNAME.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->slbSubDomain_ == nullptr; };
      // slbSubDomain Field Functions 
      bool hasSlbSubDomain() const { return this->slbSubDomain_ != nullptr;};
      void deleteSlbSubDomain() { this->slbSubDomain_ = nullptr;};
      inline const vector<SlbSubDomains::SlbSubDomain> & getSlbSubDomain() const { DARABONBA_PTR_GET_CONST(slbSubDomain_, vector<SlbSubDomains::SlbSubDomain>) };
      inline vector<SlbSubDomains::SlbSubDomain> getSlbSubDomain() { DARABONBA_PTR_GET(slbSubDomain_, vector<SlbSubDomains::SlbSubDomain>) };
      inline SlbSubDomains& setSlbSubDomain(const vector<SlbSubDomains::SlbSubDomain> & slbSubDomain) { DARABONBA_PTR_SET_VALUE(slbSubDomain_, slbSubDomain) };
      inline SlbSubDomains& setSlbSubDomain(vector<SlbSubDomains::SlbSubDomain> && slbSubDomain) { DARABONBA_PTR_SET_RVALUE(slbSubDomain_, slbSubDomain) };


    protected:
      shared_ptr<vector<SlbSubDomains::SlbSubDomain>> slbSubDomain_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->slbSubDomains_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDNSSLBSubDomainsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDNSSLBSubDomainsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDNSSLBSubDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slbSubDomains Field Functions 
    bool hasSlbSubDomains() const { return this->slbSubDomains_ != nullptr;};
    void deleteSlbSubDomains() { this->slbSubDomains_ = nullptr;};
    inline const DescribeDNSSLBSubDomainsResponseBody::SlbSubDomains & getSlbSubDomains() const { DARABONBA_PTR_GET_CONST(slbSubDomains_, DescribeDNSSLBSubDomainsResponseBody::SlbSubDomains) };
    inline DescribeDNSSLBSubDomainsResponseBody::SlbSubDomains getSlbSubDomains() { DARABONBA_PTR_GET(slbSubDomains_, DescribeDNSSLBSubDomainsResponseBody::SlbSubDomains) };
    inline DescribeDNSSLBSubDomainsResponseBody& setSlbSubDomains(const DescribeDNSSLBSubDomainsResponseBody::SlbSubDomains & slbSubDomains) { DARABONBA_PTR_SET_VALUE(slbSubDomains_, slbSubDomains) };
    inline DescribeDNSSLBSubDomainsResponseBody& setSlbSubDomains(DescribeDNSSLBSubDomainsResponseBody::SlbSubDomains && slbSubDomains) { DARABONBA_PTR_SET_RVALUE(slbSubDomains_, slbSubDomains) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDNSSLBSubDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 100**. Default value: **20**.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The subdomains for which weighted round-robin is enabled.
    shared_ptr<DescribeDNSSLBSubDomainsResponseBody::SlbSubDomains> slbSubDomains_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
