// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class DescribeFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowVersion, flowVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowVersion, flowVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeFlowRequest() = default ;
    DescribeFlowRequest(const DescribeFlowRequest &) = default ;
    DescribeFlowRequest(DescribeFlowRequest &&) = default ;
    DescribeFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowRequest() = default ;
    DescribeFlowRequest& operator=(const DescribeFlowRequest &) = default ;
    DescribeFlowRequest& operator=(DescribeFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowVersion_ == nullptr
        && return this->name_ == nullptr; };
    // flowVersion Field Functions 
    bool hasFlowVersion() const { return this->flowVersion_ != nullptr;};
    void deleteFlowVersion() { this->flowVersion_ = nullptr;};
    inline string flowVersion() const { DARABONBA_PTR_GET_DEFAULT(flowVersion_, "") };
    inline DescribeFlowRequest& setFlowVersion(string flowVersion) { DARABONBA_PTR_SET_VALUE(flowVersion_, flowVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeFlowRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> flowVersion_ = nullptr;
    // The name of the flow.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
