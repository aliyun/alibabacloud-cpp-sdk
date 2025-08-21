// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATAHOTKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATAHOTKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHotBigKeysResponseBodyDataHotKeysHotKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotBigKeysResponseBodyDataHotKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotBigKeysResponseBodyDataHotKeys& obj) { 
      DARABONBA_PTR_TO_JSON(HotKey, hotKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotBigKeysResponseBodyDataHotKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(HotKey, hotKey_);
    };
    DescribeHotBigKeysResponseBodyDataHotKeys() = default ;
    DescribeHotBigKeysResponseBodyDataHotKeys(const DescribeHotBigKeysResponseBodyDataHotKeys &) = default ;
    DescribeHotBigKeysResponseBodyDataHotKeys(DescribeHotBigKeysResponseBodyDataHotKeys &&) = default ;
    DescribeHotBigKeysResponseBodyDataHotKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotBigKeysResponseBodyDataHotKeys() = default ;
    DescribeHotBigKeysResponseBodyDataHotKeys& operator=(const DescribeHotBigKeysResponseBodyDataHotKeys &) = default ;
    DescribeHotBigKeysResponseBodyDataHotKeys& operator=(DescribeHotBigKeysResponseBodyDataHotKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotKey_ != nullptr; };
    // hotKey Field Functions 
    bool hasHotKey() const { return this->hotKey_ != nullptr;};
    void deleteHotKey() { this->hotKey_ = nullptr;};
    inline const vector<Models::DescribeHotBigKeysResponseBodyDataHotKeysHotKey> & hotKey() const { DARABONBA_PTR_GET_CONST(hotKey_, vector<Models::DescribeHotBigKeysResponseBodyDataHotKeysHotKey>) };
    inline vector<Models::DescribeHotBigKeysResponseBodyDataHotKeysHotKey> hotKey() { DARABONBA_PTR_GET(hotKey_, vector<Models::DescribeHotBigKeysResponseBodyDataHotKeysHotKey>) };
    inline DescribeHotBigKeysResponseBodyDataHotKeys& setHotKey(const vector<Models::DescribeHotBigKeysResponseBodyDataHotKeysHotKey> & hotKey) { DARABONBA_PTR_SET_VALUE(hotKey_, hotKey) };
    inline DescribeHotBigKeysResponseBodyDataHotKeys& setHotKey(vector<Models::DescribeHotBigKeysResponseBodyDataHotKeysHotKey> && hotKey) { DARABONBA_PTR_SET_RVALUE(hotKey_, hotKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeHotBigKeysResponseBodyDataHotKeysHotKey>> hotKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
