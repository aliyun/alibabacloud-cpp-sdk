// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYEXTRARESPONSEBODYIMAGEREGISTRYEXTRAINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYEXTRARESPONSEBODYIMAGEREGISTRYEXTRAINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageRegistryExtraResponseBodyImageRegistryExtraInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRegistryExtraResponseBodyImageRegistryExtraInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegistryId, registryId_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRegistryExtraResponseBodyImageRegistryExtraInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegistryId, registryId_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
    };
    ListImageRegistryExtraResponseBodyImageRegistryExtraInfos() = default ;
    ListImageRegistryExtraResponseBodyImageRegistryExtraInfos(const ListImageRegistryExtraResponseBodyImageRegistryExtraInfos &) = default ;
    ListImageRegistryExtraResponseBodyImageRegistryExtraInfos(ListImageRegistryExtraResponseBodyImageRegistryExtraInfos &&) = default ;
    ListImageRegistryExtraResponseBodyImageRegistryExtraInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRegistryExtraResponseBodyImageRegistryExtraInfos() = default ;
    ListImageRegistryExtraResponseBodyImageRegistryExtraInfos& operator=(const ListImageRegistryExtraResponseBodyImageRegistryExtraInfos &) = default ;
    ListImageRegistryExtraResponseBodyImageRegistryExtraInfos& operator=(ListImageRegistryExtraResponseBodyImageRegistryExtraInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->authToken_ == nullptr && return this->id_ == nullptr && return this->namespace_ == nullptr && return this->registryId_ == nullptr && return this->registryType_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListImageRegistryExtraResponseBodyImageRegistryExtraInfos& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ListImageRegistryExtraResponseBodyImageRegistryExtraInfos& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListImageRegistryExtraResponseBodyImageRegistryExtraInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListImageRegistryExtraResponseBodyImageRegistryExtraInfos& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // registryId Field Functions 
    bool hasRegistryId() const { return this->registryId_ != nullptr;};
    void deleteRegistryId() { this->registryId_ = nullptr;};
    inline int64_t registryId() const { DARABONBA_PTR_GET_DEFAULT(registryId_, 0L) };
    inline ListImageRegistryExtraResponseBodyImageRegistryExtraInfos& setRegistryId(int64_t registryId) { DARABONBA_PTR_SET_VALUE(registryId_, registryId) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline ListImageRegistryExtraResponseBodyImageRegistryExtraInfos& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The authorization token.
    std::shared_ptr<string> authToken_ = nullptr;
    // The configuration ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The namespace of the image.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<int64_t> registryId_ = nullptr;
    // The type of the image repository. Valid values:
    // 
    // *   **acr**: Container Registry.
    // *   **harbor**: Harbor.
    // *   **quay**: Quay.
    // *   **CI/CD**: Jenkins.
    std::shared_ptr<string> registryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
