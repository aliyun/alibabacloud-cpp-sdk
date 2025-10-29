// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETSRESPONSEBODYPAGINGINFODATAASSETSDATAASSETTAGMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETSRESPONSEBODYPAGINGINFODATAASSETSDATAASSETTAGMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings& obj) { 
      DARABONBA_PTR_TO_JSON(AutoTraceEnabled, autoTraceEnabled_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DataAssetId, dataAssetId_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(TagSource, tagSource_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoTraceEnabled, autoTraceEnabled_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DataAssetId, dataAssetId_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(TagSource, tagSource_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings() = default ;
    ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings(const ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings &) = default ;
    ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings(ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings &&) = default ;
    ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings() = default ;
    ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings& operator=(const ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings &) = default ;
    ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings& operator=(ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoTraceEnabled_ == nullptr
        && return this->creator_ == nullptr && return this->dataAssetId_ == nullptr && return this->key_ == nullptr && return this->tagSource_ == nullptr && return this->value_ == nullptr; };
    // autoTraceEnabled Field Functions 
    bool hasAutoTraceEnabled() const { return this->autoTraceEnabled_ != nullptr;};
    void deleteAutoTraceEnabled() { this->autoTraceEnabled_ = nullptr;};
    inline bool autoTraceEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoTraceEnabled_, false) };
    inline ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings& setAutoTraceEnabled(bool autoTraceEnabled) { DARABONBA_PTR_SET_VALUE(autoTraceEnabled_, autoTraceEnabled) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataAssetId Field Functions 
    bool hasDataAssetId() const { return this->dataAssetId_ != nullptr;};
    void deleteDataAssetId() { this->dataAssetId_ = nullptr;};
    inline string dataAssetId() const { DARABONBA_PTR_GET_DEFAULT(dataAssetId_, "") };
    inline ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings& setDataAssetId(string dataAssetId) { DARABONBA_PTR_SET_VALUE(dataAssetId_, dataAssetId) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // tagSource Field Functions 
    bool hasTagSource() const { return this->tagSource_ != nullptr;};
    void deleteTagSource() { this->tagSource_ = nullptr;};
    inline string tagSource() const { DARABONBA_PTR_GET_DEFAULT(tagSource_, "") };
    inline ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings& setTagSource(string tagSource) { DARABONBA_PTR_SET_VALUE(tagSource_, tagSource) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListDataAssetsResponseBodyPagingInfoDataAssetsDataAssetTagMappings& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Indicates whether the lineage-based automatic backtrack feature is enabled for the mapping.
    std::shared_ptr<bool> autoTraceEnabled_ = nullptr;
    // The creator of the mapping between the data asset and the tag.
    std::shared_ptr<string> creator_ = nullptr;
    // The data asset ID.
    std::shared_ptr<string> dataAssetId_ = nullptr;
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
    // The way in which the mapping between the data asset and the tag is created. Valid values:
    // 
    // *   System
    // *   UserDefined
    std::shared_ptr<string> tagSource_ = nullptr;
    // The tag value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
