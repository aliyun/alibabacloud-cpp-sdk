// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPWEBAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPWEBAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class StopWebApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopWebApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, StopWebApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    StopWebApplicationRequest() = default ;
    StopWebApplicationRequest(const StopWebApplicationRequest &) = default ;
    StopWebApplicationRequest(StopWebApplicationRequest &&) = default ;
    StopWebApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopWebApplicationRequest() = default ;
    StopWebApplicationRequest& operator=(const StopWebApplicationRequest &) = default ;
    StopWebApplicationRequest& operator=(StopWebApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline StopWebApplicationRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The namespace ID.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
