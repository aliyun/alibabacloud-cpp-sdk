// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMAINTAINWINDOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMAINTAINWINDOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateMaintainWindowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMaintainWindowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maintainWindowId, maintainWindowId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMaintainWindowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maintainWindowId, maintainWindowId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateMaintainWindowResponseBody() = default ;
    UpdateMaintainWindowResponseBody(const UpdateMaintainWindowResponseBody &) = default ;
    UpdateMaintainWindowResponseBody(UpdateMaintainWindowResponseBody &&) = default ;
    UpdateMaintainWindowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMaintainWindowResponseBody() = default ;
    UpdateMaintainWindowResponseBody& operator=(const UpdateMaintainWindowResponseBody &) = default ;
    UpdateMaintainWindowResponseBody& operator=(UpdateMaintainWindowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maintainWindowId_ == nullptr
        && this->requestId_ == nullptr; };
    // maintainWindowId Field Functions 
    bool hasMaintainWindowId() const { return this->maintainWindowId_ != nullptr;};
    void deleteMaintainWindowId() { this->maintainWindowId_ = nullptr;};
    inline string getMaintainWindowId() const { DARABONBA_PTR_GET_DEFAULT(maintainWindowId_, "") };
    inline UpdateMaintainWindowResponseBody& setMaintainWindowId(string maintainWindowId) { DARABONBA_PTR_SET_VALUE(maintainWindowId_, maintainWindowId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMaintainWindowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> maintainWindowId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
