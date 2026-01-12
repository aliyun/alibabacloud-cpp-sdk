// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSFREEZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSFREEZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateOssCheckResultsFreezeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOssCheckResultsFreezeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOssCheckResultsFreezeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateOssCheckResultsFreezeResponseBody() = default ;
    UpdateOssCheckResultsFreezeResponseBody(const UpdateOssCheckResultsFreezeResponseBody &) = default ;
    UpdateOssCheckResultsFreezeResponseBody(UpdateOssCheckResultsFreezeResponseBody &&) = default ;
    UpdateOssCheckResultsFreezeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOssCheckResultsFreezeResponseBody() = default ;
    UpdateOssCheckResultsFreezeResponseBody& operator=(const UpdateOssCheckResultsFreezeResponseBody &) = default ;
    UpdateOssCheckResultsFreezeResponseBody& operator=(UpdateOssCheckResultsFreezeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InvalidCount, invalidCount_);
        DARABONBA_PTR_TO_JSON(RepeatCount, repeatCount_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InvalidCount, invalidCount_);
        DARABONBA_PTR_FROM_JSON(RepeatCount, repeatCount_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
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
      virtual bool empty() const override { return this->invalidCount_ == nullptr
        && this->repeatCount_ == nullptr && this->successCount_ == nullptr && this->totalCount_ == nullptr; };
      // invalidCount Field Functions 
      bool hasInvalidCount() const { return this->invalidCount_ != nullptr;};
      void deleteInvalidCount() { this->invalidCount_ = nullptr;};
      inline int32_t getInvalidCount() const { DARABONBA_PTR_GET_DEFAULT(invalidCount_, 0) };
      inline Data& setInvalidCount(int32_t invalidCount) { DARABONBA_PTR_SET_VALUE(invalidCount_, invalidCount) };


      // repeatCount Field Functions 
      bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
      void deleteRepeatCount() { this->repeatCount_ = nullptr;};
      inline int32_t getRepeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, 0) };
      inline Data& setRepeatCount(int32_t repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Data& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> invalidCount_ {};
      shared_ptr<int32_t> repeatCount_ {};
      shared_ptr<int32_t> successCount_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateOssCheckResultsFreezeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateOssCheckResultsFreezeResponseBody::Data) };
    inline UpdateOssCheckResultsFreezeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateOssCheckResultsFreezeResponseBody::Data) };
    inline UpdateOssCheckResultsFreezeResponseBody& setData(const UpdateOssCheckResultsFreezeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateOssCheckResultsFreezeResponseBody& setData(UpdateOssCheckResultsFreezeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateOssCheckResultsFreezeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<UpdateOssCheckResultsFreezeResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
