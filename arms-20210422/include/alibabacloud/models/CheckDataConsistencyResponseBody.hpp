// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDATACONSISTENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDATACONSISTENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CheckDataConsistencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDataConsistencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsDataConsistency, isDataConsistency_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDataConsistencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDataConsistency, isDataConsistency_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckDataConsistencyResponseBody() = default ;
    CheckDataConsistencyResponseBody(const CheckDataConsistencyResponseBody &) = default ;
    CheckDataConsistencyResponseBody(CheckDataConsistencyResponseBody &&) = default ;
    CheckDataConsistencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDataConsistencyResponseBody() = default ;
    CheckDataConsistencyResponseBody& operator=(const CheckDataConsistencyResponseBody &) = default ;
    CheckDataConsistencyResponseBody& operator=(CheckDataConsistencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isDataConsistency_ == nullptr
        && this->requestId_ == nullptr; };
    // isDataConsistency Field Functions 
    bool hasIsDataConsistency() const { return this->isDataConsistency_ != nullptr;};
    void deleteIsDataConsistency() { this->isDataConsistency_ = nullptr;};
    inline bool getIsDataConsistency() const { DARABONBA_PTR_GET_DEFAULT(isDataConsistency_, false) };
    inline CheckDataConsistencyResponseBody& setIsDataConsistency(bool isDataConsistency) { DARABONBA_PTR_SET_VALUE(isDataConsistency_, isDataConsistency) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDataConsistencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> isDataConsistency_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
