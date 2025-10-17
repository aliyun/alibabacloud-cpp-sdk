// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBITEMDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_JOBITEMDATASOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobItemDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobItemDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
    };
    friend void from_json(const Darabonba::Json& j, JobItemDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
    };
    JobItemDataSources() = default ;
    JobItemDataSources(const JobItemDataSources &) = default ;
    JobItemDataSources(JobItemDataSources &&) = default ;
    JobItemDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobItemDataSources() = default ;
    JobItemDataSources& operator=(const JobItemDataSources &) = default ;
    JobItemDataSources& operator=(JobItemDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && return this->mountPath_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline JobItemDataSources& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline JobItemDataSources& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


  protected:
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> mountPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
