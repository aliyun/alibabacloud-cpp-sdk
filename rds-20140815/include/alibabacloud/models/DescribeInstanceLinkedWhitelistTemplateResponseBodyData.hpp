// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCELINKEDWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCELINKEDWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceLinkedWhitelistTemplateResponseBodyDataTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeInstanceLinkedWhitelistTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceLinkedWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InsName, insName_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceLinkedWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InsName, insName_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    DescribeInstanceLinkedWhitelistTemplateResponseBodyData() = default ;
    DescribeInstanceLinkedWhitelistTemplateResponseBodyData(const DescribeInstanceLinkedWhitelistTemplateResponseBodyData &) = default ;
    DescribeInstanceLinkedWhitelistTemplateResponseBodyData(DescribeInstanceLinkedWhitelistTemplateResponseBodyData &&) = default ;
    DescribeInstanceLinkedWhitelistTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceLinkedWhitelistTemplateResponseBodyData() = default ;
    DescribeInstanceLinkedWhitelistTemplateResponseBodyData& operator=(const DescribeInstanceLinkedWhitelistTemplateResponseBodyData &) = default ;
    DescribeInstanceLinkedWhitelistTemplateResponseBodyData& operator=(DescribeInstanceLinkedWhitelistTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insName_ == nullptr
        && return this->templates_ == nullptr; };
    // insName Field Functions 
    bool hasInsName() const { return this->insName_ != nullptr;};
    void deleteInsName() { this->insName_ = nullptr;};
    inline string insName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
    inline DescribeInstanceLinkedWhitelistTemplateResponseBodyData& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<Models::DescribeInstanceLinkedWhitelistTemplateResponseBodyDataTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Models::DescribeInstanceLinkedWhitelistTemplateResponseBodyDataTemplates>) };
    inline vector<Models::DescribeInstanceLinkedWhitelistTemplateResponseBodyDataTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<Models::DescribeInstanceLinkedWhitelistTemplateResponseBodyDataTemplates>) };
    inline DescribeInstanceLinkedWhitelistTemplateResponseBodyData& setTemplates(const vector<Models::DescribeInstanceLinkedWhitelistTemplateResponseBodyDataTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeInstanceLinkedWhitelistTemplateResponseBodyData& setTemplates(vector<Models::DescribeInstanceLinkedWhitelistTemplateResponseBodyDataTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    // The instance name.
    std::shared_ptr<string> insName_ = nullptr;
    // The information about whitelists that are returned by page.
    std::shared_ptr<vector<Models::DescribeInstanceLinkedWhitelistTemplateResponseBodyDataTemplates>> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
