// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DetachKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachKeyPairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetachKeyPairResponseBody() = default ;
    DetachKeyPairResponseBody(const DetachKeyPairResponseBody &) = default ;
    DetachKeyPairResponseBody(DetachKeyPairResponseBody &&) = default ;
    DetachKeyPairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachKeyPairResponseBody() = default ;
    DetachKeyPairResponseBody& operator=(const DetachKeyPairResponseBody &) = default ;
    DetachKeyPairResponseBody& operator=(DetachKeyPairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DetachedInstanceIds, detachedInstanceIds_);
        DARABONBA_PTR_TO_JSON(FailCount, failCount_);
        DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DetachedInstanceIds, detachedInstanceIds_);
        DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
        DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      virtual bool empty() const override { return this->detachedInstanceIds_ == nullptr
        && this->failCount_ == nullptr && this->keyPairId_ == nullptr && this->totalCount_ == nullptr; };
      // detachedInstanceIds Field Functions 
      bool hasDetachedInstanceIds() const { return this->detachedInstanceIds_ != nullptr;};
      void deleteDetachedInstanceIds() { this->detachedInstanceIds_ = nullptr;};
      inline const vector<string> & getDetachedInstanceIds() const { DARABONBA_PTR_GET_CONST(detachedInstanceIds_, vector<string>) };
      inline vector<string> getDetachedInstanceIds() { DARABONBA_PTR_GET(detachedInstanceIds_, vector<string>) };
      inline Data& setDetachedInstanceIds(const vector<string> & detachedInstanceIds) { DARABONBA_PTR_SET_VALUE(detachedInstanceIds_, detachedInstanceIds) };
      inline Data& setDetachedInstanceIds(vector<string> && detachedInstanceIds) { DARABONBA_PTR_SET_RVALUE(detachedInstanceIds_, detachedInstanceIds) };


      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline Data& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // keyPairId Field Functions 
      bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
      void deleteKeyPairId() { this->keyPairId_ = nullptr;};
      inline string getKeyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
      inline Data& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The IDs of the cloud phone instances from which the ADB key pair is successfully detached.
      shared_ptr<vector<string>> detachedInstanceIds_ {};
      // The number of the cloud phone instances from which the ADB key pair failed to be detached.
      shared_ptr<int32_t> failCount_ {};
      // The ID of the ADB key pair.
      shared_ptr<string> keyPairId_ {};
      // The total number of the cloud phone instances.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DetachKeyPairResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DetachKeyPairResponseBody::Data) };
    inline DetachKeyPairResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DetachKeyPairResponseBody::Data) };
    inline DetachKeyPairResponseBody& setData(const DetachKeyPairResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DetachKeyPairResponseBody& setData(DetachKeyPairResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The object that is returned.
    shared_ptr<DetachKeyPairResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
