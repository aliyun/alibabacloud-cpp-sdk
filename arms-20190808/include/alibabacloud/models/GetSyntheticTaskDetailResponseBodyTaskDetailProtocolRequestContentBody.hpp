// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILPROTOCOLREQUESTCONTENTBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILPROTOCOLREQUESTCONTENTBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyFormdata.hpp>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyUrlencoded.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& obj) { 
      DARABONBA_PTR_TO_JSON(Formdata, formdata_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Raw, raw_);
      DARABONBA_PTR_TO_JSON(Urlencoded, urlencoded_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Formdata, formdata_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Raw, raw_);
      DARABONBA_PTR_FROM_JSON(Urlencoded, urlencoded_);
    };
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody(const GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody(GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody &&) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& operator=(const GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& operator=(GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->formdata_ != nullptr
        && this->language_ != nullptr && this->mode_ != nullptr && this->raw_ != nullptr && this->urlencoded_ != nullptr; };
    // formdata Field Functions 
    bool hasFormdata() const { return this->formdata_ != nullptr;};
    void deleteFormdata() { this->formdata_ = nullptr;};
    inline const Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyFormdata & formdata() const { DARABONBA_PTR_GET_CONST(formdata_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyFormdata) };
    inline Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyFormdata formdata() { DARABONBA_PTR_GET(formdata_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyFormdata) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& setFormdata(const Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyFormdata & formdata) { DARABONBA_PTR_SET_VALUE(formdata_, formdata) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& setFormdata(Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyFormdata && formdata) { DARABONBA_PTR_SET_RVALUE(formdata_, formdata) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // raw Field Functions 
    bool hasRaw() const { return this->raw_ != nullptr;};
    void deleteRaw() { this->raw_ = nullptr;};
    inline string raw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


    // urlencoded Field Functions 
    bool hasUrlencoded() const { return this->urlencoded_ != nullptr;};
    void deleteUrlencoded() { this->urlencoded_ = nullptr;};
    inline const Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyUrlencoded & urlencoded() const { DARABONBA_PTR_GET_CONST(urlencoded_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyUrlencoded) };
    inline Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyUrlencoded urlencoded() { DARABONBA_PTR_GET(urlencoded_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyUrlencoded) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& setUrlencoded(const Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyUrlencoded & urlencoded) { DARABONBA_PTR_SET_VALUE(urlencoded_, urlencoded) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBody& setUrlencoded(Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyUrlencoded && urlencoded) { DARABONBA_PTR_SET_RVALUE(urlencoded_, urlencoded) };


  protected:
    // The data content. This parameter is returned when Mode is set to form-data.
    std::shared_ptr<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyFormdata> formdata_ = nullptr;
    // The language used when Mode is set to raw. Valid values:
    // 
    // *   json
    // *   xml
    // *   javascript
    // *   html
    // *   text
    std::shared_ptr<string> language_ = nullptr;
    // The type of the content. Valid values:
    // 
    // *   form-data
    // *   x-www-form-urlencoded
    // *   raw
    std::shared_ptr<string> mode_ = nullptr;
    // The data content. This parameter is returned when **Mode** is set to **raw**.
    std::shared_ptr<string> raw_ = nullptr;
    // The URL of the body content.
    std::shared_ptr<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocolRequestContentBodyUrlencoded> urlencoded_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
