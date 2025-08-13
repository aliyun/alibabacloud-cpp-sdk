// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESAMPLEBATCHMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESAMPLEBATCHMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeleteSampleBatchMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSampleBatchMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(batchUuid, batchUuid_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSampleBatchMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(batchUuid, batchUuid_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DeleteSampleBatchMetaRequest() = default ;
    DeleteSampleBatchMetaRequest(const DeleteSampleBatchMetaRequest &) = default ;
    DeleteSampleBatchMetaRequest(DeleteSampleBatchMetaRequest &&) = default ;
    DeleteSampleBatchMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSampleBatchMetaRequest() = default ;
    DeleteSampleBatchMetaRequest& operator=(const DeleteSampleBatchMetaRequest &) = default ;
    DeleteSampleBatchMetaRequest& operator=(DeleteSampleBatchMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->batchUuid_ != nullptr && this->regId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteSampleBatchMetaRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // batchUuid Field Functions 
    bool hasBatchUuid() const { return this->batchUuid_ != nullptr;};
    void deleteBatchUuid() { this->batchUuid_ = nullptr;};
    inline string batchUuid() const { DARABONBA_PTR_GET_DEFAULT(batchUuid_, "") };
    inline DeleteSampleBatchMetaRequest& setBatchUuid(string batchUuid) { DARABONBA_PTR_SET_VALUE(batchUuid_, batchUuid) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DeleteSampleBatchMetaRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // UUID.
    std::shared_ptr<string> batchUuid_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
