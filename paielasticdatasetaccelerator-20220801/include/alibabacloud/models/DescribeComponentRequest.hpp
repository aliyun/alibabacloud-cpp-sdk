// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class DescribeComponentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenderTemplate, renderTemplate_);
      DARABONBA_ANY_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderTemplate, renderTemplate_);
      DARABONBA_ANY_FROM_JSON(Values, values_);
    };
    DescribeComponentRequest() = default ;
    DescribeComponentRequest(const DescribeComponentRequest &) = default ;
    DescribeComponentRequest(DescribeComponentRequest &&) = default ;
    DescribeComponentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentRequest() = default ;
    DescribeComponentRequest& operator=(const DescribeComponentRequest &) = default ;
    DescribeComponentRequest& operator=(DescribeComponentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renderTemplate_ == nullptr
        && this->values_ == nullptr; };
    // renderTemplate Field Functions 
    bool hasRenderTemplate() const { return this->renderTemplate_ != nullptr;};
    void deleteRenderTemplate() { this->renderTemplate_ = nullptr;};
    inline bool getRenderTemplate() const { DARABONBA_PTR_GET_DEFAULT(renderTemplate_, false) };
    inline DescribeComponentRequest& setRenderTemplate(bool renderTemplate) { DARABONBA_PTR_SET_VALUE(renderTemplate_, renderTemplate) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline     const Darabonba::Json & getValues() const { DARABONBA_GET(values_) };
    Darabonba::Json & getValues() { DARABONBA_GET(values_) };
    inline DescribeComponentRequest& setValues(const Darabonba::Json & values) { DARABONBA_SET_VALUE(values_, values) };
    inline DescribeComponentRequest& setValues(Darabonba::Json && values) { DARABONBA_SET_RVALUE(values_, values) };


  protected:
    shared_ptr<bool> renderTemplate_ {};
    Darabonba::Json values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
