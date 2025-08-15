// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRUNSREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRUNSREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListJobRunsRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobRunsRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobRunsRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListJobRunsRequestTags() = default ;
    ListJobRunsRequestTags(const ListJobRunsRequestTags &) = default ;
    ListJobRunsRequestTags(ListJobRunsRequestTags &&) = default ;
    ListJobRunsRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobRunsRequestTags() = default ;
    ListJobRunsRequestTags& operator=(const ListJobRunsRequestTags &) = default ;
    ListJobRunsRequestTags& operator=(ListJobRunsRequestTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListJobRunsRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListJobRunsRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of tag N.
    std::shared_ptr<string> key_ = nullptr;
    // The value of tag N.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
