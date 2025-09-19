// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAUTHTOMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDAUTHTOMACHINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class BindAuthToMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAuthToMachineRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, BindAuthToMachineRequest& obj) { 
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
    virtual bool empty() const override { this->authVersion_ != nullptr
        && this->autoBind_ != nullptr && this->bind_ != nullptr && this->bindAll_ != nullptr && this->criteria_ != nullptr && this->isPreBind_ != nullptr
        && this->logicalExp_ != nullptr && this->ntmVersion_ != nullptr && this->preBindOrderId_ != nullptr && this->unBind_ != nullptr; };
    // authVersion Field Functions 
    bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
    void deleteAuthVersion() { this->authVersion_ = nullptr;};
    inline int32_t authVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
    inline BindAuthToMachineRequest& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


    // autoBind Field Functions 
    bool hasAutoBind() const { return this->autoBind_ != nullptr;};
    void deleteAutoBind() { this->autoBind_ = nullptr;};
    inline int32_t autoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
    inline BindAuthToMachineRequest& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


    // bind Field Functions 
    bool hasBind() const { return this->bind_ != nullptr;};
    void deleteBind() { this->bind_ = nullptr;};
    inline const vector<string> & bind() const { DARABONBA_PTR_GET_CONST(bind_, vector<string>) };
    inline vector<string> bind() { DARABONBA_PTR_GET(bind_, vector<string>) };
    inline BindAuthToMachineRequest& setBind(const vector<string> & bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };
    inline BindAuthToMachineRequest& setBind(vector<string> && bind) { DARABONBA_PTR_SET_RVALUE(bind_, bind) };


    // bindAll Field Functions 
    bool hasBindAll() const { return this->bindAll_ != nullptr;};
    void deleteBindAll() { this->bindAll_ = nullptr;};
    inline bool bindAll() const { DARABONBA_PTR_GET_DEFAULT(bindAll_, false) };
    inline BindAuthToMachineRequest& setBindAll(bool bindAll) { DARABONBA_PTR_SET_VALUE(bindAll_, bindAll) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline BindAuthToMachineRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // isPreBind Field Functions 
    bool hasIsPreBind() const { return this->isPreBind_ != nullptr;};
    void deleteIsPreBind() { this->isPreBind_ = nullptr;};
    inline int32_t isPreBind() const { DARABONBA_PTR_GET_DEFAULT(isPreBind_, 0) };
    inline BindAuthToMachineRequest& setIsPreBind(int32_t isPreBind) { DARABONBA_PTR_SET_VALUE(isPreBind_, isPreBind) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string logicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline BindAuthToMachineRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // ntmVersion Field Functions 
    bool hasNtmVersion() const { return this->ntmVersion_ != nullptr;};
    void deleteNtmVersion() { this->ntmVersion_ = nullptr;};
    inline string ntmVersion() const { DARABONBA_PTR_GET_DEFAULT(ntmVersion_, "") };
    inline BindAuthToMachineRequest& setNtmVersion(string ntmVersion) { DARABONBA_PTR_SET_VALUE(ntmVersion_, ntmVersion) };


    // preBindOrderId Field Functions 
    bool hasPreBindOrderId() const { return this->preBindOrderId_ != nullptr;};
    void deletePreBindOrderId() { this->preBindOrderId_ = nullptr;};
    inline int64_t preBindOrderId() const { DARABONBA_PTR_GET_DEFAULT(preBindOrderId_, 0L) };
    inline BindAuthToMachineRequest& setPreBindOrderId(int64_t preBindOrderId) { DARABONBA_PTR_SET_VALUE(preBindOrderId_, preBindOrderId) };


    // unBind Field Functions 
    bool hasUnBind() const { return this->unBind_ != nullptr;};
    void deleteUnBind() { this->unBind_ = nullptr;};
    inline const vector<string> & unBind() const { DARABONBA_PTR_GET_CONST(unBind_, vector<string>) };
    inline vector<string> unBind() { DARABONBA_PTR_GET(unBind_, vector<string>) };
    inline BindAuthToMachineRequest& setUnBind(const vector<string> & unBind) { DARABONBA_PTR_SET_VALUE(unBind_, unBind) };
    inline BindAuthToMachineRequest& setUnBind(vector<string> && unBind) { DARABONBA_PTR_SET_RVALUE(unBind_, unBind) };


  protected:
    // The edition of Security Center that is authorized to scan the asset. Valid values:
    // 
    // *   **6**: Anti-virus
    // *   **5**: Advanced
    // *   **3**: Enterprise
    // *   **7**: Ultimate
    // *   **10**: Value-added Plan
    std::shared_ptr<int32_t> authVersion_ = nullptr;
    // Specifies whether to automatically bind servers to Security Center. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> autoBind_ = nullptr;
    // The UUIDs of the servers that you want to bind to Security Center.
    // 
    // >  You must specify at least one of the **Bind** and **UnBind** parameters.
    std::shared_ptr<vector<string>> bind_ = nullptr;
    // Specifies whether to bind all servers to Security Center. Default value: **false**. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> bindAll_ = nullptr;
    // The search conditions that are used to filter servers. The value of this parameter is in the JSON format and is case-sensitive.
    // 
    // >  A search condition can be an instance ID, instance name, virtual private cloud (VPC) ID, region, or public IP address. You can call the [DescribeCriteria](~~DescribeCriteria~~) operation to query the supported search conditions.
    std::shared_ptr<string> criteria_ = nullptr;
    // Specifies whether to specify servers for protection when you purchase Security Center. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    // 
    // >  If you specify servers, the servers are automatically added to Security Center for protection after the purchase order is complete.
    std::shared_ptr<int32_t> isPreBind_ = nullptr;
    // The logical relationship that you want to use to evaluate multiple search conditions. Default value: **OR**. Valid values:
    // 
    // *   **OR**
    // *   **AND**
    std::shared_ptr<string> logicalExp_ = nullptr;
    // The edition of Security Center that you purchase in the order. Valid values:
    // 
    // *   **level7**: Anti-virus
    // *   **level3**: Advanced
    // *   **level2**: Enterprise
    // *   **level8**: Ultimate
    // *   **level10**: Value-added Plan
    std::shared_ptr<string> ntmVersion_ = nullptr;
    // The ID of the order in which Security Center is purchased and servers are specified for protection.
    std::shared_ptr<int64_t> preBindOrderId_ = nullptr;
    // The UUIDs of the servers that you want to unbind from Security Center.
    // 
    // >  You must specify at least one of the **Bind** and **UnBind** parameters.
    std::shared_ptr<vector<string>> unBind_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
