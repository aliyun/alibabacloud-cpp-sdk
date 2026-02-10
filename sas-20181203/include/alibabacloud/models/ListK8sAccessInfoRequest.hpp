// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SACCESSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SACCESSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListK8sAccessInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sAccessInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunYundunGatewayApiName, aliyunYundunGatewayApiName_);
      DARABONBA_PTR_TO_JSON(AliyunYundunGatewayPopName, aliyunYundunGatewayPopName_);
      DARABONBA_PTR_TO_JSON(AliyunYundunGatewayProjectName, aliyunYundunGatewayProjectName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sAccessInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunYundunGatewayApiName, aliyunYundunGatewayApiName_);
      DARABONBA_PTR_FROM_JSON(AliyunYundunGatewayPopName, aliyunYundunGatewayPopName_);
      DARABONBA_PTR_FROM_JSON(AliyunYundunGatewayProjectName, aliyunYundunGatewayProjectName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ListK8sAccessInfoRequest() = default ;
    ListK8sAccessInfoRequest(const ListK8sAccessInfoRequest &) = default ;
    ListK8sAccessInfoRequest(ListK8sAccessInfoRequest &&) = default ;
    ListK8sAccessInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sAccessInfoRequest() = default ;
    ListK8sAccessInfoRequest& operator=(const ListK8sAccessInfoRequest &) = default ;
    ListK8sAccessInfoRequest& operator=(ListK8sAccessInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunYundunGatewayApiName_ == nullptr
        && this->aliyunYundunGatewayPopName_ == nullptr && this->aliyunYundunGatewayProjectName_ == nullptr && this->lang_ == nullptr; };
    // aliyunYundunGatewayApiName Field Functions 
    bool hasAliyunYundunGatewayApiName() const { return this->aliyunYundunGatewayApiName_ != nullptr;};
    void deleteAliyunYundunGatewayApiName() { this->aliyunYundunGatewayApiName_ = nullptr;};
    inline string getAliyunYundunGatewayApiName() const { DARABONBA_PTR_GET_DEFAULT(aliyunYundunGatewayApiName_, "") };
    inline ListK8sAccessInfoRequest& setAliyunYundunGatewayApiName(string aliyunYundunGatewayApiName) { DARABONBA_PTR_SET_VALUE(aliyunYundunGatewayApiName_, aliyunYundunGatewayApiName) };


    // aliyunYundunGatewayPopName Field Functions 
    bool hasAliyunYundunGatewayPopName() const { return this->aliyunYundunGatewayPopName_ != nullptr;};
    void deleteAliyunYundunGatewayPopName() { this->aliyunYundunGatewayPopName_ = nullptr;};
    inline string getAliyunYundunGatewayPopName() const { DARABONBA_PTR_GET_DEFAULT(aliyunYundunGatewayPopName_, "") };
    inline ListK8sAccessInfoRequest& setAliyunYundunGatewayPopName(string aliyunYundunGatewayPopName) { DARABONBA_PTR_SET_VALUE(aliyunYundunGatewayPopName_, aliyunYundunGatewayPopName) };


    // aliyunYundunGatewayProjectName Field Functions 
    bool hasAliyunYundunGatewayProjectName() const { return this->aliyunYundunGatewayProjectName_ != nullptr;};
    void deleteAliyunYundunGatewayProjectName() { this->aliyunYundunGatewayProjectName_ = nullptr;};
    inline string getAliyunYundunGatewayProjectName() const { DARABONBA_PTR_GET_DEFAULT(aliyunYundunGatewayProjectName_, "") };
    inline ListK8sAccessInfoRequest& setAliyunYundunGatewayProjectName(string aliyunYundunGatewayProjectName) { DARABONBA_PTR_SET_VALUE(aliyunYundunGatewayProjectName_, aliyunYundunGatewayProjectName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListK8sAccessInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // This parameter is deprecated.
    shared_ptr<string> aliyunYundunGatewayApiName_ {};
    // This parameter is deprecated.
    shared_ptr<string> aliyunYundunGatewayPopName_ {};
    // This parameter is deprecated.
    shared_ptr<string> aliyunYundunGatewayProjectName_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
