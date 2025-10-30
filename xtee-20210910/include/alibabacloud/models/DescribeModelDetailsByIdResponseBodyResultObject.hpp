// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELDETAILSBYIDRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELDETAILSBYIDRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeModelDetailsByIdResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelDetailsByIdResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(modelEffectEvaluation, modelEffectEvaluation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelDetailsByIdResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(modelEffectEvaluation, modelEffectEvaluation_);
    };
    DescribeModelDetailsByIdResponseBodyResultObject() = default ;
    DescribeModelDetailsByIdResponseBodyResultObject(const DescribeModelDetailsByIdResponseBodyResultObject &) = default ;
    DescribeModelDetailsByIdResponseBodyResultObject(DescribeModelDetailsByIdResponseBodyResultObject &&) = default ;
    DescribeModelDetailsByIdResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelDetailsByIdResponseBodyResultObject() = default ;
    DescribeModelDetailsByIdResponseBodyResultObject& operator=(const DescribeModelDetailsByIdResponseBodyResultObject &) = default ;
    DescribeModelDetailsByIdResponseBodyResultObject& operator=(DescribeModelDetailsByIdResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelEffectEvaluation_ == nullptr; };
    // modelEffectEvaluation Field Functions 
    bool hasModelEffectEvaluation() const { return this->modelEffectEvaluation_ != nullptr;};
    void deleteModelEffectEvaluation() { this->modelEffectEvaluation_ = nullptr;};
    inline string modelEffectEvaluation() const { DARABONBA_PTR_GET_DEFAULT(modelEffectEvaluation_, "") };
    inline DescribeModelDetailsByIdResponseBodyResultObject& setModelEffectEvaluation(string modelEffectEvaluation) { DARABONBA_PTR_SET_VALUE(modelEffectEvaluation_, modelEffectEvaluation) };


  protected:
    // Model prediction result.
    std::shared_ptr<string> modelEffectEvaluation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
