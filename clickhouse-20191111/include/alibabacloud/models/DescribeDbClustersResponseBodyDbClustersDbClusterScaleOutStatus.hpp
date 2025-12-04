// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYDBCLUSTERSDBCLUSTERSCALEOUTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYDBCLUSTERSDBCLUSTERSCALEOUTSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
    };
    DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus() = default ;
    DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus(const DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus &) = default ;
    DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus(DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus &&) = default ;
    DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus() = default ;
    DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus& operator=(const DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus &) = default ;
    DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus& operator=(DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->progress_ == nullptr
        && return this->ratio_ == nullptr; };
    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


  protected:
    // The progress of the data migration task in percentage.
    // 
    // >  This parameter is returned only when the cluster is in the SCALING_OUT state.
    std::shared_ptr<string> progress_ = nullptr;
    // The progress of the data migration task. This value is displayed in the following format: Data volume that has been migrated/Total data volume.
    // 
    // >  This parameter is returned only when the cluster is in the SCALING_OUT state.
    std::shared_ptr<string> ratio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
