// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOPERATEVULREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOPERATEVULREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyOperateVulRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOperateVulRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOperateVulRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyOperateVulRequest() = default ;
    ModifyOperateVulRequest(const ModifyOperateVulRequest &) = default ;
    ModifyOperateVulRequest(ModifyOperateVulRequest &&) = default ;
    ModifyOperateVulRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOperateVulRequest() = default ;
    ModifyOperateVulRequest& operator=(const ModifyOperateVulRequest &) = default ;
    ModifyOperateVulRequest& operator=(ModifyOperateVulRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->info_ == nullptr && this->operateType_ == nullptr && this->reason_ == nullptr && this->type_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline ModifyOperateVulRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline ModifyOperateVulRequest& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline ModifyOperateVulRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyOperateVulRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyOperateVulRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The request ID. Set the value to **sas**.
    shared_ptr<string> from_ {};
    // The details of the vulnerability. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **name**: the name of the vulnerability.
    // 
    // *   **uuid**: the UUID of the server on which the vulnerability is detected.
    // 
    // *   **tag**: the tag that is added to the vulnerability. Valid values:
    // 
    //     *   **oval**: Linux software vulnerability
    //     *   **system**: Windows system vulnerability
    //     *   **cms**: Web-CMS vulnerability
    // 
    // >  You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the tags that are added to vulnerabilities of other types.
    // 
    // *   **isFront**: specifies whether a pre-patch is required to fix the Windows system vulnerability. This field is required only for Windows system vulnerabilities. Valid values:
    // 
    //     *   **0**: no
    //     *   **1**: yes
    // 
    // >  You can fix multiple vulnerabilities at a time. Separate the details of multiple vulnerabilities with commas (,). You can call the [DescribeVulLIst](~~DescribeVulList~~) operation to query the details of vulnerabilities.
    // 
    // This parameter is required.
    shared_ptr<string> info_ {};
    // The operation that you want to perform on the vulnerability. Valid values:
    // 
    // *   **vul_fix**: fixes the vulnerability.
    // *   **vul_verify**: verifies the vulnerability fix.
    // *   **vul_ignore**: ignores the vulnerability.
    // *   **vul_undo_ignore**: cancels ignoring the vulnerability.
    // *   **vul_delete**: deletes the vulnerability.
    // 
    // This parameter is required.
    shared_ptr<string> operateType_ {};
    // The reason why the vulnerability is **ignored**.
    // 
    // >  This parameter is required only when you set **OperateType** to **vul_ignore**.
    shared_ptr<string> reason_ {};
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **emg**: urgent vulnerability
    // *   **app**: application vulnerability
    // *   **sca**: vulnerability that is detected based on software component analysis
    // 
    // >  You cannot fix the urgent vulnerabilities, application vulnerabilities, or vulnerabilities that are detected based on software component analysis.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
