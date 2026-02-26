// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMILARIMAGECLUSTER_HPP_
#define ALIBABACLOUD_MODELS_SIMILARIMAGECLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimilarImage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SimilarImageCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimilarImageCluster& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, SimilarImageCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    SimilarImageCluster() = default ;
    SimilarImageCluster(const SimilarImageCluster &) = default ;
    SimilarImageCluster(SimilarImageCluster &&) = default ;
    SimilarImageCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimilarImageCluster() = default ;
    SimilarImageCluster& operator=(const SimilarImageCluster &) = default ;
    SimilarImageCluster& operator=(SimilarImageCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->customLabels_ == nullptr && this->files_ == nullptr && this->objectId_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SimilarImageCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & getCustomLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & getCustomLabels() { DARABONBA_GET(customLabels_) };
    inline SimilarImageCluster& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline SimilarImageCluster& setCustomLabels(Darabonba::Json && customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<SimilarImage> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<SimilarImage>) };
    inline vector<SimilarImage> getFiles() { DARABONBA_PTR_GET(files_, vector<SimilarImage>) };
    inline SimilarImageCluster& setFiles(const vector<SimilarImage> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline SimilarImageCluster& setFiles(vector<SimilarImage> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline SimilarImageCluster& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline SimilarImageCluster& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The custom tag.
    Darabonba::Json customLabels_ {};
    // The similar images.
    shared_ptr<vector<SimilarImage>> files_ {};
    // The ID of the cluster.
    shared_ptr<string> objectId_ {};
    // The time when the cluster was updated.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
