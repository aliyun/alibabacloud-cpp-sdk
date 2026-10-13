// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSIPTRUNKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSIPTRUNKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListSipTrunksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSipTrunksRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ListSipTrunksRequest& obj) { 
      (void)j; (void)obj; 
    };
    ListSipTrunksRequest() = default ;
    ListSipTrunksRequest(const ListSipTrunksRequest &) = default ;
    ListSipTrunksRequest(ListSipTrunksRequest &&) = default ;
    ListSipTrunksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSipTrunksRequest() = default ;
    ListSipTrunksRequest& operator=(const ListSipTrunksRequest &) = default ;
    ListSipTrunksRequest& operator=(ListSipTrunksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
