// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEESSDCACHECONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEESSDCACHECONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeEssdCacheConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEssdCacheConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnableEssdCache, enableEssdCache_);
      DARABONBA_PTR_TO_JSON(EssdCacheSize, essdCacheSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEssdCacheConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableEssdCache, enableEssdCache_);
      DARABONBA_PTR_FROM_JSON(EssdCacheSize, essdCacheSize_);
    };
    DescribeEssdCacheConfigResponseBodyData() = default ;
    DescribeEssdCacheConfigResponseBodyData(const DescribeEssdCacheConfigResponseBodyData &) = default ;
    DescribeEssdCacheConfigResponseBodyData(DescribeEssdCacheConfigResponseBodyData &&) = default ;
    DescribeEssdCacheConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEssdCacheConfigResponseBodyData() = default ;
    DescribeEssdCacheConfigResponseBodyData& operator=(const DescribeEssdCacheConfigResponseBodyData &) = default ;
    DescribeEssdCacheConfigResponseBodyData& operator=(DescribeEssdCacheConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableEssdCache_ == nullptr
        && return this->essdCacheSize_ == nullptr; };
    // enableEssdCache Field Functions 
    bool hasEnableEssdCache() const { return this->enableEssdCache_ != nullptr;};
    void deleteEnableEssdCache() { this->enableEssdCache_ = nullptr;};
    inline bool enableEssdCache() const { DARABONBA_PTR_GET_DEFAULT(enableEssdCache_, false) };
    inline DescribeEssdCacheConfigResponseBodyData& setEnableEssdCache(bool enableEssdCache) { DARABONBA_PTR_SET_VALUE(enableEssdCache_, enableEssdCache) };


    // essdCacheSize Field Functions 
    bool hasEssdCacheSize() const { return this->essdCacheSize_ != nullptr;};
    void deleteEssdCacheSize() { this->essdCacheSize_ = nullptr;};
    inline int32_t essdCacheSize() const { DARABONBA_PTR_GET_DEFAULT(essdCacheSize_, 0) };
    inline DescribeEssdCacheConfigResponseBodyData& setEssdCacheSize(int32_t essdCacheSize) { DARABONBA_PTR_SET_VALUE(essdCacheSize_, essdCacheSize) };


  protected:
    // Specifies whether to enable the disk cache feature.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableEssdCache_ = nullptr;
    // The disk cache size. Unit: GB.
    std::shared_ptr<int32_t> essdCacheSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
