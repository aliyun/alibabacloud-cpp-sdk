// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHAPPLICATIONPOLARFSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHAPPLICATIONPOLARFSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class AttachApplicationPolarFSResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachApplicationPolarFSResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(PolarFSInstanceId, polarFSInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachApplicationPolarFSResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(PolarFSInstanceId, polarFSInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AttachApplicationPolarFSResponseBody() = default ;
    AttachApplicationPolarFSResponseBody(const AttachApplicationPolarFSResponseBody &) = default ;
    AttachApplicationPolarFSResponseBody(AttachApplicationPolarFSResponseBody &&) = default ;
    AttachApplicationPolarFSResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachApplicationPolarFSResponseBody() = default ;
    AttachApplicationPolarFSResponseBody& operator=(const AttachApplicationPolarFSResponseBody &) = default ;
    AttachApplicationPolarFSResponseBody& operator=(AttachApplicationPolarFSResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->polarFSInstanceId_ != nullptr && this->requestId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline AttachApplicationPolarFSResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // polarFSInstanceId Field Functions 
    bool hasPolarFSInstanceId() const { return this->polarFSInstanceId_ != nullptr;};
    void deletePolarFSInstanceId() { this->polarFSInstanceId_ = nullptr;};
    inline string polarFSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFSInstanceId_, "") };
    inline AttachApplicationPolarFSResponseBody& setPolarFSInstanceId(string polarFSInstanceId) { DARABONBA_PTR_SET_VALUE(polarFSInstanceId_, polarFSInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachApplicationPolarFSResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    // PolarFS ID
    std::shared_ptr<string> polarFSInstanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
