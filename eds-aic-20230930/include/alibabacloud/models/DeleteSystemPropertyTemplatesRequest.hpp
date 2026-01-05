// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESYSTEMPROPERTYTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESYSTEMPROPERTYTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteSystemPropertyTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSystemPropertyTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSystemPropertyTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
    };
    DeleteSystemPropertyTemplatesRequest() = default ;
    DeleteSystemPropertyTemplatesRequest(const DeleteSystemPropertyTemplatesRequest &) = default ;
    DeleteSystemPropertyTemplatesRequest(DeleteSystemPropertyTemplatesRequest &&) = default ;
    DeleteSystemPropertyTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSystemPropertyTemplatesRequest() = default ;
    DeleteSystemPropertyTemplatesRequest& operator=(const DeleteSystemPropertyTemplatesRequest &) = default ;
    DeleteSystemPropertyTemplatesRequest& operator=(DeleteSystemPropertyTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateIds_ == nullptr; };
    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const vector<string> & getTemplateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<string>) };
    inline vector<string> getTemplateIds() { DARABONBA_PTR_GET(templateIds_, vector<string>) };
    inline DeleteSystemPropertyTemplatesRequest& setTemplateIds(const vector<string> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline DeleteSystemPropertyTemplatesRequest& setTemplateIds(vector<string> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


  protected:
    shared_ptr<vector<string>> templateIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
