// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STORES_HPP_
#define ALIBABACLOUD_MODELS_STORES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class Stores : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Stores& obj) { 
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(store, store_);
      DARABONBA_PTR_TO_JSON(storeType, storeType_);
    };
    friend void from_json(const Darabonba::Json& j, Stores& obj) { 
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(store, store_);
      DARABONBA_PTR_FROM_JSON(storeType, storeType_);
    };
    Stores() = default ;
    Stores(const Stores &) = default ;
    Stores(Stores &&) = default ;
    Stores(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Stores() = default ;
    Stores& operator=(const Stores &) = default ;
    Stores& operator=(Stores &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->project_ == nullptr
        && this->regionId_ == nullptr && this->store_ == nullptr && this->storeType_ == nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline Stores& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline Stores& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // store Field Functions 
    bool hasStore() const { return this->store_ != nullptr;};
    void deleteStore() { this->store_ = nullptr;};
    inline string getStore() const { DARABONBA_PTR_GET_DEFAULT(store_, "") };
    inline Stores& setStore(string store) { DARABONBA_PTR_SET_VALUE(store_, store) };


    // storeType Field Functions 
    bool hasStoreType() const { return this->storeType_ != nullptr;};
    void deleteStoreType() { this->storeType_ = nullptr;};
    inline string getStoreType() const { DARABONBA_PTR_GET_DEFAULT(storeType_, "") };
    inline Stores& setStoreType(string storeType) { DARABONBA_PTR_SET_VALUE(storeType_, storeType) };


  protected:
    shared_ptr<string> project_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> store_ {};
    shared_ptr<string> storeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
