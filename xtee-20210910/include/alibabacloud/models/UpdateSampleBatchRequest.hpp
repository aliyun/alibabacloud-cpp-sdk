// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESAMPLEBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESAMPLEBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UpdateSampleBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSampleBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ids, ids_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSampleBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ids, ids_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    UpdateSampleBatchRequest() = default ;
    UpdateSampleBatchRequest(const UpdateSampleBatchRequest &) = default ;
    UpdateSampleBatchRequest(UpdateSampleBatchRequest &&) = default ;
    UpdateSampleBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSampleBatchRequest() = default ;
    UpdateSampleBatchRequest& operator=(const UpdateSampleBatchRequest &) = default ;
    UpdateSampleBatchRequest& operator=(UpdateSampleBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->ids_ == nullptr && this->regId_ == nullptr && this->tags_ == nullptr && this->versions_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateSampleBatchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline UpdateSampleBatchRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline UpdateSampleBatchRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline UpdateSampleBatchRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline string getVersions() const { DARABONBA_PTR_GET_DEFAULT(versions_, "") };
    inline UpdateSampleBatchRequest& setVersions(string versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Batch operation IDs.
    shared_ptr<string> ids_ {};
    // Region code.
    shared_ptr<string> regId_ {};
    // Tags (comma-separated).
    shared_ptr<string> tags_ {};
    // Version number (latest).
    shared_ptr<string> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
