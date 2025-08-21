// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONALINSTANCECONFIGRESPONSEBODYRESULTMASTERDISKLIST_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONALINSTANCECONFIGRESPONSEBODYRESULTMASTERDISKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionalInstanceConfigResponseBodyResultMasterDiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionalInstanceConfigResponseBodyResultMasterDiskList& obj) { 
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(minSize, minSize_);
      DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
      DARABONBA_PTR_TO_JSON(subClassificationConfines, subClassificationConfines_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionalInstanceConfigResponseBodyResultMasterDiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(minSize, minSize_);
      DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
      DARABONBA_PTR_FROM_JSON(subClassificationConfines, subClassificationConfines_);
    };
    GetRegionalInstanceConfigResponseBodyResultMasterDiskList() = default ;
    GetRegionalInstanceConfigResponseBodyResultMasterDiskList(const GetRegionalInstanceConfigResponseBodyResultMasterDiskList &) = default ;
    GetRegionalInstanceConfigResponseBodyResultMasterDiskList(GetRegionalInstanceConfigResponseBodyResultMasterDiskList &&) = default ;
    GetRegionalInstanceConfigResponseBodyResultMasterDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionalInstanceConfigResponseBodyResultMasterDiskList() = default ;
    GetRegionalInstanceConfigResponseBodyResultMasterDiskList& operator=(const GetRegionalInstanceConfigResponseBodyResultMasterDiskList &) = default ;
    GetRegionalInstanceConfigResponseBodyResultMasterDiskList& operator=(GetRegionalInstanceConfigResponseBodyResultMasterDiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskType_ != nullptr
        && this->maxSize_ != nullptr && this->minSize_ != nullptr && this->scaleLimit_ != nullptr && this->subClassificationConfines_ != nullptr; };
    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline GetRegionalInstanceConfigResponseBodyResultMasterDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t maxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline GetRegionalInstanceConfigResponseBodyResultMasterDiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t minSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline GetRegionalInstanceConfigResponseBodyResultMasterDiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // scaleLimit Field Functions 
    bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
    void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
    inline int32_t scaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
    inline GetRegionalInstanceConfigResponseBodyResultMasterDiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


    // subClassificationConfines Field Functions 
    bool hasSubClassificationConfines() const { return this->subClassificationConfines_ != nullptr;};
    void deleteSubClassificationConfines() { this->subClassificationConfines_ = nullptr;};
    inline const vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines> & subClassificationConfines() const { DARABONBA_PTR_GET_CONST(subClassificationConfines_, vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines>) };
    inline vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines> subClassificationConfines() { DARABONBA_PTR_GET(subClassificationConfines_, vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines>) };
    inline GetRegionalInstanceConfigResponseBodyResultMasterDiskList& setSubClassificationConfines(const vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines> & subClassificationConfines) { DARABONBA_PTR_SET_VALUE(subClassificationConfines_, subClassificationConfines) };
    inline GetRegionalInstanceConfigResponseBodyResultMasterDiskList& setSubClassificationConfines(vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines> && subClassificationConfines) { DARABONBA_PTR_SET_RVALUE(subClassificationConfines_, subClassificationConfines) };


  protected:
    std::shared_ptr<string> diskType_ = nullptr;
    std::shared_ptr<int32_t> maxSize_ = nullptr;
    std::shared_ptr<int32_t> minSize_ = nullptr;
    std::shared_ptr<int32_t> scaleLimit_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskListSubClassificationConfines>> subClassificationConfines_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
