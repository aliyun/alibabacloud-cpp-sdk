// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECNAMEREUSESRESPONSEBODYCNAMEREUSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECNAMEREUSESRESPONSEBODYCNAMEREUSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCnameReusesResponseBodyCnameReuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCnameReusesResponseBodyCnameReuses& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCnameReusesResponseBodyCnameReuses& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    DescribeCnameReusesResponseBodyCnameReuses() = default ;
    DescribeCnameReusesResponseBodyCnameReuses(const DescribeCnameReusesResponseBodyCnameReuses &) = default ;
    DescribeCnameReusesResponseBodyCnameReuses(DescribeCnameReusesResponseBodyCnameReuses &&) = default ;
    DescribeCnameReusesResponseBodyCnameReuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCnameReusesResponseBodyCnameReuses() = default ;
    DescribeCnameReusesResponseBodyCnameReuses& operator=(const DescribeCnameReusesResponseBodyCnameReuses &) = default ;
    DescribeCnameReusesResponseBodyCnameReuses& operator=(DescribeCnameReusesResponseBodyCnameReuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->domain_ != nullptr && this->enable_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeCnameReusesResponseBodyCnameReuses& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeCnameReusesResponseBodyCnameReuses& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline DescribeCnameReusesResponseBodyCnameReuses& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<string> cname_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int32_t> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
