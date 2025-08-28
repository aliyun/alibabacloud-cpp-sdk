// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGKEYSFOREXPRESSCONNECTRESPONSEBODYTAGKEYSTAGKEY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGKEYSFOREXPRESSCONNECTRESPONSEBODYTAGKEYSTAGKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey() = default ;
    DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey(const DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey &) = default ;
    DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey(DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey &&) = default ;
    DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey() = default ;
    DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey& operator=(const DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey &) = default ;
    DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey& operator=(DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagKey_ != nullptr
        && this->type_ != nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTagKeysForExpressConnectResponseBodyTagKeysTagKey& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The key of the tag.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The type of the resource. The value is set to **PHYSICALCONNECTION**, which indicates an Express Connect circuit.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
