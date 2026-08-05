// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECAPABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECAPABILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class UpdateCapabilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCapabilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(itemDesc, itemDesc_);
      DARABONBA_ANY_TO_JSON(itemValue, itemValue_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCapabilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(itemDesc, itemDesc_);
      DARABONBA_ANY_FROM_JSON(itemValue, itemValue_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    UpdateCapabilityRequest() = default ;
    UpdateCapabilityRequest(const UpdateCapabilityRequest &) = default ;
    UpdateCapabilityRequest(UpdateCapabilityRequest &&) = default ;
    UpdateCapabilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCapabilityRequest() = default ;
    UpdateCapabilityRequest& operator=(const UpdateCapabilityRequest &) = default ;
    UpdateCapabilityRequest& operator=(UpdateCapabilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemDesc_ == nullptr
        && this->itemValue_ == nullptr && this->dryRun_ == nullptr; };
    // itemDesc Field Functions 
    bool hasItemDesc() const { return this->itemDesc_ != nullptr;};
    void deleteItemDesc() { this->itemDesc_ = nullptr;};
    inline string getItemDesc() const { DARABONBA_PTR_GET_DEFAULT(itemDesc_, "") };
    inline UpdateCapabilityRequest& setItemDesc(string itemDesc) { DARABONBA_PTR_SET_VALUE(itemDesc_, itemDesc) };


    // itemValue Field Functions 
    bool hasItemValue() const { return this->itemValue_ != nullptr;};
    void deleteItemValue() { this->itemValue_ = nullptr;};
    inline     const Darabonba::Json & getItemValue() const { DARABONBA_GET(itemValue_) };
    Darabonba::Json & getItemValue() { DARABONBA_GET(itemValue_) };
    inline UpdateCapabilityRequest& setItemValue(const Darabonba::Json & itemValue) { DARABONBA_SET_VALUE(itemValue_, itemValue) };
    inline UpdateCapabilityRequest& setItemValue(Darabonba::Json && itemValue) { DARABONBA_SET_RVALUE(itemValue_, itemValue) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateCapabilityRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The configuration description.
    shared_ptr<string> itemDesc_ {};
    // The configuration item.
    Darabonba::Json itemValue_ {};
    // Specifies whether to validate the request parameters without applying the changes. Default value: false.
    // 
    // Valid values:
    // 
    // - **true**
    // 
    // - **false**.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
