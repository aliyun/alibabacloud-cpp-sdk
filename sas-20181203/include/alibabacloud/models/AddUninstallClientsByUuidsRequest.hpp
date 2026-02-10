// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUNINSTALLCLIENTSBYUUIDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUNINSTALLCLIENTSBYUUIDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddUninstallClientsByUuidsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUninstallClientsByUuidsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallMethod, callMethod_);
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, AddUninstallClientsByUuidsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallMethod, callMethod_);
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    AddUninstallClientsByUuidsRequest() = default ;
    AddUninstallClientsByUuidsRequest(const AddUninstallClientsByUuidsRequest &) = default ;
    AddUninstallClientsByUuidsRequest(AddUninstallClientsByUuidsRequest &&) = default ;
    AddUninstallClientsByUuidsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUninstallClientsByUuidsRequest() = default ;
    AddUninstallClientsByUuidsRequest& operator=(const AddUninstallClientsByUuidsRequest &) = default ;
    AddUninstallClientsByUuidsRequest& operator=(AddUninstallClientsByUuidsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callMethod_ == nullptr
        && this->feedback_ == nullptr && this->region_ == nullptr && this->sourceIp_ == nullptr && this->uuids_ == nullptr; };
    // callMethod Field Functions 
    bool hasCallMethod() const { return this->callMethod_ != nullptr;};
    void deleteCallMethod() { this->callMethod_ = nullptr;};
    inline string getCallMethod() const { DARABONBA_PTR_GET_DEFAULT(callMethod_, "") };
    inline AddUninstallClientsByUuidsRequest& setCallMethod(string callMethod) { DARABONBA_PTR_SET_VALUE(callMethod_, callMethod) };


    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline AddUninstallClientsByUuidsRequest& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline AddUninstallClientsByUuidsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline AddUninstallClientsByUuidsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline AddUninstallClientsByUuidsRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The method name. Default value: init.
    shared_ptr<string> callMethod_ {};
    // The feedback.
    shared_ptr<string> feedback_ {};
    // The region in which the server resides.
    shared_ptr<string> region_ {};
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    shared_ptr<string> sourceIp_ {};
    // The UUID of the server that you want to unbind. Separate multiple UUIDs with commas (,).
    // 
    // >  You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
