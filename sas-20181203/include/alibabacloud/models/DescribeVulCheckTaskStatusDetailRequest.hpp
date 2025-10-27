// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULCHECKTASKSTATUSDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULCHECKTASKSTATUSDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulCheckTaskStatusDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulCheckTaskStatusDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(Types, types_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulCheckTaskStatusDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeVulCheckTaskStatusDetailRequest() = default ;
    DescribeVulCheckTaskStatusDetailRequest(const DescribeVulCheckTaskStatusDetailRequest &) = default ;
    DescribeVulCheckTaskStatusDetailRequest(DescribeVulCheckTaskStatusDetailRequest &&) = default ;
    DescribeVulCheckTaskStatusDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulCheckTaskStatusDetailRequest() = default ;
    DescribeVulCheckTaskStatusDetailRequest& operator=(const DescribeVulCheckTaskStatusDetailRequest &) = default ;
    DescribeVulCheckTaskStatusDetailRequest& operator=(DescribeVulCheckTaskStatusDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskIds_ == nullptr
        && return this->types_ == nullptr && return this->uuid_ == nullptr; };
    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline DescribeVulCheckTaskStatusDetailRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline DescribeVulCheckTaskStatusDetailRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> types() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline DescribeVulCheckTaskStatusDetailRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline DescribeVulCheckTaskStatusDetailRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeVulCheckTaskStatusDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The task IDs.
    std::shared_ptr<vector<string>> taskIds_ = nullptr;
    // The types of the vulnerabilities that are detected by the tasks.
    std::shared_ptr<vector<string>> types_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
