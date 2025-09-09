// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILV2RESPONSEBODYOSSOBJECTDETAILRULELISTMODELTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILV2RESPONSEBODYOSSOBJECTDETAILRULELISTMODELTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags() = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags(const DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags &) = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags(DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags &&) = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags() = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags& operator=(const DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags &) = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags& operator=(DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // ID of the data label for the recognition model.
    // - **101**: Personal sensitive information.
    // - **102**: Personal information.
    // - **103**: Important data.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Name of the data label for the recognition model.
    // - Personal sensitive information.
    // - Personal information.
    // - Important data.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
