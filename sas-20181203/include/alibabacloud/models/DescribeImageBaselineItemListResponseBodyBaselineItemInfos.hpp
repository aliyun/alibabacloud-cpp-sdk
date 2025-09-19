// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEITEMLISTRESPONSEBODYBASELINEITEMINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEITEMLISTRESPONSEBODYBASELINEITEMINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineItemListResponseBodyBaselineItemInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineItemListResponseBodyBaselineItemInfos& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineClassAlias, baselineClassAlias_);
      DARABONBA_PTR_TO_JSON(BaselineClassKey, baselineClassKey_);
      DARABONBA_PTR_TO_JSON(BaselineItemAlias, baselineItemAlias_);
      DARABONBA_PTR_TO_JSON(BaselineItemKey, baselineItemKey_);
      DARABONBA_PTR_TO_JSON(BaselineNameAlias, baselineNameAlias_);
      DARABONBA_PTR_TO_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineItemListResponseBodyBaselineItemInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineClassAlias, baselineClassAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineClassKey, baselineClassKey_);
      DARABONBA_PTR_FROM_JSON(BaselineItemAlias, baselineItemAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineItemKey, baselineItemKey_);
      DARABONBA_PTR_FROM_JSON(BaselineNameAlias, baselineNameAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    DescribeImageBaselineItemListResponseBodyBaselineItemInfos() = default ;
    DescribeImageBaselineItemListResponseBodyBaselineItemInfos(const DescribeImageBaselineItemListResponseBodyBaselineItemInfos &) = default ;
    DescribeImageBaselineItemListResponseBodyBaselineItemInfos(DescribeImageBaselineItemListResponseBodyBaselineItemInfos &&) = default ;
    DescribeImageBaselineItemListResponseBodyBaselineItemInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineItemListResponseBodyBaselineItemInfos() = default ;
    DescribeImageBaselineItemListResponseBodyBaselineItemInfos& operator=(const DescribeImageBaselineItemListResponseBodyBaselineItemInfos &) = default ;
    DescribeImageBaselineItemListResponseBodyBaselineItemInfos& operator=(DescribeImageBaselineItemListResponseBodyBaselineItemInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineClassAlias_ != nullptr
        && this->baselineClassKey_ != nullptr && this->baselineItemAlias_ != nullptr && this->baselineItemKey_ != nullptr && this->baselineNameAlias_ != nullptr && this->baselineNameKey_ != nullptr
        && this->status_ != nullptr && this->whiteList_ != nullptr; };
    // baselineClassAlias Field Functions 
    bool hasBaselineClassAlias() const { return this->baselineClassAlias_ != nullptr;};
    void deleteBaselineClassAlias() { this->baselineClassAlias_ = nullptr;};
    inline string baselineClassAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineClassAlias_, "") };
    inline DescribeImageBaselineItemListResponseBodyBaselineItemInfos& setBaselineClassAlias(string baselineClassAlias) { DARABONBA_PTR_SET_VALUE(baselineClassAlias_, baselineClassAlias) };


    // baselineClassKey Field Functions 
    bool hasBaselineClassKey() const { return this->baselineClassKey_ != nullptr;};
    void deleteBaselineClassKey() { this->baselineClassKey_ = nullptr;};
    inline string baselineClassKey() const { DARABONBA_PTR_GET_DEFAULT(baselineClassKey_, "") };
    inline DescribeImageBaselineItemListResponseBodyBaselineItemInfos& setBaselineClassKey(string baselineClassKey) { DARABONBA_PTR_SET_VALUE(baselineClassKey_, baselineClassKey) };


    // baselineItemAlias Field Functions 
    bool hasBaselineItemAlias() const { return this->baselineItemAlias_ != nullptr;};
    void deleteBaselineItemAlias() { this->baselineItemAlias_ = nullptr;};
    inline string baselineItemAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineItemAlias_, "") };
    inline DescribeImageBaselineItemListResponseBodyBaselineItemInfos& setBaselineItemAlias(string baselineItemAlias) { DARABONBA_PTR_SET_VALUE(baselineItemAlias_, baselineItemAlias) };


    // baselineItemKey Field Functions 
    bool hasBaselineItemKey() const { return this->baselineItemKey_ != nullptr;};
    void deleteBaselineItemKey() { this->baselineItemKey_ = nullptr;};
    inline string baselineItemKey() const { DARABONBA_PTR_GET_DEFAULT(baselineItemKey_, "") };
    inline DescribeImageBaselineItemListResponseBodyBaselineItemInfos& setBaselineItemKey(string baselineItemKey) { DARABONBA_PTR_SET_VALUE(baselineItemKey_, baselineItemKey) };


    // baselineNameAlias Field Functions 
    bool hasBaselineNameAlias() const { return this->baselineNameAlias_ != nullptr;};
    void deleteBaselineNameAlias() { this->baselineNameAlias_ = nullptr;};
    inline string baselineNameAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineNameAlias_, "") };
    inline DescribeImageBaselineItemListResponseBodyBaselineItemInfos& setBaselineNameAlias(string baselineNameAlias) { DARABONBA_PTR_SET_VALUE(baselineNameAlias_, baselineNameAlias) };


    // baselineNameKey Field Functions 
    bool hasBaselineNameKey() const { return this->baselineNameKey_ != nullptr;};
    void deleteBaselineNameKey() { this->baselineNameKey_ = nullptr;};
    inline string baselineNameKey() const { DARABONBA_PTR_GET_DEFAULT(baselineNameKey_, "") };
    inline DescribeImageBaselineItemListResponseBodyBaselineItemInfos& setBaselineNameKey(string baselineNameKey) { DARABONBA_PTR_SET_VALUE(baselineNameKey_, baselineNameKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeImageBaselineItemListResponseBodyBaselineItemInfos& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline int32_t whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, 0) };
    inline DescribeImageBaselineItemListResponseBodyBaselineItemInfos& setWhiteList(int32_t whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // The alias of the baseline type.
    std::shared_ptr<string> baselineClassAlias_ = nullptr;
    // The key of the baseline type.
    std::shared_ptr<string> baselineClassKey_ = nullptr;
    // The alias of the baseline check item.
    std::shared_ptr<string> baselineItemAlias_ = nullptr;
    // The key of the baseline check item.
    std::shared_ptr<string> baselineItemKey_ = nullptr;
    // The alias of the baseline.
    std::shared_ptr<string> baselineNameAlias_ = nullptr;
    // The key of the baseline name.
    std::shared_ptr<string> baselineNameKey_ = nullptr;
    // The status of the baseline risks. Valid values:
    // 
    // *   **0**: unfixed
    // *   **1**: fixed
    // *   **2**: pending verification
    // *   **3**: fixing failed
    std::shared_ptr<int32_t> status_ = nullptr;
    // Indicates whether the baseline check item is added to the whitelist. Valid values:
    // 
    // *   **0**: The baseline check item is not added to the whitelist.
    // *   **1**: The baseline check item is added to the whitelist.
    std::shared_ptr<int32_t> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
