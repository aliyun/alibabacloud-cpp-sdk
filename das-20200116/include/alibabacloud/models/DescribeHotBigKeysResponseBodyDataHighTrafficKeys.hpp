// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATAHIGHTRAFFICKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATAHIGHTRAFFICKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotBigKeysResponseBodyDataHighTrafficKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotBigKeysResponseBodyDataHighTrafficKeys& obj) { 
      DARABONBA_PTR_TO_JSON(HighTrafficKey, highTrafficKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotBigKeysResponseBodyDataHighTrafficKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(HighTrafficKey, highTrafficKey_);
    };
    DescribeHotBigKeysResponseBodyDataHighTrafficKeys() = default ;
    DescribeHotBigKeysResponseBodyDataHighTrafficKeys(const DescribeHotBigKeysResponseBodyDataHighTrafficKeys &) = default ;
    DescribeHotBigKeysResponseBodyDataHighTrafficKeys(DescribeHotBigKeysResponseBodyDataHighTrafficKeys &&) = default ;
    DescribeHotBigKeysResponseBodyDataHighTrafficKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotBigKeysResponseBodyDataHighTrafficKeys() = default ;
    DescribeHotBigKeysResponseBodyDataHighTrafficKeys& operator=(const DescribeHotBigKeysResponseBodyDataHighTrafficKeys &) = default ;
    DescribeHotBigKeysResponseBodyDataHighTrafficKeys& operator=(DescribeHotBigKeysResponseBodyDataHighTrafficKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->highTrafficKey_ == nullptr; };
    // highTrafficKey Field Functions 
    bool hasHighTrafficKey() const { return this->highTrafficKey_ != nullptr;};
    void deleteHighTrafficKey() { this->highTrafficKey_ = nullptr;};
    inline const vector<Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey> & highTrafficKey() const { DARABONBA_PTR_GET_CONST(highTrafficKey_, vector<Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey>) };
    inline vector<Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey> highTrafficKey() { DARABONBA_PTR_GET(highTrafficKey_, vector<Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey>) };
    inline DescribeHotBigKeysResponseBodyDataHighTrafficKeys& setHighTrafficKey(const vector<Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey> & highTrafficKey) { DARABONBA_PTR_SET_VALUE(highTrafficKey_, highTrafficKey) };
    inline DescribeHotBigKeysResponseBodyDataHighTrafficKeys& setHighTrafficKey(vector<Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey> && highTrafficKey) { DARABONBA_PTR_SET_RVALUE(highTrafficKey_, highTrafficKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey>> highTrafficKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
