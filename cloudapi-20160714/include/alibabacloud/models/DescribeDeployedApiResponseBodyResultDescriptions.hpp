// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYRESULTDESCRIPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYRESULTDESCRIPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyResultDescriptionsResultDescription.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyResultDescriptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyResultDescriptions& obj) { 
      DARABONBA_PTR_TO_JSON(ResultDescription, resultDescription_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyResultDescriptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ResultDescription, resultDescription_);
    };
    DescribeDeployedApiResponseBodyResultDescriptions() = default ;
    DescribeDeployedApiResponseBodyResultDescriptions(const DescribeDeployedApiResponseBodyResultDescriptions &) = default ;
    DescribeDeployedApiResponseBodyResultDescriptions(DescribeDeployedApiResponseBodyResultDescriptions &&) = default ;
    DescribeDeployedApiResponseBodyResultDescriptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyResultDescriptions() = default ;
    DescribeDeployedApiResponseBodyResultDescriptions& operator=(const DescribeDeployedApiResponseBodyResultDescriptions &) = default ;
    DescribeDeployedApiResponseBodyResultDescriptions& operator=(DescribeDeployedApiResponseBodyResultDescriptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resultDescription_ == nullptr; };
    // resultDescription Field Functions 
    bool hasResultDescription() const { return this->resultDescription_ != nullptr;};
    void deleteResultDescription() { this->resultDescription_ = nullptr;};
    inline const vector<Models::DescribeDeployedApiResponseBodyResultDescriptionsResultDescription> & resultDescription() const { DARABONBA_PTR_GET_CONST(resultDescription_, vector<Models::DescribeDeployedApiResponseBodyResultDescriptionsResultDescription>) };
    inline vector<Models::DescribeDeployedApiResponseBodyResultDescriptionsResultDescription> resultDescription() { DARABONBA_PTR_GET(resultDescription_, vector<Models::DescribeDeployedApiResponseBodyResultDescriptionsResultDescription>) };
    inline DescribeDeployedApiResponseBodyResultDescriptions& setResultDescription(const vector<Models::DescribeDeployedApiResponseBodyResultDescriptionsResultDescription> & resultDescription) { DARABONBA_PTR_SET_VALUE(resultDescription_, resultDescription) };
    inline DescribeDeployedApiResponseBodyResultDescriptions& setResultDescription(vector<Models::DescribeDeployedApiResponseBodyResultDescriptionsResultDescription> && resultDescription) { DARABONBA_PTR_SET_RVALUE(resultDescription_, resultDescription) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployedApiResponseBodyResultDescriptionsResultDescription>> resultDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
