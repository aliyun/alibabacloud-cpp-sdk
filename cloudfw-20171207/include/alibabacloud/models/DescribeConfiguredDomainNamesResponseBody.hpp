// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDOMAINNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDOMAINNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeConfiguredDomainNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfiguredDomainNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfiguredDomainNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeConfiguredDomainNamesResponseBody() = default ;
    DescribeConfiguredDomainNamesResponseBody(const DescribeConfiguredDomainNamesResponseBody &) = default ;
    DescribeConfiguredDomainNamesResponseBody(DescribeConfiguredDomainNamesResponseBody &&) = default ;
    DescribeConfiguredDomainNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfiguredDomainNamesResponseBody() = default ;
    DescribeConfiguredDomainNamesResponseBody& operator=(const DescribeConfiguredDomainNamesResponseBody &) = default ;
    DescribeConfiguredDomainNamesResponseBody& operator=(DescribeConfiguredDomainNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainNames : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainNames& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(IsMalicious, isMalicious_);
        DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      };
      friend void from_json(const Darabonba::Json& j, DomainNames& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(IsMalicious, isMalicious_);
        DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
      };
      DomainNames() = default ;
      DomainNames(const DomainNames &) = default ;
      DomainNames(DomainNames &&) = default ;
      DomainNames(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainNames() = default ;
      DomainNames& operator=(const DomainNames &) = default ;
      DomainNames& operator=(DomainNames &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->domainName_ == nullptr && this->isMalicious_ == nullptr && this->operationTime_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline DomainNames& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline DomainNames& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // isMalicious Field Functions 
      bool hasIsMalicious() const { return this->isMalicious_ != nullptr;};
      void deleteIsMalicious() { this->isMalicious_ = nullptr;};
      inline bool getIsMalicious() const { DARABONBA_PTR_GET_DEFAULT(isMalicious_, false) };
      inline DomainNames& setIsMalicious(bool isMalicious) { DARABONBA_PTR_SET_VALUE(isMalicious_, isMalicious) };


      // operationTime Field Functions 
      bool hasOperationTime() const { return this->operationTime_ != nullptr;};
      void deleteOperationTime() { this->operationTime_ = nullptr;};
      inline int32_t getOperationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, 0) };
      inline DomainNames& setOperationTime(int32_t operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    protected:
      shared_ptr<string> comment_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<bool> isMalicious_ {};
      shared_ptr<int32_t> operationTime_ {};
    };

    virtual bool empty() const override { return this->domainNames_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline const vector<DescribeConfiguredDomainNamesResponseBody::DomainNames> & getDomainNames() const { DARABONBA_PTR_GET_CONST(domainNames_, vector<DescribeConfiguredDomainNamesResponseBody::DomainNames>) };
    inline vector<DescribeConfiguredDomainNamesResponseBody::DomainNames> getDomainNames() { DARABONBA_PTR_GET(domainNames_, vector<DescribeConfiguredDomainNamesResponseBody::DomainNames>) };
    inline DescribeConfiguredDomainNamesResponseBody& setDomainNames(const vector<DescribeConfiguredDomainNamesResponseBody::DomainNames> & domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };
    inline DescribeConfiguredDomainNamesResponseBody& setDomainNames(vector<DescribeConfiguredDomainNamesResponseBody::DomainNames> && domainNames) { DARABONBA_PTR_SET_RVALUE(domainNames_, domainNames) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribeConfiguredDomainNamesResponseBody& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfiguredDomainNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeConfiguredDomainNamesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeConfiguredDomainNamesResponseBody::DomainNames>> domainNames_ {};
    shared_ptr<string> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
