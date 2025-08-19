// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALECLUSTERREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_SCALECLUSTERREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ScaleClusterRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleClusterRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleClusterRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
    };
    ScaleClusterRequestTags() = default ;
    ScaleClusterRequestTags(const ScaleClusterRequestTags &) = default ;
    ScaleClusterRequestTags(ScaleClusterRequestTags &&) = default ;
    ScaleClusterRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleClusterRequestTags() = default ;
    ScaleClusterRequestTags& operator=(const ScaleClusterRequestTags &) = default ;
    ScaleClusterRequestTags& operator=(ScaleClusterRequestTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ScaleClusterRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
