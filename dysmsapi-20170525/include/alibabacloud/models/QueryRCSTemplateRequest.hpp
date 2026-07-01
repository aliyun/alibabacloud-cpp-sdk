// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRCSTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRCSTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryRCSTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRCSTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRCSTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    QueryRCSTemplateRequest() = default ;
    QueryRCSTemplateRequest(const QueryRCSTemplateRequest &) = default ;
    QueryRCSTemplateRequest(QueryRCSTemplateRequest &&) = default ;
    QueryRCSTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRCSTemplateRequest() = default ;
    QueryRCSTemplateRequest& operator=(const QueryRCSTemplateRequest &) = default ;
    QueryRCSTemplateRequest& operator=(QueryRCSTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateCode_ == nullptr; };
    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline QueryRCSTemplateRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> templateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
