// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETESAMPLEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETESAMPLEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class BatchDeleteSampleDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteSampleDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteSampleDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(uuids, uuids_);
    };
    BatchDeleteSampleDataRequest() = default ;
    BatchDeleteSampleDataRequest(const BatchDeleteSampleDataRequest &) = default ;
    BatchDeleteSampleDataRequest(BatchDeleteSampleDataRequest &&) = default ;
    BatchDeleteSampleDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteSampleDataRequest() = default ;
    BatchDeleteSampleDataRequest& operator=(const BatchDeleteSampleDataRequest &) = default ;
    BatchDeleteSampleDataRequest& operator=(BatchDeleteSampleDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->uuids_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline BatchDeleteSampleDataRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline BatchDeleteSampleDataRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline BatchDeleteSampleDataRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // Language of the error message returned by the interface. Values: zh: Chinese; en: English. Default is en.
    shared_ptr<string> lang_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // UUID.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
