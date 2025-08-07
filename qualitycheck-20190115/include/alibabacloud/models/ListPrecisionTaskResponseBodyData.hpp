// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRECISIONTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPRECISIONTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrecisionTaskResponseBodyDataPrecisionTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListPrecisionTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrecisionTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PrecisionTask, precisionTask_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrecisionTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PrecisionTask, precisionTask_);
    };
    ListPrecisionTaskResponseBodyData() = default ;
    ListPrecisionTaskResponseBodyData(const ListPrecisionTaskResponseBodyData &) = default ;
    ListPrecisionTaskResponseBodyData(ListPrecisionTaskResponseBodyData &&) = default ;
    ListPrecisionTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrecisionTaskResponseBodyData() = default ;
    ListPrecisionTaskResponseBodyData& operator=(const ListPrecisionTaskResponseBodyData &) = default ;
    ListPrecisionTaskResponseBodyData& operator=(ListPrecisionTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->precisionTask_ != nullptr; };
    // precisionTask Field Functions 
    bool hasPrecisionTask() const { return this->precisionTask_ != nullptr;};
    void deletePrecisionTask() { this->precisionTask_ = nullptr;};
    inline const vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTask> & precisionTask() const { DARABONBA_PTR_GET_CONST(precisionTask_, vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTask>) };
    inline vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTask> precisionTask() { DARABONBA_PTR_GET(precisionTask_, vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTask>) };
    inline ListPrecisionTaskResponseBodyData& setPrecisionTask(const vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTask> & precisionTask) { DARABONBA_PTR_SET_VALUE(precisionTask_, precisionTask) };
    inline ListPrecisionTaskResponseBodyData& setPrecisionTask(vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTask> && precisionTask) { DARABONBA_PTR_SET_RVALUE(precisionTask_, precisionTask) };


  protected:
    std::shared_ptr<vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTask>> precisionTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
