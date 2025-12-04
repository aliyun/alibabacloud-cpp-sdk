// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYDBCLUSTERACCESSWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYDBCLUSTERACCESSWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList& obj) { 
      DARABONBA_PTR_TO_JSON(IPArray, IPArray_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList& obj) { 
      DARABONBA_PTR_FROM_JSON(IPArray, IPArray_);
    };
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList() = default ;
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList(const DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList &) = default ;
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList(DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList &&) = default ;
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList() = default ;
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList& operator=(const DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList &) = default ;
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList& operator=(DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IPArray_ == nullptr; };
    // IPArray Field Functions 
    bool hasIPArray() const { return this->IPArray_ != nullptr;};
    void deleteIPArray() { this->IPArray_ = nullptr;};
    inline const vector<Models::DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray> & IPArray() const { DARABONBA_PTR_GET_CONST(IPArray_, vector<Models::DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray>) };
    inline vector<Models::DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray> IPArray() { DARABONBA_PTR_GET(IPArray_, vector<Models::DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray>) };
    inline DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList& setIPArray(const vector<Models::DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray> & IPArray) { DARABONBA_PTR_SET_VALUE(IPArray_, IPArray) };
    inline DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList& setIPArray(vector<Models::DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray> && IPArray) { DARABONBA_PTR_SET_RVALUE(IPArray_, IPArray) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray>> IPArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
