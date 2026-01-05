// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
    };
    GetListenerAttributeRequest() = default ;
    GetListenerAttributeRequest(const GetListenerAttributeRequest &) = default ;
    GetListenerAttributeRequest(GetListenerAttributeRequest &&) = default ;
    GetListenerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeRequest() = default ;
    GetListenerAttributeRequest& operator=(const GetListenerAttributeRequest &) = default ;
    GetListenerAttributeRequest& operator=(GetListenerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listenerId_ == nullptr; };
    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline GetListenerAttributeRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


  protected:
    // The listener ID.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
