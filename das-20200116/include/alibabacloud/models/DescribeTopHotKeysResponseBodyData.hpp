// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPHOTKEYSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPHOTKEYSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTopHotKeysResponseBodyDataHotKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeTopHotKeysResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopHotKeysResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HotKey, hotKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopHotKeysResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HotKey, hotKey_);
    };
    DescribeTopHotKeysResponseBodyData() = default ;
    DescribeTopHotKeysResponseBodyData(const DescribeTopHotKeysResponseBodyData &) = default ;
    DescribeTopHotKeysResponseBodyData(DescribeTopHotKeysResponseBodyData &&) = default ;
    DescribeTopHotKeysResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopHotKeysResponseBodyData() = default ;
    DescribeTopHotKeysResponseBodyData& operator=(const DescribeTopHotKeysResponseBodyData &) = default ;
    DescribeTopHotKeysResponseBodyData& operator=(DescribeTopHotKeysResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotKey_ != nullptr; };
    // hotKey Field Functions 
    bool hasHotKey() const { return this->hotKey_ != nullptr;};
    void deleteHotKey() { this->hotKey_ = nullptr;};
    inline const vector<Models::DescribeTopHotKeysResponseBodyDataHotKey> & hotKey() const { DARABONBA_PTR_GET_CONST(hotKey_, vector<Models::DescribeTopHotKeysResponseBodyDataHotKey>) };
    inline vector<Models::DescribeTopHotKeysResponseBodyDataHotKey> hotKey() { DARABONBA_PTR_GET(hotKey_, vector<Models::DescribeTopHotKeysResponseBodyDataHotKey>) };
    inline DescribeTopHotKeysResponseBodyData& setHotKey(const vector<Models::DescribeTopHotKeysResponseBodyDataHotKey> & hotKey) { DARABONBA_PTR_SET_VALUE(hotKey_, hotKey) };
    inline DescribeTopHotKeysResponseBodyData& setHotKey(vector<Models::DescribeTopHotKeysResponseBodyDataHotKey> && hotKey) { DARABONBA_PTR_SET_RVALUE(hotKey_, hotKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeTopHotKeysResponseBodyDataHotKey>> hotKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
