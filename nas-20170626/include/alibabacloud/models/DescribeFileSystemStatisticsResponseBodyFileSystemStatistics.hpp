// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODYFILESYSTEMSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODYFILESYSTEMSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemStatisticsResponseBodyFileSystemStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemStatisticsResponseBodyFileSystemStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemStatistic, fileSystemStatistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemStatisticsResponseBodyFileSystemStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemStatistic, fileSystemStatistic_);
    };
    DescribeFileSystemStatisticsResponseBodyFileSystemStatistics() = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemStatistics(const DescribeFileSystemStatisticsResponseBodyFileSystemStatistics &) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemStatistics(DescribeFileSystemStatisticsResponseBodyFileSystemStatistics &&) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemStatisticsResponseBodyFileSystemStatistics() = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemStatistics& operator=(const DescribeFileSystemStatisticsResponseBodyFileSystemStatistics &) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemStatistics& operator=(DescribeFileSystemStatisticsResponseBodyFileSystemStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemStatistic_ == nullptr; };
    // fileSystemStatistic Field Functions 
    bool hasFileSystemStatistic() const { return this->fileSystemStatistic_ != nullptr;};
    void deleteFileSystemStatistic() { this->fileSystemStatistic_ = nullptr;};
    inline const vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic> & fileSystemStatistic() const { DARABONBA_PTR_GET_CONST(fileSystemStatistic_, vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic>) };
    inline vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic> fileSystemStatistic() { DARABONBA_PTR_GET(fileSystemStatistic_, vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic>) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemStatistics& setFileSystemStatistic(const vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic> & fileSystemStatistic) { DARABONBA_PTR_SET_VALUE(fileSystemStatistic_, fileSystemStatistic) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemStatistics& setFileSystemStatistic(vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic> && fileSystemStatistic) { DARABONBA_PTR_SET_RVALUE(fileSystemStatistic_, fileSystemStatistic) };


  protected:
    std::shared_ptr<vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic>> fileSystemStatistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
