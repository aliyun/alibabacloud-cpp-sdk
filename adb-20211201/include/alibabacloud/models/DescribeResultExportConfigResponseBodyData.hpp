// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESULTEXPORTCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESULTEXPORTCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeResultExportConfigResponseBodyDataOssInfo.hpp>
#include <alibabacloud/models/DescribeResultExportConfigResponseBodyDataSlsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeResultExportConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResultExportConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(OssInfo, ossInfo_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResultExportConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(OssInfo, ossInfo_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
    };
    DescribeResultExportConfigResponseBodyData() = default ;
    DescribeResultExportConfigResponseBodyData(const DescribeResultExportConfigResponseBodyData &) = default ;
    DescribeResultExportConfigResponseBodyData(DescribeResultExportConfigResponseBodyData &&) = default ;
    DescribeResultExportConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResultExportConfigResponseBodyData() = default ;
    DescribeResultExportConfigResponseBodyData& operator=(const DescribeResultExportConfigResponseBodyData &) = default ;
    DescribeResultExportConfigResponseBodyData& operator=(DescribeResultExportConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exportType_ != nullptr
        && this->ossInfo_ != nullptr && this->slsInfo_ != nullptr; };
    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline DescribeResultExportConfigResponseBodyData& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // ossInfo Field Functions 
    bool hasOssInfo() const { return this->ossInfo_ != nullptr;};
    void deleteOssInfo() { this->ossInfo_ = nullptr;};
    inline const Models::DescribeResultExportConfigResponseBodyDataOssInfo & ossInfo() const { DARABONBA_PTR_GET_CONST(ossInfo_, Models::DescribeResultExportConfigResponseBodyDataOssInfo) };
    inline Models::DescribeResultExportConfigResponseBodyDataOssInfo ossInfo() { DARABONBA_PTR_GET(ossInfo_, Models::DescribeResultExportConfigResponseBodyDataOssInfo) };
    inline DescribeResultExportConfigResponseBodyData& setOssInfo(const Models::DescribeResultExportConfigResponseBodyDataOssInfo & ossInfo) { DARABONBA_PTR_SET_VALUE(ossInfo_, ossInfo) };
    inline DescribeResultExportConfigResponseBodyData& setOssInfo(Models::DescribeResultExportConfigResponseBodyDataOssInfo && ossInfo) { DARABONBA_PTR_SET_RVALUE(ossInfo_, ossInfo) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const Models::DescribeResultExportConfigResponseBodyDataSlsInfo & slsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, Models::DescribeResultExportConfigResponseBodyDataSlsInfo) };
    inline Models::DescribeResultExportConfigResponseBodyDataSlsInfo slsInfo() { DARABONBA_PTR_GET(slsInfo_, Models::DescribeResultExportConfigResponseBodyDataSlsInfo) };
    inline DescribeResultExportConfigResponseBodyData& setSlsInfo(const Models::DescribeResultExportConfigResponseBodyDataSlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline DescribeResultExportConfigResponseBodyData& setSlsInfo(Models::DescribeResultExportConfigResponseBodyDataSlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    std::shared_ptr<string> exportType_ = nullptr;
    std::shared_ptr<Models::DescribeResultExportConfigResponseBodyDataOssInfo> ossInfo_ = nullptr;
    std::shared_ptr<Models::DescribeResultExportConfigResponseBodyDataSlsInfo> slsInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
