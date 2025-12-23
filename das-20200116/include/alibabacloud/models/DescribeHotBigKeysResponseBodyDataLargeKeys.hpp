// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATALARGEKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATALARGEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotBigKeysResponseBodyDataLargeKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotBigKeysResponseBodyDataLargeKeys& obj) { 
      DARABONBA_PTR_TO_JSON(LargeKey, largeKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotBigKeysResponseBodyDataLargeKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(LargeKey, largeKey_);
    };
    DescribeHotBigKeysResponseBodyDataLargeKeys() = default ;
    DescribeHotBigKeysResponseBodyDataLargeKeys(const DescribeHotBigKeysResponseBodyDataLargeKeys &) = default ;
    DescribeHotBigKeysResponseBodyDataLargeKeys(DescribeHotBigKeysResponseBodyDataLargeKeys &&) = default ;
    DescribeHotBigKeysResponseBodyDataLargeKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotBigKeysResponseBodyDataLargeKeys() = default ;
    DescribeHotBigKeysResponseBodyDataLargeKeys& operator=(const DescribeHotBigKeysResponseBodyDataLargeKeys &) = default ;
    DescribeHotBigKeysResponseBodyDataLargeKeys& operator=(DescribeHotBigKeysResponseBodyDataLargeKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->largeKey_ == nullptr; };
    // largeKey Field Functions 
    bool hasLargeKey() const { return this->largeKey_ != nullptr;};
    void deleteLargeKey() { this->largeKey_ = nullptr;};
    inline const vector<Models::DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey> & largeKey() const { DARABONBA_PTR_GET_CONST(largeKey_, vector<Models::DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey>) };
    inline vector<Models::DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey> largeKey() { DARABONBA_PTR_GET(largeKey_, vector<Models::DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey>) };
    inline DescribeHotBigKeysResponseBodyDataLargeKeys& setLargeKey(const vector<Models::DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey> & largeKey) { DARABONBA_PTR_SET_VALUE(largeKey_, largeKey) };
    inline DescribeHotBigKeysResponseBodyDataLargeKeys& setLargeKey(vector<Models::DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey> && largeKey) { DARABONBA_PTR_SET_RVALUE(largeKey_, largeKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey>> largeKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
