// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTPROTOCOLREQUESTCONTENTBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTPROTOCOLREQUESTCONTENTBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSyntheticTaskRequestProtocolRequestContentBodyFormData.hpp>
#include <alibabacloud/models/CreateSyntheticTaskRequestProtocolRequestContentBodyUrlEncoding.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequestProtocolRequestContentBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequestProtocolRequestContentBody& obj) { 
      DARABONBA_PTR_TO_JSON(FormData, formData_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Raw, raw_);
      DARABONBA_PTR_TO_JSON(UrlEncoding, urlEncoding_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequestProtocolRequestContentBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FormData, formData_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Raw, raw_);
      DARABONBA_PTR_FROM_JSON(UrlEncoding, urlEncoding_);
    };
    CreateSyntheticTaskRequestProtocolRequestContentBody() = default ;
    CreateSyntheticTaskRequestProtocolRequestContentBody(const CreateSyntheticTaskRequestProtocolRequestContentBody &) = default ;
    CreateSyntheticTaskRequestProtocolRequestContentBody(CreateSyntheticTaskRequestProtocolRequestContentBody &&) = default ;
    CreateSyntheticTaskRequestProtocolRequestContentBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequestProtocolRequestContentBody() = default ;
    CreateSyntheticTaskRequestProtocolRequestContentBody& operator=(const CreateSyntheticTaskRequestProtocolRequestContentBody &) = default ;
    CreateSyntheticTaskRequestProtocolRequestContentBody& operator=(CreateSyntheticTaskRequestProtocolRequestContentBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->formData_ != nullptr
        && this->language_ != nullptr && this->mode_ != nullptr && this->raw_ != nullptr && this->urlEncoding_ != nullptr; };
    // formData Field Functions 
    bool hasFormData() const { return this->formData_ != nullptr;};
    void deleteFormData() { this->formData_ = nullptr;};
    inline const vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyFormData> & formData() const { DARABONBA_PTR_GET_CONST(formData_, vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyFormData>) };
    inline vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyFormData> formData() { DARABONBA_PTR_GET(formData_, vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyFormData>) };
    inline CreateSyntheticTaskRequestProtocolRequestContentBody& setFormData(const vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyFormData> & formData) { DARABONBA_PTR_SET_VALUE(formData_, formData) };
    inline CreateSyntheticTaskRequestProtocolRequestContentBody& setFormData(vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyFormData> && formData) { DARABONBA_PTR_SET_RVALUE(formData_, formData) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateSyntheticTaskRequestProtocolRequestContentBody& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateSyntheticTaskRequestProtocolRequestContentBody& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // raw Field Functions 
    bool hasRaw() const { return this->raw_ != nullptr;};
    void deleteRaw() { this->raw_ = nullptr;};
    inline string raw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
    inline CreateSyntheticTaskRequestProtocolRequestContentBody& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


    // urlEncoding Field Functions 
    bool hasUrlEncoding() const { return this->urlEncoding_ != nullptr;};
    void deleteUrlEncoding() { this->urlEncoding_ = nullptr;};
    inline const vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyUrlEncoding> & urlEncoding() const { DARABONBA_PTR_GET_CONST(urlEncoding_, vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyUrlEncoding>) };
    inline vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyUrlEncoding> urlEncoding() { DARABONBA_PTR_GET(urlEncoding_, vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyUrlEncoding>) };
    inline CreateSyntheticTaskRequestProtocolRequestContentBody& setUrlEncoding(const vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyUrlEncoding> & urlEncoding) { DARABONBA_PTR_SET_VALUE(urlEncoding_, urlEncoding) };
    inline CreateSyntheticTaskRequestProtocolRequestContentBody& setUrlEncoding(vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyUrlEncoding> && urlEncoding) { DARABONBA_PTR_SET_RVALUE(urlEncoding_, urlEncoding) };


  protected:
    // The data that is passed when the **Mode** parameter is set to **form-data**.
    std::shared_ptr<vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyFormData>> formData_ = nullptr;
    // The language that is selected when the Mode parameter is set to raw.
    // 
    // *   json
    // *   xml
    // *   javascript
    // *   html
    // *   text
    std::shared_ptr<string> language_ = nullptr;
    // The data type of the content.
    // 
    // *   form-data
    // *   x-www-form-urlencoded
    // *   raw
    std::shared_ptr<string> mode_ = nullptr;
    // The data that is passed when the **Mode** parameter is set to **raw**.
    std::shared_ptr<string> raw_ = nullptr;
    // The data that is passed when the **Mode** parameter is set to **x-www-form-urlencoded**.
    std::shared_ptr<vector<Models::CreateSyntheticTaskRequestProtocolRequestContentBodyUrlEncoding>> urlEncoding_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
