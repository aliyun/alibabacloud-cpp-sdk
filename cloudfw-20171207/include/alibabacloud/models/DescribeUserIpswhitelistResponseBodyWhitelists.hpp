// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERIPSWHITELISTRESPONSEBODYWHITELISTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERIPSWHITELISTRESPONSEBODYWHITELISTS_HPP_
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
  class DescribeUserIPSWhitelistResponseBodyWhitelists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserIPSWhitelistResponseBodyWhitelists& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(ListValue, listValue_);
      DARABONBA_PTR_TO_JSON(WhiteListValue, whiteListValue_);
      DARABONBA_PTR_TO_JSON(WhiteType, whiteType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserIPSWhitelistResponseBodyWhitelists& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(ListValue, listValue_);
      DARABONBA_PTR_FROM_JSON(WhiteListValue, whiteListValue_);
      DARABONBA_PTR_FROM_JSON(WhiteType, whiteType_);
    };
    DescribeUserIPSWhitelistResponseBodyWhitelists() = default ;
    DescribeUserIPSWhitelistResponseBodyWhitelists(const DescribeUserIPSWhitelistResponseBodyWhitelists &) = default ;
    DescribeUserIPSWhitelistResponseBodyWhitelists(DescribeUserIPSWhitelistResponseBodyWhitelists &&) = default ;
    DescribeUserIPSWhitelistResponseBodyWhitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserIPSWhitelistResponseBodyWhitelists() = default ;
    DescribeUserIPSWhitelistResponseBodyWhitelists& operator=(const DescribeUserIPSWhitelistResponseBodyWhitelists &) = default ;
    DescribeUserIPSWhitelistResponseBodyWhitelists& operator=(DescribeUserIPSWhitelistResponseBodyWhitelists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->direction_ != nullptr
        && this->listType_ != nullptr && this->listValue_ != nullptr && this->whiteListValue_ != nullptr && this->whiteType_ != nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline int64_t direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, 0L) };
    inline DescribeUserIPSWhitelistResponseBodyWhitelists& setDirection(int64_t direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline int64_t listType() const { DARABONBA_PTR_GET_DEFAULT(listType_, 0L) };
    inline DescribeUserIPSWhitelistResponseBodyWhitelists& setListType(int64_t listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // listValue Field Functions 
    bool hasListValue() const { return this->listValue_ != nullptr;};
    void deleteListValue() { this->listValue_ = nullptr;};
    inline string listValue() const { DARABONBA_PTR_GET_DEFAULT(listValue_, "") };
    inline DescribeUserIPSWhitelistResponseBodyWhitelists& setListValue(string listValue) { DARABONBA_PTR_SET_VALUE(listValue_, listValue) };


    // whiteListValue Field Functions 
    bool hasWhiteListValue() const { return this->whiteListValue_ != nullptr;};
    void deleteWhiteListValue() { this->whiteListValue_ = nullptr;};
    inline const vector<string> & whiteListValue() const { DARABONBA_PTR_GET_CONST(whiteListValue_, vector<string>) };
    inline vector<string> whiteListValue() { DARABONBA_PTR_GET(whiteListValue_, vector<string>) };
    inline DescribeUserIPSWhitelistResponseBodyWhitelists& setWhiteListValue(const vector<string> & whiteListValue) { DARABONBA_PTR_SET_VALUE(whiteListValue_, whiteListValue) };
    inline DescribeUserIPSWhitelistResponseBodyWhitelists& setWhiteListValue(vector<string> && whiteListValue) { DARABONBA_PTR_SET_RVALUE(whiteListValue_, whiteListValue) };


    // whiteType Field Functions 
    bool hasWhiteType() const { return this->whiteType_ != nullptr;};
    void deleteWhiteType() { this->whiteType_ = nullptr;};
    inline int64_t whiteType() const { DARABONBA_PTR_GET_DEFAULT(whiteType_, 0L) };
    inline DescribeUserIPSWhitelistResponseBodyWhitelists& setWhiteType(int64_t whiteType) { DARABONBA_PTR_SET_VALUE(whiteType_, whiteType) };


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
