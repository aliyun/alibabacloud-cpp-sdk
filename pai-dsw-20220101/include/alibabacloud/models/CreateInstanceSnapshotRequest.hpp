// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateInstanceSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludePaths, excludePaths_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(SnapshotDescription, snapshotDescription_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludePaths, excludePaths_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(SnapshotDescription, snapshotDescription_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
    };
    CreateInstanceSnapshotRequest() = default ;
    CreateInstanceSnapshotRequest(const CreateInstanceSnapshotRequest &) = default ;
    CreateInstanceSnapshotRequest(CreateInstanceSnapshotRequest &&) = default ;
    CreateInstanceSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceSnapshotRequest() = default ;
    CreateInstanceSnapshotRequest& operator=(const CreateInstanceSnapshotRequest &) = default ;
    CreateInstanceSnapshotRequest& operator=(CreateInstanceSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->excludePaths_ == nullptr
        && this->imageUrl_ == nullptr && this->labels_ == nullptr && this->overwrite_ == nullptr && this->snapshotDescription_ == nullptr && this->snapshotName_ == nullptr; };
    // excludePaths Field Functions 
    bool hasExcludePaths() const { return this->excludePaths_ != nullptr;};
    void deleteExcludePaths() { this->excludePaths_ = nullptr;};
    inline const vector<string> & getExcludePaths() const { DARABONBA_PTR_GET_CONST(excludePaths_, vector<string>) };
    inline vector<string> getExcludePaths() { DARABONBA_PTR_GET(excludePaths_, vector<string>) };
    inline CreateInstanceSnapshotRequest& setExcludePaths(const vector<string> & excludePaths) { DARABONBA_PTR_SET_VALUE(excludePaths_, excludePaths) };
    inline CreateInstanceSnapshotRequest& setExcludePaths(vector<string> && excludePaths) { DARABONBA_PTR_SET_RVALUE(excludePaths_, excludePaths) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateInstanceSnapshotRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<CreateInstanceSnapshotRequest::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<CreateInstanceSnapshotRequest::Labels>) };
    inline vector<CreateInstanceSnapshotRequest::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<CreateInstanceSnapshotRequest::Labels>) };
    inline CreateInstanceSnapshotRequest& setLabels(const vector<CreateInstanceSnapshotRequest::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateInstanceSnapshotRequest& setLabels(vector<CreateInstanceSnapshotRequest::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline CreateInstanceSnapshotRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // snapshotDescription Field Functions 
    bool hasSnapshotDescription() const { return this->snapshotDescription_ != nullptr;};
    void deleteSnapshotDescription() { this->snapshotDescription_ = nullptr;};
    inline string getSnapshotDescription() const { DARABONBA_PTR_GET_DEFAULT(snapshotDescription_, "") };
    inline CreateInstanceSnapshotRequest& setSnapshotDescription(string snapshotDescription) { DARABONBA_PTR_SET_VALUE(snapshotDescription_, snapshotDescription) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline CreateInstanceSnapshotRequest& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


  protected:
    shared_ptr<vector<string>> excludePaths_ {};
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    shared_ptr<vector<CreateInstanceSnapshotRequest::Labels>> labels_ {};
    shared_ptr<bool> overwrite_ {};
    shared_ptr<string> snapshotDescription_ {};
    // This parameter is required.
    shared_ptr<string> snapshotName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
