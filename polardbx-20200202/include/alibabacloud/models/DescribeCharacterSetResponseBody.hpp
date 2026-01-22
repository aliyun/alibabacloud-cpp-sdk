// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARACTERSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARACTERSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCharacterSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCharacterSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCharacterSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCharacterSetResponseBody() = default ;
    DescribeCharacterSetResponseBody(const DescribeCharacterSetResponseBody &) = default ;
    DescribeCharacterSetResponseBody(DescribeCharacterSetResponseBody &&) = default ;
    DescribeCharacterSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCharacterSetResponseBody() = default ;
    DescribeCharacterSetResponseBody& operator=(const DescribeCharacterSetResponseBody &) = default ;
    DescribeCharacterSetResponseBody& operator=(DescribeCharacterSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CharacterSet, characterSet_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CharacterSet, characterSet_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
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
      virtual bool empty() const override { return this->characterSet_ == nullptr
        && this->engine_ == nullptr; };
      // characterSet Field Functions 
      bool hasCharacterSet() const { return this->characterSet_ != nullptr;};
      void deleteCharacterSet() { this->characterSet_ = nullptr;};
      inline const vector<string> & getCharacterSet() const { DARABONBA_PTR_GET_CONST(characterSet_, vector<string>) };
      inline vector<string> getCharacterSet() { DARABONBA_PTR_GET(characterSet_, vector<string>) };
      inline Data& setCharacterSet(const vector<string> & characterSet) { DARABONBA_PTR_SET_VALUE(characterSet_, characterSet) };
      inline Data& setCharacterSet(vector<string> && characterSet) { DARABONBA_PTR_SET_RVALUE(characterSet_, characterSet) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Data& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    protected:
      shared_ptr<vector<string>> characterSet_ {};
      shared_ptr<string> engine_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCharacterSetResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCharacterSetResponseBody::Data) };
    inline DescribeCharacterSetResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCharacterSetResponseBody::Data) };
    inline DescribeCharacterSetResponseBody& setData(const DescribeCharacterSetResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCharacterSetResponseBody& setData(DescribeCharacterSetResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCharacterSetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCharacterSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCharacterSetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeCharacterSetResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
