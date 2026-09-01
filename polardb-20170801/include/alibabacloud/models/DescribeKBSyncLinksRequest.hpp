// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKBSYNCLINKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKBSYNCLINKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeKBSyncLinksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKBSyncLinksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImPlatform, imPlatform_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKBSyncLinksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImPlatform, imPlatform_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeKBSyncLinksRequest() = default ;
    DescribeKBSyncLinksRequest(const DescribeKBSyncLinksRequest &) = default ;
    DescribeKBSyncLinksRequest(DescribeKBSyncLinksRequest &&) = default ;
    DescribeKBSyncLinksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKBSyncLinksRequest() = default ;
    DescribeKBSyncLinksRequest& operator=(const DescribeKBSyncLinksRequest &) = default ;
    DescribeKBSyncLinksRequest& operator=(DescribeKBSyncLinksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imPlatform_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->regionId_ == nullptr; };
    // imPlatform Field Functions 
    bool hasImPlatform() const { return this->imPlatform_ != nullptr;};
    void deleteImPlatform() { this->imPlatform_ = nullptr;};
    inline string getImPlatform() const { DARABONBA_PTR_GET_DEFAULT(imPlatform_, "") };
    inline DescribeKBSyncLinksRequest& setImPlatform(string imPlatform) { DARABONBA_PTR_SET_VALUE(imPlatform_, imPlatform) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline DescribeKBSyncLinksRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeKBSyncLinksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> imPlatform_ {};
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
