// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWhitelistTemplateResponseBodyDataTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class GetWhitelistTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, GetWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    GetWhitelistTemplateResponseBodyData() = default ;
    GetWhitelistTemplateResponseBodyData(const GetWhitelistTemplateResponseBodyData &) = default ;
    GetWhitelistTemplateResponseBodyData(GetWhitelistTemplateResponseBodyData &&) = default ;
    GetWhitelistTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWhitelistTemplateResponseBodyData() = default ;
    GetWhitelistTemplateResponseBodyData& operator=(const GetWhitelistTemplateResponseBodyData &) = default ;
    GetWhitelistTemplateResponseBodyData& operator=(GetWhitelistTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templates_ == nullptr; };
    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<Models::GetWhitelistTemplateResponseBodyDataTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Models::GetWhitelistTemplateResponseBodyDataTemplates>) };
    inline vector<Models::GetWhitelistTemplateResponseBodyDataTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<Models::GetWhitelistTemplateResponseBodyDataTemplates>) };
    inline GetWhitelistTemplateResponseBodyData& setTemplates(const vector<Models::GetWhitelistTemplateResponseBodyDataTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline GetWhitelistTemplateResponseBodyData& setTemplates(vector<Models::GetWhitelistTemplateResponseBodyDataTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    std::shared_ptr<vector<Models::GetWhitelistTemplateResponseBodyDataTemplates>> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
