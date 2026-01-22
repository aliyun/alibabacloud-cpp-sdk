// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODY_HPP_
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
  class DescribeUserEncryptionKeyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEncryptionKeyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEncryptionKeyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserEncryptionKeyListResponseBody() = default ;
    DescribeUserEncryptionKeyListResponseBody(const DescribeUserEncryptionKeyListResponseBody &) = default ;
    DescribeUserEncryptionKeyListResponseBody(DescribeUserEncryptionKeyListResponseBody &&) = default ;
    DescribeUserEncryptionKeyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEncryptionKeyListResponseBody() = default ;
    DescribeUserEncryptionKeyListResponseBody& operator=(const DescribeUserEncryptionKeyListResponseBody &) = default ;
    DescribeUserEncryptionKeyListResponseBody& operator=(DescribeUserEncryptionKeyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(KeyIds, keyIds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyIds, keyIds_);
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
      virtual bool empty() const override { return this->keyIds_ == nullptr; };
      // keyIds Field Functions 
      bool hasKeyIds() const { return this->keyIds_ != nullptr;};
      void deleteKeyIds() { this->keyIds_ = nullptr;};
      inline const vector<string> & getKeyIds() const { DARABONBA_PTR_GET_CONST(keyIds_, vector<string>) };
      inline vector<string> getKeyIds() { DARABONBA_PTR_GET(keyIds_, vector<string>) };
      inline Data& setKeyIds(const vector<string> & keyIds) { DARABONBA_PTR_SET_VALUE(keyIds_, keyIds) };
      inline Data& setKeyIds(vector<string> && keyIds) { DARABONBA_PTR_SET_RVALUE(keyIds_, keyIds) };


    protected:
      shared_ptr<vector<string>> keyIds_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeUserEncryptionKeyListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeUserEncryptionKeyListResponseBody::Data) };
    inline DescribeUserEncryptionKeyListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeUserEncryptionKeyListResponseBody::Data) };
    inline DescribeUserEncryptionKeyListResponseBody& setData(const DescribeUserEncryptionKeyListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUserEncryptionKeyListResponseBody& setData(DescribeUserEncryptionKeyListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserEncryptionKeyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeUserEncryptionKeyListResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
