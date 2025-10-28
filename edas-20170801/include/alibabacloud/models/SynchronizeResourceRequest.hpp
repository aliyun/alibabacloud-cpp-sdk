// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCHRONIZERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCHRONIZERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class SynchronizeResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SynchronizeResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SynchronizeResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SynchronizeResourceRequest() = default ;
    SynchronizeResourceRequest(const SynchronizeResourceRequest &) = default ;
    SynchronizeResourceRequest(SynchronizeResourceRequest &&) = default ;
    SynchronizeResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SynchronizeResourceRequest() = default ;
    SynchronizeResourceRequest& operator=(const SynchronizeResourceRequest &) = default ;
    SynchronizeResourceRequest& operator=(SynchronizeResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceIds_ == nullptr
        && return this->type_ == nullptr; };
    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline string resourceIds() const { DARABONBA_PTR_GET_DEFAULT(resourceIds_, "") };
    inline SynchronizeResourceRequest& setResourceIds(string resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SynchronizeResourceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the resource. This parameter is required only when you set the Type parameter to `ecs`. If you specify multiple IDs, separate them with commas (,). You can synchronize up to 50 resources at a time.
    std::shared_ptr<string> resourceIds_ = nullptr;
    // The type of the resource to be synchronized. Valid values: `ecs, slb, vpc, and all`. These values are case-sensitive.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
