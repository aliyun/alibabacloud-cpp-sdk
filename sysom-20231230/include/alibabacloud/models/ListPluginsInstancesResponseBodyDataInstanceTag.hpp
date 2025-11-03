// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSINSTANCESRESPONSEBODYDATAINSTANCETAG_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSINSTANCESRESPONSEBODYDATAINSTANCETAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListPluginsInstancesResponseBodyDataInstanceTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginsInstancesResponseBodyDataInstanceTag& obj) { 
      DARABONBA_PTR_TO_JSON(tag_key, tagKey_);
      DARABONBA_PTR_TO_JSON(tag_value, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginsInstancesResponseBodyDataInstanceTag& obj) { 
      DARABONBA_PTR_FROM_JSON(tag_key, tagKey_);
      DARABONBA_PTR_FROM_JSON(tag_value, tagValue_);
    };
    ListPluginsInstancesResponseBodyDataInstanceTag() = default ;
    ListPluginsInstancesResponseBodyDataInstanceTag(const ListPluginsInstancesResponseBodyDataInstanceTag &) = default ;
    ListPluginsInstancesResponseBodyDataInstanceTag(ListPluginsInstancesResponseBodyDataInstanceTag &&) = default ;
    ListPluginsInstancesResponseBodyDataInstanceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginsInstancesResponseBodyDataInstanceTag() = default ;
    ListPluginsInstancesResponseBodyDataInstanceTag& operator=(const ListPluginsInstancesResponseBodyDataInstanceTag &) = default ;
    ListPluginsInstancesResponseBodyDataInstanceTag& operator=(ListPluginsInstancesResponseBodyDataInstanceTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagKey_ == nullptr
        && return this->tagValue_ == nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListPluginsInstancesResponseBodyDataInstanceTag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline ListPluginsInstancesResponseBodyDataInstanceTag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    std::shared_ptr<string> tagKey_ = nullptr;
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
