// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOLDSTORAGEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOLDSTORAGEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateColdStorageInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateColdStorageInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColdStorageInstanceId, coldStorageInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateColdStorageInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdStorageInstanceId, coldStorageInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateColdStorageInstanceResponseBody() = default ;
    CreateColdStorageInstanceResponseBody(const CreateColdStorageInstanceResponseBody &) = default ;
    CreateColdStorageInstanceResponseBody(CreateColdStorageInstanceResponseBody &&) = default ;
    CreateColdStorageInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateColdStorageInstanceResponseBody() = default ;
    CreateColdStorageInstanceResponseBody& operator=(const CreateColdStorageInstanceResponseBody &) = default ;
    CreateColdStorageInstanceResponseBody& operator=(CreateColdStorageInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldStorageInstanceId_ == nullptr
        && this->requestId_ == nullptr; };
    // coldStorageInstanceId Field Functions 
    bool hasColdStorageInstanceId() const { return this->coldStorageInstanceId_ != nullptr;};
    void deleteColdStorageInstanceId() { this->coldStorageInstanceId_ = nullptr;};
    inline string getColdStorageInstanceId() const { DARABONBA_PTR_GET_DEFAULT(coldStorageInstanceId_, "") };
    inline CreateColdStorageInstanceResponseBody& setColdStorageInstanceId(string coldStorageInstanceId) { DARABONBA_PTR_SET_VALUE(coldStorageInstanceId_, coldStorageInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateColdStorageInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster ID.
    shared_ptr<string> coldStorageInstanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
