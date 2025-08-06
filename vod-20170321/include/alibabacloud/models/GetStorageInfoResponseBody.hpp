// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStorageInfoResponseBodyDomainInfoList.hpp>
#include <alibabacloud/models/GetStorageInfoResponseBodyStorage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetStorageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInfoList, domainInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(StorageACL, storageACL_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInfoList, domainInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(StorageACL, storageACL_);
    };
    GetStorageInfoResponseBody() = default ;
    GetStorageInfoResponseBody(const GetStorageInfoResponseBody &) = default ;
    GetStorageInfoResponseBody(GetStorageInfoResponseBody &&) = default ;
    GetStorageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageInfoResponseBody() = default ;
    GetStorageInfoResponseBody& operator=(const GetStorageInfoResponseBody &) = default ;
    GetStorageInfoResponseBody& operator=(GetStorageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainInfoList_ != nullptr
        && this->requestId_ != nullptr && this->storage_ != nullptr && this->storageACL_ != nullptr; };
    // domainInfoList Field Functions 
    bool hasDomainInfoList() const { return this->domainInfoList_ != nullptr;};
    void deleteDomainInfoList() { this->domainInfoList_ = nullptr;};
    inline const GetStorageInfoResponseBodyDomainInfoList & domainInfoList() const { DARABONBA_PTR_GET_CONST(domainInfoList_, GetStorageInfoResponseBodyDomainInfoList) };
    inline GetStorageInfoResponseBodyDomainInfoList domainInfoList() { DARABONBA_PTR_GET(domainInfoList_, GetStorageInfoResponseBodyDomainInfoList) };
    inline GetStorageInfoResponseBody& setDomainInfoList(const GetStorageInfoResponseBodyDomainInfoList & domainInfoList) { DARABONBA_PTR_SET_VALUE(domainInfoList_, domainInfoList) };
    inline GetStorageInfoResponseBody& setDomainInfoList(GetStorageInfoResponseBodyDomainInfoList && domainInfoList) { DARABONBA_PTR_SET_RVALUE(domainInfoList_, domainInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStorageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const GetStorageInfoResponseBodyStorage & storage() const { DARABONBA_PTR_GET_CONST(storage_, GetStorageInfoResponseBodyStorage) };
    inline GetStorageInfoResponseBodyStorage storage() { DARABONBA_PTR_GET(storage_, GetStorageInfoResponseBodyStorage) };
    inline GetStorageInfoResponseBody& setStorage(const GetStorageInfoResponseBodyStorage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline GetStorageInfoResponseBody& setStorage(GetStorageInfoResponseBodyStorage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


    // storageACL Field Functions 
    bool hasStorageACL() const { return this->storageACL_ != nullptr;};
    void deleteStorageACL() { this->storageACL_ = nullptr;};
    inline string storageACL() const { DARABONBA_PTR_GET_DEFAULT(storageACL_, "") };
    inline GetStorageInfoResponseBody& setStorageACL(string storageACL) { DARABONBA_PTR_SET_VALUE(storageACL_, storageACL) };


  protected:
    std::shared_ptr<GetStorageInfoResponseBodyDomainInfoList> domainInfoList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetStorageInfoResponseBodyStorage> storage_ = nullptr;
    std::shared_ptr<string> storageACL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
