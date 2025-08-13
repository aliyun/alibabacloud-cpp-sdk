// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucId, bucId_);
      DARABONBA_PTR_TO_JSON(Counts, counts_);
      DARABONBA_PTR_TO_JSON(FileMD5, fileMD5_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelScene, modelScene_);
      DARABONBA_PTR_TO_JSON(ParameterNum, parameterNum_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(UserLocalFileName, userLocalFileName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucId, bucId_);
      DARABONBA_PTR_FROM_JSON(Counts, counts_);
      DARABONBA_PTR_FROM_JSON(FileMD5, fileMD5_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelScene, modelScene_);
      DARABONBA_PTR_FROM_JSON(ParameterNum, parameterNum_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(UserLocalFileName, userLocalFileName_);
    };
    CreateModelRequest() = default ;
    CreateModelRequest(const CreateModelRequest &) = default ;
    CreateModelRequest(CreateModelRequest &&) = default ;
    CreateModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelRequest() = default ;
    CreateModelRequest& operator=(const CreateModelRequest &) = default ;
    CreateModelRequest& operator=(CreateModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucId_ != nullptr
        && this->counts_ != nullptr && this->fileMD5_ != nullptr && this->filePath_ != nullptr && this->modelName_ != nullptr && this->modelScene_ != nullptr
        && this->parameterNum_ != nullptr && this->regId_ != nullptr && this->userLocalFileName_ != nullptr; };
    // bucId Field Functions 
    bool hasBucId() const { return this->bucId_ != nullptr;};
    void deleteBucId() { this->bucId_ = nullptr;};
    inline string bucId() const { DARABONBA_PTR_GET_DEFAULT(bucId_, "") };
    inline CreateModelRequest& setBucId(string bucId) { DARABONBA_PTR_SET_VALUE(bucId_, bucId) };


    // counts Field Functions 
    bool hasCounts() const { return this->counts_ != nullptr;};
    void deleteCounts() { this->counts_ = nullptr;};
    inline string counts() const { DARABONBA_PTR_GET_DEFAULT(counts_, "") };
    inline CreateModelRequest& setCounts(string counts) { DARABONBA_PTR_SET_VALUE(counts_, counts) };


    // fileMD5 Field Functions 
    bool hasFileMD5() const { return this->fileMD5_ != nullptr;};
    void deleteFileMD5() { this->fileMD5_ = nullptr;};
    inline string fileMD5() const { DARABONBA_PTR_GET_DEFAULT(fileMD5_, "") };
    inline CreateModelRequest& setFileMD5(string fileMD5) { DARABONBA_PTR_SET_VALUE(fileMD5_, fileMD5) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateModelRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelScene Field Functions 
    bool hasModelScene() const { return this->modelScene_ != nullptr;};
    void deleteModelScene() { this->modelScene_ = nullptr;};
    inline string modelScene() const { DARABONBA_PTR_GET_DEFAULT(modelScene_, "") };
    inline CreateModelRequest& setModelScene(string modelScene) { DARABONBA_PTR_SET_VALUE(modelScene_, modelScene) };


    // parameterNum Field Functions 
    bool hasParameterNum() const { return this->parameterNum_ != nullptr;};
    void deleteParameterNum() { this->parameterNum_ = nullptr;};
    inline string parameterNum() const { DARABONBA_PTR_GET_DEFAULT(parameterNum_, "") };
    inline CreateModelRequest& setParameterNum(string parameterNum) { DARABONBA_PTR_SET_VALUE(parameterNum_, parameterNum) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateModelRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // userLocalFileName Field Functions 
    bool hasUserLocalFileName() const { return this->userLocalFileName_ != nullptr;};
    void deleteUserLocalFileName() { this->userLocalFileName_ = nullptr;};
    inline string userLocalFileName() const { DARABONBA_PTR_GET_DEFAULT(userLocalFileName_, "") };
    inline CreateModelRequest& setUserLocalFileName(string userLocalFileName) { DARABONBA_PTR_SET_VALUE(userLocalFileName_, userLocalFileName) };


  protected:
    // Submitter ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> bucId_ = nullptr;
    // Number of file rows.
    // 
    // This parameter is required.
    std::shared_ptr<string> counts_ = nullptr;
    // File MD5 value.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileMD5_ = nullptr;
    // File path.
    // 
    // This parameter is required.
    std::shared_ptr<string> filePath_ = nullptr;
    // Model name.
    // 
    // This parameter is required.
    std::shared_ptr<string> modelName_ = nullptr;
    // Model scenario.
    // 
    // This parameter is required.
    std::shared_ptr<string> modelScene_ = nullptr;
    // Number of file columns.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterNum_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Uploaded file name.
    // 
    // This parameter is required.
    std::shared_ptr<string> userLocalFileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
