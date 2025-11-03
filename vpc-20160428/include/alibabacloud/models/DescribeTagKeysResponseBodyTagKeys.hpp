// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGKEYSRESPONSEBODYTAGKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGKEYSRESPONSEBODYTAGKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagKeysResponseBodyTagKeysTagKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeTagKeysResponseBodyTagKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagKeysResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagKeysResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
    };
    DescribeTagKeysResponseBodyTagKeys() = default ;
    DescribeTagKeysResponseBodyTagKeys(const DescribeTagKeysResponseBodyTagKeys &) = default ;
    DescribeTagKeysResponseBodyTagKeys(DescribeTagKeysResponseBodyTagKeys &&) = default ;
    DescribeTagKeysResponseBodyTagKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagKeysResponseBodyTagKeys() = default ;
    DescribeTagKeysResponseBodyTagKeys& operator=(const DescribeTagKeysResponseBodyTagKeys &) = default ;
    DescribeTagKeysResponseBodyTagKeys& operator=(DescribeTagKeysResponseBodyTagKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagKey_ == nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline const vector<Models::DescribeTagKeysResponseBodyTagKeysTagKey> & tagKey() const { DARABONBA_PTR_GET_CONST(tagKey_, vector<Models::DescribeTagKeysResponseBodyTagKeysTagKey>) };
    inline vector<Models::DescribeTagKeysResponseBodyTagKeysTagKey> tagKey() { DARABONBA_PTR_GET(tagKey_, vector<Models::DescribeTagKeysResponseBodyTagKeysTagKey>) };
    inline DescribeTagKeysResponseBodyTagKeys& setTagKey(const vector<Models::DescribeTagKeysResponseBodyTagKeysTagKey> & tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };
    inline DescribeTagKeysResponseBodyTagKeys& setTagKey(vector<Models::DescribeTagKeysResponseBodyTagKeysTagKey> && tagKey) { DARABONBA_PTR_SET_RVALUE(tagKey_, tagKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeTagKeysResponseBodyTagKeysTagKey>> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
