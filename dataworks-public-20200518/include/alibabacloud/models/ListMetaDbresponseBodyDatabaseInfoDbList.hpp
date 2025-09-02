// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETADBRESPONSEBODYDATABASEINFODBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETADBRESPONSEBODYDATABASEINFODBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMetaDBResponseBodyDatabaseInfoDbList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaDBResponseBodyDatabaseInfoDbList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ModifiedTimeStamp, modifiedTimeStamp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UUID, UUID_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaDBResponseBodyDatabaseInfoDbList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ModifiedTimeStamp, modifiedTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UUID, UUID_);
    };
    ListMetaDBResponseBodyDatabaseInfoDbList() = default ;
    ListMetaDBResponseBodyDatabaseInfoDbList(const ListMetaDBResponseBodyDatabaseInfoDbList &) = default ;
    ListMetaDBResponseBodyDatabaseInfoDbList(ListMetaDBResponseBodyDatabaseInfoDbList &&) = default ;
    ListMetaDBResponseBodyDatabaseInfoDbList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaDBResponseBodyDatabaseInfoDbList() = default ;
    ListMetaDBResponseBodyDatabaseInfoDbList& operator=(const ListMetaDBResponseBodyDatabaseInfoDbList &) = default ;
    ListMetaDBResponseBodyDatabaseInfoDbList& operator=(ListMetaDBResponseBodyDatabaseInfoDbList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimeStamp_ != nullptr
        && this->location_ != nullptr && this->modifiedTimeStamp_ != nullptr && this->name_ != nullptr && this->ownerId_ != nullptr && this->type_ != nullptr
        && this->UUID_ != nullptr; };
    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline ListMetaDBResponseBodyDatabaseInfoDbList& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline ListMetaDBResponseBodyDatabaseInfoDbList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // modifiedTimeStamp Field Functions 
    bool hasModifiedTimeStamp() const { return this->modifiedTimeStamp_ != nullptr;};
    void deleteModifiedTimeStamp() { this->modifiedTimeStamp_ = nullptr;};
    inline int64_t modifiedTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeStamp_, 0L) };
    inline ListMetaDBResponseBodyDatabaseInfoDbList& setModifiedTimeStamp(int64_t modifiedTimeStamp) { DARABONBA_PTR_SET_VALUE(modifiedTimeStamp_, modifiedTimeStamp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMetaDBResponseBodyDatabaseInfoDbList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListMetaDBResponseBodyDatabaseInfoDbList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMetaDBResponseBodyDatabaseInfoDbList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // UUID Field Functions 
    bool hasUUID() const { return this->UUID_ != nullptr;};
    void deleteUUID() { this->UUID_ = nullptr;};
    inline string UUID() const { DARABONBA_PTR_GET_DEFAULT(UUID_, "") };
    inline ListMetaDBResponseBodyDatabaseInfoDbList& setUUID(string UUID) { DARABONBA_PTR_SET_VALUE(UUID_, UUID) };


  protected:
    // The timestamp at which the metadatabase was created. You can convert the timestamp to the date based on the time zone that you use.
    std::shared_ptr<int64_t> createTimeStamp_ = nullptr;
    // The URL of the metadatabase.
    std::shared_ptr<string> location_ = nullptr;
    // The timestamp at which the metadatabase was updated.
    std::shared_ptr<int64_t> modifiedTimeStamp_ = nullptr;
    // The name of the metadatabase.
    std::shared_ptr<string> name_ = nullptr;
    // The owner ID.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The type of the metadatabase.
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the metadatabase.
    std::shared_ptr<string> UUID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
