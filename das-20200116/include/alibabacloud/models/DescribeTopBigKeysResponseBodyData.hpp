// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPBIGKEYSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPBIGKEYSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTopBigKeysResponseBodyDataBigKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeTopBigKeysResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopBigKeysResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BigKey, bigKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopBigKeysResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BigKey, bigKey_);
    };
    DescribeTopBigKeysResponseBodyData() = default ;
    DescribeTopBigKeysResponseBodyData(const DescribeTopBigKeysResponseBodyData &) = default ;
    DescribeTopBigKeysResponseBodyData(DescribeTopBigKeysResponseBodyData &&) = default ;
    DescribeTopBigKeysResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopBigKeysResponseBodyData() = default ;
    DescribeTopBigKeysResponseBodyData& operator=(const DescribeTopBigKeysResponseBodyData &) = default ;
    DescribeTopBigKeysResponseBodyData& operator=(DescribeTopBigKeysResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bigKey_ != nullptr; };
    // bigKey Field Functions 
    bool hasBigKey() const { return this->bigKey_ != nullptr;};
    void deleteBigKey() { this->bigKey_ = nullptr;};
    inline const vector<Models::DescribeTopBigKeysResponseBodyDataBigKey> & bigKey() const { DARABONBA_PTR_GET_CONST(bigKey_, vector<Models::DescribeTopBigKeysResponseBodyDataBigKey>) };
    inline vector<Models::DescribeTopBigKeysResponseBodyDataBigKey> bigKey() { DARABONBA_PTR_GET(bigKey_, vector<Models::DescribeTopBigKeysResponseBodyDataBigKey>) };
    inline DescribeTopBigKeysResponseBodyData& setBigKey(const vector<Models::DescribeTopBigKeysResponseBodyDataBigKey> & bigKey) { DARABONBA_PTR_SET_VALUE(bigKey_, bigKey) };
    inline DescribeTopBigKeysResponseBodyData& setBigKey(vector<Models::DescribeTopBigKeysResponseBodyDataBigKey> && bigKey) { DARABONBA_PTR_SET_RVALUE(bigKey_, bigKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeTopBigKeysResponseBodyDataBigKey>> bigKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
