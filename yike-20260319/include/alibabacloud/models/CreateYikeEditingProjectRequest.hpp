// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEYIKEEDITINGPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEYIKEEDITINGPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class CreateYikeEditingProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateYikeEditingProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(MaterialMaps, materialMaps_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateYikeEditingProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(MaterialMaps, materialMaps_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateYikeEditingProjectRequest() = default ;
    CreateYikeEditingProjectRequest(const CreateYikeEditingProjectRequest &) = default ;
    CreateYikeEditingProjectRequest(CreateYikeEditingProjectRequest &&) = default ;
    CreateYikeEditingProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateYikeEditingProjectRequest() = default ;
    CreateYikeEditingProjectRequest& operator=(const CreateYikeEditingProjectRequest &) = default ;
    CreateYikeEditingProjectRequest& operator=(CreateYikeEditingProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverURL_ == nullptr
        && this->materialMaps_ == nullptr && this->timeline_ == nullptr && this->title_ == nullptr; };
    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline CreateYikeEditingProjectRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // materialMaps Field Functions 
    bool hasMaterialMaps() const { return this->materialMaps_ != nullptr;};
    void deleteMaterialMaps() { this->materialMaps_ = nullptr;};
    inline string getMaterialMaps() const { DARABONBA_PTR_GET_DEFAULT(materialMaps_, "") };
    inline CreateYikeEditingProjectRequest& setMaterialMaps(string materialMaps) { DARABONBA_PTR_SET_VALUE(materialMaps_, materialMaps) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline string getTimeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
    inline CreateYikeEditingProjectRequest& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateYikeEditingProjectRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> coverURL_ {};
    shared_ptr<string> materialMaps_ {};
    shared_ptr<string> timeline_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
