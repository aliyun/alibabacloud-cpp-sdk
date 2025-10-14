// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERPLINSPECTIONTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERPLINSPECTIONTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRplInspectionTaskResponseBodyDataInspectionTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRplInspectionTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRplInspectionTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionTaskList, inspectionTaskList_);
      DARABONBA_PTR_TO_JSON(SlinkStage, slinkStage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRplInspectionTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionTaskList, inspectionTaskList_);
      DARABONBA_PTR_FROM_JSON(SlinkStage, slinkStage_);
    };
    DescribeRplInspectionTaskResponseBodyData() = default ;
    DescribeRplInspectionTaskResponseBodyData(const DescribeRplInspectionTaskResponseBodyData &) = default ;
    DescribeRplInspectionTaskResponseBodyData(DescribeRplInspectionTaskResponseBodyData &&) = default ;
    DescribeRplInspectionTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRplInspectionTaskResponseBodyData() = default ;
    DescribeRplInspectionTaskResponseBodyData& operator=(const DescribeRplInspectionTaskResponseBodyData &) = default ;
    DescribeRplInspectionTaskResponseBodyData& operator=(DescribeRplInspectionTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inspectionTaskList_ == nullptr
        && return this->slinkStage_ == nullptr; };
    // inspectionTaskList Field Functions 
    bool hasInspectionTaskList() const { return this->inspectionTaskList_ != nullptr;};
    void deleteInspectionTaskList() { this->inspectionTaskList_ = nullptr;};
    inline const vector<Models::DescribeRplInspectionTaskResponseBodyDataInspectionTaskList> & inspectionTaskList() const { DARABONBA_PTR_GET_CONST(inspectionTaskList_, vector<Models::DescribeRplInspectionTaskResponseBodyDataInspectionTaskList>) };
    inline vector<Models::DescribeRplInspectionTaskResponseBodyDataInspectionTaskList> inspectionTaskList() { DARABONBA_PTR_GET(inspectionTaskList_, vector<Models::DescribeRplInspectionTaskResponseBodyDataInspectionTaskList>) };
    inline DescribeRplInspectionTaskResponseBodyData& setInspectionTaskList(const vector<Models::DescribeRplInspectionTaskResponseBodyDataInspectionTaskList> & inspectionTaskList) { DARABONBA_PTR_SET_VALUE(inspectionTaskList_, inspectionTaskList) };
    inline DescribeRplInspectionTaskResponseBodyData& setInspectionTaskList(vector<Models::DescribeRplInspectionTaskResponseBodyDataInspectionTaskList> && inspectionTaskList) { DARABONBA_PTR_SET_RVALUE(inspectionTaskList_, inspectionTaskList) };


    // slinkStage Field Functions 
    bool hasSlinkStage() const { return this->slinkStage_ != nullptr;};
    void deleteSlinkStage() { this->slinkStage_ = nullptr;};
    inline string slinkStage() const { DARABONBA_PTR_GET_DEFAULT(slinkStage_, "") };
    inline DescribeRplInspectionTaskResponseBodyData& setSlinkStage(string slinkStage) { DARABONBA_PTR_SET_VALUE(slinkStage_, slinkStage) };


  protected:
    std::shared_ptr<vector<Models::DescribeRplInspectionTaskResponseBodyDataInspectionTaskList>> inspectionTaskList_ = nullptr;
    std::shared_ptr<string> slinkStage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
