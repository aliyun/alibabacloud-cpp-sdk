// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONALINSTANCECONFIGRESPONSEBODYRESULTDATANODEDISKLIST_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONALINSTANCECONFIGRESPONSEBODYRESULTDATANODEDISKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRegionalInstanceConfigResponseBodyResultDataNodeDiskListSubClassificationConfines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& obj) { 
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(minSize, minSize_);
      DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
      DARABONBA_PTR_TO_JSON(subClassificationConfines, subClassificationConfines_);
      DARABONBA_PTR_TO_JSON(valueLimitSet, valueLimitSet_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(minSize, minSize_);
      DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
      DARABONBA_PTR_FROM_JSON(subClassificationConfines, subClassificationConfines_);
      DARABONBA_PTR_FROM_JSON(valueLimitSet, valueLimitSet_);
    };
    GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList() = default ;
    GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList(const GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList &) = default ;
    GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList(GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList &&) = default ;
    GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList() = default ;
    GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& operator=(const GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList &) = default ;
    GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& operator=(GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskType_ != nullptr
        && this->maxSize_ != nullptr && this->minSize_ != nullptr && this->scaleLimit_ != nullptr && this->subClassificationConfines_ != nullptr && this->valueLimitSet_ != nullptr; };
    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t maxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t minSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // scaleLimit Field Functions 
    bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
    void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
    inline int32_t scaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
    inline GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


    // subClassificationConfines Field Functions 
    bool hasSubClassificationConfines() const { return this->subClassificationConfines_ != nullptr;};
    void deleteSubClassificationConfines() { this->subClassificationConfines_ = nullptr;};
    inline const vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskListSubClassificationConfines> & subClassificationConfines() const { DARABONBA_PTR_GET_CONST(subClassificationConfines_, vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskListSubClassificationConfines>) };
    inline vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskListSubClassificationConfines> subClassificationConfines() { DARABONBA_PTR_GET(subClassificationConfines_, vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskListSubClassificationConfines>) };
    inline GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& setSubClassificationConfines(const vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskListSubClassificationConfines> & subClassificationConfines) { DARABONBA_PTR_SET_VALUE(subClassificationConfines_, subClassificationConfines) };
    inline GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& setSubClassificationConfines(vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskListSubClassificationConfines> && subClassificationConfines) { DARABONBA_PTR_SET_RVALUE(subClassificationConfines_, subClassificationConfines) };


    // valueLimitSet Field Functions 
    bool hasValueLimitSet() const { return this->valueLimitSet_ != nullptr;};
    void deleteValueLimitSet() { this->valueLimitSet_ = nullptr;};
    inline const vector<int32_t> & valueLimitSet() const { DARABONBA_PTR_GET_CONST(valueLimitSet_, vector<int32_t>) };
    inline vector<int32_t> valueLimitSet() { DARABONBA_PTR_GET(valueLimitSet_, vector<int32_t>) };
    inline GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& setValueLimitSet(const vector<int32_t> & valueLimitSet) { DARABONBA_PTR_SET_VALUE(valueLimitSet_, valueLimitSet) };
    inline GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList& setValueLimitSet(vector<int32_t> && valueLimitSet) { DARABONBA_PTR_SET_RVALUE(valueLimitSet_, valueLimitSet) };


  protected:
    std::shared_ptr<string> diskType_ = nullptr;
    std::shared_ptr<int32_t> maxSize_ = nullptr;
    std::shared_ptr<int32_t> minSize_ = nullptr;
    std::shared_ptr<int32_t> scaleLimit_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskListSubClassificationConfines>> subClassificationConfines_ = nullptr;
    std::shared_ptr<vector<int32_t>> valueLimitSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
