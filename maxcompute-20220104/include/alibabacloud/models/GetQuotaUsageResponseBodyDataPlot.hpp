// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAUSAGERESPONSEBODYDATAPLOT_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAUSAGERESPONSEBODYDATAPLOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetQuotaUsageResponseBodyDataPlot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaUsageResponseBodyDataPlot& obj) { 
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(yAxis, yAxis_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaUsageResponseBodyDataPlot& obj) { 
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(yAxis, yAxis_);
    };
    GetQuotaUsageResponseBodyDataPlot() = default ;
    GetQuotaUsageResponseBodyDataPlot(const GetQuotaUsageResponseBodyDataPlot &) = default ;
    GetQuotaUsageResponseBodyDataPlot(GetQuotaUsageResponseBodyDataPlot &&) = default ;
    GetQuotaUsageResponseBodyDataPlot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaUsageResponseBodyDataPlot() = default ;
    GetQuotaUsageResponseBodyDataPlot& operator=(const GetQuotaUsageResponseBodyDataPlot &) = default ;
    GetQuotaUsageResponseBodyDataPlot& operator=(GetQuotaUsageResponseBodyDataPlot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->title_ != nullptr
        && this->type_ != nullptr && this->yAxis_ != nullptr; };
    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetQuotaUsageResponseBodyDataPlot& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetQuotaUsageResponseBodyDataPlot& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // yAxis Field Functions 
    bool hasYAxis() const { return this->yAxis_ != nullptr;};
    void deleteYAxis() { this->yAxis_ = nullptr;};
    inline const vector<string> & yAxis() const { DARABONBA_PTR_GET_CONST(yAxis_, vector<string>) };
    inline vector<string> yAxis() { DARABONBA_PTR_GET(yAxis_, vector<string>) };
    inline GetQuotaUsageResponseBodyDataPlot& setYAxis(const vector<string> & yAxis) { DARABONBA_PTR_SET_VALUE(yAxis_, yAxis) };
    inline GetQuotaUsageResponseBodyDataPlot& setYAxis(vector<string> && yAxis) { DARABONBA_PTR_SET_RVALUE(yAxis_, yAxis) };


  protected:
    // The title of the chart.
    std::shared_ptr<string> title_ = nullptr;
    // The type of the chart.
    std::shared_ptr<string> type_ = nullptr;
    // The data metric field.
    std::shared_ptr<vector<string>> yAxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
