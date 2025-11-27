// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTTEMPLATELINKEDINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTTEMPLATELINKEDINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeWhitelistTemplateLinkedInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhitelistTemplateLinkedInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InsName, insName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhitelistTemplateLinkedInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InsName, insName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeWhitelistTemplateLinkedInstanceResponseBodyData() = default ;
    DescribeWhitelistTemplateLinkedInstanceResponseBodyData(const DescribeWhitelistTemplateLinkedInstanceResponseBodyData &) = default ;
    DescribeWhitelistTemplateLinkedInstanceResponseBodyData(DescribeWhitelistTemplateLinkedInstanceResponseBodyData &&) = default ;
    DescribeWhitelistTemplateLinkedInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhitelistTemplateLinkedInstanceResponseBodyData() = default ;
    DescribeWhitelistTemplateLinkedInstanceResponseBodyData& operator=(const DescribeWhitelistTemplateLinkedInstanceResponseBodyData &) = default ;
    DescribeWhitelistTemplateLinkedInstanceResponseBodyData& operator=(DescribeWhitelistTemplateLinkedInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insName_ == nullptr
        && return this->templateId_ == nullptr; };
    // insName Field Functions 
    bool hasInsName() const { return this->insName_ != nullptr;};
    void deleteInsName() { this->insName_ = nullptr;};
    inline const vector<string> & insName() const { DARABONBA_PTR_GET_CONST(insName_, vector<string>) };
    inline vector<string> insName() { DARABONBA_PTR_GET(insName_, vector<string>) };
    inline DescribeWhitelistTemplateLinkedInstanceResponseBodyData& setInsName(const vector<string> & insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };
    inline DescribeWhitelistTemplateLinkedInstanceResponseBodyData& setInsName(vector<string> && insName) { DARABONBA_PTR_SET_RVALUE(insName_, insName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int32_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
    inline DescribeWhitelistTemplateLinkedInstanceResponseBodyData& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The information about the instance.
    std::shared_ptr<vector<string>> insName_ = nullptr;
    // The ID of the whitelist template.
    std::shared_ptr<int32_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
