// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGKEYSFOREXPRESSCONNECTRESPONSEBODYTAGKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGKEYSFOREXPRESSCONNECTRESPONSEBODYTAGKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeTagKeysForExpressConnectResponseBodyTagKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagKeysForExpressConnectResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagKeysForExpressConnectResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
    };
    DescribeTagKeysForExpressConnectResponseBodyTagKeys() = default ;
    DescribeTagKeysForExpressConnectResponseBodyTagKeys(const DescribeTagKeysForExpressConnectResponseBodyTagKeys &) = default ;
    DescribeTagKeysForExpressConnectResponseBodyTagKeys(DescribeTagKeysForExpressConnectResponseBodyTagKeys &&) = default ;
    DescribeTagKeysForExpressConnectResponseBodyTagKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagKeysForExpressConnectResponseBodyTagKeys() = default ;
    DescribeTagKeysForExpressConnectResponseBodyTagKeys& operator=(const DescribeTagKeysForExpressConnectResponseBodyTagKeys &) = default ;
    DescribeTagKeysForExpressConnectResponseBodyTagKeys& operator=(DescribeTagKeysForExpressConnectResponseBodyTagKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagKey_ != nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline const vector<Models::DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey> & tagKey() const { DARABONBA_PTR_GET_CONST(tagKey_, vector<Models::DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey>) };
    inline vector<Models::DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey> tagKey() { DARABONBA_PTR_GET(tagKey_, vector<Models::DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey>) };
    inline DescribeTagKeysForExpressConnectResponseBodyTagKeys& setTagKey(const vector<Models::DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey> & tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };
    inline DescribeTagKeysForExpressConnectResponseBodyTagKeys& setTagKey(vector<Models::DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey> && tagKey) { DARABONBA_PTR_SET_RVALUE(tagKey_, tagKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey>> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
