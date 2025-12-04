// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyDBClusterResponseBodyDBCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class ModifyDBClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDBClusterResponseBody() = default ;
    ModifyDBClusterResponseBody(const ModifyDBClusterResponseBody &) = default ;
    ModifyDBClusterResponseBody(ModifyDBClusterResponseBody &&) = default ;
    ModifyDBClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterResponseBody() = default ;
    ModifyDBClusterResponseBody& operator=(const ModifyDBClusterResponseBody &) = default ;
    ModifyDBClusterResponseBody& operator=(ModifyDBClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBCluster_ == nullptr
        && return this->requestId_ == nullptr; };
    // DBCluster Field Functions 
    bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
    void deleteDBCluster() { this->DBCluster_ = nullptr;};
    inline const ModifyDBClusterResponseBodyDBCluster & DBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, ModifyDBClusterResponseBodyDBCluster) };
    inline ModifyDBClusterResponseBodyDBCluster DBCluster() { DARABONBA_PTR_GET(DBCluster_, ModifyDBClusterResponseBodyDBCluster) };
    inline ModifyDBClusterResponseBody& setDBCluster(const ModifyDBClusterResponseBodyDBCluster & DBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, DBCluster) };
    inline ModifyDBClusterResponseBody& setDBCluster(ModifyDBClusterResponseBodyDBCluster && DBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, DBCluster) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The clusters.
    std::shared_ptr<ModifyDBClusterResponseBodyDBCluster> DBCluster_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
