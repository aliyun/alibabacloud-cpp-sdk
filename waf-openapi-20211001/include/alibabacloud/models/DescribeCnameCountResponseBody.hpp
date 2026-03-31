// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECNAMECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECNAMECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCnameCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCnameCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnameCount, cnameCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCnameCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameCount, cnameCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCnameCountResponseBody() = default ;
    DescribeCnameCountResponseBody(const DescribeCnameCountResponseBody &) = default ;
    DescribeCnameCountResponseBody(DescribeCnameCountResponseBody &&) = default ;
    DescribeCnameCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCnameCountResponseBody() = default ;
    DescribeCnameCountResponseBody& operator=(const DescribeCnameCountResponseBody &) = default ;
    DescribeCnameCountResponseBody& operator=(DescribeCnameCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CnameCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CnameCount& obj) { 
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(HybridCloudCname, hybridCloudCname_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, CnameCount& obj) { 
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(HybridCloudCname, hybridCloudCname_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      CnameCount() = default ;
      CnameCount(const CnameCount &) = default ;
      CnameCount(CnameCount &&) = default ;
      CnameCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CnameCount() = default ;
      CnameCount& operator=(const CnameCount &) = default ;
      CnameCount& operator=(CnameCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cname_ == nullptr
        && this->hybridCloudCname_ == nullptr && this->total_ == nullptr; };
      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline int64_t getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, 0L) };
      inline CnameCount& setCname(int64_t cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // hybridCloudCname Field Functions 
      bool hasHybridCloudCname() const { return this->hybridCloudCname_ != nullptr;};
      void deleteHybridCloudCname() { this->hybridCloudCname_ = nullptr;};
      inline int64_t getHybridCloudCname() const { DARABONBA_PTR_GET_DEFAULT(hybridCloudCname_, 0L) };
      inline CnameCount& setHybridCloudCname(int64_t hybridCloudCname) { DARABONBA_PTR_SET_VALUE(hybridCloudCname_, hybridCloudCname) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline CnameCount& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The number of domain names that are added to WAF in CNAME record mode.
      shared_ptr<int64_t> cname_ {};
      // The number of domain names that are added to WAF in hybrid cloud reverse proxy mode.
      shared_ptr<int64_t> hybridCloudCname_ {};
      // The total number of domain names that are added to WAF in CNAME record mode and hybrid cloud reverse proxy mode.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->cnameCount_ == nullptr
        && this->requestId_ == nullptr; };
    // cnameCount Field Functions 
    bool hasCnameCount() const { return this->cnameCount_ != nullptr;};
    void deleteCnameCount() { this->cnameCount_ = nullptr;};
    inline const DescribeCnameCountResponseBody::CnameCount & getCnameCount() const { DARABONBA_PTR_GET_CONST(cnameCount_, DescribeCnameCountResponseBody::CnameCount) };
    inline DescribeCnameCountResponseBody::CnameCount getCnameCount() { DARABONBA_PTR_GET(cnameCount_, DescribeCnameCountResponseBody::CnameCount) };
    inline DescribeCnameCountResponseBody& setCnameCount(const DescribeCnameCountResponseBody::CnameCount & cnameCount) { DARABONBA_PTR_SET_VALUE(cnameCount_, cnameCount) };
    inline DescribeCnameCountResponseBody& setCnameCount(DescribeCnameCountResponseBody::CnameCount && cnameCount) { DARABONBA_PTR_SET_RVALUE(cnameCount_, cnameCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCnameCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the number of domain names that are added to WAF in CNAME record mode and hybrid cloud reverse proxy mode.
    shared_ptr<DescribeCnameCountResponseBody::CnameCount> cnameCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
