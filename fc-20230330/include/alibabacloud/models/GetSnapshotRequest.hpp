// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class GetSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetSnapshotRequest() = default ;
    GetSnapshotRequest(const GetSnapshotRequest &) = default ;
    GetSnapshotRequest(GetSnapshotRequest &&) = default ;
    GetSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotRequest() = default ;
    GetSnapshotRequest& operator=(const GetSnapshotRequest &) = default ;
    GetSnapshotRequest& operator=(GetSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
