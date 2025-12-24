// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERPYTHON3SCRIPTLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERPYTHON3SCRIPTLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescriberPython3ScriptLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescriberPython3ScriptLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RequestUuid, requestUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescriberPython3ScriptLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RequestUuid, requestUuid_);
    };
    DescriberPython3ScriptLogsRequest() = default ;
    DescriberPython3ScriptLogsRequest(const DescriberPython3ScriptLogsRequest &) = default ;
    DescriberPython3ScriptLogsRequest(DescriberPython3ScriptLogsRequest &&) = default ;
    DescriberPython3ScriptLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescriberPython3ScriptLogsRequest() = default ;
    DescriberPython3ScriptLogsRequest& operator=(const DescriberPython3ScriptLogsRequest &) = default ;
    DescriberPython3ScriptLogsRequest& operator=(DescriberPython3ScriptLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->requestUuid_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescriberPython3ScriptLogsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // requestUuid Field Functions 
    bool hasRequestUuid() const { return this->requestUuid_ != nullptr;};
    void deleteRequestUuid() { this->requestUuid_ = nullptr;};
    inline string requestUuid() const { DARABONBA_PTR_GET_DEFAULT(requestUuid_, "") };
    inline DescriberPython3ScriptLogsRequest& setRequestUuid(string requestUuid) { DARABONBA_PTR_SET_VALUE(requestUuid_, requestUuid) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The UUID that is returned when the Python3 script is run.
    // 
    // >  You can call the [RunPython3Script](~~RunPython3Script~~) operation to query the UUID.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
