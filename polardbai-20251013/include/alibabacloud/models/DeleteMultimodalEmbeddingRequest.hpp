// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMULTIMODALEMBEDDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMULTIMODALEMBEDDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class DeleteMultimodalEmbeddingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMultimodalEmbeddingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Embedding, embedding_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMultimodalEmbeddingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Embedding, embedding_);
    };
    DeleteMultimodalEmbeddingRequest() = default ;
    DeleteMultimodalEmbeddingRequest(const DeleteMultimodalEmbeddingRequest &) = default ;
    DeleteMultimodalEmbeddingRequest(DeleteMultimodalEmbeddingRequest &&) = default ;
    DeleteMultimodalEmbeddingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMultimodalEmbeddingRequest() = default ;
    DeleteMultimodalEmbeddingRequest& operator=(const DeleteMultimodalEmbeddingRequest &) = default ;
    DeleteMultimodalEmbeddingRequest& operator=(DeleteMultimodalEmbeddingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->embedding_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteMultimodalEmbeddingRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // embedding Field Functions 
    bool hasEmbedding() const { return this->embedding_ != nullptr;};
    void deleteEmbedding() { this->embedding_ = nullptr;};
    inline string getEmbedding() const { DARABONBA_PTR_GET_DEFAULT(embedding_, "") };
    inline DeleteMultimodalEmbeddingRequest& setEmbedding(string embedding) { DARABONBA_PTR_SET_VALUE(embedding_, embedding) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> embedding_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
