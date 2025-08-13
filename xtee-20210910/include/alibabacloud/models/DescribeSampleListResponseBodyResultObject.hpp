// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSampleListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(sampleTags, sampleTags_);
      DARABONBA_PTR_TO_JSON(sampleType, sampleType_);
      DARABONBA_PTR_TO_JSON(sampleValue, sampleValue_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(sampleTags, sampleTags_);
      DARABONBA_PTR_FROM_JSON(sampleType, sampleType_);
      DARABONBA_PTR_FROM_JSON(sampleValue, sampleValue_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeSampleListResponseBodyResultObject() = default ;
    DescribeSampleListResponseBodyResultObject(const DescribeSampleListResponseBodyResultObject &) = default ;
    DescribeSampleListResponseBodyResultObject(DescribeSampleListResponseBodyResultObject &&) = default ;
    DescribeSampleListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleListResponseBodyResultObject() = default ;
    DescribeSampleListResponseBodyResultObject& operator=(const DescribeSampleListResponseBodyResultObject &) = default ;
    DescribeSampleListResponseBodyResultObject& operator=(DescribeSampleListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->sampleTags_ != nullptr && this->sampleType_ != nullptr && this->sampleValue_ != nullptr && this->updateTime_ != nullptr && this->version_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSampleListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sampleTags Field Functions 
    bool hasSampleTags() const { return this->sampleTags_ != nullptr;};
    void deleteSampleTags() { this->sampleTags_ = nullptr;};
    inline string sampleTags() const { DARABONBA_PTR_GET_DEFAULT(sampleTags_, "") };
    inline DescribeSampleListResponseBodyResultObject& setSampleTags(string sampleTags) { DARABONBA_PTR_SET_VALUE(sampleTags_, sampleTags) };


    // sampleType Field Functions 
    bool hasSampleType() const { return this->sampleType_ != nullptr;};
    void deleteSampleType() { this->sampleType_ = nullptr;};
    inline int32_t sampleType() const { DARABONBA_PTR_GET_DEFAULT(sampleType_, 0) };
    inline DescribeSampleListResponseBodyResultObject& setSampleType(int32_t sampleType) { DARABONBA_PTR_SET_VALUE(sampleType_, sampleType) };


    // sampleValue Field Functions 
    bool hasSampleValue() const { return this->sampleValue_ != nullptr;};
    void deleteSampleValue() { this->sampleValue_ = nullptr;};
    inline string sampleValue() const { DARABONBA_PTR_GET_DEFAULT(sampleValue_, "") };
    inline DescribeSampleListResponseBodyResultObject& setSampleValue(string sampleValue) { DARABONBA_PTR_SET_VALUE(sampleValue_, sampleValue) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeSampleListResponseBodyResultObject& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeSampleListResponseBodyResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Database ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Sample tags.
    std::shared_ptr<string> sampleTags_ = nullptr;
    // Sample type
    std::shared_ptr<int32_t> sampleType_ = nullptr;
    // Sample value.
    std::shared_ptr<string> sampleValue_ = nullptr;
    // Update time.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // Version number.
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
