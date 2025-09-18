// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHDFSUGIRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHDFSUGIRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHDFSUGIResponseBodyDataMetricsTotalDataSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSUGIResponseBodyDataMetricsTotalDirCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSUGIResponseBodyDataMetricsTotalFileCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHDFSUGIResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHDFSUGIResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_TO_JSON(TotalDirCount, totalDirCount_);
      DARABONBA_PTR_TO_JSON(TotalFileCount, totalFileCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHDFSUGIResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_FROM_JSON(TotalDirCount, totalDirCount_);
      DARABONBA_PTR_FROM_JSON(TotalFileCount, totalFileCount_);
    };
    ListDoctorHDFSUGIResponseBodyDataMetrics() = default ;
    ListDoctorHDFSUGIResponseBodyDataMetrics(const ListDoctorHDFSUGIResponseBodyDataMetrics &) = default ;
    ListDoctorHDFSUGIResponseBodyDataMetrics(ListDoctorHDFSUGIResponseBodyDataMetrics &&) = default ;
    ListDoctorHDFSUGIResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHDFSUGIResponseBodyDataMetrics() = default ;
    ListDoctorHDFSUGIResponseBodyDataMetrics& operator=(const ListDoctorHDFSUGIResponseBodyDataMetrics &) = default ;
    ListDoctorHDFSUGIResponseBodyDataMetrics& operator=(ListDoctorHDFSUGIResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->totalDataSize_ != nullptr
        && this->totalDirCount_ != nullptr && this->totalFileCount_ != nullptr; };
    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline const Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDataSize & totalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDataSize) };
    inline Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDataSize totalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDataSize) };
    inline ListDoctorHDFSUGIResponseBodyDataMetrics& setTotalDataSize(const Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
    inline ListDoctorHDFSUGIResponseBodyDataMetrics& setTotalDataSize(Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


    // totalDirCount Field Functions 
    bool hasTotalDirCount() const { return this->totalDirCount_ != nullptr;};
    void deleteTotalDirCount() { this->totalDirCount_ = nullptr;};
    inline const Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDirCount & totalDirCount() const { DARABONBA_PTR_GET_CONST(totalDirCount_, Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDirCount) };
    inline Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDirCount totalDirCount() { DARABONBA_PTR_GET(totalDirCount_, Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDirCount) };
    inline ListDoctorHDFSUGIResponseBodyDataMetrics& setTotalDirCount(const Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDirCount & totalDirCount) { DARABONBA_PTR_SET_VALUE(totalDirCount_, totalDirCount) };
    inline ListDoctorHDFSUGIResponseBodyDataMetrics& setTotalDirCount(Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDirCount && totalDirCount) { DARABONBA_PTR_SET_RVALUE(totalDirCount_, totalDirCount) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalFileCount & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalFileCount) };
    inline Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalFileCount totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalFileCount) };
    inline ListDoctorHDFSUGIResponseBodyDataMetrics& setTotalFileCount(const Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline ListDoctorHDFSUGIResponseBodyDataMetrics& setTotalFileCount(Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


  protected:
    // The total data size.
    std::shared_ptr<Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDataSize> totalDataSize_ = nullptr;
    // The total number of directories.
    std::shared_ptr<Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalDirCount> totalDirCount_ = nullptr;
    // The total number of files.
    std::shared_ptr<Models::ListDoctorHDFSUGIResponseBodyDataMetricsTotalFileCount> totalFileCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
