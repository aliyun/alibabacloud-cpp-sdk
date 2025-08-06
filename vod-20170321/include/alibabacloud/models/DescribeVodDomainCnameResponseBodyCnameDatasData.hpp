// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCNAMERESPONSEBODYCNAMEDATASDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCNAMERESPONSEBODYCNAMEDATASDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainCnameResponseBodyCnameDatasData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainCnameResponseBodyCnameDatasData& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainCnameResponseBodyCnameDatasData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeVodDomainCnameResponseBodyCnameDatasData() = default ;
    DescribeVodDomainCnameResponseBodyCnameDatasData(const DescribeVodDomainCnameResponseBodyCnameDatasData &) = default ;
    DescribeVodDomainCnameResponseBodyCnameDatasData(DescribeVodDomainCnameResponseBodyCnameDatasData &&) = default ;
    DescribeVodDomainCnameResponseBodyCnameDatasData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainCnameResponseBodyCnameDatasData() = default ;
    DescribeVodDomainCnameResponseBodyCnameDatasData& operator=(const DescribeVodDomainCnameResponseBodyCnameDatasData &) = default ;
    DescribeVodDomainCnameResponseBodyCnameDatasData& operator=(DescribeVodDomainCnameResponseBodyCnameDatasData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->domain_ != nullptr && this->status_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeVodDomainCnameResponseBodyCnameDatasData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeVodDomainCnameResponseBodyCnameDatasData& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeVodDomainCnameResponseBodyCnameDatasData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> cname_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
