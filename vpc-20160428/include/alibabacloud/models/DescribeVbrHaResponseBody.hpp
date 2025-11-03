// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVBRHARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVBRHARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVbrHaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVbrHaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PeerVbrId, peerVbrId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VbrHaId, vbrHaId_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVbrHaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PeerVbrId, peerVbrId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VbrHaId, vbrHaId_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
    };
    DescribeVbrHaResponseBody() = default ;
    DescribeVbrHaResponseBody(const DescribeVbrHaResponseBody &) = default ;
    DescribeVbrHaResponseBody(DescribeVbrHaResponseBody &&) = default ;
    DescribeVbrHaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVbrHaResponseBody() = default ;
    DescribeVbrHaResponseBody& operator=(const DescribeVbrHaResponseBody &) = default ;
    DescribeVbrHaResponseBody& operator=(DescribeVbrHaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->peerVbrId_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->status_ == nullptr && return this->vbrHaId_ == nullptr && return this->vbrId_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVbrHaResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVbrHaResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVbrHaResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // peerVbrId Field Functions 
    bool hasPeerVbrId() const { return this->peerVbrId_ != nullptr;};
    void deletePeerVbrId() { this->peerVbrId_ = nullptr;};
    inline string peerVbrId() const { DARABONBA_PTR_GET_DEFAULT(peerVbrId_, "") };
    inline DescribeVbrHaResponseBody& setPeerVbrId(string peerVbrId) { DARABONBA_PTR_SET_VALUE(peerVbrId_, peerVbrId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVbrHaResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVbrHaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVbrHaResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vbrHaId Field Functions 
    bool hasVbrHaId() const { return this->vbrHaId_ != nullptr;};
    void deleteVbrHaId() { this->vbrHaId_ = nullptr;};
    inline string vbrHaId() const { DARABONBA_PTR_GET_DEFAULT(vbrHaId_, "") };
    inline DescribeVbrHaResponseBody& setVbrHaId(string vbrHaId) { DARABONBA_PTR_SET_VALUE(vbrHaId_, vbrHaId) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline DescribeVbrHaResponseBody& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


  protected:
    // The time when the VBR was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the VBR failover group.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the VBR failover group.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the other VBR in the VBR failover group.
    std::shared_ptr<string> peerVbrId_ = nullptr;
    // The ID of the region in which the VBR is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the VBR failover group.
    // 
    // *   **Creating**
    // *   **Active**
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the VBR failover group.
    std::shared_ptr<string> vbrHaId_ = nullptr;
    // The VBR ID.
    std::shared_ptr<string> vbrId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
