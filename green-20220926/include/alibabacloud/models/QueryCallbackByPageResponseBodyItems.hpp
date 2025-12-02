// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLBACKBYPAGERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLBACKBYPAGERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class QueryCallbackByPageResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallbackByPageResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CryptType, cryptType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Seed, seed_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallbackByPageResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CryptType, cryptType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Seed, seed_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    QueryCallbackByPageResponseBodyItems() = default ;
    QueryCallbackByPageResponseBodyItems(const QueryCallbackByPageResponseBodyItems &) = default ;
    QueryCallbackByPageResponseBodyItems(QueryCallbackByPageResponseBodyItems &&) = default ;
    QueryCallbackByPageResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallbackByPageResponseBodyItems() = default ;
    QueryCallbackByPageResponseBodyItems& operator=(const QueryCallbackByPageResponseBodyItems &) = default ;
    QueryCallbackByPageResponseBodyItems& operator=(QueryCallbackByPageResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cryptType_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->scope_ == nullptr
        && return this->seed_ == nullptr && return this->uid_ == nullptr && return this->url_ == nullptr; };
    // cryptType Field Functions 
    bool hasCryptType() const { return this->cryptType_ != nullptr;};
    void deleteCryptType() { this->cryptType_ = nullptr;};
    inline string cryptType() const { DARABONBA_PTR_GET_DEFAULT(cryptType_, "") };
    inline QueryCallbackByPageResponseBodyItems& setCryptType(string cryptType) { DARABONBA_PTR_SET_VALUE(cryptType_, cryptType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryCallbackByPageResponseBodyItems& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryCallbackByPageResponseBodyItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryCallbackByPageResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryCallbackByPageResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline QueryCallbackByPageResponseBodyItems& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline string seed() const { DARABONBA_PTR_GET_DEFAULT(seed_, "") };
    inline QueryCallbackByPageResponseBodyItems& setSeed(string seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline QueryCallbackByPageResponseBodyItems& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline QueryCallbackByPageResponseBodyItems& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Encryption algorithm.
    std::shared_ptr<string> cryptType_ = nullptr;
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Primary key ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Name.
    std::shared_ptr<string> name_ = nullptr;
    // Result scope.
    std::shared_ptr<string> scope_ = nullptr;
    // Seed.
    std::shared_ptr<string> seed_ = nullptr;
    // UID.
    std::shared_ptr<string> uid_ = nullptr;
    // Callback URL.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
