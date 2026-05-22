// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERFORMANCEDATACOLLECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPERFORMANCEDATACOLLECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetPerformanceDataCollectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPerformanceDataCollectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPerformanceDataCollectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPerformanceDataCollectionResponseBody() = default ;
    GetPerformanceDataCollectionResponseBody(const GetPerformanceDataCollectionResponseBody &) = default ;
    GetPerformanceDataCollectionResponseBody(GetPerformanceDataCollectionResponseBody &&) = default ;
    GetPerformanceDataCollectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPerformanceDataCollectionResponseBody() = default ;
    GetPerformanceDataCollectionResponseBody& operator=(const GetPerformanceDataCollectionResponseBody &) = default ;
    GetPerformanceDataCollectionResponseBody& operator=(GetPerformanceDataCollectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->requestId_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline GetPerformanceDataCollectionResponseBody& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPerformanceDataCollectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> enable_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
