// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODYDATATAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODYDATATAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListRegionsResponseBodyDataTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegionsResponseBodyDataTags& obj) { 
      DARABONBA_PTR_TO_JSON(tagCode, tagCode_);
      DARABONBA_ANY_TO_JSON(tagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegionsResponseBodyDataTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tagCode, tagCode_);
      DARABONBA_ANY_FROM_JSON(tagValue, tagValue_);
    };
    ListRegionsResponseBodyDataTags() = default ;
    ListRegionsResponseBodyDataTags(const ListRegionsResponseBodyDataTags &) = default ;
    ListRegionsResponseBodyDataTags(ListRegionsResponseBodyDataTags &&) = default ;
    ListRegionsResponseBodyDataTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegionsResponseBodyDataTags() = default ;
    ListRegionsResponseBodyDataTags& operator=(const ListRegionsResponseBodyDataTags &) = default ;
    ListRegionsResponseBodyDataTags& operator=(ListRegionsResponseBodyDataTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagCode_ == nullptr
        && return this->tagValue_ == nullptr; };
    // tagCode Field Functions 
    bool hasTagCode() const { return this->tagCode_ != nullptr;};
    void deleteTagCode() { this->tagCode_ = nullptr;};
    inline string tagCode() const { DARABONBA_PTR_GET_DEFAULT(tagCode_, "") };
    inline ListRegionsResponseBodyDataTags& setTagCode(string tagCode) { DARABONBA_PTR_SET_VALUE(tagCode_, tagCode) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline     const Darabonba::Json & tagValue() const { DARABONBA_GET(tagValue_) };
    Darabonba::Json & tagValue() { DARABONBA_GET(tagValue_) };
    inline ListRegionsResponseBodyDataTags& setTagValue(const Darabonba::Json & tagValue) { DARABONBA_SET_VALUE(tagValue_, tagValue) };
    inline ListRegionsResponseBodyDataTags& setTagValue(Darabonba::Json & tagValue) { DARABONBA_SET_RVALUE(tagValue_, tagValue) };


  protected:
    // The tag code.
    std::shared_ptr<string> tagCode_ = nullptr;
    // The tag value.
    Darabonba::Json tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
