// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEINFORESPONSEBODYDOMAININFOLISTDOMAININFO_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEINFORESPONSEBODYDOMAININFOLISTDOMAININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetStorageInfoResponseBodyDomainInfoListDomainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageInfoResponseBodyDomainInfoListDomainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultPlay, defaultPlay_);
      DARABONBA_PTR_TO_JSON(DomainCname, domainCname_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageInfoResponseBodyDomainInfoListDomainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultPlay, defaultPlay_);
      DARABONBA_PTR_FROM_JSON(DomainCname, domainCname_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
    };
    GetStorageInfoResponseBodyDomainInfoListDomainInfo() = default ;
    GetStorageInfoResponseBodyDomainInfoListDomainInfo(const GetStorageInfoResponseBodyDomainInfoListDomainInfo &) = default ;
    GetStorageInfoResponseBodyDomainInfoListDomainInfo(GetStorageInfoResponseBodyDomainInfoListDomainInfo &&) = default ;
    GetStorageInfoResponseBodyDomainInfoListDomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageInfoResponseBodyDomainInfoListDomainInfo() = default ;
    GetStorageInfoResponseBodyDomainInfoListDomainInfo& operator=(const GetStorageInfoResponseBodyDomainInfoListDomainInfo &) = default ;
    GetStorageInfoResponseBodyDomainInfoListDomainInfo& operator=(GetStorageInfoResponseBodyDomainInfoListDomainInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultPlay_ != nullptr
        && this->domainCname_ != nullptr && this->domainName_ != nullptr && this->domainStatus_ != nullptr; };
    // defaultPlay Field Functions 
    bool hasDefaultPlay() const { return this->defaultPlay_ != nullptr;};
    void deleteDefaultPlay() { this->defaultPlay_ = nullptr;};
    inline bool defaultPlay() const { DARABONBA_PTR_GET_DEFAULT(defaultPlay_, false) };
    inline GetStorageInfoResponseBodyDomainInfoListDomainInfo& setDefaultPlay(bool defaultPlay) { DARABONBA_PTR_SET_VALUE(defaultPlay_, defaultPlay) };


    // domainCname Field Functions 
    bool hasDomainCname() const { return this->domainCname_ != nullptr;};
    void deleteDomainCname() { this->domainCname_ = nullptr;};
    inline string domainCname() const { DARABONBA_PTR_GET_DEFAULT(domainCname_, "") };
    inline GetStorageInfoResponseBodyDomainInfoListDomainInfo& setDomainCname(string domainCname) { DARABONBA_PTR_SET_VALUE(domainCname_, domainCname) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetStorageInfoResponseBodyDomainInfoListDomainInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline GetStorageInfoResponseBodyDomainInfoListDomainInfo& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


  protected:
    std::shared_ptr<bool> defaultPlay_ = nullptr;
    std::shared_ptr<string> domainCname_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> domainStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
