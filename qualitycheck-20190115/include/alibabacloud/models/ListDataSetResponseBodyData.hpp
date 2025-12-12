// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSetResponseBodyDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListDataSetResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSetResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSetResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    ListDataSetResponseBodyData() = default ;
    ListDataSetResponseBodyData(const ListDataSetResponseBodyData &) = default ;
    ListDataSetResponseBodyData(ListDataSetResponseBodyData &&) = default ;
    ListDataSetResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSetResponseBodyData() = default ;
    ListDataSetResponseBodyData& operator=(const ListDataSetResponseBodyData &) = default ;
    ListDataSetResponseBodyData& operator=(ListDataSetResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListDataSetResponseBodyDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListDataSetResponseBodyDataData>) };
    inline vector<Models::ListDataSetResponseBodyDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListDataSetResponseBodyDataData>) };
    inline ListDataSetResponseBodyData& setData(const vector<Models::ListDataSetResponseBodyDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataSetResponseBodyData& setData(vector<Models::ListDataSetResponseBodyDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::ListDataSetResponseBodyDataData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
