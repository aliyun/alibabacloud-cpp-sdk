// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPRECHECKDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTPRECHECKDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class StartPreCheckDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPreCheckDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMark, createMark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartPreCheckDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMark, createMark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartPreCheckDatabaseResponseBody() = default ;
    StartPreCheckDatabaseResponseBody(const StartPreCheckDatabaseResponseBody &) = default ;
    StartPreCheckDatabaseResponseBody(StartPreCheckDatabaseResponseBody &&) = default ;
    StartPreCheckDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPreCheckDatabaseResponseBody() = default ;
    StartPreCheckDatabaseResponseBody& operator=(const StartPreCheckDatabaseResponseBody &) = default ;
    StartPreCheckDatabaseResponseBody& operator=(StartPreCheckDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createMark_ == nullptr
        && return this->requestId_ == nullptr; };
    // createMark Field Functions 
    bool hasCreateMark() const { return this->createMark_ != nullptr;};
    void deleteCreateMark() { this->createMark_ = nullptr;};
    inline string createMark() const { DARABONBA_PTR_GET_DEFAULT(createMark_, "") };
    inline StartPreCheckDatabaseResponseBody& setCreateMark(string createMark) { DARABONBA_PTR_SET_VALUE(createMark_, createMark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartPreCheckDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the database precheck task.
    std::shared_ptr<string> createMark_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
