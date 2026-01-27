// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMINFOMAPPINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMINFOMAPPINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmInfoMappingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmInfoMappingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmInfoMappingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateWmInfoMappingResponseBody() = default ;
    CreateWmInfoMappingResponseBody(const CreateWmInfoMappingResponseBody &) = default ;
    CreateWmInfoMappingResponseBody(CreateWmInfoMappingResponseBody &&) = default ;
    CreateWmInfoMappingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmInfoMappingResponseBody() = default ;
    CreateWmInfoMappingResponseBody& operator=(const CreateWmInfoMappingResponseBody &) = default ;
    CreateWmInfoMappingResponseBody& operator=(CreateWmInfoMappingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->wmInfoUint_ == nullptr; };
      // wmInfoUint Field Functions 
      bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
      void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
      inline int64_t getWmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, 0L) };
      inline Data& setWmInfoUint(int64_t wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


    protected:
      shared_ptr<int64_t> wmInfoUint_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateWmInfoMappingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateWmInfoMappingResponseBody::Data) };
    inline CreateWmInfoMappingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateWmInfoMappingResponseBody::Data) };
    inline CreateWmInfoMappingResponseBody& setData(const CreateWmInfoMappingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateWmInfoMappingResponseBody& setData(CreateWmInfoMappingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWmInfoMappingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateWmInfoMappingResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
