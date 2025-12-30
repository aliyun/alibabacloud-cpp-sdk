// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLADDONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLADDONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class InstallAddonResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAddonResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddonId, addonId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAddonResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonId, addonId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InstallAddonResponseBody() = default ;
    InstallAddonResponseBody(const InstallAddonResponseBody &) = default ;
    InstallAddonResponseBody(InstallAddonResponseBody &&) = default ;
    InstallAddonResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAddonResponseBody() = default ;
    InstallAddonResponseBody& operator=(const InstallAddonResponseBody &) = default ;
    InstallAddonResponseBody& operator=(InstallAddonResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonId_ == nullptr
        && this->clusterId_ == nullptr && this->requestId_ == nullptr; };
    // addonId Field Functions 
    bool hasAddonId() const { return this->addonId_ != nullptr;};
    void deleteAddonId() { this->addonId_ = nullptr;};
    inline string getAddonId() const { DARABONBA_PTR_GET_DEFAULT(addonId_, "") };
    inline InstallAddonResponseBody& setAddonId(string addonId) { DARABONBA_PTR_SET_VALUE(addonId_, addonId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InstallAddonResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstallAddonResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The addon ID.
    // 
    // This parameter is required.
    shared_ptr<string> addonId_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
