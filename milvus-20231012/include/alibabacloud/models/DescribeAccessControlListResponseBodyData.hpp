// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class DescribeAccessControlListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
    };
    DescribeAccessControlListResponseBodyData() = default ;
    DescribeAccessControlListResponseBodyData(const DescribeAccessControlListResponseBodyData &) = default ;
    DescribeAccessControlListResponseBodyData(DescribeAccessControlListResponseBodyData &&) = default ;
    DescribeAccessControlListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListResponseBodyData() = default ;
    DescribeAccessControlListResponseBodyData& operator=(const DescribeAccessControlListResponseBodyData &) = default ;
    DescribeAccessControlListResponseBodyData& operator=(DescribeAccessControlListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->cidr_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeAccessControlListResponseBodyData& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline const vector<string> & cidr() const { DARABONBA_PTR_GET_CONST(cidr_, vector<string>) };
    inline vector<string> cidr() { DARABONBA_PTR_GET(cidr_, vector<string>) };
    inline DescribeAccessControlListResponseBodyData& setCidr(const vector<string> & cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };
    inline DescribeAccessControlListResponseBodyData& setCidr(vector<string> && cidr) { DARABONBA_PTR_SET_RVALUE(cidr_, cidr) };


  protected:
    // AclId for public network access control.
    std::shared_ptr<string> aclId_ = nullptr;
    // The CIDR blocks.
    std::shared_ptr<vector<string>> cidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
