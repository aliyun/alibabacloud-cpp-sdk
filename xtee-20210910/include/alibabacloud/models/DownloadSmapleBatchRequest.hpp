// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSMAPLEBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSMAPLEBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DownloadSmapleBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadSmapleBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(batchUuid, batchUuid_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadSmapleBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(batchUuid, batchUuid_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DownloadSmapleBatchRequest() = default ;
    DownloadSmapleBatchRequest(const DownloadSmapleBatchRequest &) = default ;
    DownloadSmapleBatchRequest(DownloadSmapleBatchRequest &&) = default ;
    DownloadSmapleBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadSmapleBatchRequest() = default ;
    DownloadSmapleBatchRequest& operator=(const DownloadSmapleBatchRequest &) = default ;
    DownloadSmapleBatchRequest& operator=(DownloadSmapleBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->batchUuid_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DownloadSmapleBatchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // batchUuid Field Functions 
    bool hasBatchUuid() const { return this->batchUuid_ != nullptr;};
    void deleteBatchUuid() { this->batchUuid_ = nullptr;};
    inline string getBatchUuid() const { DARABONBA_PTR_GET_DEFAULT(batchUuid_, "") };
    inline DownloadSmapleBatchRequest& setBatchUuid(string batchUuid) { DARABONBA_PTR_SET_VALUE(batchUuid_, batchUuid) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DownloadSmapleBatchRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Sample batch UUID
    shared_ptr<string> batchUuid_ {};
    // Region code
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
