// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateQuotaResponseBody() = default ;
    CreateQuotaResponseBody(const CreateQuotaResponseBody &) = default ;
    CreateQuotaResponseBody(CreateQuotaResponseBody &&) = default ;
    CreateQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQuotaResponseBody() = default ;
    CreateQuotaResponseBody& operator=(const CreateQuotaResponseBody &) = default ;
    CreateQuotaResponseBody& operator=(CreateQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(nickName, nickName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(nickName, nickName_);
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
      virtual bool empty() const override { return this->nickName_ == nullptr; };
      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Data& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    protected:
      // Quota alias.
      shared_ptr<string> nickName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateQuotaResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateQuotaResponseBody::Data) };
    inline CreateQuotaResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateQuotaResponseBody::Data) };
    inline CreateQuotaResponseBody& setData(const CreateQuotaResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateQuotaResponseBody& setData(CreateQuotaResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Response parameters.
    shared_ptr<CreateQuotaResponseBody::Data> data_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
