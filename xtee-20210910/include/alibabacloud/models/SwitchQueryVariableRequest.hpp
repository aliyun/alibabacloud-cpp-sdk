// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHQUERYVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHQUERYVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class SwitchQueryVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchQueryVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchQueryVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    SwitchQueryVariableRequest() = default ;
    SwitchQueryVariableRequest(const SwitchQueryVariableRequest &) = default ;
    SwitchQueryVariableRequest(SwitchQueryVariableRequest &&) = default ;
    SwitchQueryVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchQueryVariableRequest() = default ;
    SwitchQueryVariableRequest& operator=(const SwitchQueryVariableRequest &) = default ;
    SwitchQueryVariableRequest& operator=(SwitchQueryVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->id_ == nullptr && this->regId_ == nullptr && this->status_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SwitchQueryVariableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SwitchQueryVariableRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline SwitchQueryVariableRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SwitchQueryVariableRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Primary key ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // Region code
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
    // Status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
