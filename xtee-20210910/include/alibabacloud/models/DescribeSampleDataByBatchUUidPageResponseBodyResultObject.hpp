// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATABYBATCHUUIDPAGERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATABYBATCHUUIDPAGERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSampleDataByBatchUUidPageResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleDataByBatchUUidPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(batchName, batchName_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(dataTagType, dataTagType_);
      DARABONBA_PTR_TO_JSON(dataValue, dataValue_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(lastSourceType, lastSourceType_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleDataByBatchUUidPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(batchName, batchName_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(dataTagType, dataTagType_);
      DARABONBA_PTR_FROM_JSON(dataValue, dataValue_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(lastSourceType, lastSourceType_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeSampleDataByBatchUUidPageResponseBodyResultObject() = default ;
    DescribeSampleDataByBatchUUidPageResponseBodyResultObject(const DescribeSampleDataByBatchUUidPageResponseBodyResultObject &) = default ;
    DescribeSampleDataByBatchUUidPageResponseBodyResultObject(DescribeSampleDataByBatchUUidPageResponseBodyResultObject &&) = default ;
    DescribeSampleDataByBatchUUidPageResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleDataByBatchUUidPageResponseBodyResultObject() = default ;
    DescribeSampleDataByBatchUUidPageResponseBodyResultObject& operator=(const DescribeSampleDataByBatchUUidPageResponseBodyResultObject &) = default ;
    DescribeSampleDataByBatchUUidPageResponseBodyResultObject& operator=(DescribeSampleDataByBatchUUidPageResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchName_ == nullptr
        && return this->creator_ == nullptr && return this->dataTagType_ == nullptr && return this->dataValue_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->lastSourceType_ == nullptr && return this->uuid_ == nullptr && return this->version_ == nullptr; };
    // batchName Field Functions 
    bool hasBatchName() const { return this->batchName_ != nullptr;};
    void deleteBatchName() { this->batchName_ = nullptr;};
    inline string batchName() const { DARABONBA_PTR_GET_DEFAULT(batchName_, "") };
    inline DescribeSampleDataByBatchUUidPageResponseBodyResultObject& setBatchName(string batchName) { DARABONBA_PTR_SET_VALUE(batchName_, batchName) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeSampleDataByBatchUUidPageResponseBodyResultObject& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataTagType Field Functions 
    bool hasDataTagType() const { return this->dataTagType_ != nullptr;};
    void deleteDataTagType() { this->dataTagType_ = nullptr;};
    inline string dataTagType() const { DARABONBA_PTR_GET_DEFAULT(dataTagType_, "") };
    inline DescribeSampleDataByBatchUUidPageResponseBodyResultObject& setDataTagType(string dataTagType) { DARABONBA_PTR_SET_VALUE(dataTagType_, dataTagType) };


    // dataValue Field Functions 
    bool hasDataValue() const { return this->dataValue_ != nullptr;};
    void deleteDataValue() { this->dataValue_ = nullptr;};
    inline string dataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
    inline DescribeSampleDataByBatchUUidPageResponseBodyResultObject& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeSampleDataByBatchUUidPageResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeSampleDataByBatchUUidPageResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // lastSourceType Field Functions 
    bool hasLastSourceType() const { return this->lastSourceType_ != nullptr;};
    void deleteLastSourceType() { this->lastSourceType_ = nullptr;};
    inline string lastSourceType() const { DARABONBA_PTR_GET_DEFAULT(lastSourceType_, "") };
    inline DescribeSampleDataByBatchUUidPageResponseBodyResultObject& setLastSourceType(string lastSourceType) { DARABONBA_PTR_SET_VALUE(lastSourceType_, lastSourceType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSampleDataByBatchUUidPageResponseBodyResultObject& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeSampleDataByBatchUUidPageResponseBodyResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Sample batch name
    std::shared_ptr<string> batchName_ = nullptr;
    // Creator
    std::shared_ptr<string> creator_ = nullptr;
    // Sample type
    std::shared_ptr<string> dataTagType_ = nullptr;
    // Data content
    std::shared_ptr<string> dataValue_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Last source
    std::shared_ptr<string> lastSourceType_ = nullptr;
    // Sample batch UUID
    std::shared_ptr<string> uuid_ = nullptr;
    // Version
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
