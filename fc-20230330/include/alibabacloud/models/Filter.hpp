// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTER_HPP_
#define ALIBABACLOUD_MODELS_FILTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Key.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class Filter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Filter& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
    };
    friend void from_json(const Darabonba::Json& j, Filter& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
    };
    Filter() = default ;
    Filter(const Filter &) = default ;
    Filter(Filter &&) = default ;
    Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Filter() = default ;
    Filter& operator=(const Filter &) = default ;
    Filter& operator=(Filter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const Key & getKey() const { DARABONBA_PTR_GET_CONST(key_, Key) };
    inline Key getKey() { DARABONBA_PTR_GET(key_, Key) };
    inline Filter& setKey(const Key & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline Filter& setKey(Key && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


  protected:
    shared_ptr<Key> key_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
