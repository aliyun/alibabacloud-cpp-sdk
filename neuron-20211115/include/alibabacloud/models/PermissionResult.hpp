// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERMISSIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_PERMISSIONRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PermissionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PermissionResult& obj) { 
      DARABONBA_PTR_TO_JSON(allow, allow_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PermissionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(allow, allow_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PermissionResult() = default ;
    PermissionResult(const PermissionResult &) = default ;
    PermissionResult(PermissionResult &&) = default ;
    PermissionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PermissionResult() = default ;
    PermissionResult& operator=(const PermissionResult &) = default ;
    PermissionResult& operator=(PermissionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allow_ == nullptr
        && this->requestId_ == nullptr; };
    // allow Field Functions 
    bool hasAllow() const { return this->allow_ != nullptr;};
    void deleteAllow() { this->allow_ = nullptr;};
    inline bool getAllow() const { DARABONBA_PTR_GET_DEFAULT(allow_, false) };
    inline PermissionResult& setAllow(bool allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PermissionResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> allow_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
