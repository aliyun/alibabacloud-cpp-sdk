// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTSAMPLECONSISTENCYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTSAMPLECONSISTENCYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ReportSampleConsistencyJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportSampleConsistencyJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ReportSampleConsistencyJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ReportSampleConsistencyJobRequest() = default ;
    ReportSampleConsistencyJobRequest(const ReportSampleConsistencyJobRequest &) = default ;
    ReportSampleConsistencyJobRequest(ReportSampleConsistencyJobRequest &&) = default ;
    ReportSampleConsistencyJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportSampleConsistencyJobRequest() = default ;
    ReportSampleConsistencyJobRequest& operator=(const ReportSampleConsistencyJobRequest &) = default ;
    ReportSampleConsistencyJobRequest& operator=(ReportSampleConsistencyJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReportSampleConsistencyJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
