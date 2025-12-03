// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERWHITELISTRESPONSEBODYGROUPITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERWHITELISTRESPONSEBODYGROUPITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterWhiteListResponseBodyGroupItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterWhiteListResponseBodyGroupItems& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteIp, whiteIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterWhiteListResponseBodyGroupItems& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteIp, whiteIp_);
    };
    DescribeClusterWhiteListResponseBodyGroupItems() = default ;
    DescribeClusterWhiteListResponseBodyGroupItems(const DescribeClusterWhiteListResponseBodyGroupItems &) = default ;
    DescribeClusterWhiteListResponseBodyGroupItems(DescribeClusterWhiteListResponseBodyGroupItems &&) = default ;
    DescribeClusterWhiteListResponseBodyGroupItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterWhiteListResponseBodyGroupItems() = default ;
    DescribeClusterWhiteListResponseBodyGroupItems& operator=(const DescribeClusterWhiteListResponseBodyGroupItems &) = default ;
    DescribeClusterWhiteListResponseBodyGroupItems& operator=(DescribeClusterWhiteListResponseBodyGroupItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->whiteIp_ == nullptr; };
    // whiteIp Field Functions 
    bool hasWhiteIp() const { return this->whiteIp_ != nullptr;};
    void deleteWhiteIp() { this->whiteIp_ = nullptr;};
    inline const vector<string> & whiteIp() const { DARABONBA_PTR_GET_CONST(whiteIp_, vector<string>) };
    inline vector<string> whiteIp() { DARABONBA_PTR_GET(whiteIp_, vector<string>) };
    inline DescribeClusterWhiteListResponseBodyGroupItems& setWhiteIp(const vector<string> & whiteIp) { DARABONBA_PTR_SET_VALUE(whiteIp_, whiteIp) };
    inline DescribeClusterWhiteListResponseBodyGroupItems& setWhiteIp(vector<string> && whiteIp) { DARABONBA_PTR_SET_RVALUE(whiteIp_, whiteIp) };


  protected:
    std::shared_ptr<vector<string>> whiteIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
