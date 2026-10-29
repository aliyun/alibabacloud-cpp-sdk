// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SDNSGETRULECATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SDNSGETRULECATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class SdnsGetRuleCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SdnsGetRuleCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, SdnsGetRuleCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    SdnsGetRuleCategoryRequest() = default ;
    SdnsGetRuleCategoryRequest(const SdnsGetRuleCategoryRequest &) = default ;
    SdnsGetRuleCategoryRequest(SdnsGetRuleCategoryRequest &&) = default ;
    SdnsGetRuleCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SdnsGetRuleCategoryRequest() = default ;
    SdnsGetRuleCategoryRequest& operator=(const SdnsGetRuleCategoryRequest &) = default ;
    SdnsGetRuleCategoryRequest& operator=(SdnsGetRuleCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SdnsGetRuleCategoryRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
