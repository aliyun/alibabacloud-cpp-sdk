// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSAMPLENAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSAMPLENAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CheckSampleNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSampleNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SampleName, sampleName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSampleNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SampleName, sampleName_);
    };
    CheckSampleNameRequest() = default ;
    CheckSampleNameRequest(const CheckSampleNameRequest &) = default ;
    CheckSampleNameRequest(CheckSampleNameRequest &&) = default ;
    CheckSampleNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSampleNameRequest() = default ;
    CheckSampleNameRequest& operator=(const CheckSampleNameRequest &) = default ;
    CheckSampleNameRequest& operator=(CheckSampleNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->sampleName_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CheckSampleNameRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CheckSampleNameRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleName Field Functions 
    bool hasSampleName() const { return this->sampleName_ != nullptr;};
    void deleteSampleName() { this->sampleName_ = nullptr;};
    inline string getSampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
    inline CheckSampleNameRequest& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<string> regId_ {};
    shared_ptr<string> sampleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
