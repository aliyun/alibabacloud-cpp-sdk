// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryAvatarResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(idempotentId, idempotentId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(idempotentId, idempotentId_);
    };
    QueryAvatarResourceRequest() = default ;
    QueryAvatarResourceRequest(const QueryAvatarResourceRequest &) = default ;
    QueryAvatarResourceRequest(QueryAvatarResourceRequest &&) = default ;
    QueryAvatarResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarResourceRequest() = default ;
    QueryAvatarResourceRequest& operator=(const QueryAvatarResourceRequest &) = default ;
    QueryAvatarResourceRequest& operator=(QueryAvatarResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idempotentId_ == nullptr; };
    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string idempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline QueryAvatarResourceRequest& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


  protected:
    std::shared_ptr<string> idempotentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
