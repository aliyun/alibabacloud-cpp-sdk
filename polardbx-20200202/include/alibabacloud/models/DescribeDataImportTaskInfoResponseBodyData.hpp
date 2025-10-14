// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAIMPORTTASKINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAIMPORTTASKINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDataImportTaskInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataImportTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataImportTaskDetailInfo, dataImportTaskDetailInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataImportTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataImportTaskDetailInfo, dataImportTaskDetailInfo_);
    };
    DescribeDataImportTaskInfoResponseBodyData() = default ;
    DescribeDataImportTaskInfoResponseBodyData(const DescribeDataImportTaskInfoResponseBodyData &) = default ;
    DescribeDataImportTaskInfoResponseBodyData(DescribeDataImportTaskInfoResponseBodyData &&) = default ;
    DescribeDataImportTaskInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataImportTaskInfoResponseBodyData() = default ;
    DescribeDataImportTaskInfoResponseBodyData& operator=(const DescribeDataImportTaskInfoResponseBodyData &) = default ;
    DescribeDataImportTaskInfoResponseBodyData& operator=(DescribeDataImportTaskInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataImportTaskDetailInfo_ == nullptr; };
    // dataImportTaskDetailInfo Field Functions 
    bool hasDataImportTaskDetailInfo() const { return this->dataImportTaskDetailInfo_ != nullptr;};
    void deleteDataImportTaskDetailInfo() { this->dataImportTaskDetailInfo_ = nullptr;};
    inline const Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo & dataImportTaskDetailInfo() const { DARABONBA_PTR_GET_CONST(dataImportTaskDetailInfo_, Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo) };
    inline Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo dataImportTaskDetailInfo() { DARABONBA_PTR_GET(dataImportTaskDetailInfo_, Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo) };
    inline DescribeDataImportTaskInfoResponseBodyData& setDataImportTaskDetailInfo(const Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo & dataImportTaskDetailInfo) { DARABONBA_PTR_SET_VALUE(dataImportTaskDetailInfo_, dataImportTaskDetailInfo) };
    inline DescribeDataImportTaskInfoResponseBodyData& setDataImportTaskDetailInfo(Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo && dataImportTaskDetailInfo) { DARABONBA_PTR_SET_RVALUE(dataImportTaskDetailInfo_, dataImportTaskDetailInfo) };


  protected:
    std::shared_ptr<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo> dataImportTaskDetailInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
