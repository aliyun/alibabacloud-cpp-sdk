// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFCONSOLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFCONSOLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafConsoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafConsoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(service, service_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafConsoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(service, service_);
    };
    DescribeSafConsoleRequest() = default ;
    DescribeSafConsoleRequest(const DescribeSafConsoleRequest &) = default ;
    DescribeSafConsoleRequest(DescribeSafConsoleRequest &&) = default ;
    DescribeSafConsoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafConsoleRequest() = default ;
    DescribeSafConsoleRequest& operator=(const DescribeSafConsoleRequest &) = default ;
    DescribeSafConsoleRequest& operator=(DescribeSafConsoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->content_ == nullptr && return this->service_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSafConsoleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeSafConsoleRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeSafConsoleRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Query content.
    std::shared_ptr<string> content_ = nullptr;
    // Service to be called.
    // 
    // This parameter is required.
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
