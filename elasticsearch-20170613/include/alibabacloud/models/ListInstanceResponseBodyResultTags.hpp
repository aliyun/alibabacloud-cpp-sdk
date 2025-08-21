// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYRESULTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYRESULTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceResponseBodyResultTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBodyResultTags& obj) { 
      DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBodyResultTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
    };
    ListInstanceResponseBodyResultTags() = default ;
    ListInstanceResponseBodyResultTags(const ListInstanceResponseBodyResultTags &) = default ;
    ListInstanceResponseBodyResultTags(ListInstanceResponseBodyResultTags &&) = default ;
    ListInstanceResponseBodyResultTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBodyResultTags() = default ;
    ListInstanceResponseBodyResultTags& operator=(const ListInstanceResponseBodyResultTags &) = default ;
    ListInstanceResponseBodyResultTags& operator=(ListInstanceResponseBodyResultTags &&) = default ;
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
    inline ListInstanceResponseBodyResultTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline ListInstanceResponseBodyResultTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The size of the node storage space. Unit: GB.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The storage type of the node. Only ultra disks (cloud_efficiency) are supported.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
