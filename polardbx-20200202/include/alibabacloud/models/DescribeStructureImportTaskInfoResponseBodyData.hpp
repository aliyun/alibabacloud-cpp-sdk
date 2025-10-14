// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRUCTUREIMPORTTASKINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRUCTUREIMPORTTASKINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeStructureImportTaskInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStructureImportTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SlinkStage, slinkStage_);
      DARABONBA_PTR_TO_JSON(StructureImportResult, structureImportResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStructureImportTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SlinkStage, slinkStage_);
      DARABONBA_PTR_FROM_JSON(StructureImportResult, structureImportResult_);
    };
    DescribeStructureImportTaskInfoResponseBodyData() = default ;
    DescribeStructureImportTaskInfoResponseBodyData(const DescribeStructureImportTaskInfoResponseBodyData &) = default ;
    DescribeStructureImportTaskInfoResponseBodyData(DescribeStructureImportTaskInfoResponseBodyData &&) = default ;
    DescribeStructureImportTaskInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStructureImportTaskInfoResponseBodyData() = default ;
    DescribeStructureImportTaskInfoResponseBodyData& operator=(const DescribeStructureImportTaskInfoResponseBodyData &) = default ;
    DescribeStructureImportTaskInfoResponseBodyData& operator=(DescribeStructureImportTaskInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slinkStage_ == nullptr
        && return this->structureImportResult_ == nullptr; };
    // slinkStage Field Functions 
    bool hasSlinkStage() const { return this->slinkStage_ != nullptr;};
    void deleteSlinkStage() { this->slinkStage_ = nullptr;};
    inline string slinkStage() const { DARABONBA_PTR_GET_DEFAULT(slinkStage_, "") };
    inline DescribeStructureImportTaskInfoResponseBodyData& setSlinkStage(string slinkStage) { DARABONBA_PTR_SET_VALUE(slinkStage_, slinkStage) };


    // structureImportResult Field Functions 
    bool hasStructureImportResult() const { return this->structureImportResult_ != nullptr;};
    void deleteStructureImportResult() { this->structureImportResult_ = nullptr;};
    inline const Models::DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult & structureImportResult() const { DARABONBA_PTR_GET_CONST(structureImportResult_, Models::DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult) };
    inline Models::DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult structureImportResult() { DARABONBA_PTR_GET(structureImportResult_, Models::DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult) };
    inline DescribeStructureImportTaskInfoResponseBodyData& setStructureImportResult(const Models::DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult & structureImportResult) { DARABONBA_PTR_SET_VALUE(structureImportResult_, structureImportResult) };
    inline DescribeStructureImportTaskInfoResponseBodyData& setStructureImportResult(Models::DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult && structureImportResult) { DARABONBA_PTR_SET_RVALUE(structureImportResult_, structureImportResult) };


  protected:
    std::shared_ptr<string> slinkStage_ = nullptr;
    std::shared_ptr<Models::DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult> structureImportResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
