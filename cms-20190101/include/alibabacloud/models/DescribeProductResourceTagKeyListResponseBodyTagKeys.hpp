// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESOURCETAGKEYLISTRESPONSEBODYTAGKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESOURCETAGKEYLISTRESPONSEBODYTAGKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeProductResourceTagKeyListResponseBodyTagKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResourceTagKeyListResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResourceTagKeyListResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
    };
    DescribeProductResourceTagKeyListResponseBodyTagKeys() = default ;
    DescribeProductResourceTagKeyListResponseBodyTagKeys(const DescribeProductResourceTagKeyListResponseBodyTagKeys &) = default ;
    DescribeProductResourceTagKeyListResponseBodyTagKeys(DescribeProductResourceTagKeyListResponseBodyTagKeys &&) = default ;
    DescribeProductResourceTagKeyListResponseBodyTagKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResourceTagKeyListResponseBodyTagKeys() = default ;
    DescribeProductResourceTagKeyListResponseBodyTagKeys& operator=(const DescribeProductResourceTagKeyListResponseBodyTagKeys &) = default ;
    DescribeProductResourceTagKeyListResponseBodyTagKeys& operator=(DescribeProductResourceTagKeyListResponseBodyTagKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagKey_ != nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline const vector<string> & tagKey() const { DARABONBA_PTR_GET_CONST(tagKey_, vector<string>) };
    inline vector<string> tagKey() { DARABONBA_PTR_GET(tagKey_, vector<string>) };
    inline DescribeProductResourceTagKeyListResponseBodyTagKeys& setTagKey(const vector<string> & tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };
    inline DescribeProductResourceTagKeyListResponseBodyTagKeys& setTagKey(vector<string> && tagKey) { DARABONBA_PTR_SET_RVALUE(tagKey_, tagKey) };


  protected:
    std::shared_ptr<vector<string>> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
