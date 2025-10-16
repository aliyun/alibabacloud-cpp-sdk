// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERIPSWHITELISTRESPONSEBODYIPV6WHITELISTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERIPSWHITELISTRESPONSEBODYIPV6WHITELISTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUserIPSWhitelistResponseBodyIpv6Whitelists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserIPSWhitelistResponseBodyIpv6Whitelists& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(ListValue, listValue_);
      DARABONBA_PTR_TO_JSON(WhiteListValue, whiteListValue_);
      DARABONBA_PTR_TO_JSON(WhiteType, whiteType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserIPSWhitelistResponseBodyIpv6Whitelists& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(ListValue, listValue_);
      DARABONBA_PTR_FROM_JSON(WhiteListValue, whiteListValue_);
      DARABONBA_PTR_FROM_JSON(WhiteType, whiteType_);
    };
    DescribeUserIPSWhitelistResponseBodyIpv6Whitelists() = default ;
    DescribeUserIPSWhitelistResponseBodyIpv6Whitelists(const DescribeUserIPSWhitelistResponseBodyIpv6Whitelists &) = default ;
    DescribeUserIPSWhitelistResponseBodyIpv6Whitelists(DescribeUserIPSWhitelistResponseBodyIpv6Whitelists &&) = default ;
    DescribeUserIPSWhitelistResponseBodyIpv6Whitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserIPSWhitelistResponseBodyIpv6Whitelists() = default ;
    DescribeUserIPSWhitelistResponseBodyIpv6Whitelists& operator=(const DescribeUserIPSWhitelistResponseBodyIpv6Whitelists &) = default ;
    DescribeUserIPSWhitelistResponseBodyIpv6Whitelists& operator=(DescribeUserIPSWhitelistResponseBodyIpv6Whitelists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && return this->listType_ == nullptr && return this->listValue_ == nullptr && return this->whiteListValue_ == nullptr && return this->whiteType_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline int64_t direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, 0L) };
    inline DescribeUserIPSWhitelistResponseBodyIpv6Whitelists& setDirection(int64_t direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline int64_t listType() const { DARABONBA_PTR_GET_DEFAULT(listType_, 0L) };
    inline DescribeUserIPSWhitelistResponseBodyIpv6Whitelists& setListType(int64_t listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // listValue Field Functions 
    bool hasListValue() const { return this->listValue_ != nullptr;};
    void deleteListValue() { this->listValue_ = nullptr;};
    inline string listValue() const { DARABONBA_PTR_GET_DEFAULT(listValue_, "") };
    inline DescribeUserIPSWhitelistResponseBodyIpv6Whitelists& setListValue(string listValue) { DARABONBA_PTR_SET_VALUE(listValue_, listValue) };


    // whiteListValue Field Functions 
    bool hasWhiteListValue() const { return this->whiteListValue_ != nullptr;};
    void deleteWhiteListValue() { this->whiteListValue_ = nullptr;};
    inline const vector<string> & whiteListValue() const { DARABONBA_PTR_GET_CONST(whiteListValue_, vector<string>) };
    inline vector<string> whiteListValue() { DARABONBA_PTR_GET(whiteListValue_, vector<string>) };
    inline DescribeUserIPSWhitelistResponseBodyIpv6Whitelists& setWhiteListValue(const vector<string> & whiteListValue) { DARABONBA_PTR_SET_VALUE(whiteListValue_, whiteListValue) };
    inline DescribeUserIPSWhitelistResponseBodyIpv6Whitelists& setWhiteListValue(vector<string> && whiteListValue) { DARABONBA_PTR_SET_RVALUE(whiteListValue_, whiteListValue) };


    // whiteType Field Functions 
    bool hasWhiteType() const { return this->whiteType_ != nullptr;};
    void deleteWhiteType() { this->whiteType_ = nullptr;};
    inline int64_t whiteType() const { DARABONBA_PTR_GET_DEFAULT(whiteType_, 0L) };
    inline DescribeUserIPSWhitelistResponseBodyIpv6Whitelists& setWhiteType(int64_t whiteType) { DARABONBA_PTR_SET_VALUE(whiteType_, whiteType) };


  protected:
    std::shared_ptr<int64_t> direction_ = nullptr;
    std::shared_ptr<int64_t> listType_ = nullptr;
    std::shared_ptr<string> listValue_ = nullptr;
    std::shared_ptr<vector<string>> whiteListValue_ = nullptr;
    std::shared_ptr<int64_t> whiteType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
