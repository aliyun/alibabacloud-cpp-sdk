// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetKnowledgeSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
    };
    GetKnowledgeSourceRequest() = default ;
    GetKnowledgeSourceRequest(const GetKnowledgeSourceRequest &) = default ;
    GetKnowledgeSourceRequest(GetKnowledgeSourceRequest &&) = default ;
    GetKnowledgeSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeSourceRequest() = default ;
    GetKnowledgeSourceRequest& operator=(const GetKnowledgeSourceRequest &) = default ;
    GetKnowledgeSourceRequest& operator=(GetKnowledgeSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->sourceId_ == nullptr; };
    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline GetKnowledgeSourceRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetKnowledgeSourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    // The ID of the knowledge base to which the source belongs.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The source ID.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
