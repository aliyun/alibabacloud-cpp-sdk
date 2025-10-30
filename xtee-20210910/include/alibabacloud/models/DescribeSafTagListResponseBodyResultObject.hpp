// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFTAGLISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFTAGLISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafTagListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafTagListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(tagDesc, tagDesc_);
      DARABONBA_PTR_TO_JSON(tagMean, tagMean_);
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
      DARABONBA_PTR_TO_JSON(tagState, tagState_);
      DARABONBA_PTR_TO_JSON(tagType, tagType_);
      DARABONBA_PTR_TO_JSON(tagUid, tagUid_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafTagListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(tagDesc, tagDesc_);
      DARABONBA_PTR_FROM_JSON(tagMean, tagMean_);
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
      DARABONBA_PTR_FROM_JSON(tagState, tagState_);
      DARABONBA_PTR_FROM_JSON(tagType, tagType_);
      DARABONBA_PTR_FROM_JSON(tagUid, tagUid_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    DescribeSafTagListResponseBodyResultObject() = default ;
    DescribeSafTagListResponseBodyResultObject(const DescribeSafTagListResponseBodyResultObject &) = default ;
    DescribeSafTagListResponseBodyResultObject(DescribeSafTagListResponseBodyResultObject &&) = default ;
    DescribeSafTagListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafTagListResponseBodyResultObject() = default ;
    DescribeSafTagListResponseBodyResultObject& operator=(const DescribeSafTagListResponseBodyResultObject &) = default ;
    DescribeSafTagListResponseBodyResultObject& operator=(DescribeSafTagListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagDesc_ == nullptr
        && return this->tagMean_ == nullptr && return this->tagName_ == nullptr && return this->tagState_ == nullptr && return this->tagType_ == nullptr && return this->tagUid_ == nullptr
        && return this->updateTime_ == nullptr; };
    // tagDesc Field Functions 
    bool hasTagDesc() const { return this->tagDesc_ != nullptr;};
    void deleteTagDesc() { this->tagDesc_ = nullptr;};
    inline string tagDesc() const { DARABONBA_PTR_GET_DEFAULT(tagDesc_, "") };
    inline DescribeSafTagListResponseBodyResultObject& setTagDesc(string tagDesc) { DARABONBA_PTR_SET_VALUE(tagDesc_, tagDesc) };


    // tagMean Field Functions 
    bool hasTagMean() const { return this->tagMean_ != nullptr;};
    void deleteTagMean() { this->tagMean_ = nullptr;};
    inline string tagMean() const { DARABONBA_PTR_GET_DEFAULT(tagMean_, "") };
    inline DescribeSafTagListResponseBodyResultObject& setTagMean(string tagMean) { DARABONBA_PTR_SET_VALUE(tagMean_, tagMean) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline DescribeSafTagListResponseBodyResultObject& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // tagState Field Functions 
    bool hasTagState() const { return this->tagState_ != nullptr;};
    void deleteTagState() { this->tagState_ = nullptr;};
    inline string tagState() const { DARABONBA_PTR_GET_DEFAULT(tagState_, "") };
    inline DescribeSafTagListResponseBodyResultObject& setTagState(string tagState) { DARABONBA_PTR_SET_VALUE(tagState_, tagState) };


    // tagType Field Functions 
    bool hasTagType() const { return this->tagType_ != nullptr;};
    void deleteTagType() { this->tagType_ = nullptr;};
    inline string tagType() const { DARABONBA_PTR_GET_DEFAULT(tagType_, "") };
    inline DescribeSafTagListResponseBodyResultObject& setTagType(string tagType) { DARABONBA_PTR_SET_VALUE(tagType_, tagType) };


    // tagUid Field Functions 
    bool hasTagUid() const { return this->tagUid_ != nullptr;};
    void deleteTagUid() { this->tagUid_ = nullptr;};
    inline string tagUid() const { DARABONBA_PTR_GET_DEFAULT(tagUid_, "") };
    inline DescribeSafTagListResponseBodyResultObject& setTagUid(string tagUid) { DARABONBA_PTR_SET_VALUE(tagUid_, tagUid) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeSafTagListResponseBodyResultObject& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Tag description.
    std::shared_ptr<string> tagDesc_ = nullptr;
    // Tag meaning.
    std::shared_ptr<string> tagMean_ = nullptr;
    // Tag name.
    std::shared_ptr<string> tagName_ = nullptr;
    // Tag identifier.
    std::shared_ptr<string> tagState_ = nullptr;
    // Tag type.
    std::shared_ptr<string> tagType_ = nullptr;
    // Unique identifier of the tag key.
    std::shared_ptr<string> tagUid_ = nullptr;
    // Update time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
