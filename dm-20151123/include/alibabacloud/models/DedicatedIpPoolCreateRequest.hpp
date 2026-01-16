// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPPOOLCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPPOOLCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpPoolCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpPoolCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuyResourceIds, buyResourceIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpPoolCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyResourceIds, buyResourceIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DedicatedIpPoolCreateRequest() = default ;
    DedicatedIpPoolCreateRequest(const DedicatedIpPoolCreateRequest &) = default ;
    DedicatedIpPoolCreateRequest(DedicatedIpPoolCreateRequest &&) = default ;
    DedicatedIpPoolCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpPoolCreateRequest() = default ;
    DedicatedIpPoolCreateRequest& operator=(const DedicatedIpPoolCreateRequest &) = default ;
    DedicatedIpPoolCreateRequest& operator=(DedicatedIpPoolCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyResourceIds_ == nullptr
        && this->name_ == nullptr; };
    // buyResourceIds Field Functions 
    bool hasBuyResourceIds() const { return this->buyResourceIds_ != nullptr;};
    void deleteBuyResourceIds() { this->buyResourceIds_ = nullptr;};
    inline string getBuyResourceIds() const { DARABONBA_PTR_GET_DEFAULT(buyResourceIds_, "") };
    inline DedicatedIpPoolCreateRequest& setBuyResourceIds(string buyResourceIds) { DARABONBA_PTR_SET_VALUE(buyResourceIds_, buyResourceIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DedicatedIpPoolCreateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Purchased IP instance IDs, separated by commas; derived from the IP purchase instance IDs returned by the DedicatedIpNonePoolList interface.
    shared_ptr<string> buyResourceIds_ {};
    // IP pool name;
    // Length should be 1-50 characters, allowing English letters, numbers, _, and -. The name cannot be modified after the IP pool is created.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
