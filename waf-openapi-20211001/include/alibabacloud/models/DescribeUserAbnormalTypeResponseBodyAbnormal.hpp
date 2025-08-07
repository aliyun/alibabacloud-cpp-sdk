// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTYPERESPONSEBODYABNORMAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTYPERESPONSEBODYABNORMAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserAbnormalTypeResponseBodyAbnormal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAbnormalTypeResponseBodyAbnormal& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalCode, abnormalCode_);
      DARABONBA_PTR_TO_JSON(AbnormalCount, abnormalCount_);
      DARABONBA_PTR_TO_JSON(AbnormalParentType, abnormalParentType_);
      DARABONBA_PTR_TO_JSON(AbnormalType, abnormalType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAbnormalTypeResponseBodyAbnormal& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalCode, abnormalCode_);
      DARABONBA_PTR_FROM_JSON(AbnormalCount, abnormalCount_);
      DARABONBA_PTR_FROM_JSON(AbnormalParentType, abnormalParentType_);
      DARABONBA_PTR_FROM_JSON(AbnormalType, abnormalType_);
    };
    DescribeUserAbnormalTypeResponseBodyAbnormal() = default ;
    DescribeUserAbnormalTypeResponseBodyAbnormal(const DescribeUserAbnormalTypeResponseBodyAbnormal &) = default ;
    DescribeUserAbnormalTypeResponseBodyAbnormal(DescribeUserAbnormalTypeResponseBodyAbnormal &&) = default ;
    DescribeUserAbnormalTypeResponseBodyAbnormal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAbnormalTypeResponseBodyAbnormal() = default ;
    DescribeUserAbnormalTypeResponseBodyAbnormal& operator=(const DescribeUserAbnormalTypeResponseBodyAbnormal &) = default ;
    DescribeUserAbnormalTypeResponseBodyAbnormal& operator=(DescribeUserAbnormalTypeResponseBodyAbnormal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abnormalCode_ != nullptr
        && this->abnormalCount_ != nullptr && this->abnormalParentType_ != nullptr && this->abnormalType_ != nullptr; };
    // abnormalCode Field Functions 
    bool hasAbnormalCode() const { return this->abnormalCode_ != nullptr;};
    void deleteAbnormalCode() { this->abnormalCode_ = nullptr;};
    inline string abnormalCode() const { DARABONBA_PTR_GET_DEFAULT(abnormalCode_, "") };
    inline DescribeUserAbnormalTypeResponseBodyAbnormal& setAbnormalCode(string abnormalCode) { DARABONBA_PTR_SET_VALUE(abnormalCode_, abnormalCode) };


    // abnormalCount Field Functions 
    bool hasAbnormalCount() const { return this->abnormalCount_ != nullptr;};
    void deleteAbnormalCount() { this->abnormalCount_ = nullptr;};
    inline int64_t abnormalCount() const { DARABONBA_PTR_GET_DEFAULT(abnormalCount_, 0L) };
    inline DescribeUserAbnormalTypeResponseBodyAbnormal& setAbnormalCount(int64_t abnormalCount) { DARABONBA_PTR_SET_VALUE(abnormalCount_, abnormalCount) };


    // abnormalParentType Field Functions 
    bool hasAbnormalParentType() const { return this->abnormalParentType_ != nullptr;};
    void deleteAbnormalParentType() { this->abnormalParentType_ = nullptr;};
    inline string abnormalParentType() const { DARABONBA_PTR_GET_DEFAULT(abnormalParentType_, "") };
    inline DescribeUserAbnormalTypeResponseBodyAbnormal& setAbnormalParentType(string abnormalParentType) { DARABONBA_PTR_SET_VALUE(abnormalParentType_, abnormalParentType) };


    // abnormalType Field Functions 
    bool hasAbnormalType() const { return this->abnormalType_ != nullptr;};
    void deleteAbnormalType() { this->abnormalType_ = nullptr;};
    inline string abnormalType() const { DARABONBA_PTR_GET_DEFAULT(abnormalType_, "") };
    inline DescribeUserAbnormalTypeResponseBodyAbnormal& setAbnormalType(string abnormalType) { DARABONBA_PTR_SET_VALUE(abnormalType_, abnormalType) };


  protected:
    // The code of the risk.
    std::shared_ptr<string> abnormalCode_ = nullptr;
    // The number of risks.
    std::shared_ptr<int64_t> abnormalCount_ = nullptr;
    // The parent type of the risk.
    std::shared_ptr<string> abnormalParentType_ = nullptr;
    // The type of the risk.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of risks.
    std::shared_ptr<string> abnormalType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
