// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONALINSTANCECONFIGRESPONSEBODYRESULTMASTERDISKLISTSUBCLASSIFICATIONCONFINES_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONALINSTANCECONFIGRESPONSEBODYRESULTMASTERDISKLISTSUBCLASSIFICATIONCONFINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines& obj) { 
      DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(minSize, minSize_);
      DARABONBA_PTR_TO_JSON(performanceLevel, performanceLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines& obj) { 
      DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(minSize, minSize_);
      DARABONBA_PTR_FROM_JSON(performanceLevel, performanceLevel_);
    };
    GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines() = default ;
    GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines(const GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines &) = default ;
    GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines(GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines &&) = default ;
    GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines() = default ;
    GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines& operator=(const GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines &) = default ;
    GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines& operator=(GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxSize_ != nullptr
        && this->minSize_ != nullptr && this->performanceLevel_ != nullptr; };
    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t maxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t minSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


  protected:
    std::shared_ptr<int32_t> maxSize_ = nullptr;
    std::shared_ptr<int32_t> minSize_ = nullptr;
    std::shared_ptr<string> performanceLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
