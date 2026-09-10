// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATACHECKTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATACHECKTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class DeleteDataCheckTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataCheckTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(templateIds, templateIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataCheckTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(templateIds, templateIds_);
    };
    DeleteDataCheckTemplateRequest() = default ;
    DeleteDataCheckTemplateRequest(const DeleteDataCheckTemplateRequest &) = default ;
    DeleteDataCheckTemplateRequest(DeleteDataCheckTemplateRequest &&) = default ;
    DeleteDataCheckTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataCheckTemplateRequest() = default ;
    DeleteDataCheckTemplateRequest& operator=(const DeleteDataCheckTemplateRequest &) = default ;
    DeleteDataCheckTemplateRequest& operator=(DeleteDataCheckTemplateRequest &&) = default ;
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
    inline DeleteDataCheckTemplateRequest& setTemplateIds(const vector<string> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline DeleteDataCheckTemplateRequest& setTemplateIds(vector<string> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


  protected:
    // The list of validation template IDs. Batch operations are supported.
    shared_ptr<vector<string>> templateIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
