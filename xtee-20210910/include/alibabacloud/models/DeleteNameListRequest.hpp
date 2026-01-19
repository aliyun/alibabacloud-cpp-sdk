// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENAMELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENAMELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeleteNameListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNameListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ids, ids_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNameListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ids, ids_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DeleteNameListRequest() = default ;
    DeleteNameListRequest(const DeleteNameListRequest &) = default ;
    DeleteNameListRequest(DeleteNameListRequest &&) = default ;
    DeleteNameListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNameListRequest() = default ;
    DeleteNameListRequest& operator=(const DeleteNameListRequest &) = default ;
    DeleteNameListRequest& operator=(DeleteNameListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->ids_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteNameListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline DeleteNameListRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DeleteNameListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Name list ID, multiple IDs should be separated by commas
    shared_ptr<string> ids_ {};
    // Region code
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
