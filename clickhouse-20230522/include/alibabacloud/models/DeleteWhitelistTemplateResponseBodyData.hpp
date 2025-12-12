// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteWhitelistTemplateResponseBodyDataTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DeleteWhitelistTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    DeleteWhitelistTemplateResponseBodyData() = default ;
    DeleteWhitelistTemplateResponseBodyData(const DeleteWhitelistTemplateResponseBodyData &) = default ;
    DeleteWhitelistTemplateResponseBodyData(DeleteWhitelistTemplateResponseBodyData &&) = default ;
    DeleteWhitelistTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWhitelistTemplateResponseBodyData() = default ;
    DeleteWhitelistTemplateResponseBodyData& operator=(const DeleteWhitelistTemplateResponseBodyData &) = default ;
    DeleteWhitelistTemplateResponseBodyData& operator=(DeleteWhitelistTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templates_ == nullptr; };
    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<Models::DeleteWhitelistTemplateResponseBodyDataTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Models::DeleteWhitelistTemplateResponseBodyDataTemplates>) };
    inline vector<Models::DeleteWhitelistTemplateResponseBodyDataTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<Models::DeleteWhitelistTemplateResponseBodyDataTemplates>) };
    inline DeleteWhitelistTemplateResponseBodyData& setTemplates(const vector<Models::DeleteWhitelistTemplateResponseBodyDataTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DeleteWhitelistTemplateResponseBodyData& setTemplates(vector<Models::DeleteWhitelistTemplateResponseBodyDataTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    std::shared_ptr<vector<Models::DeleteWhitelistTemplateResponseBodyDataTemplates>> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
