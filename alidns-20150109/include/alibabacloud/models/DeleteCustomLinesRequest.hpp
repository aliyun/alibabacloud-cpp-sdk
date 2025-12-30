// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMLINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMLINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DeleteCustomLinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomLinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LineIds, lineIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomLinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LineIds, lineIds_);
    };
    DeleteCustomLinesRequest() = default ;
    DeleteCustomLinesRequest(const DeleteCustomLinesRequest &) = default ;
    DeleteCustomLinesRequest(DeleteCustomLinesRequest &&) = default ;
    DeleteCustomLinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomLinesRequest() = default ;
    DeleteCustomLinesRequest& operator=(const DeleteCustomLinesRequest &) = default ;
    DeleteCustomLinesRequest& operator=(DeleteCustomLinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->lineIds_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteCustomLinesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lineIds Field Functions 
    bool hasLineIds() const { return this->lineIds_ != nullptr;};
    void deleteLineIds() { this->lineIds_ = nullptr;};
    inline string getLineIds() const { DARABONBA_PTR_GET_DEFAULT(lineIds_, "") };
    inline DeleteCustomLinesRequest& setLineIds(string lineIds) { DARABONBA_PTR_SET_VALUE(lineIds_, lineIds) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The unique IDs of the custom lines that you want to delete. Separate the unique IDs with commas (,). You can call the [DescribeCustomLines](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describecustomlines?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> lineIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
