// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEDBCLUSTERORCARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLEDBCLUSTERORCARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DisableDBClusterOrcaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableDBClusterOrcaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableDBClusterOrcaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisableDBClusterOrcaResponseBody() = default ;
    DisableDBClusterOrcaResponseBody(const DisableDBClusterOrcaResponseBody &) = default ;
    DisableDBClusterOrcaResponseBody(DisableDBClusterOrcaResponseBody &&) = default ;
    DisableDBClusterOrcaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableDBClusterOrcaResponseBody() = default ;
    DisableDBClusterOrcaResponseBody& operator=(const DisableDBClusterOrcaResponseBody &) = default ;
    DisableDBClusterOrcaResponseBody& operator=(DisableDBClusterOrcaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->requestId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DisableDBClusterOrcaResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableDBClusterOrcaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
