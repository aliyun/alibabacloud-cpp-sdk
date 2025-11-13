// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMCALLTAGGINGRESPONSEBODYDATALISTCALLTAGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMCALLTAGGINGRESPONSEBODYDATALISTCALLTAGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCustomCallTaggingResponseBodyDataListCallTagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomCallTaggingResponseBodyDataListCallTagList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomCallTaggingResponseBodyDataListCallTagList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    ListCustomCallTaggingResponseBodyDataListCallTagList() = default ;
    ListCustomCallTaggingResponseBodyDataListCallTagList(const ListCustomCallTaggingResponseBodyDataListCallTagList &) = default ;
    ListCustomCallTaggingResponseBodyDataListCallTagList(ListCustomCallTaggingResponseBodyDataListCallTagList &&) = default ;
    ListCustomCallTaggingResponseBodyDataListCallTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomCallTaggingResponseBodyDataListCallTagList() = default ;
    ListCustomCallTaggingResponseBodyDataListCallTagList& operator=(const ListCustomCallTaggingResponseBodyDataListCallTagList &) = default ;
    ListCustomCallTaggingResponseBodyDataListCallTagList& operator=(ListCustomCallTaggingResponseBodyDataListCallTagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->tagName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCustomCallTaggingResponseBodyDataListCallTagList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline ListCustomCallTaggingResponseBodyDataListCallTagList& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
