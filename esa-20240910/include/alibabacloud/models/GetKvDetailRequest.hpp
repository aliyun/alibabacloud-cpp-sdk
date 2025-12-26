// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKVDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKVDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetKvDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKvDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, GetKvDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    GetKvDetailRequest() = default ;
    GetKvDetailRequest(const GetKvDetailRequest &) = default ;
    GetKvDetailRequest(GetKvDetailRequest &&) = default ;
    GetKvDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKvDetailRequest() = default ;
    GetKvDetailRequest& operator=(const GetKvDetailRequest &) = default ;
    GetKvDetailRequest& operator=(GetKvDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->namespace_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetKvDetailRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetKvDetailRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
