// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPIMAGESECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPIMAGESECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerAppImageSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerAppImageSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageSecretList, imageSecretList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerAppImageSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageSecretList, imageSecretList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEdgeContainerAppImageSecretsResponseBody() = default ;
    ListEdgeContainerAppImageSecretsResponseBody(const ListEdgeContainerAppImageSecretsResponseBody &) = default ;
    ListEdgeContainerAppImageSecretsResponseBody(ListEdgeContainerAppImageSecretsResponseBody &&) = default ;
    ListEdgeContainerAppImageSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerAppImageSecretsResponseBody() = default ;
    ListEdgeContainerAppImageSecretsResponseBody& operator=(const ListEdgeContainerAppImageSecretsResponseBody &) = default ;
    ListEdgeContainerAppImageSecretsResponseBody& operator=(ListEdgeContainerAppImageSecretsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageSecretList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageSecretList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Registry, registry_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, ImageSecretList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Registry, registry_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      ImageSecretList() = default ;
      ImageSecretList(const ImageSecretList &) = default ;
      ImageSecretList(ImageSecretList &&) = default ;
      ImageSecretList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageSecretList() = default ;
      ImageSecretList& operator=(const ImageSecretList &) = default ;
      ImageSecretList& operator=(ImageSecretList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->registry_ == nullptr && this->username_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ImageSecretList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // registry Field Functions 
      bool hasRegistry() const { return this->registry_ != nullptr;};
      void deleteRegistry() { this->registry_ = nullptr;};
      inline string getRegistry() const { DARABONBA_PTR_GET_DEFAULT(registry_, "") };
      inline ImageSecretList& setRegistry(string registry) { DARABONBA_PTR_SET_VALUE(registry_, registry) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline ImageSecretList& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // Name of the image secret.
      shared_ptr<string> name_ {};
      // Registry address.
      shared_ptr<string> registry_ {};
      // Username for the image repository
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->imageSecretList_ == nullptr
        && this->requestId_ == nullptr; };
    // imageSecretList Field Functions 
    bool hasImageSecretList() const { return this->imageSecretList_ != nullptr;};
    void deleteImageSecretList() { this->imageSecretList_ = nullptr;};
    inline const vector<ListEdgeContainerAppImageSecretsResponseBody::ImageSecretList> & getImageSecretList() const { DARABONBA_PTR_GET_CONST(imageSecretList_, vector<ListEdgeContainerAppImageSecretsResponseBody::ImageSecretList>) };
    inline vector<ListEdgeContainerAppImageSecretsResponseBody::ImageSecretList> getImageSecretList() { DARABONBA_PTR_GET(imageSecretList_, vector<ListEdgeContainerAppImageSecretsResponseBody::ImageSecretList>) };
    inline ListEdgeContainerAppImageSecretsResponseBody& setImageSecretList(const vector<ListEdgeContainerAppImageSecretsResponseBody::ImageSecretList> & imageSecretList) { DARABONBA_PTR_SET_VALUE(imageSecretList_, imageSecretList) };
    inline ListEdgeContainerAppImageSecretsResponseBody& setImageSecretList(vector<ListEdgeContainerAppImageSecretsResponseBody::ImageSecretList> && imageSecretList) { DARABONBA_PTR_SET_RVALUE(imageSecretList_, imageSecretList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEdgeContainerAppImageSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of image secrets.
    shared_ptr<vector<ListEdgeContainerAppImageSecretsResponseBody::ImageSecretList>> imageSecretList_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
