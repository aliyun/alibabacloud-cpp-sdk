// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERSONALSTORAGELISTRESPONSEBODYSTORAGEINFOLISTSTORAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPERSONALSTORAGELISTRESPONSEBODYSTORAGEINFOLISTSTORAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPersonalStorageListResponseBodyStorageInfoListStorageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ExtranetEndpoint, extranetEndpoint_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(StorageACL, storageACL_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
    };
    friend void from_json(const Darabonba::Json& j, GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtranetEndpoint, extranetEndpoint_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(StorageACL, storageACL_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
    };
    GetPersonalStorageListResponseBodyStorageInfoListStorageInfo() = default ;
    GetPersonalStorageListResponseBodyStorageInfoListStorageInfo(const GetPersonalStorageListResponseBodyStorageInfoListStorageInfo &) = default ;
    GetPersonalStorageListResponseBodyStorageInfoListStorageInfo(GetPersonalStorageListResponseBodyStorageInfoListStorageInfo &&) = default ;
    GetPersonalStorageListResponseBodyStorageInfoListStorageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPersonalStorageListResponseBodyStorageInfoListStorageInfo() = default ;
    GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& operator=(const GetPersonalStorageListResponseBodyStorageInfoListStorageInfo &) = default ;
    GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& operator=(GetPersonalStorageListResponseBodyStorageInfoListStorageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extranetEndpoint_ != nullptr
        && this->gmtCreate_ != nullptr && this->intranetEndpoint_ != nullptr && this->location_ != nullptr && this->ownerId_ != nullptr && this->storageACL_ != nullptr
        && this->storageClass_ != nullptr; };
    // extranetEndpoint Field Functions 
    bool hasExtranetEndpoint() const { return this->extranetEndpoint_ != nullptr;};
    void deleteExtranetEndpoint() { this->extranetEndpoint_ = nullptr;};
    inline string extranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(extranetEndpoint_, "") };
    inline GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& setExtranetEndpoint(string extranetEndpoint) { DARABONBA_PTR_SET_VALUE(extranetEndpoint_, extranetEndpoint) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // intranetEndpoint Field Functions 
    bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
    void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
    inline string intranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
    inline GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // storageACL Field Functions 
    bool hasStorageACL() const { return this->storageACL_ != nullptr;};
    void deleteStorageACL() { this->storageACL_ = nullptr;};
    inline string storageACL() const { DARABONBA_PTR_GET_DEFAULT(storageACL_, "") };
    inline GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& setStorageACL(string storageACL) { DARABONBA_PTR_SET_VALUE(storageACL_, storageACL) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline GetPersonalStorageListResponseBodyStorageInfoListStorageInfo& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


  protected:
    std::shared_ptr<string> extranetEndpoint_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> intranetEndpoint_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> storageACL_ = nullptr;
    std::shared_ptr<string> storageClass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
