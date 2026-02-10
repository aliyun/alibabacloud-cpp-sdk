// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDISCOVERDATABASETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTDISCOVERDATABASETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class StartDiscoverDatabaseTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDiscoverDatabaseTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMark, createMark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartDiscoverDatabaseTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMark, createMark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartDiscoverDatabaseTaskResponseBody() = default ;
    StartDiscoverDatabaseTaskResponseBody(const StartDiscoverDatabaseTaskResponseBody &) = default ;
    StartDiscoverDatabaseTaskResponseBody(StartDiscoverDatabaseTaskResponseBody &&) = default ;
    StartDiscoverDatabaseTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDiscoverDatabaseTaskResponseBody() = default ;
    StartDiscoverDatabaseTaskResponseBody& operator=(const StartDiscoverDatabaseTaskResponseBody &) = default ;
    StartDiscoverDatabaseTaskResponseBody& operator=(StartDiscoverDatabaseTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createMark_ == nullptr
        && this->requestId_ == nullptr; };
    // createMark Field Functions 
    bool hasCreateMark() const { return this->createMark_ != nullptr;};
    void deleteCreateMark() { this->createMark_ = nullptr;};
    inline string getCreateMark() const { DARABONBA_PTR_GET_DEFAULT(createMark_, "") };
    inline StartDiscoverDatabaseTaskResponseBody& setCreateMark(string createMark) { DARABONBA_PTR_SET_VALUE(createMark_, createMark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartDiscoverDatabaseTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the scan task.
    shared_ptr<string> createMark_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
