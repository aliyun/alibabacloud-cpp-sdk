// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KEY_HPP_
#define ALIBABACLOUD_MODELS_KEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class Key : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Key& obj) { 
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
      DARABONBA_PTR_TO_JSON(suffix, suffix_);
    };
    friend void from_json(const Darabonba::Json& j, Key& obj) { 
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(suffix, suffix_);
    };
    Key() = default ;
    Key(const Key &) = default ;
    Key(Key &&) = default ;
    Key(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Key() = default ;
    Key& operator=(const Key &) = default ;
    Key& operator=(Key &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->prefix_ != nullptr
        && this->suffix_ != nullptr; };
    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline Key& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // suffix Field Functions 
    bool hasSuffix() const { return this->suffix_ != nullptr;};
    void deleteSuffix() { this->suffix_ = nullptr;};
    inline string suffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
    inline Key& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


  protected:
    std::shared_ptr<string> prefix_ = nullptr;
    std::shared_ptr<string> suffix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
