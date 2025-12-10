// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCATIONSTORAGERANKDTO_HPP_
#define ALIBABACLOUD_MODELS_LOCATIONSTORAGERANKDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class LocationStorageRankDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LocationStorageRankDTO& obj) { 
      DARABONBA_PTR_TO_JSON(FileCnt, fileCnt_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
    };
    friend void from_json(const Darabonba::Json& j, LocationStorageRankDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(FileCnt, fileCnt_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
    };
    LocationStorageRankDTO() = default ;
    LocationStorageRankDTO(const LocationStorageRankDTO &) = default ;
    LocationStorageRankDTO(LocationStorageRankDTO &&) = default ;
    LocationStorageRankDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LocationStorageRankDTO() = default ;
    LocationStorageRankDTO& operator=(const LocationStorageRankDTO &) = default ;
    LocationStorageRankDTO& operator=(LocationStorageRankDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileCnt_ == nullptr
        && return this->location_ == nullptr && return this->storage_ == nullptr; };
    // fileCnt Field Functions 
    bool hasFileCnt() const { return this->fileCnt_ != nullptr;};
    void deleteFileCnt() { this->fileCnt_ = nullptr;};
    inline int64_t fileCnt() const { DARABONBA_PTR_GET_DEFAULT(fileCnt_, 0L) };
    inline LocationStorageRankDTO& setFileCnt(int64_t fileCnt) { DARABONBA_PTR_SET_VALUE(fileCnt_, fileCnt) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline LocationStorageRankDTO& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int64_t storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0L) };
    inline LocationStorageRankDTO& setStorage(int64_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


  protected:
    std::shared_ptr<int64_t> fileCnt_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int64_t> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
