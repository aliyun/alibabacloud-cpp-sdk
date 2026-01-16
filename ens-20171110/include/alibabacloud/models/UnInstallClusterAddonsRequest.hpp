// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLCLUSTERADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLCLUSTERADDONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnInstallClusterAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnInstallClusterAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, UnInstallClusterAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    UnInstallClusterAddonsRequest() = default ;
    UnInstallClusterAddonsRequest(const UnInstallClusterAddonsRequest &) = default ;
    UnInstallClusterAddonsRequest(UnInstallClusterAddonsRequest &&) = default ;
    UnInstallClusterAddonsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnInstallClusterAddonsRequest() = default ;
    UnInstallClusterAddonsRequest& operator=(const UnInstallClusterAddonsRequest &) = default ;
    UnInstallClusterAddonsRequest& operator=(UnInstallClusterAddonsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addons : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addons& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Addons& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Addons() = default ;
      Addons(const Addons &) = default ;
      Addons(Addons &&) = default ;
      Addons(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addons() = default ;
      Addons& operator=(const Addons &) = default ;
      Addons& operator=(Addons &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Addons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->addons_ == nullptr
        && this->clusterId_ == nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<UnInstallClusterAddonsRequest::Addons> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<UnInstallClusterAddonsRequest::Addons>) };
    inline vector<UnInstallClusterAddonsRequest::Addons> getAddons() { DARABONBA_PTR_GET(addons_, vector<UnInstallClusterAddonsRequest::Addons>) };
    inline UnInstallClusterAddonsRequest& setAddons(const vector<UnInstallClusterAddonsRequest::Addons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline UnInstallClusterAddonsRequest& setAddons(vector<UnInstallClusterAddonsRequest::Addons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UnInstallClusterAddonsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    shared_ptr<vector<UnInstallClusterAddonsRequest::Addons>> addons_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
