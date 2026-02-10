// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKERRORLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKERRORLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTaskErrorLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskErrorLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildTaskId, buildTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskErrorLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildTaskId, buildTaskId_);
    };
    DescribeTaskErrorLogRequest() = default ;
    DescribeTaskErrorLogRequest(const DescribeTaskErrorLogRequest &) = default ;
    DescribeTaskErrorLogRequest(DescribeTaskErrorLogRequest &&) = default ;
    DescribeTaskErrorLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskErrorLogRequest() = default ;
    DescribeTaskErrorLogRequest& operator=(const DescribeTaskErrorLogRequest &) = default ;
    DescribeTaskErrorLogRequest& operator=(DescribeTaskErrorLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildTaskId_ == nullptr; };
    // buildTaskId Field Functions 
    bool hasBuildTaskId() const { return this->buildTaskId_ != nullptr;};
    void deleteBuildTaskId() { this->buildTaskId_ = nullptr;};
    inline string getBuildTaskId() const { DARABONBA_PTR_GET_DEFAULT(buildTaskId_, "") };
    inline DescribeTaskErrorLogRequest& setBuildTaskId(string buildTaskId) { DARABONBA_PTR_SET_VALUE(buildTaskId_, buildTaskId) };


  protected:
    // The ID of the task.
    // 
    // >  You can call the DescribeImageFixTask operation to query the IDs of tasks.
    // 
    // This parameter is required.
    shared_ptr<string> buildTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
