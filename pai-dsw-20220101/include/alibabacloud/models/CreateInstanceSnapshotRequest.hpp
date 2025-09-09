// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceSnapshotRequestLabels.hpp>
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
    virtual bool empty() const override { this->excludePaths_ != nullptr
        && this->imageUrl_ != nullptr && this->labels_ != nullptr && this->overwrite_ != nullptr && this->snapshotDescription_ != nullptr && this->snapshotName_ != nullptr; };
    // excludePaths Field Functions 
    bool hasExcludePaths() const { return this->excludePaths_ != nullptr;};
    void deleteExcludePaths() { this->excludePaths_ = nullptr;};
    inline const vector<string> & excludePaths() const { DARABONBA_PTR_GET_CONST(excludePaths_, vector<string>) };
    inline vector<string> excludePaths() { DARABONBA_PTR_GET(excludePaths_, vector<string>) };
    inline CreateInstanceSnapshotRequest& setExcludePaths(const vector<string> & excludePaths) { DARABONBA_PTR_SET_VALUE(excludePaths_, excludePaths) };
    inline CreateInstanceSnapshotRequest& setExcludePaths(vector<string> && excludePaths) { DARABONBA_PTR_SET_RVALUE(excludePaths_, excludePaths) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateInstanceSnapshotRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<CreateInstanceSnapshotRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<CreateInstanceSnapshotRequestLabels>) };
    inline vector<CreateInstanceSnapshotRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<CreateInstanceSnapshotRequestLabels>) };
    inline CreateInstanceSnapshotRequest& setLabels(const vector<CreateInstanceSnapshotRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateInstanceSnapshotRequest& setLabels(vector<CreateInstanceSnapshotRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool overwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline CreateInstanceSnapshotRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // snapshotDescription Field Functions 
    bool hasSnapshotDescription() const { return this->snapshotDescription_ != nullptr;};
    void deleteSnapshotDescription() { this->snapshotDescription_ = nullptr;};
    inline string snapshotDescription() const { DARABONBA_PTR_GET_DEFAULT(snapshotDescription_, "") };
    inline CreateInstanceSnapshotRequest& setSnapshotDescription(string snapshotDescription) { DARABONBA_PTR_SET_VALUE(snapshotDescription_, snapshotDescription) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string snapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline CreateInstanceSnapshotRequest& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


  protected:
    std::shared_ptr<vector<string>> excludePaths_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<vector<CreateInstanceSnapshotRequestLabels>> labels_ = nullptr;
    std::shared_ptr<bool> overwrite_ = nullptr;
    std::shared_ptr<string> snapshotDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> snapshotName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
