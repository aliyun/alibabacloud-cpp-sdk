// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCELINKEDWHITELISTTEMPLATESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCELINKEDWHITELISTTEMPLATESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ListInstanceLinkedWhitelistTemplatesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceLinkedWhitelistTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceLinkedWhitelistTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    ListInstanceLinkedWhitelistTemplatesResponseBodyData() = default ;
    ListInstanceLinkedWhitelistTemplatesResponseBodyData(const ListInstanceLinkedWhitelistTemplatesResponseBodyData &) = default ;
    ListInstanceLinkedWhitelistTemplatesResponseBodyData(ListInstanceLinkedWhitelistTemplatesResponseBodyData &&) = default ;
    ListInstanceLinkedWhitelistTemplatesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceLinkedWhitelistTemplatesResponseBodyData() = default ;
    ListInstanceLinkedWhitelistTemplatesResponseBodyData& operator=(const ListInstanceLinkedWhitelistTemplatesResponseBodyData &) = default ;
    ListInstanceLinkedWhitelistTemplatesResponseBodyData& operator=(ListInstanceLinkedWhitelistTemplatesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templates_ == nullptr; };
    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<Models::ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Models::ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates>) };
    inline vector<Models::ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<Models::ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates>) };
    inline ListInstanceLinkedWhitelistTemplatesResponseBodyData& setTemplates(const vector<Models::ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline ListInstanceLinkedWhitelistTemplatesResponseBodyData& setTemplates(vector<Models::ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    std::shared_ptr<vector<Models::ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates>> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
