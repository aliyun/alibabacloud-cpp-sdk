// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIDDINGREMAINLIMITNUMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBIDDINGREMAINLIMITNUMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetBiddingRemainLimitNumResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBiddingRemainLimitNumResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RemainNum, remainNum_);
    };
    friend void from_json(const Darabonba::Json& j, GetBiddingRemainLimitNumResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RemainNum, remainNum_);
    };
    GetBiddingRemainLimitNumResponseBodyData() = default ;
    GetBiddingRemainLimitNumResponseBodyData(const GetBiddingRemainLimitNumResponseBodyData &) = default ;
    GetBiddingRemainLimitNumResponseBodyData(GetBiddingRemainLimitNumResponseBodyData &&) = default ;
    GetBiddingRemainLimitNumResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBiddingRemainLimitNumResponseBodyData() = default ;
    GetBiddingRemainLimitNumResponseBodyData& operator=(const GetBiddingRemainLimitNumResponseBodyData &) = default ;
    GetBiddingRemainLimitNumResponseBodyData& operator=(GetBiddingRemainLimitNumResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remainNum_ == nullptr; };
    // remainNum Field Functions 
    bool hasRemainNum() const { return this->remainNum_ != nullptr;};
    void deleteRemainNum() { this->remainNum_ = nullptr;};
    inline int32_t remainNum() const { DARABONBA_PTR_GET_DEFAULT(remainNum_, 0) };
    inline GetBiddingRemainLimitNumResponseBodyData& setRemainNum(int32_t remainNum) { DARABONBA_PTR_SET_VALUE(remainNum_, remainNum) };


  protected:
    std::shared_ptr<int32_t> remainNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
