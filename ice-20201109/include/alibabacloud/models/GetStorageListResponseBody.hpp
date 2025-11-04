// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStorageListResponseBodyStorageInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetStorageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageInfoList, storageInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageInfoList, storageInfoList_);
    };
    GetStorageListResponseBody() = default ;
    GetStorageListResponseBody(const GetStorageListResponseBody &) = default ;
    GetStorageListResponseBody(GetStorageListResponseBody &&) = default ;
    GetStorageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageListResponseBody() = default ;
    GetStorageListResponseBody& operator=(const GetStorageListResponseBody &) = default ;
    GetStorageListResponseBody& operator=(GetStorageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->storageInfoList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStorageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageInfoList Field Functions 
    bool hasStorageInfoList() const { return this->storageInfoList_ != nullptr;};
    void deleteStorageInfoList() { this->storageInfoList_ = nullptr;};
    inline const vector<GetStorageListResponseBodyStorageInfoList> & storageInfoList() const { DARABONBA_PTR_GET_CONST(storageInfoList_, vector<GetStorageListResponseBodyStorageInfoList>) };
    inline vector<GetStorageListResponseBodyStorageInfoList> storageInfoList() { DARABONBA_PTR_GET(storageInfoList_, vector<GetStorageListResponseBodyStorageInfoList>) };
    inline GetStorageListResponseBody& setStorageInfoList(const vector<GetStorageListResponseBodyStorageInfoList> & storageInfoList) { DARABONBA_PTR_SET_VALUE(storageInfoList_, storageInfoList) };
    inline GetStorageListResponseBody& setStorageInfoList(vector<GetStorageListResponseBodyStorageInfoList> && storageInfoList) { DARABONBA_PTR_SET_RVALUE(storageInfoList_, storageInfoList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The storage configurations.
    std::shared_ptr<vector<GetStorageListResponseBodyStorageInfoList>> storageInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
