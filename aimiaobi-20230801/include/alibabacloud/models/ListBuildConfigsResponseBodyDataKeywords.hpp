// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUILDCONFIGSRESPONSEBODYDATAKEYWORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTBUILDCONFIGSRESPONSEBODYDATAKEYWORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListBuildConfigsResponseBodyDataKeywords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBuildConfigsResponseBodyDataKeywords& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ListBuildConfigsResponseBodyDataKeywords& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    ListBuildConfigsResponseBodyDataKeywords() = default ;
    ListBuildConfigsResponseBodyDataKeywords(const ListBuildConfigsResponseBodyDataKeywords &) = default ;
    ListBuildConfigsResponseBodyDataKeywords(ListBuildConfigsResponseBodyDataKeywords &&) = default ;
    ListBuildConfigsResponseBodyDataKeywords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBuildConfigsResponseBodyDataKeywords() = default ;
    ListBuildConfigsResponseBodyDataKeywords& operator=(const ListBuildConfigsResponseBodyDataKeywords &) = default ;
    ListBuildConfigsResponseBodyDataKeywords& operator=(ListBuildConfigsResponseBodyDataKeywords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->key_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListBuildConfigsResponseBodyDataKeywords& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListBuildConfigsResponseBodyDataKeywords& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
