// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERSONALSTORAGELISTRESPONSEBODYSTORAGEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPERSONALSTORAGELISTRESPONSEBODYSTORAGEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPersonalStorageListResponseBodyStorageInfoListStorageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPersonalStorageListResponseBodyStorageInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPersonalStorageListResponseBodyStorageInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(StorageInfo, storageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetPersonalStorageListResponseBodyStorageInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageInfo, storageInfo_);
    };
    GetPersonalStorageListResponseBodyStorageInfoList() = default ;
    GetPersonalStorageListResponseBodyStorageInfoList(const GetPersonalStorageListResponseBodyStorageInfoList &) = default ;
    GetPersonalStorageListResponseBodyStorageInfoList(GetPersonalStorageListResponseBodyStorageInfoList &&) = default ;
    GetPersonalStorageListResponseBodyStorageInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPersonalStorageListResponseBodyStorageInfoList() = default ;
    GetPersonalStorageListResponseBodyStorageInfoList& operator=(const GetPersonalStorageListResponseBodyStorageInfoList &) = default ;
    GetPersonalStorageListResponseBodyStorageInfoList& operator=(GetPersonalStorageListResponseBodyStorageInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->storageInfo_ != nullptr; };
    // storageInfo Field Functions 
    bool hasStorageInfo() const { return this->storageInfo_ != nullptr;};
    void deleteStorageInfo() { this->storageInfo_ = nullptr;};
    inline const vector<Models::GetPersonalStorageListResponseBodyStorageInfoListStorageInfo> & storageInfo() const { DARABONBA_PTR_GET_CONST(storageInfo_, vector<Models::GetPersonalStorageListResponseBodyStorageInfoListStorageInfo>) };
    inline vector<Models::GetPersonalStorageListResponseBodyStorageInfoListStorageInfo> storageInfo() { DARABONBA_PTR_GET(storageInfo_, vector<Models::GetPersonalStorageListResponseBodyStorageInfoListStorageInfo>) };
    inline GetPersonalStorageListResponseBodyStorageInfoList& setStorageInfo(const vector<Models::GetPersonalStorageListResponseBodyStorageInfoListStorageInfo> & storageInfo) { DARABONBA_PTR_SET_VALUE(storageInfo_, storageInfo) };
    inline GetPersonalStorageListResponseBodyStorageInfoList& setStorageInfo(vector<Models::GetPersonalStorageListResponseBodyStorageInfoListStorageInfo> && storageInfo) { DARABONBA_PTR_SET_RVALUE(storageInfo_, storageInfo) };


  protected:
    std::shared_ptr<vector<Models::GetPersonalStorageListResponseBodyStorageInfoListStorageInfo>> storageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
