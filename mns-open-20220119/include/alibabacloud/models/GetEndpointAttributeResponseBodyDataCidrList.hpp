// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENDPOINTATTRIBUTERESPONSEBODYDATACIDRLIST_HPP_
#define ALIBABACLOUD_MODELS_GETENDPOINTATTRIBUTERESPONSEBODYDATACIDRLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetEndpointAttributeResponseBodyDataCidrList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEndpointAttributeResponseBodyDataCidrList& obj) { 
      DARABONBA_PTR_TO_JSON(AclStrategy, aclStrategy_);
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetEndpointAttributeResponseBodyDataCidrList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclStrategy, aclStrategy_);
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
    };
    GetEndpointAttributeResponseBodyDataCidrList() = default ;
    GetEndpointAttributeResponseBodyDataCidrList(const GetEndpointAttributeResponseBodyDataCidrList &) = default ;
    GetEndpointAttributeResponseBodyDataCidrList(GetEndpointAttributeResponseBodyDataCidrList &&) = default ;
    GetEndpointAttributeResponseBodyDataCidrList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEndpointAttributeResponseBodyDataCidrList() = default ;
    GetEndpointAttributeResponseBodyDataCidrList& operator=(const GetEndpointAttributeResponseBodyDataCidrList &) = default ;
    GetEndpointAttributeResponseBodyDataCidrList& operator=(GetEndpointAttributeResponseBodyDataCidrList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclStrategy_ != nullptr
        && this->cidr_ != nullptr && this->createTime_ != nullptr; };
    // aclStrategy Field Functions 
    bool hasAclStrategy() const { return this->aclStrategy_ != nullptr;};
    void deleteAclStrategy() { this->aclStrategy_ = nullptr;};
    inline string aclStrategy() const { DARABONBA_PTR_GET_DEFAULT(aclStrategy_, "") };
    inline GetEndpointAttributeResponseBodyDataCidrList& setAclStrategy(string aclStrategy) { DARABONBA_PTR_SET_VALUE(aclStrategy_, aclStrategy) };


    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline GetEndpointAttributeResponseBodyDataCidrList& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetEndpointAttributeResponseBodyDataCidrList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


  protected:
    // The ACL policy. Valid values:
    // 
    // *   **allow**: indicates that the current endpoint allows access from the corresponding CIDR block. (Only allow is supported.)
    std::shared_ptr<string> aclStrategy_ = nullptr;
    // The CIDR block.
    std::shared_ptr<string> cidr_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
