// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSBYSOURCERESPONSEBODYDOMAININFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSBYSOURCERESPONSEBODYDOMAININFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainsBySourceResponseBodyDomainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainsBySourceResponseBodyDomainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainsBySourceResponseBodyDomainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeDcdnDomainsBySourceResponseBodyDomainInfo() = default ;
    DescribeDcdnDomainsBySourceResponseBodyDomainInfo(const DescribeDcdnDomainsBySourceResponseBodyDomainInfo &) = default ;
    DescribeDcdnDomainsBySourceResponseBodyDomainInfo(DescribeDcdnDomainsBySourceResponseBodyDomainInfo &&) = default ;
    DescribeDcdnDomainsBySourceResponseBodyDomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainsBySourceResponseBodyDomainInfo() = default ;
    DescribeDcdnDomainsBySourceResponseBodyDomainInfo& operator=(const DescribeDcdnDomainsBySourceResponseBodyDomainInfo &) = default ;
    DescribeDcdnDomainsBySourceResponseBodyDomainInfo& operator=(DescribeDcdnDomainsBySourceResponseBodyDomainInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainList_ != nullptr
        && this->source_ != nullptr; };
    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList> & domainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<Models::DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList>) };
    inline vector<Models::DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList> domainList() { DARABONBA_PTR_GET(domainList_, vector<Models::DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList>) };
    inline DescribeDcdnDomainsBySourceResponseBodyDomainInfo& setDomainList(const vector<Models::DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
    inline DescribeDcdnDomainsBySourceResponseBodyDomainInfo& setDomainList(vector<Models::DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeDcdnDomainsBySourceResponseBodyDomainInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The information about the domain names.
    std::shared_ptr<vector<Models::DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList>> domainList_ = nullptr;
    // The origin server.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
