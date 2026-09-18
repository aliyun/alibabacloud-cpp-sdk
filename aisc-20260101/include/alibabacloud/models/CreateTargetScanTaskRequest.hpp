// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETARGETSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETARGETSCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class CreateTargetScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTargetScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SampleLevel, sampleLevel_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTargetScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SampleLevel, sampleLevel_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    CreateTargetScanTaskRequest() = default ;
    CreateTargetScanTaskRequest(const CreateTargetScanTaskRequest &) = default ;
    CreateTargetScanTaskRequest(CreateTargetScanTaskRequest &&) = default ;
    CreateTargetScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTargetScanTaskRequest() = default ;
    CreateTargetScanTaskRequest& operator=(const CreateTargetScanTaskRequest &) = default ;
    CreateTargetScanTaskRequest& operator=(CreateTargetScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->sampleLevel_ == nullptr && this->targetId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateTargetScanTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sampleLevel Field Functions 
    bool hasSampleLevel() const { return this->sampleLevel_ != nullptr;};
    void deleteSampleLevel() { this->sampleLevel_ = nullptr;};
    inline int64_t getSampleLevel() const { DARABONBA_PTR_GET_DEFAULT(sampleLevel_, 0L) };
    inline CreateTargetScanTaskRequest& setSampleLevel(int64_t sampleLevel) { DARABONBA_PTR_SET_VALUE(sampleLevel_, sampleLevel) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline CreateTargetScanTaskRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The language filter for samples, in locale format (such as zh_CN or en_US, which is internally normalized to zh or en). If this parameter is not specified, samples are selected based on the default language policy combined with general-purpose samples.
    shared_ptr<string> lang_ {};
    // The detection intensity. The backend derives the corresponding technique level based on this value. If this parameter is not specified, the system falls back to the scan task configuration saved for the target, and then to the system default value.
    shared_ptr<int64_t> sampleLevel_ {};
    // The unique identifier of the scan target. The target must have passed connectivity verification (verifyStatus=verified). Otherwise, a 400 error is returned. You can call TestConnectivity to complete the verification first.
    // 
    // This parameter is required.
    shared_ptr<string> targetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
