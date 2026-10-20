// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDISPLAYKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDISPLAYKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class DeleteDisplayKnowledgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDisplayKnowledgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
      DARABONBA_PTR_TO_JSON(RecordIds, recordIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDisplayKnowledgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
      DARABONBA_PTR_FROM_JSON(RecordIds, recordIds_);
    };
    DeleteDisplayKnowledgeRequest() = default ;
    DeleteDisplayKnowledgeRequest(const DeleteDisplayKnowledgeRequest &) = default ;
    DeleteDisplayKnowledgeRequest(DeleteDisplayKnowledgeRequest &&) = default ;
    DeleteDisplayKnowledgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDisplayKnowledgeRequest() = default ;
    DeleteDisplayKnowledgeRequest& operator=(const DeleteDisplayKnowledgeRequest &) = default ;
    DeleteDisplayKnowledgeRequest& operator=(DeleteDisplayKnowledgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ragId_ == nullptr
        && this->recordIds_ == nullptr; };
    // ragId Field Functions 
    bool hasRagId() const { return this->ragId_ != nullptr;};
    void deleteRagId() { this->ragId_ = nullptr;};
    inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
    inline DeleteDisplayKnowledgeRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


    // recordIds Field Functions 
    bool hasRecordIds() const { return this->recordIds_ != nullptr;};
    void deleteRecordIds() { this->recordIds_ = nullptr;};
    inline const vector<int64_t> & getRecordIds() const { DARABONBA_PTR_GET_CONST(recordIds_, vector<int64_t>) };
    inline vector<int64_t> getRecordIds() { DARABONBA_PTR_GET(recordIds_, vector<int64_t>) };
    inline DeleteDisplayKnowledgeRequest& setRecordIds(const vector<int64_t> & recordIds) { DARABONBA_PTR_SET_VALUE(recordIds_, recordIds) };
    inline DeleteDisplayKnowledgeRequest& setRecordIds(vector<int64_t> && recordIds) { DARABONBA_PTR_SET_RVALUE(recordIds_, recordIds) };


  protected:
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> ragId_ {};
    // The IDs of the records to delete. You can specify up to 500 record IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> recordIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
