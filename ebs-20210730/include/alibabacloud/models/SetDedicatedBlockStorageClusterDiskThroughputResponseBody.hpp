// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEDICATEDBLOCKSTORAGECLUSTERDISKTHROUGHPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETDEDICATEDBLOCKSTORAGECLUSTERDISKTHROUGHPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class SetDedicatedBlockStorageClusterDiskThroughputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDedicatedBlockStorageClusterDiskThroughputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDedicatedBlockStorageClusterDiskThroughputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetDedicatedBlockStorageClusterDiskThroughputResponseBody() = default ;
    SetDedicatedBlockStorageClusterDiskThroughputResponseBody(const SetDedicatedBlockStorageClusterDiskThroughputResponseBody &) = default ;
    SetDedicatedBlockStorageClusterDiskThroughputResponseBody(SetDedicatedBlockStorageClusterDiskThroughputResponseBody &&) = default ;
    SetDedicatedBlockStorageClusterDiskThroughputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDedicatedBlockStorageClusterDiskThroughputResponseBody() = default ;
    SetDedicatedBlockStorageClusterDiskThroughputResponseBody& operator=(const SetDedicatedBlockStorageClusterDiskThroughputResponseBody &) = default ;
    SetDedicatedBlockStorageClusterDiskThroughputResponseBody& operator=(SetDedicatedBlockStorageClusterDiskThroughputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetDedicatedBlockStorageClusterDiskThroughputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
