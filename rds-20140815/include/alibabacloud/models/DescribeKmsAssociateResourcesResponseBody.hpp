// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSASSOCIATERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSASSOCIATERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeKmsAssociateResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsAssociateResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateDBInstances, associateDBInstances_);
      DARABONBA_PTR_TO_JSON(AssociateStatus, associateStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsAssociateResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateDBInstances, associateDBInstances_);
      DARABONBA_PTR_FROM_JSON(AssociateStatus, associateStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeKmsAssociateResourcesResponseBody() = default ;
    DescribeKmsAssociateResourcesResponseBody(const DescribeKmsAssociateResourcesResponseBody &) = default ;
    DescribeKmsAssociateResourcesResponseBody(DescribeKmsAssociateResourcesResponseBody &&) = default ;
    DescribeKmsAssociateResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKmsAssociateResourcesResponseBody() = default ;
    DescribeKmsAssociateResourcesResponseBody& operator=(const DescribeKmsAssociateResourcesResponseBody &) = default ;
    DescribeKmsAssociateResourcesResponseBody& operator=(DescribeKmsAssociateResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associateDBInstances_ == nullptr
        && return this->associateStatus_ == nullptr && return this->requestId_ == nullptr; };
    // associateDBInstances Field Functions 
    bool hasAssociateDBInstances() const { return this->associateDBInstances_ != nullptr;};
    void deleteAssociateDBInstances() { this->associateDBInstances_ = nullptr;};
    inline const vector<DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances> & associateDBInstances() const { DARABONBA_PTR_GET_CONST(associateDBInstances_, vector<DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances>) };
    inline vector<DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances> associateDBInstances() { DARABONBA_PTR_GET(associateDBInstances_, vector<DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances>) };
    inline DescribeKmsAssociateResourcesResponseBody& setAssociateDBInstances(const vector<DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances> & associateDBInstances) { DARABONBA_PTR_SET_VALUE(associateDBInstances_, associateDBInstances) };
    inline DescribeKmsAssociateResourcesResponseBody& setAssociateDBInstances(vector<DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances> && associateDBInstances) { DARABONBA_PTR_SET_RVALUE(associateDBInstances_, associateDBInstances) };


    // associateStatus Field Functions 
    bool hasAssociateStatus() const { return this->associateStatus_ != nullptr;};
    void deleteAssociateStatus() { this->associateStatus_ = nullptr;};
    inline bool associateStatus() const { DARABONBA_PTR_GET_DEFAULT(associateStatus_, false) };
    inline DescribeKmsAssociateResourcesResponseBody& setAssociateStatus(bool associateStatus) { DARABONBA_PTR_SET_VALUE(associateStatus_, associateStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKmsAssociateResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the associated ApsaraDB RDS instances.
    std::shared_ptr<vector<DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances>> associateDBInstances_ = nullptr;
    // Indicates whether an associated RDS instance exists.
    // 
    // - **true**: Yes
    // - **false**: No
    std::shared_ptr<bool> associateStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
