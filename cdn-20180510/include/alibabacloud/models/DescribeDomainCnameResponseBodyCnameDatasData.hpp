// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCNAMERESPONSEBODYCNAMEDATASDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCNAMERESPONSEBODYCNAMEDATASDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainCnameResponseBodyCnameDatasData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCnameResponseBodyCnameDatasData& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCnameResponseBodyCnameDatasData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDomainCnameResponseBodyCnameDatasData() = default ;
    DescribeDomainCnameResponseBodyCnameDatasData(const DescribeDomainCnameResponseBodyCnameDatasData &) = default ;
    DescribeDomainCnameResponseBodyCnameDatasData(DescribeDomainCnameResponseBodyCnameDatasData &&) = default ;
    DescribeDomainCnameResponseBodyCnameDatasData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCnameResponseBodyCnameDatasData() = default ;
    DescribeDomainCnameResponseBodyCnameDatasData& operator=(const DescribeDomainCnameResponseBodyCnameDatasData &) = default ;
    DescribeDomainCnameResponseBodyCnameDatasData& operator=(DescribeDomainCnameResponseBodyCnameDatasData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->domain_ != nullptr && this->errMsg_ != nullptr && this->passed_ != nullptr && this->status_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeDomainCnameResponseBodyCnameDatasData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainCnameResponseBodyCnameDatasData& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DescribeDomainCnameResponseBodyCnameDatasData& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline DescribeDomainCnameResponseBodyCnameDatasData& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDomainCnameResponseBodyCnameDatasData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The CNAME assigned to the domain name by Alibaba Cloud CDN.
    std::shared_ptr<string> cname_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<string> passed_ = nullptr;
    // The CNAME detection result. Valid values:
    // 
    // *   0: The DNS can detect the CNAME assigned to the domain name.
    // *   Value other than 0: The DNS cannot detect the CNAME assigned to the domain name.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
