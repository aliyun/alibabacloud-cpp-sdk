// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLOCKSTATUSRESPONSEBODYSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLOCKSTATUSRESPONSEBODYSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBlockStatusResponseBodyStatusListBlockStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeBlockStatusResponseBodyStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlockStatusResponseBodyStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(BlockStatusList, blockStatusList_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlockStatusResponseBodyStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockStatusList, blockStatusList_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    DescribeBlockStatusResponseBodyStatusList() = default ;
    DescribeBlockStatusResponseBodyStatusList(const DescribeBlockStatusResponseBodyStatusList &) = default ;
    DescribeBlockStatusResponseBodyStatusList(DescribeBlockStatusResponseBodyStatusList &&) = default ;
    DescribeBlockStatusResponseBodyStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlockStatusResponseBodyStatusList() = default ;
    DescribeBlockStatusResponseBodyStatusList& operator=(const DescribeBlockStatusResponseBodyStatusList &) = default ;
    DescribeBlockStatusResponseBodyStatusList& operator=(DescribeBlockStatusResponseBodyStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockStatusList_ != nullptr
        && this->ip_ != nullptr; };
    // blockStatusList Field Functions 
    bool hasBlockStatusList() const { return this->blockStatusList_ != nullptr;};
    void deleteBlockStatusList() { this->blockStatusList_ = nullptr;};
    inline const vector<Models::DescribeBlockStatusResponseBodyStatusListBlockStatusList> & blockStatusList() const { DARABONBA_PTR_GET_CONST(blockStatusList_, vector<Models::DescribeBlockStatusResponseBodyStatusListBlockStatusList>) };
    inline vector<Models::DescribeBlockStatusResponseBodyStatusListBlockStatusList> blockStatusList() { DARABONBA_PTR_GET(blockStatusList_, vector<Models::DescribeBlockStatusResponseBodyStatusListBlockStatusList>) };
    inline DescribeBlockStatusResponseBodyStatusList& setBlockStatusList(const vector<Models::DescribeBlockStatusResponseBodyStatusListBlockStatusList> & blockStatusList) { DARABONBA_PTR_SET_VALUE(blockStatusList_, blockStatusList) };
    inline DescribeBlockStatusResponseBodyStatusList& setBlockStatusList(vector<Models::DescribeBlockStatusResponseBodyStatusListBlockStatusList> && blockStatusList) { DARABONBA_PTR_SET_RVALUE(blockStatusList_, blockStatusList) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeBlockStatusResponseBodyStatusList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // An array that consists of details of the Diversion from Origin Server configuration.
    std::shared_ptr<vector<Models::DescribeBlockStatusResponseBodyStatusListBlockStatusList>> blockStatusList_ = nullptr;
    // The IP address of the instance.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
