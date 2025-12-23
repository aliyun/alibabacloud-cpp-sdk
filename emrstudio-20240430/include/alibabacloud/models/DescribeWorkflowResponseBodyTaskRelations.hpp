// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWRESPONSEBODYTASKRELATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWRESPONSEBODYTASKRELATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeWorkflowResponseBodyTaskRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkflowResponseBodyTaskRelations& obj) { 
      DARABONBA_PTR_TO_JSON(postTaskId, postTaskId_);
      DARABONBA_PTR_TO_JSON(preTaskId, preTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkflowResponseBodyTaskRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(postTaskId, postTaskId_);
      DARABONBA_PTR_FROM_JSON(preTaskId, preTaskId_);
    };
    DescribeWorkflowResponseBodyTaskRelations() = default ;
    DescribeWorkflowResponseBodyTaskRelations(const DescribeWorkflowResponseBodyTaskRelations &) = default ;
    DescribeWorkflowResponseBodyTaskRelations(DescribeWorkflowResponseBodyTaskRelations &&) = default ;
    DescribeWorkflowResponseBodyTaskRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkflowResponseBodyTaskRelations() = default ;
    DescribeWorkflowResponseBodyTaskRelations& operator=(const DescribeWorkflowResponseBodyTaskRelations &) = default ;
    DescribeWorkflowResponseBodyTaskRelations& operator=(DescribeWorkflowResponseBodyTaskRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->postTaskId_ == nullptr
        && return this->preTaskId_ == nullptr; };
    // postTaskId Field Functions 
    bool hasPostTaskId() const { return this->postTaskId_ != nullptr;};
    void deletePostTaskId() { this->postTaskId_ = nullptr;};
    inline string postTaskId() const { DARABONBA_PTR_GET_DEFAULT(postTaskId_, "") };
    inline DescribeWorkflowResponseBodyTaskRelations& setPostTaskId(string postTaskId) { DARABONBA_PTR_SET_VALUE(postTaskId_, postTaskId) };


    // preTaskId Field Functions 
    bool hasPreTaskId() const { return this->preTaskId_ != nullptr;};
    void deletePreTaskId() { this->preTaskId_ = nullptr;};
    inline string preTaskId() const { DARABONBA_PTR_GET_DEFAULT(preTaskId_, "") };
    inline DescribeWorkflowResponseBodyTaskRelations& setPreTaskId(string preTaskId) { DARABONBA_PTR_SET_VALUE(preTaskId_, preTaskId) };


  protected:
    std::shared_ptr<string> postTaskId_ = nullptr;
    std::shared_ptr<string> preTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
