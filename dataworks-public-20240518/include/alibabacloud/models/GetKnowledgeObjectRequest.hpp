// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEOBJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetKnowledgeObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(KnowledgeObjectId, knowledgeObjectId_);
      DARABONBA_PTR_TO_JSON(VersionNo, versionNo_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeObjectId, knowledgeObjectId_);
      DARABONBA_PTR_FROM_JSON(VersionNo, versionNo_);
    };
    GetKnowledgeObjectRequest() = default ;
    GetKnowledgeObjectRequest(const GetKnowledgeObjectRequest &) = default ;
    GetKnowledgeObjectRequest(GetKnowledgeObjectRequest &&) = default ;
    GetKnowledgeObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeObjectRequest() = default ;
    GetKnowledgeObjectRequest& operator=(const GetKnowledgeObjectRequest &) = default ;
    GetKnowledgeObjectRequest& operator=(GetKnowledgeObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->knowledgeObjectId_ == nullptr && this->versionNo_ == nullptr; };
    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline GetKnowledgeObjectRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeObjectId Field Functions 
    bool hasKnowledgeObjectId() const { return this->knowledgeObjectId_ != nullptr;};
    void deleteKnowledgeObjectId() { this->knowledgeObjectId_ = nullptr;};
    inline string getKnowledgeObjectId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeObjectId_, "") };
    inline GetKnowledgeObjectRequest& setKnowledgeObjectId(string knowledgeObjectId) { DARABONBA_PTR_SET_VALUE(knowledgeObjectId_, knowledgeObjectId) };


    // versionNo Field Functions 
    bool hasVersionNo() const { return this->versionNo_ != nullptr;};
    void deleteVersionNo() { this->versionNo_ = nullptr;};
    inline int64_t getVersionNo() const { DARABONBA_PTR_GET_DEFAULT(versionNo_, 0L) };
    inline GetKnowledgeObjectRequest& setVersionNo(int64_t versionNo) { DARABONBA_PTR_SET_VALUE(versionNo_, versionNo) };


  protected:
    // The ID of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The ID of the long-term business object.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeObjectId_ {};
    // Applies only to semantic models. Specifies the version to read. If omitted, the operation returns the published version if available, or the latest version otherwise.
    shared_ptr<int64_t> versionNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
