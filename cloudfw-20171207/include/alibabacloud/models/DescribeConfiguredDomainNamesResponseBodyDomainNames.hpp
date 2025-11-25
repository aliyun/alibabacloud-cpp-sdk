// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDOMAINNAMESRESPONSEBODYDOMAINNAMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDOMAINNAMESRESPONSEBODYDOMAINNAMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeConfiguredDomainNamesResponseBodyDomainNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfiguredDomainNamesResponseBodyDomainNames& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(IsMalicious, isMalicious_);
      DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfiguredDomainNamesResponseBodyDomainNames& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(IsMalicious, isMalicious_);
      DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
    };
    DescribeConfiguredDomainNamesResponseBodyDomainNames() = default ;
    DescribeConfiguredDomainNamesResponseBodyDomainNames(const DescribeConfiguredDomainNamesResponseBodyDomainNames &) = default ;
    DescribeConfiguredDomainNamesResponseBodyDomainNames(DescribeConfiguredDomainNamesResponseBodyDomainNames &&) = default ;
    DescribeConfiguredDomainNamesResponseBodyDomainNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfiguredDomainNamesResponseBodyDomainNames() = default ;
    DescribeConfiguredDomainNamesResponseBodyDomainNames& operator=(const DescribeConfiguredDomainNamesResponseBodyDomainNames &) = default ;
    DescribeConfiguredDomainNamesResponseBodyDomainNames& operator=(DescribeConfiguredDomainNamesResponseBodyDomainNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->domainName_ == nullptr && return this->isMalicious_ == nullptr && return this->operationTime_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeConfiguredDomainNamesResponseBodyDomainNames& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeConfiguredDomainNamesResponseBodyDomainNames& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // isMalicious Field Functions 
    bool hasIsMalicious() const { return this->isMalicious_ != nullptr;};
    void deleteIsMalicious() { this->isMalicious_ = nullptr;};
    inline bool isMalicious() const { DARABONBA_PTR_GET_DEFAULT(isMalicious_, false) };
    inline DescribeConfiguredDomainNamesResponseBodyDomainNames& setIsMalicious(bool isMalicious) { DARABONBA_PTR_SET_VALUE(isMalicious_, isMalicious) };


    // operationTime Field Functions 
    bool hasOperationTime() const { return this->operationTime_ != nullptr;};
    void deleteOperationTime() { this->operationTime_ = nullptr;};
    inline int32_t operationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, 0) };
    inline DescribeConfiguredDomainNamesResponseBodyDomainNames& setOperationTime(int32_t operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<bool> isMalicious_ = nullptr;
    std::shared_ptr<int32_t> operationTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
