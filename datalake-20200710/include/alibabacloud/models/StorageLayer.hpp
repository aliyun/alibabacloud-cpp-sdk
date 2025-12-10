// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STORAGELAYER_HPP_
#define ALIBABACLOUD_MODELS_STORAGELAYER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class StorageLayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StorageLayer& obj) { 
      DARABONBA_PTR_TO_JSON(Archive, archive_);
      DARABONBA_PTR_TO_JSON(ColdArchive, coldArchive_);
      DARABONBA_PTR_TO_JSON(Infrequent, infrequent_);
      DARABONBA_PTR_TO_JSON(Standard, standard_);
      DARABONBA_PTR_TO_JSON(Unknown, unknown_);
    };
    friend void from_json(const Darabonba::Json& j, StorageLayer& obj) { 
      DARABONBA_PTR_FROM_JSON(Archive, archive_);
      DARABONBA_PTR_FROM_JSON(ColdArchive, coldArchive_);
      DARABONBA_PTR_FROM_JSON(Infrequent, infrequent_);
      DARABONBA_PTR_FROM_JSON(Standard, standard_);
      DARABONBA_PTR_FROM_JSON(Unknown, unknown_);
    };
    StorageLayer() = default ;
    StorageLayer(const StorageLayer &) = default ;
    StorageLayer(StorageLayer &&) = default ;
    StorageLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StorageLayer() = default ;
    StorageLayer& operator=(const StorageLayer &) = default ;
    StorageLayer& operator=(StorageLayer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archive_ == nullptr
        && return this->coldArchive_ == nullptr && return this->infrequent_ == nullptr && return this->standard_ == nullptr && return this->unknown_ == nullptr; };
    // archive Field Functions 
    bool hasArchive() const { return this->archive_ != nullptr;};
    void deleteArchive() { this->archive_ = nullptr;};
    inline int64_t archive() const { DARABONBA_PTR_GET_DEFAULT(archive_, 0L) };
    inline StorageLayer& setArchive(int64_t archive) { DARABONBA_PTR_SET_VALUE(archive_, archive) };


    // coldArchive Field Functions 
    bool hasColdArchive() const { return this->coldArchive_ != nullptr;};
    void deleteColdArchive() { this->coldArchive_ = nullptr;};
    inline int64_t coldArchive() const { DARABONBA_PTR_GET_DEFAULT(coldArchive_, 0L) };
    inline StorageLayer& setColdArchive(int64_t coldArchive) { DARABONBA_PTR_SET_VALUE(coldArchive_, coldArchive) };


    // infrequent Field Functions 
    bool hasInfrequent() const { return this->infrequent_ != nullptr;};
    void deleteInfrequent() { this->infrequent_ = nullptr;};
    inline int64_t infrequent() const { DARABONBA_PTR_GET_DEFAULT(infrequent_, 0L) };
    inline StorageLayer& setInfrequent(int64_t infrequent) { DARABONBA_PTR_SET_VALUE(infrequent_, infrequent) };


    // standard Field Functions 
    bool hasStandard() const { return this->standard_ != nullptr;};
    void deleteStandard() { this->standard_ = nullptr;};
    inline int64_t standard() const { DARABONBA_PTR_GET_DEFAULT(standard_, 0L) };
    inline StorageLayer& setStandard(int64_t standard) { DARABONBA_PTR_SET_VALUE(standard_, standard) };


    // unknown Field Functions 
    bool hasUnknown() const { return this->unknown_ != nullptr;};
    void deleteUnknown() { this->unknown_ = nullptr;};
    inline int64_t unknown() const { DARABONBA_PTR_GET_DEFAULT(unknown_, 0L) };
    inline StorageLayer& setUnknown(int64_t unknown) { DARABONBA_PTR_SET_VALUE(unknown_, unknown) };


  protected:
    std::shared_ptr<int64_t> archive_ = nullptr;
    std::shared_ptr<int64_t> coldArchive_ = nullptr;
    std::shared_ptr<int64_t> infrequent_ = nullptr;
    std::shared_ptr<int64_t> standard_ = nullptr;
    std::shared_ptr<int64_t> unknown_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
