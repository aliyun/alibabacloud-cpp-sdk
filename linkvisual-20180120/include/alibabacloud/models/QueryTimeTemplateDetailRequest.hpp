// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTIMETEMPLATEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTIMETEMPLATEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryTimeTemplateDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTimeTemplateDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTimeTemplateDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    QueryTimeTemplateDetailRequest() = default ;
    QueryTimeTemplateDetailRequest(const QueryTimeTemplateDetailRequest &) = default ;
    QueryTimeTemplateDetailRequest(QueryTimeTemplateDetailRequest &&) = default ;
    QueryTimeTemplateDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTimeTemplateDetailRequest() = default ;
    QueryTimeTemplateDetailRequest& operator=(const QueryTimeTemplateDetailRequest &) = default ;
    QueryTimeTemplateDetailRequest& operator=(QueryTimeTemplateDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateId_ == nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline QueryTimeTemplateDetailRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The ID of the time template. You can call the [QueryTimeTemplate](https://help.aliyun.com/document_detail/107890.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
