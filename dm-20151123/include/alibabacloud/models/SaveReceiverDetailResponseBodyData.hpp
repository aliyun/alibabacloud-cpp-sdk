// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVERECEIVERDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SAVERECEIVERDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveReceiverDetailResponseBodyDataDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SaveReceiverDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveReceiverDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
    };
    friend void from_json(const Darabonba::Json& j, SaveReceiverDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
    };
    SaveReceiverDetailResponseBodyData() = default ;
    SaveReceiverDetailResponseBodyData(const SaveReceiverDetailResponseBodyData &) = default ;
    SaveReceiverDetailResponseBodyData(SaveReceiverDetailResponseBodyData &&) = default ;
    SaveReceiverDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveReceiverDetailResponseBodyData() = default ;
    SaveReceiverDetailResponseBodyData& operator=(const SaveReceiverDetailResponseBodyData &) = default ;
    SaveReceiverDetailResponseBodyData& operator=(SaveReceiverDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<Models::SaveReceiverDetailResponseBodyDataDetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Models::SaveReceiverDetailResponseBodyDataDetail>) };
    inline vector<Models::SaveReceiverDetailResponseBodyDataDetail> detail() { DARABONBA_PTR_GET(detail_, vector<Models::SaveReceiverDetailResponseBodyDataDetail>) };
    inline SaveReceiverDetailResponseBodyData& setDetail(const vector<Models::SaveReceiverDetailResponseBodyDataDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline SaveReceiverDetailResponseBodyData& setDetail(vector<Models::SaveReceiverDetailResponseBodyDataDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


  protected:
    std::shared_ptr<vector<Models::SaveReceiverDetailResponseBodyDataDetail>> detail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
