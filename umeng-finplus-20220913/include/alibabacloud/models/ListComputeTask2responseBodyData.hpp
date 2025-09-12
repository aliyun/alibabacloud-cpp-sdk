// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTETASK2RESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTETASK2RESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComputeTask2ResponseBodyDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class ListComputeTask2ResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeTask2ResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(totalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeTask2ResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(totalNum, totalNum_);
    };
    ListComputeTask2ResponseBodyData() = default ;
    ListComputeTask2ResponseBodyData(const ListComputeTask2ResponseBodyData &) = default ;
    ListComputeTask2ResponseBodyData(ListComputeTask2ResponseBodyData &&) = default ;
    ListComputeTask2ResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeTask2ResponseBodyData() = default ;
    ListComputeTask2ResponseBodyData& operator=(const ListComputeTask2ResponseBodyData &) = default ;
    ListComputeTask2ResponseBodyData& operator=(ListComputeTask2ResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->totalNum_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListComputeTask2ResponseBodyDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListComputeTask2ResponseBodyDataData>) };
    inline vector<Models::ListComputeTask2ResponseBodyDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListComputeTask2ResponseBodyDataData>) };
    inline ListComputeTask2ResponseBodyData& setData(const vector<Models::ListComputeTask2ResponseBodyDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListComputeTask2ResponseBodyData& setData(vector<Models::ListComputeTask2ResponseBodyDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListComputeTask2ResponseBodyData& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<Models::ListComputeTask2ResponseBodyDataData>> data_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
