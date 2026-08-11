// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOUTBOUNDCALLRESTRICTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOUTBOUNDCALLRESTRICTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class DeleteOutboundCallRestrictionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOutboundCallRestrictionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RestrictionIdList, restrictionIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOutboundCallRestrictionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RestrictionIdList, restrictionIdList_);
    };
    DeleteOutboundCallRestrictionRequest() = default ;
    DeleteOutboundCallRestrictionRequest(const DeleteOutboundCallRestrictionRequest &) = default ;
    DeleteOutboundCallRestrictionRequest(DeleteOutboundCallRestrictionRequest &&) = default ;
    DeleteOutboundCallRestrictionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOutboundCallRestrictionRequest() = default ;
    DeleteOutboundCallRestrictionRequest& operator=(const DeleteOutboundCallRestrictionRequest &) = default ;
    DeleteOutboundCallRestrictionRequest& operator=(DeleteOutboundCallRestrictionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->restrictionIdList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteOutboundCallRestrictionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // restrictionIdList Field Functions 
    bool hasRestrictionIdList() const { return this->restrictionIdList_ != nullptr;};
    void deleteRestrictionIdList() { this->restrictionIdList_ = nullptr;};
    inline const vector<string> & getRestrictionIdList() const { DARABONBA_PTR_GET_CONST(restrictionIdList_, vector<string>) };
    inline vector<string> getRestrictionIdList() { DARABONBA_PTR_GET(restrictionIdList_, vector<string>) };
    inline DeleteOutboundCallRestrictionRequest& setRestrictionIdList(const vector<string> & restrictionIdList) { DARABONBA_PTR_SET_VALUE(restrictionIdList_, restrictionIdList) };
    inline DeleteOutboundCallRestrictionRequest& setRestrictionIdList(vector<string> && restrictionIdList) { DARABONBA_PTR_SET_RVALUE(restrictionIdList_, restrictionIdList) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The list of outbound call restriction IDs.
    shared_ptr<vector<string>> restrictionIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
