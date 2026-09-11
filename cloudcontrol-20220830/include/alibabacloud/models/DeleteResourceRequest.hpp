// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class DeleteResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_ANY_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_ANY_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    DeleteResourceRequest() = default ;
    DeleteResourceRequest(const DeleteResourceRequest &) = default ;
    DeleteResourceRequest(DeleteResourceRequest &&) = default ;
    DeleteResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceRequest() = default ;
    DeleteResourceRequest& operator=(const DeleteResourceRequest &) = default ;
    DeleteResourceRequest& operator=(DeleteResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->filter_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteResourceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline     const Darabonba::Json & getFilter() const { DARABONBA_GET(filter_) };
    Darabonba::Json & getFilter() { DARABONBA_GET(filter_) };
    inline DeleteResourceRequest& setFilter(const Darabonba::Json & filter) { DARABONBA_SET_VALUE(filter_, filter) };
    inline DeleteResourceRequest& setFilter(Darabonba::Json && filter) { DARABONBA_SET_RVALUE(filter_, filter) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // A client token to ensure idempotence. This parameter works only if the cloud product supports idempotence.
    shared_ptr<string> clientToken_ {};
    Darabonba::Json filter_ {};
    // The region ID. This parameter is required if the cloud product is region-specific.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
