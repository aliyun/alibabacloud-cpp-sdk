// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENSASSUSPEVENTTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENSASSUSPEVENTTYPEREQUEST_HPP_
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
  class DescribeNsasSuspEventTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNsasSuspEventTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MultiAccountActionType, multiAccountActionType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SupportOperateCodeList, supportOperateCodeList_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNsasSuspEventTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MultiAccountActionType, multiAccountActionType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SupportOperateCodeList, supportOperateCodeList_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeNsasSuspEventTypeRequest() = default ;
    DescribeNsasSuspEventTypeRequest(const DescribeNsasSuspEventTypeRequest &) = default ;
    DescribeNsasSuspEventTypeRequest(DescribeNsasSuspEventTypeRequest &&) = default ;
    DescribeNsasSuspEventTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNsasSuspEventTypeRequest() = default ;
    DescribeNsasSuspEventTypeRequest& operator=(const DescribeNsasSuspEventTypeRequest &) = default ;
    DescribeNsasSuspEventTypeRequest& operator=(DescribeNsasSuspEventTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerFieldName_ == nullptr
        && this->containerFieldValue_ == nullptr && this->from_ == nullptr && this->lang_ == nullptr && this->multiAccountActionType_ == nullptr && this->name_ == nullptr
        && this->remark_ == nullptr && this->sourceIp_ == nullptr && this->supportOperateCodeList_ == nullptr && this->uuids_ == nullptr; };
    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string getContainerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeNsasSuspEventTypeRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string getContainerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeNsasSuspEventTypeRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeNsasSuspEventTypeRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNsasSuspEventTypeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // multiAccountActionType Field Functions 
    bool hasMultiAccountActionType() const { return this->multiAccountActionType_ != nullptr;};
    void deleteMultiAccountActionType() { this->multiAccountActionType_ = nullptr;};
    inline int32_t getMultiAccountActionType() const { DARABONBA_PTR_GET_DEFAULT(multiAccountActionType_, 0) };
    inline DescribeNsasSuspEventTypeRequest& setMultiAccountActionType(int32_t multiAccountActionType) { DARABONBA_PTR_SET_VALUE(multiAccountActionType_, multiAccountActionType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNsasSuspEventTypeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeNsasSuspEventTypeRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeNsasSuspEventTypeRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // supportOperateCodeList Field Functions 
    bool hasSupportOperateCodeList() const { return this->supportOperateCodeList_ != nullptr;};
    void deleteSupportOperateCodeList() { this->supportOperateCodeList_ = nullptr;};
    inline const vector<string> & getSupportOperateCodeList() const { DARABONBA_PTR_GET_CONST(supportOperateCodeList_, vector<string>) };
    inline vector<string> getSupportOperateCodeList() { DARABONBA_PTR_GET(supportOperateCodeList_, vector<string>) };
    inline DescribeNsasSuspEventTypeRequest& setSupportOperateCodeList(const vector<string> & supportOperateCodeList) { DARABONBA_PTR_SET_VALUE(supportOperateCodeList_, supportOperateCodeList) };
    inline DescribeNsasSuspEventTypeRequest& setSupportOperateCodeList(vector<string> && supportOperateCodeList) { DARABONBA_PTR_SET_RVALUE(supportOperateCodeList_, supportOperateCodeList) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeNsasSuspEventTypeRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The name of the container field. Valid values:
    // 
    // *   **clusterId**: the ID of the cluster
    shared_ptr<string> containerFieldName_ {};
    // The value of the container field.
    shared_ptr<string> containerFieldValue_ {};
    // The ID of the request source. Set the value to **sas**, which indicates that the request is sent from Security Center.
    shared_ptr<string> from_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The type of the accounts that you want to query. Default value: **0**. Valid values:
    // 
    // *   **0**: the current account.
    // *   **1**: all accounts.
    shared_ptr<int32_t> multiAccountActionType_ {};
    // The name of the alert type.
    shared_ptr<string> name_ {};
    // The name of the server.
    shared_ptr<string> remark_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // List of supported alarm operation types.
    shared_ptr<vector<string>> supportOperateCodeList_ {};
    // The UUIDs of servers. Separate multiple UUIDs with commas (,).
    // 
    // > You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of servers.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
