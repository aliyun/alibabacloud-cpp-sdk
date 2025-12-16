// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPIMAGESECRETSRESPONSEBODYIMAGESECRETLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPIMAGESECRETSRESPONSEBODYIMAGESECRETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerAppImageSecretsResponseBodyImageSecretList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerAppImageSecretsResponseBodyImageSecretList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Registry, registry_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerAppImageSecretsResponseBodyImageSecretList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Registry, registry_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ListEdgeContainerAppImageSecretsResponseBodyImageSecretList() = default ;
    ListEdgeContainerAppImageSecretsResponseBodyImageSecretList(const ListEdgeContainerAppImageSecretsResponseBodyImageSecretList &) = default ;
    ListEdgeContainerAppImageSecretsResponseBodyImageSecretList(ListEdgeContainerAppImageSecretsResponseBodyImageSecretList &&) = default ;
    ListEdgeContainerAppImageSecretsResponseBodyImageSecretList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerAppImageSecretsResponseBodyImageSecretList() = default ;
    ListEdgeContainerAppImageSecretsResponseBodyImageSecretList& operator=(const ListEdgeContainerAppImageSecretsResponseBodyImageSecretList &) = default ;
    ListEdgeContainerAppImageSecretsResponseBodyImageSecretList& operator=(ListEdgeContainerAppImageSecretsResponseBodyImageSecretList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->registry_ == nullptr && return this->username_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEdgeContainerAppImageSecretsResponseBodyImageSecretList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // registry Field Functions 
    bool hasRegistry() const { return this->registry_ != nullptr;};
    void deleteRegistry() { this->registry_ = nullptr;};
    inline string registry() const { DARABONBA_PTR_GET_DEFAULT(registry_, "") };
    inline ListEdgeContainerAppImageSecretsResponseBodyImageSecretList& setRegistry(string registry) { DARABONBA_PTR_SET_VALUE(registry_, registry) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListEdgeContainerAppImageSecretsResponseBodyImageSecretList& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> registry_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
