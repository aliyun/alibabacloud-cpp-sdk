// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPPOOLUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPPOOLUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpPoolUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpPoolUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuyResourceIds, buyResourceIds_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(UpdateResource, updateResource_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpPoolUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyResourceIds, buyResourceIds_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(UpdateResource, updateResource_);
    };
    DedicatedIpPoolUpdateRequest() = default ;
    DedicatedIpPoolUpdateRequest(const DedicatedIpPoolUpdateRequest &) = default ;
    DedicatedIpPoolUpdateRequest(DedicatedIpPoolUpdateRequest &&) = default ;
    DedicatedIpPoolUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpPoolUpdateRequest() = default ;
    DedicatedIpPoolUpdateRequest& operator=(const DedicatedIpPoolUpdateRequest &) = default ;
    DedicatedIpPoolUpdateRequest& operator=(DedicatedIpPoolUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyResourceIds_ == nullptr
        && this->id_ == nullptr && this->updateResource_ == nullptr; };
    // buyResourceIds Field Functions 
    bool hasBuyResourceIds() const { return this->buyResourceIds_ != nullptr;};
    void deleteBuyResourceIds() { this->buyResourceIds_ = nullptr;};
    inline string getBuyResourceIds() const { DARABONBA_PTR_GET_DEFAULT(buyResourceIds_, "") };
    inline DedicatedIpPoolUpdateRequest& setBuyResourceIds(string buyResourceIds) { DARABONBA_PTR_SET_VALUE(buyResourceIds_, buyResourceIds) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DedicatedIpPoolUpdateRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // updateResource Field Functions 
    bool hasUpdateResource() const { return this->updateResource_ != nullptr;};
    void deleteUpdateResource() { this->updateResource_ = nullptr;};
    inline bool getUpdateResource() const { DARABONBA_PTR_GET_DEFAULT(updateResource_, false) };
    inline DedicatedIpPoolUpdateRequest& setUpdateResource(bool updateResource) { DARABONBA_PTR_SET_VALUE(updateResource_, updateResource) };


  protected:
    // Purchased IP instance IDs, separated by commas; sourced from the DedicatedIpNonePoolList API\\"s returned IP purchase instance IDs
    shared_ptr<string> buyResourceIds_ {};
    // IP pool ID
    shared_ptr<string> id_ {};
    // Whether to change the associated IP, enter true
    shared_ptr<bool> updateResource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
