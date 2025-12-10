// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class DeleteAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionType, deletionType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionType, deletionType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAccountResponseBody() = default ;
    DeleteAccountResponseBody(const DeleteAccountResponseBody &) = default ;
    DeleteAccountResponseBody(DeleteAccountResponseBody &&) = default ;
    DeleteAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccountResponseBody() = default ;
    DeleteAccountResponseBody& operator=(const DeleteAccountResponseBody &) = default ;
    DeleteAccountResponseBody& operator=(DeleteAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletionType_ == nullptr
        && return this->requestId_ == nullptr; };
    // deletionType Field Functions 
    bool hasDeletionType() const { return this->deletionType_ != nullptr;};
    void deleteDeletionType() { this->deletionType_ = nullptr;};
    inline string deletionType() const { DARABONBA_PTR_GET_DEFAULT(deletionType_, "") };
    inline DeleteAccountResponseBody& setDeletionType(string deletionType) { DARABONBA_PTR_SET_VALUE(deletionType_, deletionType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> deletionType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
