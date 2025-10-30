// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATAPAGERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATAPAGERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSampleDataPageResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleDataPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(dataTagType, dataTagType_);
      DARABONBA_PTR_TO_JSON(dataValue, dataValue_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(lastSourceType, lastSourceType_);
      DARABONBA_PTR_TO_JSON(updator, updator_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleDataPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(dataTagType, dataTagType_);
      DARABONBA_PTR_FROM_JSON(dataValue, dataValue_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(lastSourceType, lastSourceType_);
      DARABONBA_PTR_FROM_JSON(updator, updator_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeSampleDataPageResponseBodyResultObject() = default ;
    DescribeSampleDataPageResponseBodyResultObject(const DescribeSampleDataPageResponseBodyResultObject &) = default ;
    DescribeSampleDataPageResponseBodyResultObject(DescribeSampleDataPageResponseBodyResultObject &&) = default ;
    DescribeSampleDataPageResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleDataPageResponseBodyResultObject() = default ;
    DescribeSampleDataPageResponseBodyResultObject& operator=(const DescribeSampleDataPageResponseBodyResultObject &) = default ;
    DescribeSampleDataPageResponseBodyResultObject& operator=(DescribeSampleDataPageResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->dataTagType_ == nullptr && return this->dataValue_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->lastSourceType_ == nullptr
        && return this->updator_ == nullptr && return this->uuid_ == nullptr && return this->version_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeSampleDataPageResponseBodyResultObject& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataTagType Field Functions 
    bool hasDataTagType() const { return this->dataTagType_ != nullptr;};
    void deleteDataTagType() { this->dataTagType_ = nullptr;};
    inline string dataTagType() const { DARABONBA_PTR_GET_DEFAULT(dataTagType_, "") };
    inline DescribeSampleDataPageResponseBodyResultObject& setDataTagType(string dataTagType) { DARABONBA_PTR_SET_VALUE(dataTagType_, dataTagType) };


    // dataValue Field Functions 
    bool hasDataValue() const { return this->dataValue_ != nullptr;};
    void deleteDataValue() { this->dataValue_ = nullptr;};
    inline string dataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
    inline DescribeSampleDataPageResponseBodyResultObject& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeSampleDataPageResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeSampleDataPageResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // lastSourceType Field Functions 
    bool hasLastSourceType() const { return this->lastSourceType_ != nullptr;};
    void deleteLastSourceType() { this->lastSourceType_ = nullptr;};
    inline string lastSourceType() const { DARABONBA_PTR_GET_DEFAULT(lastSourceType_, "") };
    inline DescribeSampleDataPageResponseBodyResultObject& setLastSourceType(string lastSourceType) { DARABONBA_PTR_SET_VALUE(lastSourceType_, lastSourceType) };


    // updator Field Functions 
    bool hasUpdator() const { return this->updator_ != nullptr;};
    void deleteUpdator() { this->updator_ = nullptr;};
    inline string updator() const { DARABONBA_PTR_GET_DEFAULT(updator_, "") };
    inline DescribeSampleDataPageResponseBodyResultObject& setUpdator(string updator) { DARABONBA_PTR_SET_VALUE(updator_, updator) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSampleDataPageResponseBodyResultObject& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeSampleDataPageResponseBodyResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Creator
    std::shared_ptr<string> creator_ = nullptr;
    // Sample type
    std::shared_ptr<string> dataTagType_ = nullptr;
    // Content of the list entered in the text box
    std::shared_ptr<string> dataValue_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Last source
    std::shared_ptr<string> lastSourceType_ = nullptr;
    // Modifier
    std::shared_ptr<string> updator_ = nullptr;
    // UUID of the sample batch
    std::shared_ptr<string> uuid_ = nullptr;
    // Version number
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
