// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVPCCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVPCCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class UpdateVpcConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVpcConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(removals, removals_);
      DARABONBA_PTR_TO_JSON(updates, updates_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVpcConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(removals, removals_);
      DARABONBA_PTR_FROM_JSON(updates, updates_);
    };
    UpdateVpcConfigRequest() = default ;
    UpdateVpcConfigRequest(const UpdateVpcConfigRequest &) = default ;
    UpdateVpcConfigRequest(UpdateVpcConfigRequest &&) = default ;
    UpdateVpcConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVpcConfigRequest() = default ;
    UpdateVpcConfigRequest& operator=(const UpdateVpcConfigRequest &) = default ;
    UpdateVpcConfigRequest& operator=(UpdateVpcConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Updates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Updates& obj) { 
        DARABONBA_PTR_TO_JSON(extendedOptions, extendedOptions_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Updates& obj) { 
        DARABONBA_PTR_FROM_JSON(extendedOptions, extendedOptions_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      };
      Updates() = default ;
      Updates(const Updates &) = default ;
      Updates(Updates &&) = default ;
      Updates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Updates() = default ;
      Updates& operator=(const Updates &) = default ;
      Updates& operator=(Updates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extendedOptions_ == nullptr
        && this->vpcId_ == nullptr; };
      // extendedOptions Field Functions 
      bool hasExtendedOptions() const { return this->extendedOptions_ != nullptr;};
      void deleteExtendedOptions() { this->extendedOptions_ = nullptr;};
      inline const map<string, string> & getExtendedOptions() const { DARABONBA_PTR_GET_CONST(extendedOptions_, map<string, string>) };
      inline map<string, string> getExtendedOptions() { DARABONBA_PTR_GET(extendedOptions_, map<string, string>) };
      inline Updates& setExtendedOptions(const map<string, string> & extendedOptions) { DARABONBA_PTR_SET_VALUE(extendedOptions_, extendedOptions) };
      inline Updates& setExtendedOptions(map<string, string> && extendedOptions) { DARABONBA_PTR_SET_RVALUE(extendedOptions_, extendedOptions) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Updates& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The list of configuration items.
      shared_ptr<map<string, string>> extendedOptions_ {};
      // VPC ID。
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->removals_ == nullptr
        && this->updates_ == nullptr; };
    // removals Field Functions 
    bool hasRemovals() const { return this->removals_ != nullptr;};
    void deleteRemovals() { this->removals_ = nullptr;};
    inline const vector<string> & getRemovals() const { DARABONBA_PTR_GET_CONST(removals_, vector<string>) };
    inline vector<string> getRemovals() { DARABONBA_PTR_GET(removals_, vector<string>) };
    inline UpdateVpcConfigRequest& setRemovals(const vector<string> & removals) { DARABONBA_PTR_SET_VALUE(removals_, removals) };
    inline UpdateVpcConfigRequest& setRemovals(vector<string> && removals) { DARABONBA_PTR_SET_RVALUE(removals_, removals) };


    // updates Field Functions 
    bool hasUpdates() const { return this->updates_ != nullptr;};
    void deleteUpdates() { this->updates_ = nullptr;};
    inline const vector<UpdateVpcConfigRequest::Updates> & getUpdates() const { DARABONBA_PTR_GET_CONST(updates_, vector<UpdateVpcConfigRequest::Updates>) };
    inline vector<UpdateVpcConfigRequest::Updates> getUpdates() { DARABONBA_PTR_GET(updates_, vector<UpdateVpcConfigRequest::Updates>) };
    inline UpdateVpcConfigRequest& setUpdates(const vector<UpdateVpcConfigRequest::Updates> & updates) { DARABONBA_PTR_SET_VALUE(updates_, updates) };
    inline UpdateVpcConfigRequest& setUpdates(vector<UpdateVpcConfigRequest::Updates> && updates) { DARABONBA_PTR_SET_RVALUE(updates_, updates) };


  protected:
    // The list of VPC IDs to delete.
    shared_ptr<vector<string>> removals_ {};
    // The list of VPCs to update.
    shared_ptr<vector<UpdateVpcConfigRequest::Updates>> updates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
