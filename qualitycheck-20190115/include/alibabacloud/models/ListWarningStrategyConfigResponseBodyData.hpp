// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGSTRATEGYCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGSTRATEGYCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWarningStrategyConfigResponseBodyDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListWarningStrategyConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningStrategyConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningStrategyConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    ListWarningStrategyConfigResponseBodyData() = default ;
    ListWarningStrategyConfigResponseBodyData(const ListWarningStrategyConfigResponseBodyData &) = default ;
    ListWarningStrategyConfigResponseBodyData(ListWarningStrategyConfigResponseBodyData &&) = default ;
    ListWarningStrategyConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningStrategyConfigResponseBodyData() = default ;
    ListWarningStrategyConfigResponseBodyData& operator=(const ListWarningStrategyConfigResponseBodyData &) = default ;
    ListWarningStrategyConfigResponseBodyData& operator=(ListWarningStrategyConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListWarningStrategyConfigResponseBodyDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListWarningStrategyConfigResponseBodyDataData>) };
    inline vector<Models::ListWarningStrategyConfigResponseBodyDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListWarningStrategyConfigResponseBodyDataData>) };
    inline ListWarningStrategyConfigResponseBodyData& setData(const vector<Models::ListWarningStrategyConfigResponseBodyDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWarningStrategyConfigResponseBodyData& setData(vector<Models::ListWarningStrategyConfigResponseBodyDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::ListWarningStrategyConfigResponseBodyDataData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
