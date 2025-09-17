// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class DeleteResourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    DeleteResourceShrinkRequest() = default ;
    DeleteResourceShrinkRequest(const DeleteResourceShrinkRequest &) = default ;
    DeleteResourceShrinkRequest(DeleteResourceShrinkRequest &&) = default ;
    DeleteResourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceShrinkRequest() = default ;
    DeleteResourceShrinkRequest& operator=(const DeleteResourceShrinkRequest &) = default ;
    DeleteResourceShrinkRequest& operator=(DeleteResourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->filterShrink_ != nullptr && this->regionId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteResourceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string filterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline DeleteResourceShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteResourceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. If a cloud service supports idempotence, the parameter takes effect.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> filterShrink_ = nullptr;
    // The region. This parameter is required if a cloud service is a regionalized.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
