// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATERESOURCECOUNTRESPONSEBODYRESOURCECOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATERESOURCECOUNTRESPONSEBODYRESOURCECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeTemplateResourceCountResponseBodyResourceCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateResourceCountResponseBodyResourceCount& obj) { 
      DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
      DARABONBA_PTR_TO_JSON(SingleCount, singleCount_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateResourceCountResponseBodyResourceCount& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
      DARABONBA_PTR_FROM_JSON(SingleCount, singleCount_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeTemplateResourceCountResponseBodyResourceCount() = default ;
    DescribeTemplateResourceCountResponseBodyResourceCount(const DescribeTemplateResourceCountResponseBodyResourceCount &) = default ;
    DescribeTemplateResourceCountResponseBodyResourceCount(DescribeTemplateResourceCountResponseBodyResourceCount &&) = default ;
    DescribeTemplateResourceCountResponseBodyResourceCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateResourceCountResponseBodyResourceCount() = default ;
    DescribeTemplateResourceCountResponseBodyResourceCount& operator=(const DescribeTemplateResourceCountResponseBodyResourceCount &) = default ;
    DescribeTemplateResourceCountResponseBodyResourceCount& operator=(DescribeTemplateResourceCountResponseBodyResourceCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupCount_ != nullptr
        && this->singleCount_ != nullptr && this->templateId_ != nullptr; };
    // groupCount Field Functions 
    bool hasGroupCount() const { return this->groupCount_ != nullptr;};
    void deleteGroupCount() { this->groupCount_ = nullptr;};
    inline int32_t groupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
    inline DescribeTemplateResourceCountResponseBodyResourceCount& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


    // singleCount Field Functions 
    bool hasSingleCount() const { return this->singleCount_ != nullptr;};
    void deleteSingleCount() { this->singleCount_ = nullptr;};
    inline int32_t singleCount() const { DARABONBA_PTR_GET_DEFAULT(singleCount_, 0) };
    inline DescribeTemplateResourceCountResponseBodyResourceCount& setSingleCount(int32_t singleCount) { DARABONBA_PTR_SET_VALUE(singleCount_, singleCount) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeTemplateResourceCountResponseBodyResourceCount& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The number of protected object groups.
    std::shared_ptr<int32_t> groupCount_ = nullptr;
    // The number of protected objects.
    std::shared_ptr<int32_t> singleCount_ = nullptr;
    // The ID of the protection template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
