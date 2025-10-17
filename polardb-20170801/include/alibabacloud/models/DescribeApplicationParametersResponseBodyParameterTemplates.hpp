// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODYPARAMETERTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODYPARAMETERTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationParametersResponseBodyParameterTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationParametersResponseBodyParameterTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentParameterTemplates, componentParameterTemplates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationParametersResponseBodyParameterTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentParameterTemplates, componentParameterTemplates_);
    };
    DescribeApplicationParametersResponseBodyParameterTemplates() = default ;
    DescribeApplicationParametersResponseBodyParameterTemplates(const DescribeApplicationParametersResponseBodyParameterTemplates &) = default ;
    DescribeApplicationParametersResponseBodyParameterTemplates(DescribeApplicationParametersResponseBodyParameterTemplates &&) = default ;
    DescribeApplicationParametersResponseBodyParameterTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationParametersResponseBodyParameterTemplates() = default ;
    DescribeApplicationParametersResponseBodyParameterTemplates& operator=(const DescribeApplicationParametersResponseBodyParameterTemplates &) = default ;
    DescribeApplicationParametersResponseBodyParameterTemplates& operator=(DescribeApplicationParametersResponseBodyParameterTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentParameterTemplates_ == nullptr; };
    // componentParameterTemplates Field Functions 
    bool hasComponentParameterTemplates() const { return this->componentParameterTemplates_ != nullptr;};
    void deleteComponentParameterTemplates() { this->componentParameterTemplates_ = nullptr;};
    inline const vector<Models::DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplates> & componentParameterTemplates() const { DARABONBA_PTR_GET_CONST(componentParameterTemplates_, vector<Models::DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplates>) };
    inline vector<Models::DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplates> componentParameterTemplates() { DARABONBA_PTR_GET(componentParameterTemplates_, vector<Models::DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplates>) };
    inline DescribeApplicationParametersResponseBodyParameterTemplates& setComponentParameterTemplates(const vector<Models::DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplates> & componentParameterTemplates) { DARABONBA_PTR_SET_VALUE(componentParameterTemplates_, componentParameterTemplates) };
    inline DescribeApplicationParametersResponseBodyParameterTemplates& setComponentParameterTemplates(vector<Models::DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplates> && componentParameterTemplates) { DARABONBA_PTR_SET_RVALUE(componentParameterTemplates_, componentParameterTemplates) };


  protected:
    std::shared_ptr<vector<Models::DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplates>> componentParameterTemplates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
