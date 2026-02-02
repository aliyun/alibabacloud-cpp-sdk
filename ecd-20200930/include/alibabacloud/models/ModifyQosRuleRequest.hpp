// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYQOSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYQOSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyQosRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyQosRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Download, download_);
      DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_TO_JSON(QosRuleName, qosRuleName_);
      DARABONBA_PTR_TO_JSON(Upload, upload_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyQosRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Download, download_);
      DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_FROM_JSON(QosRuleName, qosRuleName_);
      DARABONBA_PTR_FROM_JSON(Upload, upload_);
    };
    ModifyQosRuleRequest() = default ;
    ModifyQosRuleRequest(const ModifyQosRuleRequest &) = default ;
    ModifyQosRuleRequest(ModifyQosRuleRequest &&) = default ;
    ModifyQosRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyQosRuleRequest() = default ;
    ModifyQosRuleRequest& operator=(const ModifyQosRuleRequest &) = default ;
    ModifyQosRuleRequest& operator=(ModifyQosRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->download_ == nullptr
        && this->qosRuleId_ == nullptr && this->qosRuleName_ == nullptr && this->upload_ == nullptr; };
    // download Field Functions 
    bool hasDownload() const { return this->download_ != nullptr;};
    void deleteDownload() { this->download_ = nullptr;};
    inline int32_t getDownload() const { DARABONBA_PTR_GET_DEFAULT(download_, 0) };
    inline ModifyQosRuleRequest& setDownload(int32_t download) { DARABONBA_PTR_SET_VALUE(download_, download) };


    // qosRuleId Field Functions 
    bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
    void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
    inline string getQosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
    inline ModifyQosRuleRequest& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


    // qosRuleName Field Functions 
    bool hasQosRuleName() const { return this->qosRuleName_ != nullptr;};
    void deleteQosRuleName() { this->qosRuleName_ = nullptr;};
    inline string getQosRuleName() const { DARABONBA_PTR_GET_DEFAULT(qosRuleName_, "") };
    inline ModifyQosRuleRequest& setQosRuleName(string qosRuleName) { DARABONBA_PTR_SET_VALUE(qosRuleName_, qosRuleName) };


    // upload Field Functions 
    bool hasUpload() const { return this->upload_ != nullptr;};
    void deleteUpload() { this->upload_ = nullptr;};
    inline int32_t getUpload() const { DARABONBA_PTR_GET_DEFAULT(upload_, 0) };
    inline ModifyQosRuleRequest& setUpload(int32_t upload) { DARABONBA_PTR_SET_VALUE(upload_, upload) };


  protected:
    shared_ptr<int32_t> download_ {};
    // This parameter is required.
    shared_ptr<string> qosRuleId_ {};
    shared_ptr<string> qosRuleName_ {};
    shared_ptr<int32_t> upload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
