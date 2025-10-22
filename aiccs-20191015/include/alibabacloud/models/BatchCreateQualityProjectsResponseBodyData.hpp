// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEQUALITYPROJECTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEQUALITYPROJECTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class BatchCreateQualityProjectsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateQualityProjectsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateQualityProjectsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    BatchCreateQualityProjectsResponseBodyData() = default ;
    BatchCreateQualityProjectsResponseBodyData(const BatchCreateQualityProjectsResponseBodyData &) = default ;
    BatchCreateQualityProjectsResponseBodyData(BatchCreateQualityProjectsResponseBodyData &&) = default ;
    BatchCreateQualityProjectsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateQualityProjectsResponseBodyData() = default ;
    BatchCreateQualityProjectsResponseBodyData& operator=(const BatchCreateQualityProjectsResponseBodyData &) = default ;
    BatchCreateQualityProjectsResponseBodyData& operator=(BatchCreateQualityProjectsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->projectId_ == nullptr && return this->version_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BatchCreateQualityProjectsResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline BatchCreateQualityProjectsResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline BatchCreateQualityProjectsResponseBodyData& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
