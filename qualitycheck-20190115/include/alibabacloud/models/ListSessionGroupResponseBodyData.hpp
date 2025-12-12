// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSessionGroupResponseBodyDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSessionGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    ListSessionGroupResponseBodyData() = default ;
    ListSessionGroupResponseBodyData(const ListSessionGroupResponseBodyData &) = default ;
    ListSessionGroupResponseBodyData(ListSessionGroupResponseBodyData &&) = default ;
    ListSessionGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionGroupResponseBodyData() = default ;
    ListSessionGroupResponseBodyData& operator=(const ListSessionGroupResponseBodyData &) = default ;
    ListSessionGroupResponseBodyData& operator=(ListSessionGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListSessionGroupResponseBodyDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListSessionGroupResponseBodyDataData>) };
    inline vector<Models::ListSessionGroupResponseBodyDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListSessionGroupResponseBodyDataData>) };
    inline ListSessionGroupResponseBodyData& setData(const vector<Models::ListSessionGroupResponseBodyDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSessionGroupResponseBodyData& setData(vector<Models::ListSessionGroupResponseBodyDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::ListSessionGroupResponseBodyDataData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
