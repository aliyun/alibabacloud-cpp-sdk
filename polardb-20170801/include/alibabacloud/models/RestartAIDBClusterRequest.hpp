// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTAIDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTAIDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RestartAIDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartAIDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, RestartAIDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    RestartAIDBClusterRequest() = default ;
    RestartAIDBClusterRequest(const RestartAIDBClusterRequest &) = default ;
    RestartAIDBClusterRequest(RestartAIDBClusterRequest &&) = default ;
    RestartAIDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartAIDBClusterRequest() = default ;
    RestartAIDBClusterRequest& operator=(const RestartAIDBClusterRequest &) = default ;
    RestartAIDBClusterRequest& operator=(RestartAIDBClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline RestartAIDBClusterRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBClusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
