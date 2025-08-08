// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsertAiOutboundPhoneNumsResponseBodyDataFailInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class InsertAiOutboundPhoneNumsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertAiOutboundPhoneNumsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailInfo, failInfo_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, InsertAiOutboundPhoneNumsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailInfo, failInfo_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    InsertAiOutboundPhoneNumsResponseBodyData() = default ;
    InsertAiOutboundPhoneNumsResponseBodyData(const InsertAiOutboundPhoneNumsResponseBodyData &) = default ;
    InsertAiOutboundPhoneNumsResponseBodyData(InsertAiOutboundPhoneNumsResponseBodyData &&) = default ;
    InsertAiOutboundPhoneNumsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertAiOutboundPhoneNumsResponseBodyData() = default ;
    InsertAiOutboundPhoneNumsResponseBodyData& operator=(const InsertAiOutboundPhoneNumsResponseBodyData &) = default ;
    InsertAiOutboundPhoneNumsResponseBodyData& operator=(InsertAiOutboundPhoneNumsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failInfo_ != nullptr
        && this->successCount_ != nullptr && this->totalCount_ != nullptr; };
    // failInfo Field Functions 
    bool hasFailInfo() const { return this->failInfo_ != nullptr;};
    void deleteFailInfo() { this->failInfo_ = nullptr;};
    inline const vector<Models::InsertAiOutboundPhoneNumsResponseBodyDataFailInfo> & failInfo() const { DARABONBA_PTR_GET_CONST(failInfo_, vector<Models::InsertAiOutboundPhoneNumsResponseBodyDataFailInfo>) };
    inline vector<Models::InsertAiOutboundPhoneNumsResponseBodyDataFailInfo> failInfo() { DARABONBA_PTR_GET(failInfo_, vector<Models::InsertAiOutboundPhoneNumsResponseBodyDataFailInfo>) };
    inline InsertAiOutboundPhoneNumsResponseBodyData& setFailInfo(const vector<Models::InsertAiOutboundPhoneNumsResponseBodyDataFailInfo> & failInfo) { DARABONBA_PTR_SET_VALUE(failInfo_, failInfo) };
    inline InsertAiOutboundPhoneNumsResponseBodyData& setFailInfo(vector<Models::InsertAiOutboundPhoneNumsResponseBodyDataFailInfo> && failInfo) { DARABONBA_PTR_SET_RVALUE(failInfo_, failInfo) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline InsertAiOutboundPhoneNumsResponseBodyData& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline InsertAiOutboundPhoneNumsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::InsertAiOutboundPhoneNumsResponseBodyDataFailInfo>> failInfo_ = nullptr;
    std::shared_ptr<int32_t> successCount_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
