// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCustomAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetCustomAttributeRequest() = default ;
    GetCustomAttributeRequest(const GetCustomAttributeRequest &) = default ;
    GetCustomAttributeRequest(GetCustomAttributeRequest &&) = default ;
    GetCustomAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomAttributeRequest() = default ;
    GetCustomAttributeRequest& operator=(const GetCustomAttributeRequest &) = default ;
    GetCustomAttributeRequest& operator=(GetCustomAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetCustomAttributeRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The custom attribute ID. The ID must match the regular expression `^custom-attribute:[A-Za-z][A-Za-z0-9_]{0,98}$`. The part after \\"custom-attribute:\\" must be less than 100 characters long.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
