// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATALIMITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATALIMITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class CreateDataLimitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataLimitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataLimitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDataLimitResponseBody() = default ;
    CreateDataLimitResponseBody(const CreateDataLimitResponseBody &) = default ;
    CreateDataLimitResponseBody(CreateDataLimitResponseBody &&) = default ;
    CreateDataLimitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataLimitResponseBody() = default ;
    CreateDataLimitResponseBody& operator=(const CreateDataLimitResponseBody &) = default ;
    CreateDataLimitResponseBody& operator=(CreateDataLimitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->requestId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline CreateDataLimitResponseBody& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataLimitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the data asset.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
