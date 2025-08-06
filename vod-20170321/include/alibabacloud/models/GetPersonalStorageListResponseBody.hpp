// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERSONALSTORAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPERSONALSTORAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPersonalStorageListResponseBodyStorageInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPersonalStorageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPersonalStorageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageInfoList, storageInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetPersonalStorageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageInfoList, storageInfoList_);
    };
    GetPersonalStorageListResponseBody() = default ;
    GetPersonalStorageListResponseBody(const GetPersonalStorageListResponseBody &) = default ;
    GetPersonalStorageListResponseBody(GetPersonalStorageListResponseBody &&) = default ;
    GetPersonalStorageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPersonalStorageListResponseBody() = default ;
    GetPersonalStorageListResponseBody& operator=(const GetPersonalStorageListResponseBody &) = default ;
    GetPersonalStorageListResponseBody& operator=(GetPersonalStorageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->storageInfoList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPersonalStorageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageInfoList Field Functions 
    bool hasStorageInfoList() const { return this->storageInfoList_ != nullptr;};
    void deleteStorageInfoList() { this->storageInfoList_ = nullptr;};
    inline const GetPersonalStorageListResponseBodyStorageInfoList & storageInfoList() const { DARABONBA_PTR_GET_CONST(storageInfoList_, GetPersonalStorageListResponseBodyStorageInfoList) };
    inline GetPersonalStorageListResponseBodyStorageInfoList storageInfoList() { DARABONBA_PTR_GET(storageInfoList_, GetPersonalStorageListResponseBodyStorageInfoList) };
    inline GetPersonalStorageListResponseBody& setStorageInfoList(const GetPersonalStorageListResponseBodyStorageInfoList & storageInfoList) { DARABONBA_PTR_SET_VALUE(storageInfoList_, storageInfoList) };
    inline GetPersonalStorageListResponseBody& setStorageInfoList(GetPersonalStorageListResponseBodyStorageInfoList && storageInfoList) { DARABONBA_PTR_SET_RVALUE(storageInfoList_, storageInfoList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetPersonalStorageListResponseBodyStorageInfoList> storageInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
