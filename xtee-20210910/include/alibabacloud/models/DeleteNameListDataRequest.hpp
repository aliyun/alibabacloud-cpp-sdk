// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENAMELISTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENAMELISTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeleteNameListDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNameListDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(variableId, variableId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNameListDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(variableId, variableId_);
    };
    DeleteNameListDataRequest() = default ;
    DeleteNameListDataRequest(const DeleteNameListDataRequest &) = default ;
    DeleteNameListDataRequest(DeleteNameListDataRequest &&) = default ;
    DeleteNameListDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNameListDataRequest() = default ;
    DeleteNameListDataRequest& operator=(const DeleteNameListDataRequest &) = default ;
    DeleteNameListDataRequest& operator=(DeleteNameListDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->variableId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteNameListDataRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DeleteNameListDataRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // variableId Field Functions 
    bool hasVariableId() const { return this->variableId_ != nullptr;};
    void deleteVariableId() { this->variableId_ = nullptr;};
    inline string getVariableId() const { DARABONBA_PTR_GET_DEFAULT(variableId_, "") };
    inline DeleteNameListDataRequest& setVariableId(string variableId) { DARABONBA_PTR_SET_VALUE(variableId_, variableId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Variable ID
    shared_ptr<string> variableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
