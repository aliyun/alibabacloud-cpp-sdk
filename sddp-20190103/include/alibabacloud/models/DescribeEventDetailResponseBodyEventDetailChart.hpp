// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENTDETAILCHART_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENTDETAILCHART_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventDetailResponseBodyEventDetailChartData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventDetailResponseBodyEventDetailChart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDetailResponseBodyEventDetailChart& obj) { 
      DARABONBA_PTR_TO_JSON(ChatType, chatType_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(XLabel, XLabel_);
      DARABONBA_PTR_TO_JSON(YLabel, YLabel_);
      DARABONBA_PTR_TO_JSON(ZLabel, ZLabel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDetailResponseBodyEventDetailChart& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatType, chatType_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(XLabel, XLabel_);
      DARABONBA_PTR_FROM_JSON(YLabel, YLabel_);
      DARABONBA_PTR_FROM_JSON(ZLabel, ZLabel_);
    };
    DescribeEventDetailResponseBodyEventDetailChart() = default ;
    DescribeEventDetailResponseBodyEventDetailChart(const DescribeEventDetailResponseBodyEventDetailChart &) = default ;
    DescribeEventDetailResponseBodyEventDetailChart(DescribeEventDetailResponseBodyEventDetailChart &&) = default ;
    DescribeEventDetailResponseBodyEventDetailChart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDetailResponseBodyEventDetailChart() = default ;
    DescribeEventDetailResponseBodyEventDetailChart& operator=(const DescribeEventDetailResponseBodyEventDetailChart &) = default ;
    DescribeEventDetailResponseBodyEventDetailChart& operator=(DescribeEventDetailResponseBodyEventDetailChart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chatType_ != nullptr
        && this->data_ != nullptr && this->label_ != nullptr && this->name_ != nullptr && this->type_ != nullptr && this->XLabel_ != nullptr
        && this->YLabel_ != nullptr && this->ZLabel_ != nullptr; };
    // chatType Field Functions 
    bool hasChatType() const { return this->chatType_ != nullptr;};
    void deleteChatType() { this->chatType_ = nullptr;};
    inline int32_t chatType() const { DARABONBA_PTR_GET_DEFAULT(chatType_, 0) };
    inline DescribeEventDetailResponseBodyEventDetailChart& setChatType(int32_t chatType) { DARABONBA_PTR_SET_VALUE(chatType_, chatType) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeEventDetailResponseBodyEventDetailChartData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeEventDetailResponseBodyEventDetailChartData) };
    inline Models::DescribeEventDetailResponseBodyEventDetailChartData data() { DARABONBA_PTR_GET(data_, Models::DescribeEventDetailResponseBodyEventDetailChartData) };
    inline DescribeEventDetailResponseBodyEventDetailChart& setData(const Models::DescribeEventDetailResponseBodyEventDetailChartData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEventDetailResponseBodyEventDetailChart& setData(Models::DescribeEventDetailResponseBodyEventDetailChartData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeEventDetailResponseBodyEventDetailChart& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEventDetailResponseBodyEventDetailChart& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEventDetailResponseBodyEventDetailChart& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // XLabel Field Functions 
    bool hasXLabel() const { return this->XLabel_ != nullptr;};
    void deleteXLabel() { this->XLabel_ = nullptr;};
    inline string XLabel() const { DARABONBA_PTR_GET_DEFAULT(XLabel_, "") };
    inline DescribeEventDetailResponseBodyEventDetailChart& setXLabel(string XLabel) { DARABONBA_PTR_SET_VALUE(XLabel_, XLabel) };


    // YLabel Field Functions 
    bool hasYLabel() const { return this->YLabel_ != nullptr;};
    void deleteYLabel() { this->YLabel_ = nullptr;};
    inline string YLabel() const { DARABONBA_PTR_GET_DEFAULT(YLabel_, "") };
    inline DescribeEventDetailResponseBodyEventDetailChart& setYLabel(string YLabel) { DARABONBA_PTR_SET_VALUE(YLabel_, YLabel) };


    // ZLabel Field Functions 
    bool hasZLabel() const { return this->ZLabel_ != nullptr;};
    void deleteZLabel() { this->ZLabel_ = nullptr;};
    inline string ZLabel() const { DARABONBA_PTR_GET_DEFAULT(ZLabel_, "") };
    inline DescribeEventDetailResponseBodyEventDetailChart& setZLabel(string ZLabel) { DARABONBA_PTR_SET_VALUE(ZLabel_, ZLabel) };


  protected:
    // The type of the chart. Valid values:
    // 
    // *   **1**: column chart
    // *   **2**: line chart
    // 
    // >This field will be returned only when NewAlarm is true.
    std::shared_ptr<int32_t> chatType_ = nullptr;
    // The data in the baseline behavior profile of the anomalous event.
    std::shared_ptr<Models::DescribeEventDetailResponseBodyEventDetailChartData> data_ = nullptr;
    // The name of the baseline behavior chart of the anomalous event.
    std::shared_ptr<string> label_ = nullptr;
    // Icon title.
    // 
    // >This field will be returned only when NewAlarm is true.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the chart. Valid values:
    // 
    // *   **1**: column chart
    // *   **2**: line chart
    std::shared_ptr<string> type_ = nullptr;
    // The descriptive label of data items on the X axis.
    std::shared_ptr<string> XLabel_ = nullptr;
    // The descriptive label of data items on the Y axis.
    std::shared_ptr<string> YLabel_ = nullptr;
    // The descriptive label of data items on the Z axis.
    // 
    // >This field will be returned only when NewAlarm is true.
    std::shared_ptr<string> ZLabel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
