// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPSITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPSITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOpsItemResponseBodyOpsItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateOpsItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpsItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpsItem, opsItem_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpsItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpsItem, opsItem_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOpsItemResponseBody() = default ;
    CreateOpsItemResponseBody(const CreateOpsItemResponseBody &) = default ;
    CreateOpsItemResponseBody(CreateOpsItemResponseBody &&) = default ;
    CreateOpsItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpsItemResponseBody() = default ;
    CreateOpsItemResponseBody& operator=(const CreateOpsItemResponseBody &) = default ;
    CreateOpsItemResponseBody& operator=(CreateOpsItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opsItem_ == nullptr
        && return this->requestId_ == nullptr; };
    // opsItem Field Functions 
    bool hasOpsItem() const { return this->opsItem_ != nullptr;};
    void deleteOpsItem() { this->opsItem_ = nullptr;};
    inline const CreateOpsItemResponseBodyOpsItem & opsItem() const { DARABONBA_PTR_GET_CONST(opsItem_, CreateOpsItemResponseBodyOpsItem) };
    inline CreateOpsItemResponseBodyOpsItem opsItem() { DARABONBA_PTR_GET(opsItem_, CreateOpsItemResponseBodyOpsItem) };
    inline CreateOpsItemResponseBody& setOpsItem(const CreateOpsItemResponseBodyOpsItem & opsItem) { DARABONBA_PTR_SET_VALUE(opsItem_, opsItem) };
    inline CreateOpsItemResponseBody& setOpsItem(CreateOpsItemResponseBodyOpsItem && opsItem) { DARABONBA_PTR_SET_RVALUE(opsItem_, opsItem) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOpsItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the O\\&M item.
    std::shared_ptr<CreateOpsItemResponseBodyOpsItem> opsItem_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
