// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCPREFIXLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCPREFIXLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpcPrefixListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcPrefixListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcPrefixListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyVpcPrefixListResponseBody() = default ;
    ModifyVpcPrefixListResponseBody(const ModifyVpcPrefixListResponseBody &) = default ;
    ModifyVpcPrefixListResponseBody(ModifyVpcPrefixListResponseBody &&) = default ;
    ModifyVpcPrefixListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcPrefixListResponseBody() = default ;
    ModifyVpcPrefixListResponseBody& operator=(const ModifyVpcPrefixListResponseBody &) = default ;
    ModifyVpcPrefixListResponseBody& operator=(ModifyVpcPrefixListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->prefixListId_ != nullptr
        && this->requestId_ != nullptr; };
    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string prefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline ModifyVpcPrefixListResponseBody& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyVpcPrefixListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the prefix list.
    std::shared_ptr<string> prefixListId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
