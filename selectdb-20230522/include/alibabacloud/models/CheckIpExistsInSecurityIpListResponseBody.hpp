// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKIPEXISTSINSECURITYIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKIPEXISTSINSECURITYIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class CheckIpExistsInSecurityIpListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckIpExistsInSecurityIpListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckIpExistsInSecurityIpListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckIpExistsInSecurityIpListResponseBody() = default ;
    CheckIpExistsInSecurityIpListResponseBody(const CheckIpExistsInSecurityIpListResponseBody &) = default ;
    CheckIpExistsInSecurityIpListResponseBody(CheckIpExistsInSecurityIpListResponseBody &&) = default ;
    CheckIpExistsInSecurityIpListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckIpExistsInSecurityIpListResponseBody() = default ;
    CheckIpExistsInSecurityIpListResponseBody& operator=(const CheckIpExistsInSecurityIpListResponseBody &) = default ;
    CheckIpExistsInSecurityIpListResponseBody& operator=(CheckIpExistsInSecurityIpListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IpExists, ipExists_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IpExists, ipExists_);
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
      virtual bool empty() const override { return this->ipExists_ == nullptr; };
      // ipExists Field Functions 
      bool hasIpExists() const { return this->ipExists_ != nullptr;};
      void deleteIpExists() { this->ipExists_ = nullptr;};
      inline bool getIpExists() const { DARABONBA_PTR_GET_DEFAULT(ipExists_, false) };
      inline Data& setIpExists(bool ipExists) { DARABONBA_PTR_SET_VALUE(ipExists_, ipExists) };


    protected:
      shared_ptr<bool> ipExists_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CheckIpExistsInSecurityIpListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CheckIpExistsInSecurityIpListResponseBody::Data) };
    inline CheckIpExistsInSecurityIpListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CheckIpExistsInSecurityIpListResponseBody::Data) };
    inline CheckIpExistsInSecurityIpListResponseBody& setData(const CheckIpExistsInSecurityIpListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CheckIpExistsInSecurityIpListResponseBody& setData(CheckIpExistsInSecurityIpListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckIpExistsInSecurityIpListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CheckIpExistsInSecurityIpListResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
