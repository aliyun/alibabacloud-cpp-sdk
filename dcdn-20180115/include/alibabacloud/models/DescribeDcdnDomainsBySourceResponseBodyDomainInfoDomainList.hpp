// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSBYSOURCERESPONSEBODYDOMAININFODOMAINLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSBYSOURCERESPONSEBODYDOMAININFODOMAINLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainCname, domainCname_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainCname, domainCname_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList() = default ;
    DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList(const DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList &) = default ;
    DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList(DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList &&) = default ;
    DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList() = default ;
    DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList& operator=(const DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList &) = default ;
    DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList& operator=(DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->domainCname_ != nullptr && this->domainName_ != nullptr && this->domainType_ != nullptr && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainCname Field Functions 
    bool hasDomainCname() const { return this->domainCname_ != nullptr;};
    void deleteDomainCname() { this->domainCname_ = nullptr;};
    inline string domainCname() const { DARABONBA_PTR_GET_DEFAULT(domainCname_, "") };
    inline DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList& setDomainCname(string domainCname) { DARABONBA_PTR_SET_VALUE(domainCname_, domainCname) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDcdnDomainsBySourceResponseBodyDomainInfoDomainList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The CNAME record assigned to the domain name.
    std::shared_ptr<string> domainCname_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The workload type of the accelerated domain name. Valid value:
    // 
    // *   **ipa**: layer 4 acceleration
    // *   **dynamic**: layer 7 acceleration
    std::shared_ptr<string> domainType_ = nullptr;
    // The status of the domain name. Valid value:
    // 
    // *   **applying**: The domain name is under review.
    // *   **configuring**: The domain name is being configured.
    // *   **online**: The domain name is working as expected.
    // *   **stopping**: The domain name is being stopped.
    // *   **offline**: The domain name is disabled.
    // *   **disabling**: The domain name is being removed.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the domain name was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
