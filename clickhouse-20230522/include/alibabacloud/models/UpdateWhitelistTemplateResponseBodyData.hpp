// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWhitelistTemplateResponseBodyDataTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class UpdateWhitelistTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    UpdateWhitelistTemplateResponseBodyData() = default ;
    UpdateWhitelistTemplateResponseBodyData(const UpdateWhitelistTemplateResponseBodyData &) = default ;
    UpdateWhitelistTemplateResponseBodyData(UpdateWhitelistTemplateResponseBodyData &&) = default ;
    UpdateWhitelistTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhitelistTemplateResponseBodyData() = default ;
    UpdateWhitelistTemplateResponseBodyData& operator=(const UpdateWhitelistTemplateResponseBodyData &) = default ;
    UpdateWhitelistTemplateResponseBodyData& operator=(UpdateWhitelistTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templates_ == nullptr; };
    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplates>) };
    inline vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplates>) };
    inline UpdateWhitelistTemplateResponseBodyData& setTemplates(const vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline UpdateWhitelistTemplateResponseBodyData& setTemplates(vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    std::shared_ptr<vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplates>> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
