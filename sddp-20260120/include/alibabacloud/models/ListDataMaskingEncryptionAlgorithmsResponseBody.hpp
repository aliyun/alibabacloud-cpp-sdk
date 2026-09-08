// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAMASKINGENCRYPTIONALGORITHMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAMASKINGENCRYPTIONALGORITHMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListDataMaskingEncryptionAlgorithmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataMaskingEncryptionAlgorithmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithms, algorithms_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataMaskingEncryptionAlgorithmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithms, algorithms_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataMaskingEncryptionAlgorithmsResponseBody() = default ;
    ListDataMaskingEncryptionAlgorithmsResponseBody(const ListDataMaskingEncryptionAlgorithmsResponseBody &) = default ;
    ListDataMaskingEncryptionAlgorithmsResponseBody(ListDataMaskingEncryptionAlgorithmsResponseBody &&) = default ;
    ListDataMaskingEncryptionAlgorithmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataMaskingEncryptionAlgorithmsResponseBody() = default ;
    ListDataMaskingEncryptionAlgorithmsResponseBody& operator=(const ListDataMaskingEncryptionAlgorithmsResponseBody &) = default ;
    ListDataMaskingEncryptionAlgorithmsResponseBody& operator=(ListDataMaskingEncryptionAlgorithmsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Algorithms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Algorithms& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Algorithms& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Algorithms() = default ;
      Algorithms(const Algorithms &) = default ;
      Algorithms(Algorithms &&) = default ;
      Algorithms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Algorithms() = default ;
      Algorithms& operator=(const Algorithms &) = default ;
      Algorithms& operator=(Algorithms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->name_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Algorithms& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Algorithms& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Algorithms& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->algorithms_ == nullptr
        && this->requestId_ == nullptr; };
    // algorithms Field Functions 
    bool hasAlgorithms() const { return this->algorithms_ != nullptr;};
    void deleteAlgorithms() { this->algorithms_ = nullptr;};
    inline const vector<ListDataMaskingEncryptionAlgorithmsResponseBody::Algorithms> & getAlgorithms() const { DARABONBA_PTR_GET_CONST(algorithms_, vector<ListDataMaskingEncryptionAlgorithmsResponseBody::Algorithms>) };
    inline vector<ListDataMaskingEncryptionAlgorithmsResponseBody::Algorithms> getAlgorithms() { DARABONBA_PTR_GET(algorithms_, vector<ListDataMaskingEncryptionAlgorithmsResponseBody::Algorithms>) };
    inline ListDataMaskingEncryptionAlgorithmsResponseBody& setAlgorithms(const vector<ListDataMaskingEncryptionAlgorithmsResponseBody::Algorithms> & algorithms) { DARABONBA_PTR_SET_VALUE(algorithms_, algorithms) };
    inline ListDataMaskingEncryptionAlgorithmsResponseBody& setAlgorithms(vector<ListDataMaskingEncryptionAlgorithmsResponseBody::Algorithms> && algorithms) { DARABONBA_PTR_SET_RVALUE(algorithms_, algorithms) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataMaskingEncryptionAlgorithmsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListDataMaskingEncryptionAlgorithmsResponseBody::Algorithms>> algorithms_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
