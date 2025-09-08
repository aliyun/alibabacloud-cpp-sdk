// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DeleteIngressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIngressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IngressId, ingressId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIngressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IngressId, ingressId_);
    };
    DeleteIngressRequest() = default ;
    DeleteIngressRequest(const DeleteIngressRequest &) = default ;
    DeleteIngressRequest(DeleteIngressRequest &&) = default ;
    DeleteIngressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIngressRequest() = default ;
    DeleteIngressRequest& operator=(const DeleteIngressRequest &) = default ;
    DeleteIngressRequest& operator=(DeleteIngressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ingressId_ != nullptr; };
    // ingressId Field Functions 
    bool hasIngressId() const { return this->ingressId_ != nullptr;};
    void deleteIngressId() { this->ingressId_ = nullptr;};
    inline int64_t ingressId() const { DARABONBA_PTR_GET_DEFAULT(ingressId_, 0L) };
    inline DeleteIngressRequest& setIngressId(int64_t ingressId) { DARABONBA_PTR_SET_VALUE(ingressId_, ingressId) };


  protected:
    // The ID of the routing rule that you want to delete. You can call the [ListIngresses](https://help.aliyun.com/document_detail/153934.html) operation to obtain the ID of a routing rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ingressId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
