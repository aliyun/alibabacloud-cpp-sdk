// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DescribeExportProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExportProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportTaskId, exportTaskId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExportProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportTaskId, exportTaskId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeExportProgressRequest() = default ;
    DescribeExportProgressRequest(const DescribeExportProgressRequest &) = default ;
    DescribeExportProgressRequest(DescribeExportProgressRequest &&) = default ;
    DescribeExportProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExportProgressRequest() = default ;
    DescribeExportProgressRequest& operator=(const DescribeExportProgressRequest &) = default ;
    DescribeExportProgressRequest& operator=(DescribeExportProgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportTaskId_ == nullptr
        && this->instanceId_ == nullptr; };
    // exportTaskId Field Functions 
    bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
    void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
    inline string getExportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
    inline DescribeExportProgressRequest& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeExportProgressRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the export task.
    // 
    // This parameter is required.
    shared_ptr<string> exportTaskId_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
