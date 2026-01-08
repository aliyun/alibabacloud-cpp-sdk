// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTENABLEFWSWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTENABLEFWSWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class PutEnableFwSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEnableFwSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalResourceStatusList, abnormalResourceStatusList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PutEnableFwSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalResourceStatusList, abnormalResourceStatusList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PutEnableFwSwitchResponseBody() = default ;
    PutEnableFwSwitchResponseBody(const PutEnableFwSwitchResponseBody &) = default ;
    PutEnableFwSwitchResponseBody(PutEnableFwSwitchResponseBody &&) = default ;
    PutEnableFwSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEnableFwSwitchResponseBody() = default ;
    PutEnableFwSwitchResponseBody& operator=(const PutEnableFwSwitchResponseBody &) = default ;
    PutEnableFwSwitchResponseBody& operator=(PutEnableFwSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AbnormalResourceStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AbnormalResourceStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AbnormalResourceStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      AbnormalResourceStatusList() = default ;
      AbnormalResourceStatusList(const AbnormalResourceStatusList &) = default ;
      AbnormalResourceStatusList(AbnormalResourceStatusList &&) = default ;
      AbnormalResourceStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AbnormalResourceStatusList() = default ;
      AbnormalResourceStatusList& operator=(const AbnormalResourceStatusList &) = default ;
      AbnormalResourceStatusList& operator=(AbnormalResourceStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->msg_ == nullptr
        && this->resource_ == nullptr && this->status_ == nullptr; };
      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline AbnormalResourceStatusList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline AbnormalResourceStatusList& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AbnormalResourceStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The message displayed when the asset is not synchronized to Cloud Firewall. Valid values:
      // 
      // *   cloudfirewall do not sync this ip address: This IP address is not synchronized to Cloud Firewall.
      shared_ptr<string> msg_ {};
      // The IP address of the asset.
      shared_ptr<string> resource_ {};
      // The status of the asset when it is not synchronized to Cloud Firewall. Valid values:
      // 
      // *   ip_not_sync: The asset is not synchronized.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->abnormalResourceStatusList_ == nullptr
        && this->requestId_ == nullptr; };
    // abnormalResourceStatusList Field Functions 
    bool hasAbnormalResourceStatusList() const { return this->abnormalResourceStatusList_ != nullptr;};
    void deleteAbnormalResourceStatusList() { this->abnormalResourceStatusList_ = nullptr;};
    inline const vector<PutEnableFwSwitchResponseBody::AbnormalResourceStatusList> & getAbnormalResourceStatusList() const { DARABONBA_PTR_GET_CONST(abnormalResourceStatusList_, vector<PutEnableFwSwitchResponseBody::AbnormalResourceStatusList>) };
    inline vector<PutEnableFwSwitchResponseBody::AbnormalResourceStatusList> getAbnormalResourceStatusList() { DARABONBA_PTR_GET(abnormalResourceStatusList_, vector<PutEnableFwSwitchResponseBody::AbnormalResourceStatusList>) };
    inline PutEnableFwSwitchResponseBody& setAbnormalResourceStatusList(const vector<PutEnableFwSwitchResponseBody::AbnormalResourceStatusList> & abnormalResourceStatusList) { DARABONBA_PTR_SET_VALUE(abnormalResourceStatusList_, abnormalResourceStatusList) };
    inline PutEnableFwSwitchResponseBody& setAbnormalResourceStatusList(vector<PutEnableFwSwitchResponseBody::AbnormalResourceStatusList> && abnormalResourceStatusList) { DARABONBA_PTR_SET_RVALUE(abnormalResourceStatusList_, abnormalResourceStatusList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutEnableFwSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status information of the asset when it is not synchronized to Cloud Firewall.
    shared_ptr<vector<PutEnableFwSwitchResponseBody::AbnormalResourceStatusList>> abnormalResourceStatusList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
