// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPSITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPSITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOpsItemResponseBodyOpsItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetOpsItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpsItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpsItem, opsItem_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpsItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpsItem, opsItem_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOpsItemResponseBody() = default ;
    GetOpsItemResponseBody(const GetOpsItemResponseBody &) = default ;
    GetOpsItemResponseBody(GetOpsItemResponseBody &&) = default ;
    GetOpsItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpsItemResponseBody() = default ;
    GetOpsItemResponseBody& operator=(const GetOpsItemResponseBody &) = default ;
    GetOpsItemResponseBody& operator=(GetOpsItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opsItem_ == nullptr
        && return this->requestId_ == nullptr; };
    // opsItem Field Functions 
    bool hasOpsItem() const { return this->opsItem_ != nullptr;};
    void deleteOpsItem() { this->opsItem_ = nullptr;};
    inline const GetOpsItemResponseBodyOpsItem & opsItem() const { DARABONBA_PTR_GET_CONST(opsItem_, GetOpsItemResponseBodyOpsItem) };
    inline GetOpsItemResponseBodyOpsItem opsItem() { DARABONBA_PTR_GET(opsItem_, GetOpsItemResponseBodyOpsItem) };
    inline GetOpsItemResponseBody& setOpsItem(const GetOpsItemResponseBodyOpsItem & opsItem) { DARABONBA_PTR_SET_VALUE(opsItem_, opsItem) };
    inline GetOpsItemResponseBody& setOpsItem(GetOpsItemResponseBodyOpsItem && opsItem) { DARABONBA_PTR_SET_RVALUE(opsItem_, opsItem) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOpsItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the O\\&M item.
    std::shared_ptr<GetOpsItemResponseBodyOpsItem> opsItem_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
