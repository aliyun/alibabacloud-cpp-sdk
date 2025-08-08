// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPOSITORYSPEC_HPP_
#define ALIBABACLOUD_MODELS_REPOSITORYSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class RepositorySpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RepositorySpec& obj) { 
      DARABONBA_PTR_TO_JSON(cloneUrl, cloneUrl_);
      DARABONBA_PTR_TO_JSON(connectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
      DARABONBA_PTR_TO_JSON(webUrl, webUrl_);
    };
    friend void from_json(const Darabonba::Json& j, RepositorySpec& obj) { 
      DARABONBA_PTR_FROM_JSON(cloneUrl, cloneUrl_);
      DARABONBA_PTR_FROM_JSON(connectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
      DARABONBA_PTR_FROM_JSON(webUrl, webUrl_);
    };
    RepositorySpec() = default ;
    RepositorySpec(const RepositorySpec &) = default ;
    RepositorySpec(RepositorySpec &&) = default ;
    RepositorySpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RepositorySpec() = default ;
    RepositorySpec& operator=(const RepositorySpec &) = default ;
    RepositorySpec& operator=(RepositorySpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloneUrl_ != nullptr
        && this->connectionName_ != nullptr && this->displayName_ != nullptr && this->id_ != nullptr && this->owner_ != nullptr && this->platform_ != nullptr
        && this->webUrl_ != nullptr; };
    // cloneUrl Field Functions 
    bool hasCloneUrl() const { return this->cloneUrl_ != nullptr;};
    void deleteCloneUrl() { this->cloneUrl_ = nullptr;};
    inline string cloneUrl() const { DARABONBA_PTR_GET_DEFAULT(cloneUrl_, "") };
    inline RepositorySpec& setCloneUrl(string cloneUrl) { DARABONBA_PTR_SET_VALUE(cloneUrl_, cloneUrl) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline RepositorySpec& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline RepositorySpec& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RepositorySpec& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline RepositorySpec& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline RepositorySpec& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // webUrl Field Functions 
    bool hasWebUrl() const { return this->webUrl_ != nullptr;};
    void deleteWebUrl() { this->webUrl_ = nullptr;};
    inline string webUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
    inline RepositorySpec& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cloneUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> connectionName_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> webUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
