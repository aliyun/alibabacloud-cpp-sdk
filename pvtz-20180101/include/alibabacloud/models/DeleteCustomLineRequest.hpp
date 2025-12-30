// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DeleteCustomLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LineId, lineId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LineId, lineId_);
    };
    DeleteCustomLineRequest() = default ;
    DeleteCustomLineRequest(const DeleteCustomLineRequest &) = default ;
    DeleteCustomLineRequest(DeleteCustomLineRequest &&) = default ;
    DeleteCustomLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomLineRequest() = default ;
    DeleteCustomLineRequest& operator=(const DeleteCustomLineRequest &) = default ;
    DeleteCustomLineRequest& operator=(DeleteCustomLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->lineId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteCustomLineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lineId Field Functions 
    bool hasLineId() const { return this->lineId_ != nullptr;};
    void deleteLineId() { this->lineId_ = nullptr;};
    inline string getLineId() const { DARABONBA_PTR_GET_DEFAULT(lineId_, "") };
    inline DeleteCustomLineRequest& setLineId(string lineId) { DARABONBA_PTR_SET_VALUE(lineId_, lineId) };


  protected:
    // The language.
    shared_ptr<string> lang_ {};
    // The unique ID of the custom line.
    // 
    // This parameter is required.
    shared_ptr<string> lineId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
