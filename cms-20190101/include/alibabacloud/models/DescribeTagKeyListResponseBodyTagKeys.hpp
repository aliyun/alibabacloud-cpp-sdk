// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGKEYLISTRESPONSEBODYTAGKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGKEYLISTRESPONSEBODYTAGKEYS_HPP_
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
  class DescribeTagKeyListResponseBodyTagKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagKeyListResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagKeyListResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
    };
    DescribeTagKeyListResponseBodyTagKeys() = default ;
    DescribeTagKeyListResponseBodyTagKeys(const DescribeTagKeyListResponseBodyTagKeys &) = default ;
    DescribeTagKeyListResponseBodyTagKeys(DescribeTagKeyListResponseBodyTagKeys &&) = default ;
    DescribeTagKeyListResponseBodyTagKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagKeyListResponseBodyTagKeys() = default ;
    DescribeTagKeyListResponseBodyTagKeys& operator=(const DescribeTagKeyListResponseBodyTagKeys &) = default ;
    DescribeTagKeyListResponseBodyTagKeys& operator=(DescribeTagKeyListResponseBodyTagKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagKey_ == nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline const vector<string> & tagKey() const { DARABONBA_PTR_GET_CONST(tagKey_, vector<string>) };
    inline vector<string> tagKey() { DARABONBA_PTR_GET(tagKey_, vector<string>) };
    inline DescribeTagKeyListResponseBodyTagKeys& setTagKey(const vector<string> & tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };
    inline DescribeTagKeyListResponseBodyTagKeys& setTagKey(vector<string> && tagKey) { DARABONBA_PTR_SET_RVALUE(tagKey_, tagKey) };


  protected:
    std::shared_ptr<vector<string>> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
