// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOCPARSERJOBADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOCPARSERJOBADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateDocParserJobAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDocParserJobAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_TO_JSON(RagInstanceId, ragInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDocParserJobAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_FROM_JSON(RagInstanceId, ragInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
    };
    CreateDocParserJobAdvanceRequest() = default ;
    CreateDocParserJobAdvanceRequest(const CreateDocParserJobAdvanceRequest &) = default ;
    CreateDocParserJobAdvanceRequest(CreateDocParserJobAdvanceRequest &&) = default ;
    CreateDocParserJobAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDocParserJobAdvanceRequest() = default ;
    CreateDocParserJobAdvanceRequest& operator=(const CreateDocParserJobAdvanceRequest &) = default ;
    CreateDocParserJobAdvanceRequest& operator=(CreateDocParserJobAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileUrlObject_ == nullptr && this->ragInstanceId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resultType_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateDocParserJobAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline CreateDocParserJobAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // ragInstanceId Field Functions 
    bool hasRagInstanceId() const { return this->ragInstanceId_ != nullptr;};
    void deleteRagInstanceId() { this->ragInstanceId_ = nullptr;};
    inline string getRagInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ragInstanceId_, "") };
    inline CreateDocParserJobAdvanceRequest& setRagInstanceId(string ragInstanceId) { DARABONBA_PTR_SET_VALUE(ragInstanceId_, ragInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDocParserJobAdvanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDocParserJobAdvanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline CreateDocParserJobAdvanceRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


  protected:
    shared_ptr<string> fileName_ {};
    shared_ptr<Darabonba::IStream> fileUrlObject_ {};
    shared_ptr<string> ragInstanceId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resultType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
