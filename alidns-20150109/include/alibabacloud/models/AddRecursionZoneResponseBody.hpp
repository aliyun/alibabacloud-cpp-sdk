// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRECURSIONZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDRECURSIONZONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddRecursionZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRecursionZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, AddRecursionZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    AddRecursionZoneResponseBody() = default ;
    AddRecursionZoneResponseBody(const AddRecursionZoneResponseBody &) = default ;
    AddRecursionZoneResponseBody(AddRecursionZoneResponseBody &&) = default ;
    AddRecursionZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRecursionZoneResponseBody() = default ;
    AddRecursionZoneResponseBody& operator=(const AddRecursionZoneResponseBody &) = default ;
    AddRecursionZoneResponseBody& operator=(AddRecursionZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->success_ == nullptr && this->zoneId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddRecursionZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddRecursionZoneResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline AddRecursionZoneResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // Zone ID。
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
