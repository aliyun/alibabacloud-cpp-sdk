// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATABIGKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATABIGKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHotBigKeysResponseBodyDataBigKeysBigKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotBigKeysResponseBodyDataBigKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotBigKeysResponseBodyDataBigKeys& obj) { 
      DARABONBA_PTR_TO_JSON(BigKey, bigKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotBigKeysResponseBodyDataBigKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(BigKey, bigKey_);
    };
    DescribeHotBigKeysResponseBodyDataBigKeys() = default ;
    DescribeHotBigKeysResponseBodyDataBigKeys(const DescribeHotBigKeysResponseBodyDataBigKeys &) = default ;
    DescribeHotBigKeysResponseBodyDataBigKeys(DescribeHotBigKeysResponseBodyDataBigKeys &&) = default ;
    DescribeHotBigKeysResponseBodyDataBigKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotBigKeysResponseBodyDataBigKeys() = default ;
    DescribeHotBigKeysResponseBodyDataBigKeys& operator=(const DescribeHotBigKeysResponseBodyDataBigKeys &) = default ;
    DescribeHotBigKeysResponseBodyDataBigKeys& operator=(DescribeHotBigKeysResponseBodyDataBigKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bigKey_ == nullptr; };
    // bigKey Field Functions 
    bool hasBigKey() const { return this->bigKey_ != nullptr;};
    void deleteBigKey() { this->bigKey_ = nullptr;};
    inline const vector<Models::DescribeHotBigKeysResponseBodyDataBigKeysBigKey> & bigKey() const { DARABONBA_PTR_GET_CONST(bigKey_, vector<Models::DescribeHotBigKeysResponseBodyDataBigKeysBigKey>) };
    inline vector<Models::DescribeHotBigKeysResponseBodyDataBigKeysBigKey> bigKey() { DARABONBA_PTR_GET(bigKey_, vector<Models::DescribeHotBigKeysResponseBodyDataBigKeysBigKey>) };
    inline DescribeHotBigKeysResponseBodyDataBigKeys& setBigKey(const vector<Models::DescribeHotBigKeysResponseBodyDataBigKeysBigKey> & bigKey) { DARABONBA_PTR_SET_VALUE(bigKey_, bigKey) };
    inline DescribeHotBigKeysResponseBodyDataBigKeys& setBigKey(vector<Models::DescribeHotBigKeysResponseBodyDataBigKeysBigKey> && bigKey) { DARABONBA_PTR_SET_RVALUE(bigKey_, bigKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeHotBigKeysResponseBodyDataBigKeysBigKey>> bigKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
