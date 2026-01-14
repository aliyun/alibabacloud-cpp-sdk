// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SELECTRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SelectResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(idempotentId, idempotentId_);
    };
    friend void from_json(const Darabonba::Json& j, SelectResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(idempotentId, idempotentId_);
    };
    SelectResourceRequest() = default ;
    SelectResourceRequest(const SelectResourceRequest &) = default ;
    SelectResourceRequest(SelectResourceRequest &&) = default ;
    SelectResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectResourceRequest() = default ;
    SelectResourceRequest& operator=(const SelectResourceRequest &) = default ;
    SelectResourceRequest& operator=(SelectResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idempotentId_ == nullptr; };
    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string getIdempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline SelectResourceRequest& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


  protected:
    shared_ptr<string> idempotentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
