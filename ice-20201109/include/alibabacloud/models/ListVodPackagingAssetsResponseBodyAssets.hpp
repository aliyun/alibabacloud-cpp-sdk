// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODPACKAGINGASSETSRESPONSEBODYASSETS_HPP_
#define ALIBABACLOUD_MODELS_LISTVODPACKAGINGASSETSRESPONSEBODYASSETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListVodPackagingAssetsResponseBodyAssetsInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListVodPackagingAssetsResponseBodyAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodPackagingAssetsResponseBodyAssets& obj) { 
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodPackagingAssetsResponseBodyAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    ListVodPackagingAssetsResponseBodyAssets() = default ;
    ListVodPackagingAssetsResponseBodyAssets(const ListVodPackagingAssetsResponseBodyAssets &) = default ;
    ListVodPackagingAssetsResponseBodyAssets(ListVodPackagingAssetsResponseBodyAssets &&) = default ;
    ListVodPackagingAssetsResponseBodyAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodPackagingAssetsResponseBodyAssets() = default ;
    ListVodPackagingAssetsResponseBodyAssets& operator=(const ListVodPackagingAssetsResponseBodyAssets &) = default ;
    ListVodPackagingAssetsResponseBodyAssets& operator=(ListVodPackagingAssetsResponseBodyAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetName_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->groupName_ == nullptr && return this->input_ == nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline ListVodPackagingAssetsResponseBodyAssets& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListVodPackagingAssetsResponseBodyAssets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListVodPackagingAssetsResponseBodyAssets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListVodPackagingAssetsResponseBodyAssets& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::ListVodPackagingAssetsResponseBodyAssetsInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::ListVodPackagingAssetsResponseBodyAssetsInput) };
    inline Models::ListVodPackagingAssetsResponseBodyAssetsInput input() { DARABONBA_PTR_GET(input_, Models::ListVodPackagingAssetsResponseBodyAssetsInput) };
    inline ListVodPackagingAssetsResponseBodyAssets& setInput(const Models::ListVodPackagingAssetsResponseBodyAssetsInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline ListVodPackagingAssetsResponseBodyAssets& setInput(Models::ListVodPackagingAssetsResponseBodyAssetsInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    // The name of the VOD packaging asset.
    std::shared_ptr<string> assetName_ = nullptr;
    // The time when the asset was ingested. It follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The asset description.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the packaging group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The asset input configurations.
    std::shared_ptr<Models::ListVodPackagingAssetsResponseBodyAssetsInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
