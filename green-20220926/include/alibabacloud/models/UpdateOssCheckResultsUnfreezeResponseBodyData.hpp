// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSUNFREEZERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSUNFREEZERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateOssCheckResultsUnfreezeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOssCheckResultsUnfreezeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InvalidCount, invalidCount_);
      DARABONBA_PTR_TO_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOssCheckResultsUnfreezeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InvalidCount, invalidCount_);
      DARABONBA_PTR_FROM_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    UpdateOssCheckResultsUnfreezeResponseBodyData() = default ;
    UpdateOssCheckResultsUnfreezeResponseBodyData(const UpdateOssCheckResultsUnfreezeResponseBodyData &) = default ;
    UpdateOssCheckResultsUnfreezeResponseBodyData(UpdateOssCheckResultsUnfreezeResponseBodyData &&) = default ;
    UpdateOssCheckResultsUnfreezeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOssCheckResultsUnfreezeResponseBodyData() = default ;
    UpdateOssCheckResultsUnfreezeResponseBodyData& operator=(const UpdateOssCheckResultsUnfreezeResponseBodyData &) = default ;
    UpdateOssCheckResultsUnfreezeResponseBodyData& operator=(UpdateOssCheckResultsUnfreezeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invalidCount_ == nullptr
        && return this->repeatCount_ == nullptr && return this->successCount_ == nullptr && return this->totalCount_ == nullptr; };
    // invalidCount Field Functions 
    bool hasInvalidCount() const { return this->invalidCount_ != nullptr;};
    void deleteInvalidCount() { this->invalidCount_ = nullptr;};
    inline int32_t invalidCount() const { DARABONBA_PTR_GET_DEFAULT(invalidCount_, 0) };
    inline UpdateOssCheckResultsUnfreezeResponseBodyData& setInvalidCount(int32_t invalidCount) { DARABONBA_PTR_SET_VALUE(invalidCount_, invalidCount) };


    // repeatCount Field Functions 
    bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
    void deleteRepeatCount() { this->repeatCount_ = nullptr;};
    inline int32_t repeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, 0) };
    inline UpdateOssCheckResultsUnfreezeResponseBodyData& setRepeatCount(int32_t repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline UpdateOssCheckResultsUnfreezeResponseBodyData& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline UpdateOssCheckResultsUnfreezeResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> invalidCount_ = nullptr;
    std::shared_ptr<int32_t> repeatCount_ = nullptr;
    std::shared_ptr<int32_t> successCount_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
