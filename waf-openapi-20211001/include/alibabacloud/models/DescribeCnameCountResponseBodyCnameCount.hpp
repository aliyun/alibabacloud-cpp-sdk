// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECNAMECOUNTRESPONSEBODYCNAMECOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECNAMECOUNTRESPONSEBODYCNAMECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCnameCountResponseBodyCnameCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCnameCountResponseBodyCnameCount& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(HybridCloudCname, hybridCloudCname_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCnameCountResponseBodyCnameCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(HybridCloudCname, hybridCloudCname_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCnameCountResponseBodyCnameCount() = default ;
    DescribeCnameCountResponseBodyCnameCount(const DescribeCnameCountResponseBodyCnameCount &) = default ;
    DescribeCnameCountResponseBodyCnameCount(DescribeCnameCountResponseBodyCnameCount &&) = default ;
    DescribeCnameCountResponseBodyCnameCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCnameCountResponseBodyCnameCount() = default ;
    DescribeCnameCountResponseBodyCnameCount& operator=(const DescribeCnameCountResponseBodyCnameCount &) = default ;
    DescribeCnameCountResponseBodyCnameCount& operator=(DescribeCnameCountResponseBodyCnameCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cname_ == nullptr
        && return this->hybridCloudCname_ == nullptr && return this->total_ == nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline int64_t cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, 0L) };
    inline DescribeCnameCountResponseBodyCnameCount& setCname(int64_t cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // hybridCloudCname Field Functions 
    bool hasHybridCloudCname() const { return this->hybridCloudCname_ != nullptr;};
    void deleteHybridCloudCname() { this->hybridCloudCname_ = nullptr;};
    inline int64_t hybridCloudCname() const { DARABONBA_PTR_GET_DEFAULT(hybridCloudCname_, 0L) };
    inline DescribeCnameCountResponseBodyCnameCount& setHybridCloudCname(int64_t hybridCloudCname) { DARABONBA_PTR_SET_VALUE(hybridCloudCname_, hybridCloudCname) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeCnameCountResponseBodyCnameCount& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The number of domain names that are added to WAF in CNAME record mode.
    std::shared_ptr<int64_t> cname_ = nullptr;
    // The number of domain names that are added to WAF in hybrid cloud reverse proxy mode.
    std::shared_ptr<int64_t> hybridCloudCname_ = nullptr;
    // The total number of domain names that are added to WAF in CNAME record mode and hybrid cloud reverse proxy mode.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
