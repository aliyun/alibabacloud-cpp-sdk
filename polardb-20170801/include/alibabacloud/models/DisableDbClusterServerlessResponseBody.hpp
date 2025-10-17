// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEDBCLUSTERSERVERLESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLEDBCLUSTERSERVERLESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DisableDBClusterServerlessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableDBClusterServerlessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableDBClusterServerlessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisableDBClusterServerlessResponseBody() = default ;
    DisableDBClusterServerlessResponseBody(const DisableDBClusterServerlessResponseBody &) = default ;
    DisableDBClusterServerlessResponseBody(DisableDBClusterServerlessResponseBody &&) = default ;
    DisableDBClusterServerlessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableDBClusterServerlessResponseBody() = default ;
    DisableDBClusterServerlessResponseBody& operator=(const DisableDBClusterServerlessResponseBody &) = default ;
    DisableDBClusterServerlessResponseBody& operator=(DisableDBClusterServerlessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DisableDBClusterServerlessResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableDBClusterServerlessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the serverless cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
