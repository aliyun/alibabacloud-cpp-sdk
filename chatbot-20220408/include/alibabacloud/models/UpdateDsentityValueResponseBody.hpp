// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDSENTITYVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDSENTITYVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateDSEntityValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDSEntityValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EntityValueId, entityValueId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDSEntityValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityValueId, entityValueId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateDSEntityValueResponseBody() = default ;
    UpdateDSEntityValueResponseBody(const UpdateDSEntityValueResponseBody &) = default ;
    UpdateDSEntityValueResponseBody(UpdateDSEntityValueResponseBody &&) = default ;
    UpdateDSEntityValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDSEntityValueResponseBody() = default ;
    UpdateDSEntityValueResponseBody& operator=(const UpdateDSEntityValueResponseBody &) = default ;
    UpdateDSEntityValueResponseBody& operator=(UpdateDSEntityValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityValueId_ != nullptr
        && this->requestId_ != nullptr; };
    // entityValueId Field Functions 
    bool hasEntityValueId() const { return this->entityValueId_ != nullptr;};
    void deleteEntityValueId() { this->entityValueId_ = nullptr;};
    inline int64_t entityValueId() const { DARABONBA_PTR_GET_DEFAULT(entityValueId_, 0L) };
    inline UpdateDSEntityValueResponseBody& setEntityValueId(int64_t entityValueId) { DARABONBA_PTR_SET_VALUE(entityValueId_, entityValueId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDSEntityValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> entityValueId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
