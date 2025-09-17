// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSRESPONSEBODYWORKGROUPSWORKGROUPWARNINGSWARNINGSOURCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSRESPONSEBODYWORKGROUPSWORKGROUPWARNINGSWARNINGSOURCEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds& obj) { 
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
    };
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds() = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds(const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds &) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds(DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds &&) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds() = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds& operator=(const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds &) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds& operator=(DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceId_ != nullptr; };
    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline const vector<string> & sourceId() const { DARABONBA_PTR_GET_CONST(sourceId_, vector<string>) };
    inline vector<string> sourceId() { DARABONBA_PTR_GET(sourceId_, vector<string>) };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds& setSourceId(const vector<string> & sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarningsWarningSourceIds& setSourceId(vector<string> && sourceId) { DARABONBA_PTR_SET_RVALUE(sourceId_, sourceId) };


  protected:
    std::shared_ptr<vector<string>> sourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
