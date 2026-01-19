// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeleteFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DeleteFieldRequest() = default ;
    DeleteFieldRequest(const DeleteFieldRequest &) = default ;
    DeleteFieldRequest(DeleteFieldRequest &&) = default ;
    DeleteFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFieldRequest() = default ;
    DeleteFieldRequest& operator=(const DeleteFieldRequest &) = default ;
    DeleteFieldRequest& operator=(DeleteFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteFieldRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteFieldRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteFieldRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DeleteFieldRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Primary key ID of the field
    shared_ptr<int64_t> id_ {};
    // Name of the field.
    shared_ptr<string> name_ {};
    // Region code
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
