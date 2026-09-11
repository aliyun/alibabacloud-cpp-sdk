// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERKNOWLEDGEBASEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERKNOWLEDGEBASEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RegisterKnowledgeBaseFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterKnowledgeBaseFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterKnowledgeBaseFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RegisterKnowledgeBaseFileRequest() = default ;
    RegisterKnowledgeBaseFileRequest(const RegisterKnowledgeBaseFileRequest &) = default ;
    RegisterKnowledgeBaseFileRequest(RegisterKnowledgeBaseFileRequest &&) = default ;
    RegisterKnowledgeBaseFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterKnowledgeBaseFileRequest() = default ;
    RegisterKnowledgeBaseFileRequest& operator=(const RegisterKnowledgeBaseFileRequest &) = default ;
    RegisterKnowledgeBaseFileRequest& operator=(RegisterKnowledgeBaseFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filePath_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->regionId_ == nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline RegisterKnowledgeBaseFileRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline RegisterKnowledgeBaseFileRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RegisterKnowledgeBaseFileRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The OSS object key of the uploaded file, excluding the oss://BucketName/ prefix.
    // 
    // This parameter is required.
    shared_ptr<string> filePath_ {};
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The ID of the region where the knowledge base resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
