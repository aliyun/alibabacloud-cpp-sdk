// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESAMPLEBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESAMPLEBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeleteSampleBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSampleBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ids, ids_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSampleBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ids, ids_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    DeleteSampleBatchRequest() = default ;
    DeleteSampleBatchRequest(const DeleteSampleBatchRequest &) = default ;
    DeleteSampleBatchRequest(DeleteSampleBatchRequest &&) = default ;
    DeleteSampleBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSampleBatchRequest() = default ;
    DeleteSampleBatchRequest& operator=(const DeleteSampleBatchRequest &) = default ;
    DeleteSampleBatchRequest& operator=(DeleteSampleBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->ids_ != nullptr && this->regId_ != nullptr && this->versions_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteSampleBatchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline DeleteSampleBatchRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DeleteSampleBatchRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline string versions() const { DARABONBA_PTR_GET_DEFAULT(versions_, "") };
    inline DeleteSampleBatchRequest& setVersions(string versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // IDs for batch deletion operations.
    std::shared_ptr<string> ids_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
    // List of versions.
    // 
    // This parameter is required.
    std::shared_ptr<string> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
