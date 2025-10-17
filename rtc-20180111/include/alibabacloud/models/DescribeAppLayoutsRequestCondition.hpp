// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLAYOUTSREQUESTCONDITION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLAYOUTSREQUESTCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppLayoutsRequestCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppLayoutsRequestCondition& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppLayoutsRequestCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeAppLayoutsRequestCondition() = default ;
    DescribeAppLayoutsRequestCondition(const DescribeAppLayoutsRequestCondition &) = default ;
    DescribeAppLayoutsRequestCondition(DescribeAppLayoutsRequestCondition &&) = default ;
    DescribeAppLayoutsRequestCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppLayoutsRequestCondition() = default ;
    DescribeAppLayoutsRequestCondition& operator=(const DescribeAppLayoutsRequestCondition &) = default ;
    DescribeAppLayoutsRequestCondition& operator=(DescribeAppLayoutsRequestCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layoutId_ == nullptr
        && return this->name_ == nullptr; };
    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline DescribeAppLayoutsRequestCondition& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppLayoutsRequestCondition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> layoutId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
