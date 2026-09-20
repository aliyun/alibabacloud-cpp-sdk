// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHBASESLBSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHBASESLBSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DeleteHBaseSlbServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHBaseSlbServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(SlbServer, slbServer_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHBaseSlbServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(SlbServer, slbServer_);
    };
    DeleteHBaseSlbServerRequest() = default ;
    DeleteHBaseSlbServerRequest(const DeleteHBaseSlbServerRequest &) = default ;
    DeleteHBaseSlbServerRequest(DeleteHBaseSlbServerRequest &&) = default ;
    DeleteHBaseSlbServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHBaseSlbServerRequest() = default ;
    DeleteHBaseSlbServerRequest& operator=(const DeleteHBaseSlbServerRequest &) = default ;
    DeleteHBaseSlbServerRequest& operator=(DeleteHBaseSlbServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->slbServer_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteHBaseSlbServerRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // slbServer Field Functions 
    bool hasSlbServer() const { return this->slbServer_ != nullptr;};
    void deleteSlbServer() { this->slbServer_ = nullptr;};
    inline string getSlbServer() const { DARABONBA_PTR_GET_DEFAULT(slbServer_, "") };
    inline DeleteHBaseSlbServerRequest& setSlbServer(string slbServer) { DARABONBA_PTR_SET_VALUE(slbServer_, slbServer) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The load balancing service. Valid values:
    // thrift
    // rest.
    // 
    // This parameter is required.
    shared_ptr<string> slbServer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
