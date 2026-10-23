// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENSASSUSPEVENTTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENSASSUSPEVENTTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DescribeNsasSuspEventTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNsasSuspEventTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNsasSuspEventTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
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
        && this->containerFieldValue_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr && this->remark_ == nullptr && this->sourceIp_ == nullptr
        && this->uuids_ == nullptr; };
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


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNsasSuspEventTypeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


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


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeNsasSuspEventTypeRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The container field. This parameter is not supported by SASE-EDR.
    shared_ptr<string> containerFieldName_ {};
    // The value of the container field. This parameter is not supported by SASE-EDR.
    shared_ptr<string> containerFieldValue_ {};
    // The language of the request and response messages. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The name of the security alert type.
    shared_ptr<string> name_ {};
    // The name or IP address of the server.
    shared_ptr<string> remark_ {};
    // The source IP address.
    shared_ptr<string> sourceIp_ {};
    // The UUIDs of the servers. Separate multiple UUIDs with commas (,).
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
