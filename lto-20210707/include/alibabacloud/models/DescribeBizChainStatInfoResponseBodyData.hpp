// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBIZCHAINSTATINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBIZCHAINSTATINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeBizChainStatInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBizChainStatInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_TO_JSON(UsedCount, usedCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBizChainStatInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_FROM_JSON(UsedCount, usedCount_);
    };
    DescribeBizChainStatInfoResponseBodyData() = default ;
    DescribeBizChainStatInfoResponseBodyData(const DescribeBizChainStatInfoResponseBodyData &) = default ;
    DescribeBizChainStatInfoResponseBodyData(DescribeBizChainStatInfoResponseBodyData &&) = default ;
    DescribeBizChainStatInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBizChainStatInfoResponseBodyData() = default ;
    DescribeBizChainStatInfoResponseBodyData& operator=(const DescribeBizChainStatInfoResponseBodyData &) = default ;
    DescribeBizChainStatInfoResponseBodyData& operator=(DescribeBizChainStatInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainName_ == nullptr
        && return this->usedCount_ == nullptr; };
    // bizChainName Field Functions 
    bool hasBizChainName() const { return this->bizChainName_ != nullptr;};
    void deleteBizChainName() { this->bizChainName_ = nullptr;};
    inline string bizChainName() const { DARABONBA_PTR_GET_DEFAULT(bizChainName_, "") };
    inline DescribeBizChainStatInfoResponseBodyData& setBizChainName(string bizChainName) { DARABONBA_PTR_SET_VALUE(bizChainName_, bizChainName) };


    // usedCount Field Functions 
    bool hasUsedCount() const { return this->usedCount_ != nullptr;};
    void deleteUsedCount() { this->usedCount_ = nullptr;};
    inline int64_t usedCount() const { DARABONBA_PTR_GET_DEFAULT(usedCount_, 0L) };
    inline DescribeBizChainStatInfoResponseBodyData& setUsedCount(int64_t usedCount) { DARABONBA_PTR_SET_VALUE(usedCount_, usedCount) };


  protected:
    std::shared_ptr<string> bizChainName_ = nullptr;
    std::shared_ptr<int64_t> usedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
