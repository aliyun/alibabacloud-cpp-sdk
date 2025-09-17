// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSRESPONSEBODYWORKGROUPSWORKGROUPWARNINGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSRESPONSEBODYWORKGROUPSWORKGROUPWARNINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings& obj) { 
      DARABONBA_PTR_TO_JSON(Warning, warning_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings& obj) { 
      DARABONBA_PTR_FROM_JSON(Warning, warning_);
    };
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings() = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings(const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings &) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings(DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings &&) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings() = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings& operator=(const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings &) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings& operator=(DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->warning_ != nullptr; };
    // warning Field Functions 
    bool hasWarning() const { return this->warning_ != nullptr;};
    void deleteWarning() { this->warning_ = nullptr;};
    inline const vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning> & warning() const { DARABONBA_PTR_GET_CONST(warning_, vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning>) };
    inline vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning> warning() { DARABONBA_PTR_GET(warning_, vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning>) };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings& setWarning(const vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning> & warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings& setWarning(vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning> && warning) { DARABONBA_PTR_SET_RVALUE(warning_, warning) };


  protected:
    std::shared_ptr<vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarning>> warning_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
