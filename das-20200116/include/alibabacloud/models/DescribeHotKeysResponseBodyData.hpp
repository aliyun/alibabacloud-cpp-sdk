// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTKEYSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTKEYSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHotKeysResponseBodyDataHotKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotKeysResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotKeysResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HotKey, hotKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotKeysResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HotKey, hotKey_);
    };
    DescribeHotKeysResponseBodyData() = default ;
    DescribeHotKeysResponseBodyData(const DescribeHotKeysResponseBodyData &) = default ;
    DescribeHotKeysResponseBodyData(DescribeHotKeysResponseBodyData &&) = default ;
    DescribeHotKeysResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotKeysResponseBodyData() = default ;
    DescribeHotKeysResponseBodyData& operator=(const DescribeHotKeysResponseBodyData &) = default ;
    DescribeHotKeysResponseBodyData& operator=(DescribeHotKeysResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotKey_ != nullptr; };
    // hotKey Field Functions 
    bool hasHotKey() const { return this->hotKey_ != nullptr;};
    void deleteHotKey() { this->hotKey_ = nullptr;};
    inline const vector<Models::DescribeHotKeysResponseBodyDataHotKey> & hotKey() const { DARABONBA_PTR_GET_CONST(hotKey_, vector<Models::DescribeHotKeysResponseBodyDataHotKey>) };
    inline vector<Models::DescribeHotKeysResponseBodyDataHotKey> hotKey() { DARABONBA_PTR_GET(hotKey_, vector<Models::DescribeHotKeysResponseBodyDataHotKey>) };
    inline DescribeHotKeysResponseBodyData& setHotKey(const vector<Models::DescribeHotKeysResponseBodyDataHotKey> & hotKey) { DARABONBA_PTR_SET_VALUE(hotKey_, hotKey) };
    inline DescribeHotKeysResponseBodyData& setHotKey(vector<Models::DescribeHotKeysResponseBodyDataHotKey> && hotKey) { DARABONBA_PTR_SET_RVALUE(hotKey_, hotKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeHotKeysResponseBodyDataHotKey>> hotKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
