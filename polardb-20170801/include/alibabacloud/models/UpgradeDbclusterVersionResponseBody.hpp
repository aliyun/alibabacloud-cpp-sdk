// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBCLUSTERVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBCLUSTERVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpgradeDBClusterVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBClusterVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBClusterVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpgradeDBClusterVersionResponseBody() = default ;
    UpgradeDBClusterVersionResponseBody(const UpgradeDBClusterVersionResponseBody &) = default ;
    UpgradeDBClusterVersionResponseBody(UpgradeDBClusterVersionResponseBody &&) = default ;
    UpgradeDBClusterVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBClusterVersionResponseBody() = default ;
    UpgradeDBClusterVersionResponseBody& operator=(const UpgradeDBClusterVersionResponseBody &) = default ;
    UpgradeDBClusterVersionResponseBody& operator=(UpgradeDBClusterVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeDBClusterVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
