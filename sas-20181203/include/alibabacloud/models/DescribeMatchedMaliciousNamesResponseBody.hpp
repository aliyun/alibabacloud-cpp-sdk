// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMATCHEDMALICIOUSNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMATCHEDMALICIOUSNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeMatchedMaliciousNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMatchedMaliciousNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMatchedMaliciousNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMatchedMaliciousNamesResponseBody() = default ;
    DescribeMatchedMaliciousNamesResponseBody(const DescribeMatchedMaliciousNamesResponseBody &) = default ;
    DescribeMatchedMaliciousNamesResponseBody(DescribeMatchedMaliciousNamesResponseBody &&) = default ;
    DescribeMatchedMaliciousNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMatchedMaliciousNamesResponseBody() = default ;
    DescribeMatchedMaliciousNamesResponseBody& operator=(const DescribeMatchedMaliciousNamesResponseBody &) = default ;
    DescribeMatchedMaliciousNamesResponseBody& operator=(DescribeMatchedMaliciousNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Key, key_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
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
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->key_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Data& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    protected:
      // The display name of the malicious image sample type.
      shared_ptr<string> displayName_ {};
      // The key of the malicious image sample type.
      shared_ptr<string> key_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeMatchedMaliciousNamesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeMatchedMaliciousNamesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeMatchedMaliciousNamesResponseBody::Data>) };
    inline vector<DescribeMatchedMaliciousNamesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeMatchedMaliciousNamesResponseBody::Data>) };
    inline DescribeMatchedMaliciousNamesResponseBody& setData(const vector<DescribeMatchedMaliciousNamesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMatchedMaliciousNamesResponseBody& setData(vector<DescribeMatchedMaliciousNamesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMatchedMaliciousNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries on the current page.
    shared_ptr<int32_t> count_ {};
    // The response parameters.
    shared_ptr<vector<DescribeMatchedMaliciousNamesResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
