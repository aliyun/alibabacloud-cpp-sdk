// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYKNOWLEDGEBASEFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYKNOWLEDGEBASEFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RetryKnowledgeBaseFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryKnowledgeBaseFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryKnowledgeBaseFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RetryKnowledgeBaseFilesRequest() = default ;
    RetryKnowledgeBaseFilesRequest(const RetryKnowledgeBaseFilesRequest &) = default ;
    RetryKnowledgeBaseFilesRequest(RetryKnowledgeBaseFilesRequest &&) = default ;
    RetryKnowledgeBaseFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryKnowledgeBaseFilesRequest() = default ;
    RetryKnowledgeBaseFilesRequest& operator=(const RetryKnowledgeBaseFilesRequest &) = default ;
    RetryKnowledgeBaseFilesRequest& operator=(RetryKnowledgeBaseFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileIds_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->regionId_ == nullptr; };
    // fileIds Field Functions 
    bool hasFileIds() const { return this->fileIds_ != nullptr;};
    void deleteFileIds() { this->fileIds_ = nullptr;};
    inline string getFileIds() const { DARABONBA_PTR_GET_DEFAULT(fileIds_, "") };
    inline RetryKnowledgeBaseFilesRequest& setFileIds(string fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline RetryKnowledgeBaseFilesRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RetryKnowledgeBaseFilesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> fileIds_ {};
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
