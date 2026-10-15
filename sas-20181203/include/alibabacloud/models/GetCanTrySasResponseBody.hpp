// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCANTRYSASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCANTRYSASRESPONSEBODY_HPP_
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
  class GetCanTrySasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCanTrySasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCanTrySasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCanTrySasResponseBody() = default ;
    GetCanTrySasResponseBody(const GetCanTrySasResponseBody &) = default ;
    GetCanTrySasResponseBody(GetCanTrySasResponseBody &&) = default ;
    GetCanTrySasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCanTrySasResponseBody() = default ;
    GetCanTrySasResponseBody& operator=(const GetCanTrySasResponseBody &) = default ;
    GetCanTrySasResponseBody& operator=(GetCanTrySasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CanTry, canTry_);
        DARABONBA_PTR_TO_JSON(CanTryVersions, canTryVersions_);
        DARABONBA_PTR_TO_JSON(PostPaidCanTry, postPaidCanTry_);
        DARABONBA_PTR_TO_JSON(TryType, tryType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CanTry, canTry_);
        DARABONBA_PTR_FROM_JSON(CanTryVersions, canTryVersions_);
        DARABONBA_PTR_FROM_JSON(PostPaidCanTry, postPaidCanTry_);
        DARABONBA_PTR_FROM_JSON(TryType, tryType_);
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
      virtual bool empty() const override { return this->canTry_ == nullptr
        && this->canTryVersions_ == nullptr && this->postPaidCanTry_ == nullptr && this->tryType_ == nullptr; };
      // canTry Field Functions 
      bool hasCanTry() const { return this->canTry_ != nullptr;};
      void deleteCanTry() { this->canTry_ = nullptr;};
      inline int32_t getCanTry() const { DARABONBA_PTR_GET_DEFAULT(canTry_, 0) };
      inline Data& setCanTry(int32_t canTry) { DARABONBA_PTR_SET_VALUE(canTry_, canTry) };


      // canTryVersions Field Functions 
      bool hasCanTryVersions() const { return this->canTryVersions_ != nullptr;};
      void deleteCanTryVersions() { this->canTryVersions_ = nullptr;};
      inline const vector<int32_t> & getCanTryVersions() const { DARABONBA_PTR_GET_CONST(canTryVersions_, vector<int32_t>) };
      inline vector<int32_t> getCanTryVersions() { DARABONBA_PTR_GET(canTryVersions_, vector<int32_t>) };
      inline Data& setCanTryVersions(const vector<int32_t> & canTryVersions) { DARABONBA_PTR_SET_VALUE(canTryVersions_, canTryVersions) };
      inline Data& setCanTryVersions(vector<int32_t> && canTryVersions) { DARABONBA_PTR_SET_RVALUE(canTryVersions_, canTryVersions) };


      // postPaidCanTry Field Functions 
      bool hasPostPaidCanTry() const { return this->postPaidCanTry_ != nullptr;};
      void deletePostPaidCanTry() { this->postPaidCanTry_ = nullptr;};
      inline bool getPostPaidCanTry() const { DARABONBA_PTR_GET_DEFAULT(postPaidCanTry_, false) };
      inline Data& setPostPaidCanTry(bool postPaidCanTry) { DARABONBA_PTR_SET_VALUE(postPaidCanTry_, postPaidCanTry) };


      // tryType Field Functions 
      bool hasTryType() const { return this->tryType_ != nullptr;};
      void deleteTryType() { this->tryType_ = nullptr;};
      inline int32_t getTryType() const { DARABONBA_PTR_GET_DEFAULT(tryType_, 0) };
      inline Data& setTryType(int32_t tryType) { DARABONBA_PTR_SET_VALUE(tryType_, tryType) };


    protected:
      // Indicates whether you are eligible for a trial. Valid values:
      // - **true**: Eligible.
      // - **false**: Not eligible.
      shared_ptr<int32_t> canTry_ {};
      // The list of editions available for trial.
      shared_ptr<vector<int32_t>> canTryVersions_ {};
      // Indicates whether a pay-as-you-go trial is allowed.
      shared_ptr<bool> postPaidCanTry_ {};
      // The trial type. Valid values:
      // - **0**: Not allowed.
      // - **1**: First trial.
      // - **2**: Second trial.
      shared_ptr<int32_t> tryType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCanTrySasResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCanTrySasResponseBody::Data) };
    inline GetCanTrySasResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCanTrySasResponseBody::Data) };
    inline GetCanTrySasResponseBody& setData(const GetCanTrySasResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCanTrySasResponseBody& setData(GetCanTrySasResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCanTrySasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetCanTrySasResponseBody::Data> data_ {};
    // The ID of the request. The ID is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
