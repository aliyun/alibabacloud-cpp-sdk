// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEINFORESPONSEBODYDOMAININFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEINFORESPONSEBODYDOMAININFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStorageInfoResponseBodyDomainInfoListDomainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetStorageInfoResponseBodyDomainInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageInfoResponseBodyDomainInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInfo, domainInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageInfoResponseBodyDomainInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInfo, domainInfo_);
    };
    GetStorageInfoResponseBodyDomainInfoList() = default ;
    GetStorageInfoResponseBodyDomainInfoList(const GetStorageInfoResponseBodyDomainInfoList &) = default ;
    GetStorageInfoResponseBodyDomainInfoList(GetStorageInfoResponseBodyDomainInfoList &&) = default ;
    GetStorageInfoResponseBodyDomainInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageInfoResponseBodyDomainInfoList() = default ;
    GetStorageInfoResponseBodyDomainInfoList& operator=(const GetStorageInfoResponseBodyDomainInfoList &) = default ;
    GetStorageInfoResponseBodyDomainInfoList& operator=(GetStorageInfoResponseBodyDomainInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainInfo_ != nullptr; };
    // domainInfo Field Functions 
    bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
    void deleteDomainInfo() { this->domainInfo_ = nullptr;};
    inline const vector<Models::GetStorageInfoResponseBodyDomainInfoListDomainInfo> & domainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, vector<Models::GetStorageInfoResponseBodyDomainInfoListDomainInfo>) };
    inline vector<Models::GetStorageInfoResponseBodyDomainInfoListDomainInfo> domainInfo() { DARABONBA_PTR_GET(domainInfo_, vector<Models::GetStorageInfoResponseBodyDomainInfoListDomainInfo>) };
    inline GetStorageInfoResponseBodyDomainInfoList& setDomainInfo(const vector<Models::GetStorageInfoResponseBodyDomainInfoListDomainInfo> & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
    inline GetStorageInfoResponseBodyDomainInfoList& setDomainInfo(vector<Models::GetStorageInfoResponseBodyDomainInfoListDomainInfo> && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


  protected:
    std::shared_ptr<vector<Models::GetStorageInfoResponseBodyDomainInfoListDomainInfo>> domainInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
