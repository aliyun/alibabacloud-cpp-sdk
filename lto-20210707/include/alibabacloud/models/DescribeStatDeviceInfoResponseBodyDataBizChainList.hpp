// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTATDEVICEINFORESPONSEBODYDATABIZCHAINLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTATDEVICEINFORESPONSEBODYDATABIZCHAINLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeStatDeviceInfoResponseBodyDataBizChainList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStatDeviceInfoResponseBodyDataBizChainList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_TO_JSON(BizChainName, bizChainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStatDeviceInfoResponseBodyDataBizChainList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_FROM_JSON(BizChainName, bizChainName_);
    };
    DescribeStatDeviceInfoResponseBodyDataBizChainList() = default ;
    DescribeStatDeviceInfoResponseBodyDataBizChainList(const DescribeStatDeviceInfoResponseBodyDataBizChainList &) = default ;
    DescribeStatDeviceInfoResponseBodyDataBizChainList(DescribeStatDeviceInfoResponseBodyDataBizChainList &&) = default ;
    DescribeStatDeviceInfoResponseBodyDataBizChainList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStatDeviceInfoResponseBodyDataBizChainList() = default ;
    DescribeStatDeviceInfoResponseBodyDataBizChainList& operator=(const DescribeStatDeviceInfoResponseBodyDataBizChainList &) = default ;
    DescribeStatDeviceInfoResponseBodyDataBizChainList& operator=(DescribeStatDeviceInfoResponseBodyDataBizChainList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedCount_ == nullptr
        && return this->bizChainName_ == nullptr; };
    // authorizedCount Field Functions 
    bool hasAuthorizedCount() const { return this->authorizedCount_ != nullptr;};
    void deleteAuthorizedCount() { this->authorizedCount_ = nullptr;};
    inline int32_t authorizedCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedCount_, 0) };
    inline DescribeStatDeviceInfoResponseBodyDataBizChainList& setAuthorizedCount(int32_t authorizedCount) { DARABONBA_PTR_SET_VALUE(authorizedCount_, authorizedCount) };


    // bizChainName Field Functions 
    bool hasBizChainName() const { return this->bizChainName_ != nullptr;};
    void deleteBizChainName() { this->bizChainName_ = nullptr;};
    inline string bizChainName() const { DARABONBA_PTR_GET_DEFAULT(bizChainName_, "") };
    inline DescribeStatDeviceInfoResponseBodyDataBizChainList& setBizChainName(string bizChainName) { DARABONBA_PTR_SET_VALUE(bizChainName_, bizChainName) };


  protected:
    std::shared_ptr<int32_t> authorizedCount_ = nullptr;
    std::shared_ptr<string> bizChainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
