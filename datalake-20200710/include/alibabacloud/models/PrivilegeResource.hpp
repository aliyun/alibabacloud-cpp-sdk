// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRIVILEGERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_PRIVILEGERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MetaResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class PrivilegeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrivilegeResource& obj) { 
      DARABONBA_PTR_TO_JSON(Access, access_);
      DARABONBA_PTR_TO_JSON(MetaResource, metaResource_);
    };
    friend void from_json(const Darabonba::Json& j, PrivilegeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Access, access_);
      DARABONBA_PTR_FROM_JSON(MetaResource, metaResource_);
    };
    PrivilegeResource() = default ;
    PrivilegeResource(const PrivilegeResource &) = default ;
    PrivilegeResource(PrivilegeResource &&) = default ;
    PrivilegeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrivilegeResource() = default ;
    PrivilegeResource& operator=(const PrivilegeResource &) = default ;
    PrivilegeResource& operator=(PrivilegeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->access_ == nullptr
        && return this->metaResource_ == nullptr; };
    // access Field Functions 
    bool hasAccess() const { return this->access_ != nullptr;};
    void deleteAccess() { this->access_ = nullptr;};
    inline string access() const { DARABONBA_PTR_GET_DEFAULT(access_, "") };
    inline PrivilegeResource& setAccess(string access) { DARABONBA_PTR_SET_VALUE(access_, access) };


    // metaResource Field Functions 
    bool hasMetaResource() const { return this->metaResource_ != nullptr;};
    void deleteMetaResource() { this->metaResource_ = nullptr;};
    inline const MetaResource & metaResource() const { DARABONBA_PTR_GET_CONST(metaResource_, MetaResource) };
    inline MetaResource metaResource() { DARABONBA_PTR_GET(metaResource_, MetaResource) };
    inline PrivilegeResource& setMetaResource(const MetaResource & metaResource) { DARABONBA_PTR_SET_VALUE(metaResource_, metaResource) };
    inline PrivilegeResource& setMetaResource(MetaResource && metaResource) { DARABONBA_PTR_SET_RVALUE(metaResource_, metaResource) };


  protected:
    std::shared_ptr<string> access_ = nullptr;
    std::shared_ptr<MetaResource> metaResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
