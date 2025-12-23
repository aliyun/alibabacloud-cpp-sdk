// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUERYPROCESSORNERSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTQUERYPROCESSORNERSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListQueryProcessorNersResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueryProcessorNersResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueryProcessorNersResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
    };
    ListQueryProcessorNersResponseBodyResult() = default ;
    ListQueryProcessorNersResponseBodyResult(const ListQueryProcessorNersResponseBodyResult &) = default ;
    ListQueryProcessorNersResponseBodyResult(ListQueryProcessorNersResponseBodyResult &&) = default ;
    ListQueryProcessorNersResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueryProcessorNersResponseBodyResult() = default ;
    ListQueryProcessorNersResponseBodyResult& operator=(const ListQueryProcessorNersResponseBodyResult &) = default ;
    ListQueryProcessorNersResponseBodyResult& operator=(ListQueryProcessorNersResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->order_ == nullptr && return this->priority_ == nullptr && return this->tag_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListQueryProcessorNersResponseBodyResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline ListQueryProcessorNersResponseBodyResult& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ListQueryProcessorNersResponseBodyResult& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListQueryProcessorNersResponseBodyResult& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The name of the entity type.
    std::shared_ptr<string> label_ = nullptr;
    // The priority of an entity type among entity types that have the same priority level. A smaller value indicates a higher priority. Default value: 0.
    std::shared_ptr<int32_t> order_ = nullptr;
    // The priority level of the entity type. Valid values:
    // 
    // *   HIGH
    // *   MIDDLE
    // *   LOW
    std::shared_ptr<string> priority_ = nullptr;
    // The internal name of the entity type.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
