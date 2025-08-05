// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYQUOTAINFOLISTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYQUOTAINFOLISTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasResponseBodyQuotaInfoListTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasResponseBodyQuotaInfoListTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasResponseBodyQuotaInfoListTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    ListQuotasResponseBodyQuotaInfoListTags() = default ;
    ListQuotasResponseBodyQuotaInfoListTags(const ListQuotasResponseBodyQuotaInfoListTags &) = default ;
    ListQuotasResponseBodyQuotaInfoListTags(ListQuotasResponseBodyQuotaInfoListTags &&) = default ;
    ListQuotasResponseBodyQuotaInfoListTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasResponseBodyQuotaInfoListTags() = default ;
    ListQuotasResponseBodyQuotaInfoListTags& operator=(const ListQuotasResponseBodyQuotaInfoListTags &) = default ;
    ListQuotasResponseBodyQuotaInfoListTags& operator=(ListQuotasResponseBodyQuotaInfoListTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagKey_ != nullptr
        && this->tagValue_ != nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListQuotasResponseBodyQuotaInfoListTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline ListQuotasResponseBodyQuotaInfoListTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The key of the tag.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The value of the tag.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
