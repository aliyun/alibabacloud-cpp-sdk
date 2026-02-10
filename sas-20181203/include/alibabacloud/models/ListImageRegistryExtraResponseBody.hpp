// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYEXTRARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYEXTRARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageRegistryExtraResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRegistryExtraResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageRegistryExtraInfos, imageRegistryExtraInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRegistryExtraResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageRegistryExtraInfos, imageRegistryExtraInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListImageRegistryExtraResponseBody() = default ;
    ListImageRegistryExtraResponseBody(const ListImageRegistryExtraResponseBody &) = default ;
    ListImageRegistryExtraResponseBody(ListImageRegistryExtraResponseBody &&) = default ;
    ListImageRegistryExtraResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRegistryExtraResponseBody() = default ;
    ListImageRegistryExtraResponseBody& operator=(const ListImageRegistryExtraResponseBody &) = default ;
    ListImageRegistryExtraResponseBody& operator=(ListImageRegistryExtraResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageRegistryExtraInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageRegistryExtraInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(RegistryId, registryId_);
        DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      };
      friend void from_json(const Darabonba::Json& j, ImageRegistryExtraInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(RegistryId, registryId_);
        DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      };
      ImageRegistryExtraInfos() = default ;
      ImageRegistryExtraInfos(const ImageRegistryExtraInfos &) = default ;
      ImageRegistryExtraInfos(ImageRegistryExtraInfos &&) = default ;
      ImageRegistryExtraInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageRegistryExtraInfos() = default ;
      ImageRegistryExtraInfos& operator=(const ImageRegistryExtraInfos &) = default ;
      ImageRegistryExtraInfos& operator=(ImageRegistryExtraInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->authToken_ == nullptr && this->id_ == nullptr && this->namespace_ == nullptr && this->registryId_ == nullptr && this->registryType_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline ImageRegistryExtraInfos& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline ImageRegistryExtraInfos& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ImageRegistryExtraInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline ImageRegistryExtraInfos& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // registryId Field Functions 
      bool hasRegistryId() const { return this->registryId_ != nullptr;};
      void deleteRegistryId() { this->registryId_ = nullptr;};
      inline int64_t getRegistryId() const { DARABONBA_PTR_GET_DEFAULT(registryId_, 0L) };
      inline ImageRegistryExtraInfos& setRegistryId(int64_t registryId) { DARABONBA_PTR_SET_VALUE(registryId_, registryId) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline ImageRegistryExtraInfos& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // The authorization token.
      shared_ptr<string> authToken_ {};
      // The configuration ID.
      shared_ptr<int64_t> id_ {};
      // The namespace of the image.
      shared_ptr<string> namespace_ {};
      // The ID of the image repository.
      shared_ptr<int64_t> registryId_ {};
      // The type of the image repository. Valid values:
      // 
      // *   **acr**: Container Registry.
      // *   **harbor**: Harbor.
      // *   **quay**: Quay.
      // *   **CI/CD**: Jenkins.
      shared_ptr<string> registryType_ {};
    };

    virtual bool empty() const override { return this->imageRegistryExtraInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // imageRegistryExtraInfos Field Functions 
    bool hasImageRegistryExtraInfos() const { return this->imageRegistryExtraInfos_ != nullptr;};
    void deleteImageRegistryExtraInfos() { this->imageRegistryExtraInfos_ = nullptr;};
    inline const vector<ListImageRegistryExtraResponseBody::ImageRegistryExtraInfos> & getImageRegistryExtraInfos() const { DARABONBA_PTR_GET_CONST(imageRegistryExtraInfos_, vector<ListImageRegistryExtraResponseBody::ImageRegistryExtraInfos>) };
    inline vector<ListImageRegistryExtraResponseBody::ImageRegistryExtraInfos> getImageRegistryExtraInfos() { DARABONBA_PTR_GET(imageRegistryExtraInfos_, vector<ListImageRegistryExtraResponseBody::ImageRegistryExtraInfos>) };
    inline ListImageRegistryExtraResponseBody& setImageRegistryExtraInfos(const vector<ListImageRegistryExtraResponseBody::ImageRegistryExtraInfos> & imageRegistryExtraInfos) { DARABONBA_PTR_SET_VALUE(imageRegistryExtraInfos_, imageRegistryExtraInfos) };
    inline ListImageRegistryExtraResponseBody& setImageRegistryExtraInfos(vector<ListImageRegistryExtraResponseBody::ImageRegistryExtraInfos> && imageRegistryExtraInfos) { DARABONBA_PTR_SET_RVALUE(imageRegistryExtraInfos_, imageRegistryExtraInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageRegistryExtraResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The additional configuration information about the image repository.
    shared_ptr<vector<ListImageRegistryExtraResponseBody::ImageRegistryExtraInfos>> imageRegistryExtraInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
