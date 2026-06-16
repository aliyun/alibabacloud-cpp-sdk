// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAUTHTOMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDAUTHTOMACHINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class BindAuthToMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAuthToMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SdkRequest, sdkRequest_);
    };
    friend void from_json(const Darabonba::Json& j, BindAuthToMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SdkRequest, sdkRequest_);
    };
    BindAuthToMachineRequest() = default ;
    BindAuthToMachineRequest(const BindAuthToMachineRequest &) = default ;
    BindAuthToMachineRequest(BindAuthToMachineRequest &&) = default ;
    BindAuthToMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAuthToMachineRequest() = default ;
    BindAuthToMachineRequest& operator=(const BindAuthToMachineRequest &) = default ;
    BindAuthToMachineRequest& operator=(BindAuthToMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SdkRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdkRequest& obj) { 
        DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_TO_JSON(AutoBind, autoBind_);
        DARABONBA_PTR_TO_JSON(Bind, bind_);
        DARABONBA_PTR_TO_JSON(BindAll, bindAll_);
        DARABONBA_PTR_TO_JSON(Criteria, criteria_);
        DARABONBA_PTR_TO_JSON(IsPreBind, isPreBind_);
        DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
        DARABONBA_PTR_TO_JSON(NtmVersion, ntmVersion_);
        DARABONBA_PTR_TO_JSON(PreBindOrderId, preBindOrderId_);
        DARABONBA_PTR_TO_JSON(UnBind, unBind_);
      };
      friend void from_json(const Darabonba::Json& j, SdkRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
        DARABONBA_PTR_FROM_JSON(Bind, bind_);
        DARABONBA_PTR_FROM_JSON(BindAll, bindAll_);
        DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
        DARABONBA_PTR_FROM_JSON(IsPreBind, isPreBind_);
        DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
        DARABONBA_PTR_FROM_JSON(NtmVersion, ntmVersion_);
        DARABONBA_PTR_FROM_JSON(PreBindOrderId, preBindOrderId_);
        DARABONBA_PTR_FROM_JSON(UnBind, unBind_);
      };
      SdkRequest() = default ;
      SdkRequest(const SdkRequest &) = default ;
      SdkRequest(SdkRequest &&) = default ;
      SdkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdkRequest() = default ;
      SdkRequest& operator=(const SdkRequest &) = default ;
      SdkRequest& operator=(SdkRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authVersion_ == nullptr
        && this->autoBind_ == nullptr && this->bind_ == nullptr && this->bindAll_ == nullptr && this->criteria_ == nullptr && this->isPreBind_ == nullptr
        && this->logicalExp_ == nullptr && this->ntmVersion_ == nullptr && this->preBindOrderId_ == nullptr && this->unBind_ == nullptr; };
      // authVersion Field Functions 
      bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
      void deleteAuthVersion() { this->authVersion_ = nullptr;};
      inline int32_t getAuthVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
      inline SdkRequest& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


      // autoBind Field Functions 
      bool hasAutoBind() const { return this->autoBind_ != nullptr;};
      void deleteAutoBind() { this->autoBind_ = nullptr;};
      inline int32_t getAutoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
      inline SdkRequest& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


      // bind Field Functions 
      bool hasBind() const { return this->bind_ != nullptr;};
      void deleteBind() { this->bind_ = nullptr;};
      inline const vector<string> & getBind() const { DARABONBA_PTR_GET_CONST(bind_, vector<string>) };
      inline vector<string> getBind() { DARABONBA_PTR_GET(bind_, vector<string>) };
      inline SdkRequest& setBind(const vector<string> & bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };
      inline SdkRequest& setBind(vector<string> && bind) { DARABONBA_PTR_SET_RVALUE(bind_, bind) };


      // bindAll Field Functions 
      bool hasBindAll() const { return this->bindAll_ != nullptr;};
      void deleteBindAll() { this->bindAll_ = nullptr;};
      inline bool getBindAll() const { DARABONBA_PTR_GET_DEFAULT(bindAll_, false) };
      inline SdkRequest& setBindAll(bool bindAll) { DARABONBA_PTR_SET_VALUE(bindAll_, bindAll) };


      // criteria Field Functions 
      bool hasCriteria() const { return this->criteria_ != nullptr;};
      void deleteCriteria() { this->criteria_ = nullptr;};
      inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
      inline SdkRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


      // isPreBind Field Functions 
      bool hasIsPreBind() const { return this->isPreBind_ != nullptr;};
      void deleteIsPreBind() { this->isPreBind_ = nullptr;};
      inline int32_t getIsPreBind() const { DARABONBA_PTR_GET_DEFAULT(isPreBind_, 0) };
      inline SdkRequest& setIsPreBind(int32_t isPreBind) { DARABONBA_PTR_SET_VALUE(isPreBind_, isPreBind) };


      // logicalExp Field Functions 
      bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
      void deleteLogicalExp() { this->logicalExp_ = nullptr;};
      inline string getLogicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
      inline SdkRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


      // ntmVersion Field Functions 
      bool hasNtmVersion() const { return this->ntmVersion_ != nullptr;};
      void deleteNtmVersion() { this->ntmVersion_ = nullptr;};
      inline int64_t getNtmVersion() const { DARABONBA_PTR_GET_DEFAULT(ntmVersion_, 0L) };
      inline SdkRequest& setNtmVersion(int64_t ntmVersion) { DARABONBA_PTR_SET_VALUE(ntmVersion_, ntmVersion) };


      // preBindOrderId Field Functions 
      bool hasPreBindOrderId() const { return this->preBindOrderId_ != nullptr;};
      void deletePreBindOrderId() { this->preBindOrderId_ = nullptr;};
      inline int64_t getPreBindOrderId() const { DARABONBA_PTR_GET_DEFAULT(preBindOrderId_, 0L) };
      inline SdkRequest& setPreBindOrderId(int64_t preBindOrderId) { DARABONBA_PTR_SET_VALUE(preBindOrderId_, preBindOrderId) };


      // unBind Field Functions 
      bool hasUnBind() const { return this->unBind_ != nullptr;};
      void deleteUnBind() { this->unBind_ = nullptr;};
      inline const vector<string> & getUnBind() const { DARABONBA_PTR_GET_CONST(unBind_, vector<string>) };
      inline vector<string> getUnBind() { DARABONBA_PTR_GET(unBind_, vector<string>) };
      inline SdkRequest& setUnBind(const vector<string> & unBind) { DARABONBA_PTR_SET_VALUE(unBind_, unBind) };
      inline SdkRequest& setUnBind(vector<string> && unBind) { DARABONBA_PTR_SET_RVALUE(unBind_, unBind) };


    protected:
      shared_ptr<int32_t> authVersion_ {};
      shared_ptr<int32_t> autoBind_ {};
      shared_ptr<vector<string>> bind_ {};
      shared_ptr<bool> bindAll_ {};
      shared_ptr<string> criteria_ {};
      shared_ptr<int32_t> isPreBind_ {};
      shared_ptr<string> logicalExp_ {};
      shared_ptr<int64_t> ntmVersion_ {};
      shared_ptr<int64_t> preBindOrderId_ {};
      shared_ptr<vector<string>> unBind_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sdkRequest_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BindAuthToMachineRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sdkRequest Field Functions 
    bool hasSdkRequest() const { return this->sdkRequest_ != nullptr;};
    void deleteSdkRequest() { this->sdkRequest_ = nullptr;};
    inline const BindAuthToMachineRequest::SdkRequest & getSdkRequest() const { DARABONBA_PTR_GET_CONST(sdkRequest_, BindAuthToMachineRequest::SdkRequest) };
    inline BindAuthToMachineRequest::SdkRequest getSdkRequest() { DARABONBA_PTR_GET(sdkRequest_, BindAuthToMachineRequest::SdkRequest) };
    inline BindAuthToMachineRequest& setSdkRequest(const BindAuthToMachineRequest::SdkRequest & sdkRequest) { DARABONBA_PTR_SET_VALUE(sdkRequest_, sdkRequest) };
    inline BindAuthToMachineRequest& setSdkRequest(BindAuthToMachineRequest::SdkRequest && sdkRequest) { DARABONBA_PTR_SET_RVALUE(sdkRequest_, sdkRequest) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<BindAuthToMachineRequest::SdkRequest> sdkRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
